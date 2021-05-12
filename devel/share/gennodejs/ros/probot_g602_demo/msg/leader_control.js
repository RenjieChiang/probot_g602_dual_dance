// Auto-generated. Do not edit!

// (in-package probot_g602_demo.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class leader_control {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.ready2next = null;
      this.dance_group_number = null;
    }
    else {
      if (initObj.hasOwnProperty('ready2next')) {
        this.ready2next = initObj.ready2next
      }
      else {
        this.ready2next = false;
      }
      if (initObj.hasOwnProperty('dance_group_number')) {
        this.dance_group_number = initObj.dance_group_number
      }
      else {
        this.dance_group_number = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type leader_control
    // Serialize message field [ready2next]
    bufferOffset = _serializer.bool(obj.ready2next, buffer, bufferOffset);
    // Serialize message field [dance_group_number]
    bufferOffset = _serializer.uint8(obj.dance_group_number, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type leader_control
    let len;
    let data = new leader_control(null);
    // Deserialize message field [ready2next]
    data.ready2next = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [dance_group_number]
    data.dance_group_number = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a message object
    return 'probot_g602_demo/leader_control';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '8d093b10ec6105b43f38045b407beccb';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool ready2next
    uint8 dance_group_number
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new leader_control(null);
    if (msg.ready2next !== undefined) {
      resolved.ready2next = msg.ready2next;
    }
    else {
      resolved.ready2next = false
    }

    if (msg.dance_group_number !== undefined) {
      resolved.dance_group_number = msg.dance_group_number;
    }
    else {
      resolved.dance_group_number = 0
    }

    return resolved;
    }
};

module.exports = leader_control;
