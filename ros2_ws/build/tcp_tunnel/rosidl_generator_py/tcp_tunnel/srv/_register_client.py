# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tcp_tunnel:srv/RegisterClient.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterClient_Request(type):
    """Metaclass of message 'RegisterClient_Request'."""

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
                'tcp_tunnel.srv.RegisterClient_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_client__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_client__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_client__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_client__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_client__request

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

            from std_msgs.msg import UInt16
            if UInt16.__class__._TYPE_SUPPORT is None:
                UInt16.__class__.__import_type_support__()

            from std_msgs.msg import UInt64
            if UInt64.__class__._TYPE_SUPPORT is None:
                UInt64.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RegisterClient_Request(metaclass=Metaclass_RegisterClient_Request):
    """Message class 'RegisterClient_Request'."""

    __slots__ = [
        '_topic',
        '_tunnel_queue_size',
        '_client_ip',
        '_client_port',
    ]

    _fields_and_field_types = {
        'topic': 'std_msgs/String',
        'tunnel_queue_size': 'std_msgs/UInt64',
        'client_ip': 'std_msgs/String',
        'client_port': 'std_msgs/UInt16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.topic = kwargs.get('topic', String())
        from std_msgs.msg import UInt64
        self.tunnel_queue_size = kwargs.get('tunnel_queue_size', UInt64())
        from std_msgs.msg import String
        self.client_ip = kwargs.get('client_ip', String())
        from std_msgs.msg import UInt16
        self.client_port = kwargs.get('client_port', UInt16())

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
        if self.tunnel_queue_size != other.tunnel_queue_size:
            return False
        if self.client_ip != other.client_ip:
            return False
        if self.client_port != other.client_port:
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

    @builtins.property
    def tunnel_queue_size(self):
        """Message field 'tunnel_queue_size'."""
        return self._tunnel_queue_size

    @tunnel_queue_size.setter
    def tunnel_queue_size(self, value):
        if __debug__:
            from std_msgs.msg import UInt64
            assert \
                isinstance(value, UInt64), \
                "The 'tunnel_queue_size' field must be a sub message of type 'UInt64'"
        self._tunnel_queue_size = value

    @builtins.property
    def client_ip(self):
        """Message field 'client_ip'."""
        return self._client_ip

    @client_ip.setter
    def client_ip(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'client_ip' field must be a sub message of type 'String'"
        self._client_ip = value

    @builtins.property
    def client_port(self):
        """Message field 'client_port'."""
        return self._client_port

    @client_port.setter
    def client_port(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'client_port' field must be a sub message of type 'UInt16'"
        self._client_port = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RegisterClient_Response(type):
    """Metaclass of message 'RegisterClient_Response'."""

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
                'tcp_tunnel.srv.RegisterClient_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__register_client__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__register_client__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__register_client__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__register_client__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__register_client__response

            from std_msgs.msg import Bool
            if Bool.__class__._TYPE_SUPPORT is None:
                Bool.__class__.__import_type_support__()

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


class RegisterClient_Response(metaclass=Metaclass_RegisterClient_Response):
    """Message class 'RegisterClient_Response'."""

    __slots__ = [
        '_topic_exists',
        '_topic_type',
        '_reliability_policy',
        '_durability_policy',
        '_liveliness_policy',
    ]

    _fields_and_field_types = {
        'topic_exists': 'std_msgs/Bool',
        'topic_type': 'std_msgs/String',
        'reliability_policy': 'std_msgs/String',
        'durability_policy': 'std_msgs/String',
        'liveliness_policy': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Bool'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Bool
        self.topic_exists = kwargs.get('topic_exists', Bool())
        from std_msgs.msg import String
        self.topic_type = kwargs.get('topic_type', String())
        from std_msgs.msg import String
        self.reliability_policy = kwargs.get('reliability_policy', String())
        from std_msgs.msg import String
        self.durability_policy = kwargs.get('durability_policy', String())
        from std_msgs.msg import String
        self.liveliness_policy = kwargs.get('liveliness_policy', String())

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
        if self.topic_exists != other.topic_exists:
            return False
        if self.topic_type != other.topic_type:
            return False
        if self.reliability_policy != other.reliability_policy:
            return False
        if self.durability_policy != other.durability_policy:
            return False
        if self.liveliness_policy != other.liveliness_policy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def topic_exists(self):
        """Message field 'topic_exists'."""
        return self._topic_exists

    @topic_exists.setter
    def topic_exists(self, value):
        if __debug__:
            from std_msgs.msg import Bool
            assert \
                isinstance(value, Bool), \
                "The 'topic_exists' field must be a sub message of type 'Bool'"
        self._topic_exists = value

    @builtins.property
    def topic_type(self):
        """Message field 'topic_type'."""
        return self._topic_type

    @topic_type.setter
    def topic_type(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'topic_type' field must be a sub message of type 'String'"
        self._topic_type = value

    @builtins.property
    def reliability_policy(self):
        """Message field 'reliability_policy'."""
        return self._reliability_policy

    @reliability_policy.setter
    def reliability_policy(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'reliability_policy' field must be a sub message of type 'String'"
        self._reliability_policy = value

    @builtins.property
    def durability_policy(self):
        """Message field 'durability_policy'."""
        return self._durability_policy

    @durability_policy.setter
    def durability_policy(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'durability_policy' field must be a sub message of type 'String'"
        self._durability_policy = value

    @builtins.property
    def liveliness_policy(self):
        """Message field 'liveliness_policy'."""
        return self._liveliness_policy

    @liveliness_policy.setter
    def liveliness_policy(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'liveliness_policy' field must be a sub message of type 'String'"
        self._liveliness_policy = value


class Metaclass_RegisterClient(type):
    """Metaclass of service 'RegisterClient'."""

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
                'tcp_tunnel.srv.RegisterClient')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__register_client

            from tcp_tunnel.srv import _register_client
            if _register_client.Metaclass_RegisterClient_Request._TYPE_SUPPORT is None:
                _register_client.Metaclass_RegisterClient_Request.__import_type_support__()
            if _register_client.Metaclass_RegisterClient_Response._TYPE_SUPPORT is None:
                _register_client.Metaclass_RegisterClient_Response.__import_type_support__()


class RegisterClient(metaclass=Metaclass_RegisterClient):
    from tcp_tunnel.srv._register_client import RegisterClient_Request as Request
    from tcp_tunnel.srv._register_client import RegisterClient_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
