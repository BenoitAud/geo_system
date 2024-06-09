# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tcp_tunnel:srv/RemoveTopic.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RemoveTopic_Request(type):
    """Metaclass of message 'RemoveTopic_Request'."""

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
            module = import_type_support('tcp_tunnel')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tcp_tunnel.srv.RemoveTopic_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__remove_topic__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__remove_topic__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__remove_topic__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__remove_topic__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__remove_topic__request

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RemoveTopic_Request(metaclass=Metaclass_RemoveTopic_Request):
    """Message class 'RemoveTopic_Request'."""

    __slots__ = [
        '_topic',
    ]

    _fields_and_field_types = {
        'topic': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.topic = kwargs.get('topic', String())

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
        if self.topic != other.topic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def topic(self):
        """Message field 'topic'."""
        return self._topic

    @topic.setter
    def topic(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'topic' field must be a sub message of type 'String'"
        self._topic = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RemoveTopic_Response(type):
    """Metaclass of message 'RemoveTopic_Response'."""

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
            module = import_type_support('tcp_tunnel')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tcp_tunnel.srv.RemoveTopic_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__remove_topic__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__remove_topic__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__remove_topic__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__remove_topic__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__remove_topic__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RemoveTopic_Response(metaclass=Metaclass_RemoveTopic_Response):
    """Message class 'RemoveTopic_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_RemoveTopic(type):
    """Metaclass of service 'RemoveTopic'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tcp_tunnel')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tcp_tunnel.srv.RemoveTopic')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__remove_topic

            from tcp_tunnel.srv import _remove_topic
            if _remove_topic.Metaclass_RemoveTopic_Request._TYPE_SUPPORT is None:
                _remove_topic.Metaclass_RemoveTopic_Request.__import_type_support__()
            if _remove_topic.Metaclass_RemoveTopic_Response._TYPE_SUPPORT is None:
                _remove_topic.Metaclass_RemoveTopic_Response.__import_type_support__()


class RemoveTopic(metaclass=Metaclass_RemoveTopic):
    from tcp_tunnel.srv._remove_topic import RemoveTopic_Request as Request
    from tcp_tunnel.srv._remove_topic import RemoveTopic_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')