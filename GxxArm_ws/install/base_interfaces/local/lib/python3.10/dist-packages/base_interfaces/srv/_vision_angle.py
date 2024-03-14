# generated from rosidl_generator_py/resource/_idl.py.em
# with input from base_interfaces:srv/VisionAngle.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisionAngle_Request(type):
    """Metaclass of message 'VisionAngle_Request'."""

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
                'base_interfaces.srv.VisionAngle_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vision_angle__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vision_angle__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vision_angle__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vision_angle__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vision_angle__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionAngle_Request(metaclass=Metaclass_VisionAngle_Request):
    """Message class 'VisionAngle_Request'."""

    __slots__ = [
        '_target_arm_angle1',
        '_target_arm_angle2',
        '_target_arm_angle3',
        '_target_arm_angle4',
        '_target_arm_angle5',
        '_target_arm_angle6',
    ]

    _fields_and_field_types = {
        'target_arm_angle1': 'double',
        'target_arm_angle2': 'double',
        'target_arm_angle3': 'double',
        'target_arm_angle4': 'double',
        'target_arm_angle5': 'double',
        'target_arm_angle6': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_arm_angle1 = kwargs.get('target_arm_angle1', float())
        self.target_arm_angle2 = kwargs.get('target_arm_angle2', float())
        self.target_arm_angle3 = kwargs.get('target_arm_angle3', float())
        self.target_arm_angle4 = kwargs.get('target_arm_angle4', float())
        self.target_arm_angle5 = kwargs.get('target_arm_angle5', float())
        self.target_arm_angle6 = kwargs.get('target_arm_angle6', float())

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
        if self.target_arm_angle1 != other.target_arm_angle1:
            return False
        if self.target_arm_angle2 != other.target_arm_angle2:
            return False
        if self.target_arm_angle3 != other.target_arm_angle3:
            return False
        if self.target_arm_angle4 != other.target_arm_angle4:
            return False
        if self.target_arm_angle5 != other.target_arm_angle5:
            return False
        if self.target_arm_angle6 != other.target_arm_angle6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_arm_angle1(self):
        """Message field 'target_arm_angle1'."""
        return self._target_arm_angle1

    @target_arm_angle1.setter
    def target_arm_angle1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_arm_angle1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_arm_angle1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_arm_angle1 = value

    @builtins.property
    def target_arm_angle2(self):
        """Message field 'target_arm_angle2'."""
        return self._target_arm_angle2

    @target_arm_angle2.setter
    def target_arm_angle2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_arm_angle2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_arm_angle2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_arm_angle2 = value

    @builtins.property
    def target_arm_angle3(self):
        """Message field 'target_arm_angle3'."""
        return self._target_arm_angle3

    @target_arm_angle3.setter
    def target_arm_angle3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_arm_angle3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_arm_angle3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_arm_angle3 = value

    @builtins.property
    def target_arm_angle4(self):
        """Message field 'target_arm_angle4'."""
        return self._target_arm_angle4

    @target_arm_angle4.setter
    def target_arm_angle4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_arm_angle4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_arm_angle4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_arm_angle4 = value

    @builtins.property
    def target_arm_angle5(self):
        """Message field 'target_arm_angle5'."""
        return self._target_arm_angle5

    @target_arm_angle5.setter
    def target_arm_angle5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_arm_angle5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_arm_angle5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_arm_angle5 = value

    @builtins.property
    def target_arm_angle6(self):
        """Message field 'target_arm_angle6'."""
        return self._target_arm_angle6

    @target_arm_angle6.setter
    def target_arm_angle6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_arm_angle6' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_arm_angle6' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_arm_angle6 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_VisionAngle_Response(type):
    """Metaclass of message 'VisionAngle_Response'."""

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
                'base_interfaces.srv.VisionAngle_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__vision_angle__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__vision_angle__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__vision_angle__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__vision_angle__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__vision_angle__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VisionAngle_Response(metaclass=Metaclass_VisionAngle_Response):
    """Message class 'VisionAngle_Response'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
        '_roll',
        '_pit',
        '_yaw',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'roll': 'double',
        'pit': 'double',
        'yaw': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.roll = kwargs.get('roll', float())
        self.pit = kwargs.get('pit', float())
        self.yaw = kwargs.get('yaw', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.roll != other.roll:
            return False
        if self.pit != other.pit:
            return False
        if self.yaw != other.yaw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def pit(self):
        """Message field 'pit'."""
        return self._pit

    @pit.setter
    def pit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pit' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pit' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pit = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value


class Metaclass_VisionAngle(type):
    """Metaclass of service 'VisionAngle'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('base_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'base_interfaces.srv.VisionAngle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__vision_angle

            from base_interfaces.srv import _vision_angle
            if _vision_angle.Metaclass_VisionAngle_Request._TYPE_SUPPORT is None:
                _vision_angle.Metaclass_VisionAngle_Request.__import_type_support__()
            if _vision_angle.Metaclass_VisionAngle_Response._TYPE_SUPPORT is None:
                _vision_angle.Metaclass_VisionAngle_Response.__import_type_support__()


class VisionAngle(metaclass=Metaclass_VisionAngle):
    from base_interfaces.srv._vision_angle import VisionAngle_Request as Request
    from base_interfaces.srv._vision_angle import VisionAngle_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
