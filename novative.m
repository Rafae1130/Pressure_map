
a=arduino('com3','Uno');
close all
while(1)
    values(1)=readVoltage(a,'A5');
    values(3)=readVoltage(a,'A4');
    values(4)=readVoltage(a,'A3');
    values(6)=readVoltage(a,'A2');
    values(7)=readVoltage(a,'A1');
    values(8)=readVoltage(a,'A0');
    
    values(2)=(values(1)+values(3))/2;
    values(5)=(values(4)+values(6))/2;
    x=[2,3,4,3.8,3.7,3,3.25,3];
    y=[8,9,7.7,5.5,3,2,4.5,7];
    
    x=[2,3,4,3.8,3,3.7,3.7,3];
    y=[8,9,7.7,5.5,7,5.5,3,2];
    
    [xx,yy]=meshgrid(0:0.25:10,0:0.25:10);
    vv=griddata(x,y,values,xx,yy,'linear');
    mesh(xx,yy,vv);
    surf(xx,yy,vv);
    colormap('jet(256)')
    colorbar 
    caxis([0 2])
    shading interp
    view(2)
 
%    plot3(x,y,values,'ro');
    
 %    xlim([0,6])
%     ylim([0,10])
 %   zlim([5,15])
end