%function J = motor_func(dt, parms)
parms = -eye(3);
dt = 0.001;
s = tf('s');
K = parms(1) + parms(2)/s + parms(3)*s/(1 + 0.001*s);

R = 2.0;                % Ohms
L = 0.5;                % Henrys
Km = 0.1;               % torque constant
Kb = 0.1;               % back emf constant
Kf = 0.2;               % Nms
J = 0.02;               % kg.m^2/s^2

h1 = tf(Km,[L R]);            % armature
h2 = tf(1,[J Kf]);            % eqn of motion

dcm = ss(h2) * [h1 , 1];      % w = h2 * (h1*Va + Td)
dcm = feedback(dcm,Kb,1,1);   % close back emf loop

cl_rloc = feedback(dcm * append(K,1),1,1,1);
t = 0:dt:20;
Td = -0.1 * (t>5 & t<10);       % load disturbance
u = [ones(size(t)) ; Td]; 
lsimplot(cl_rloc,u,t);

[y,t] = lsim(cl_rloc,u,t);

q = lsim(K,1-y,t);

Q = 1;
R = .001;
J = dt*sum(Q*(1-y(:)).^2 + R*q(:).^2);

lsimplot(cl_rloc,u,t);