close all; clc

dt = 0.001;
PopSize = 25;
MaxGenerations = 50;
s = tf('s');
Tl = [.03 .01 .04 .02 .01];

options = optimoptions(@ga,'PopulationSize',PopSize,...
          'MaxGenerations',MaxGenerations,'OutputFcn',@myfun);
[x,fval] = ga(@(K)motor_func(dt,K),3,-eye(3),zeros(3,1)...
              ,[],[],[],[],[],options);