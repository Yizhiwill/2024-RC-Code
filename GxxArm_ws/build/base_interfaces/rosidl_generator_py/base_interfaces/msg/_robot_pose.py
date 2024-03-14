# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces:msg/RobotPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotPose(type):
    """Metaclass of message 'RobotPose'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.msg.RobotPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_pose

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotPose(metaclass=Metaclass_RobotPose):
    """Message class 'RobotPose'."""

    __slots__ = [
        '_temp_arm_angle1',
        '_temp_arm_angle2',
        '_temp_arm_angle3',
        '_temp_arm_angle4',
        '_temp_arm_angle5',
        '_temp_arm_angle6',
    ]

    _fields_and_field_types = {
        'temp_arm_angle1': 'float',
        'temp_arm_angle2': 'float',
        'temp_arm_angle3': 'float',
        'temp_arm_angle4': 'float',
        'temp_arm_angle5': 'float',
        'temp_arm_angle6': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.temp_arm_angle1 = kwargs.get('temp_arm_angle1', float())
        self.temp_arm_angle2 = kwargs.get('temp_arm_angle2', float())
        self.temp_arm_angle3 = kwargs.get('temp_arm_angle3', float())
        self.temp_arm_angle4 = kwargs.get('temp_arm_angle4', float())
        self.temp_arm_angle5 = kwargs.get('temp_arm_angle5', float())
        self.temp_arm_angle6 = kwargs.get('temp_arm_angle6', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.temp_arm_angle1 != other.temp_arm_angle1:
            return False
        if self.temp_arm_angle2 != other.temp_arm_angle2:
            return False
        if self.temp_arm_angle3 != other.temp_arm_angle3:
            return False
        if self.temp_arm_angle4 != other.temp_arm_angle4:
            return False
        if self.temp_arm_angle5 != other.temp_arm_angle5:
            return False
        if self.temp_arm_angle6 != other.temp_arm_angle6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def temp_arm_angle1(self):
        """Message field 'temp_arm_angle1'."""
        return self._temp_arm_angle1

    @temp_arm_angle1.setter
    def temp_arm_angle1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_arm_angle1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_arm_angle1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_arm_angle1 = value

    @builtins.property
    def temp_arm_angle2(self):
        """Message field 'temp_arm_angle2'."""
        return self._temp_arm_angle2

    @temp_arm_angle2.setter
    def temp_arm_angle2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_arm_angle2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_arm_angle2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_arm_angle2 = value

    @builtins.property
    def temp_arm_angle3(self):
        """Message field 'temp_arm_angle3'."""
        return self._temp_arm_angle3

    @temp_arm_angle3.setter
    def temp_arm_angle3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_arm_angle3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_arm_angle3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_arm_angle3 = value

    @builtins.property
    def temp_arm_angle4(self):
        """Message field 'temp_arm_angle4'."""
        return self._temp_arm_angle4

    @temp_arm_angle4.setter
    def temp_arm_angle4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_arm_angle4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_arm_angle4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_arm_angle4 = value

    @builtins.property
    def temp_arm_angle5(self):
        """Message field 'temp_arm_angle5'."""
        return self._temp_arm_angle5

    @temp_arm_angle5.setter
    def temp_arm_angle5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_arm_angle5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_arm_angle5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_arm_angle5 = value

    @builtins.property
    def temp_arm_angle6(self):
        """Message field 'temp_arm_angle6'."""
        return self._temp_arm_angle6

    @temp_arm_angle6.setter
    def temp_arm_angle6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temp_arm_angle6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temp_arm_angle6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temp_arm_angle6 = value
