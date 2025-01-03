# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/ShapeInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ShapeInfo(type):
    """Metaclass of message 'ShapeInfo'."""

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
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.msg.ShapeInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__shape_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__shape_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__shape_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__shape_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__shape_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ShapeInfo(metaclass=Metaclass_ShapeInfo):
    """Message class 'ShapeInfo'."""

    __slots__ = [
        '_sides',
        '_angle_sum',
    ]

    _fields_and_field_types = {
        'sides': 'int16',
        'angle_sum': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sides = kwargs.get('sides', int())
        self.angle_sum = kwargs.get('angle_sum', int())

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
        if self.sides != other.sides:
            return False
        if self.angle_sum != other.angle_sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sides(self):
        """Message field 'sides'."""
        return self._sides

    @sides.setter
    def sides(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sides' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'sides' field must be an integer in [-32768, 32767]"
        self._sides = value

    @property
    def angle_sum(self):
        """Message field 'angle_sum'."""
        return self._angle_sum

    @angle_sum.setter
    def angle_sum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angle_sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'angle_sum' field must be an integer in [-2147483648, 2147483647]"
        self._angle_sum = value