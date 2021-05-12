// Auto-generated. Do not edit!

// (in-package probot_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class SetTool {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.status = null;
      this.pump_io_number = null;
      this.changer_io_number = null;
    }
    else {
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = 0;
      }
      if (initObj.hasOwnProperty('pump_io_number')) {
        this.pump_io_number = initObj.pump_io_number
      }
      else {
        this.pump_io_number = 0;
      }
      if (initObj.hasOwnProperty('changer_io_number')) {
        this.changer_io_number = initObj.changer_io_number
      }
      else {
        this.changer_io_number = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetTool
    // Serialize message field [status]
    bufferOffset = _serializer.uint8(obj.status, buffer, bufferOffset);
    // Serialize message field [pump_io_number]
    bufferOffset = _serializer.uint16(obj.pump_io_number, buffer, bufferOffset);
    // Serialize message field [changer_io_number]
    bufferOffset = _serializer.uint16(obj.changer_io_number, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetTool
    let len;
    let data = new SetTool(null);
    // Deserialize message field [status]
    data.status = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [pump_io_number]
    data.pump_io_number = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [changer_io_number]
    data.changer_io_number = _deserializer.uint16(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 5;
  }

  static datatype() {
    // Returns string type for a message object
    return 'probot_msgs/SetTool';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7f7565228b99c0ac4e365518708762e2';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 status
    uint16 pump_io_number
    uint16 changer_io_number
    
    uint8 OFF = 0
    uint8 ON  = 1
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetTool(null);
    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = 0
    }

    if (msg.pump_io_number !== undefined) {
      resolved.pump_io_number = msg.pump_io_number;
    }
    else {
      resolved.pump_io_number = 0
    }

    if (msg.changer_io_number !== undefined) {
      resolved.changer_io_number = msg.changer_io_number;
    }
    else {
      resolved.changer_io_number = 0
    }

    return resolved;
    }
};

// Constants for message
SetTool.Constants = {
  OFF: 0,
  ON: 1,
}

module.exports = SetTool;
