function [taskInfo, numtask, isDeploymentDiagram]=slrealtime_task_info()
   taskInfo(1).samplePeriod = 0.001;
   taskInfo(1).sampleOffset = 0;
   taskInfo(1).taskPrio = 9;
   taskInfo(1).taskName = 'Task';
   taskInfo(1).entryPoints = {'TestStructure:20', 'TestStructure:19'};
   taskInfo(2).samplePeriod = 0.001;
   taskInfo(2).sampleOffset = 0;
   taskInfo(2).taskPrio = 9;
   taskInfo(2).taskName = 'Task1';
   taskInfo(2).entryPoints = {'TestStructure:39'};
   numtask = 2;
   for i = 1:numtask
      if ( 0 == isnumeric(taskInfo(i).samplePeriod) )
         taskInfo(i).samplePeriod = evalin('base', taskInfo(i).samplePeriod);
      end
      if ( isempty(taskInfo(i).taskName) )
         taskInfo(i).taskName = ['AutoGen' i ];
      end
   end
   isDeploymentDiagram = 1;
end 
