
"use strict";

let JogJoint = require('./JogJoint.js');
let InterfaceReturnCode = require('./InterfaceReturnCode.js');
let PredefinedPointList = require('./PredefinedPointList.js');
let Config = require('./Config.js');
let SFUVersionNum = require('./SFUVersionNum.js');
let JogPose = require('./JogPose.js');
let PredefinedPoint = require('./PredefinedPoint.js');
let ControllerCtrl = require('./ControllerCtrl.js');
let DemoCtrl = require('./DemoCtrl.js');
let ProbotStatus = require('./ProbotStatus.js');
let SetOutputIO = require('./SetOutputIO.js');
let SetTool = require('./SetTool.js');

module.exports = {
  JogJoint: JogJoint,
  InterfaceReturnCode: InterfaceReturnCode,
  PredefinedPointList: PredefinedPointList,
  Config: Config,
  SFUVersionNum: SFUVersionNum,
  JogPose: JogPose,
  PredefinedPoint: PredefinedPoint,
  ControllerCtrl: ControllerCtrl,
  DemoCtrl: DemoCtrl,
  ProbotStatus: ProbotStatus,
  SetOutputIO: SetOutputIO,
  SetTool: SetTool,
};
