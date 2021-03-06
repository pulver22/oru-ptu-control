/* Auto-generated by genmsg_cpp for file
 * /home/administrator/ros/amtec/srv/GetStatus.srv */
#ifndef AMTEC_SERVICE_GETSTATUS_H
#define AMTEC_SERVICE_GETSTATUS_H
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/serialization.h"
#include "ros/time.h"
#include <map>
#include <ostream>
#include <string>
#include <vector>

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

namespace amtec {
template <class ContainerAllocator> struct GetStatusRequest_ {
  typedef GetStatusRequest_<ContainerAllocator> Type;

  GetStatusRequest_() {}

  GetStatusRequest_(const ContainerAllocator &_alloc) {}

  typedef boost::shared_ptr<amtec::GetStatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr<
      ::amtec::GetStatusRequest_<ContainerAllocator> const>
      ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetStatusRequest
typedef ::amtec::GetStatusRequest_<std::allocator<void> > GetStatusRequest;

typedef boost::shared_ptr<amtec::GetStatusRequest> GetStatusRequestPtr;
typedef boost::shared_ptr<amtec::GetStatusRequest const>
    GetStatusRequestConstPtr;

template <class ContainerAllocator> struct GetStatusResponse_ {
  typedef GetStatusResponse_<ContainerAllocator> Type;

  GetStatusResponse_()
      : position_pan(0.0), position_tilt(0.0), velocity_pan(0.0),
        velocity_tilt(0.0) {}

  GetStatusResponse_(const ContainerAllocator &_alloc)
      : position_pan(0.0), position_tilt(0.0), velocity_pan(0.0),
        velocity_tilt(0.0) {}

  typedef double _position_pan_type;
  double position_pan;

  typedef double _position_tilt_type;
  double position_tilt;

  typedef double _velocity_pan_type;
  double velocity_pan;

  typedef double _velocity_tilt_type;
  double velocity_tilt;

  typedef boost::shared_ptr<amtec::GetStatusResponse_<ContainerAllocator> >
      Ptr;
  typedef boost::shared_ptr<
      ::amtec::GetStatusResponse_<ContainerAllocator> const>
      ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetStatusResponse
typedef ::amtec::GetStatusResponse_<std::allocator<void> > GetStatusResponse;

typedef boost::shared_ptr<amtec::GetStatusResponse> GetStatusResponsePtr;
typedef boost::shared_ptr<amtec::GetStatusResponse const>
    GetStatusResponseConstPtr;

struct GetStatus {

  typedef GetStatusRequest Request;
  typedef GetStatusResponse Response;
  Request request;
  Response response;

  typedef Request RequestType;
  typedef Response ResponseType;
}; // struct GetStatus
} // namespace amtec

namespace ros {
namespace message_traits {
template <class ContainerAllocator>
struct IsMessage<amtec::GetStatusRequest_<ContainerAllocator> >
    : public TrueType {};
template <class ContainerAllocator>
struct IsMessage<amtec::GetStatusRequest_<ContainerAllocator> const>
    : public TrueType {};
template <class ContainerAllocator>
struct MD5Sum<amtec::GetStatusRequest_<ContainerAllocator> > {
  static const char *value() { return "d41d8cd98f00b204e9800998ecf8427e"; }

  static const char *
  value(const ::amtec::GetStatusRequest_<ContainerAllocator> &) {
    return value();
  }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template <class ContainerAllocator>
struct DataType<amtec::GetStatusRequest_<ContainerAllocator> > {
  static const char *value() { return "amtec/GetStatusRequest"; }

  static const char *
  value(const ::amtec::GetStatusRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<amtec::GetStatusRequest_<ContainerAllocator> > {
  static const char *value() {
    return "\n\
";
  }

  static const char *
  value(const ::amtec::GetStatusRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct IsFixedSize<amtec::GetStatusRequest_<ContainerAllocator> >
    : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros {
namespace message_traits {
template <class ContainerAllocator>
struct IsMessage<amtec::GetStatusResponse_<ContainerAllocator> >
    : public TrueType {};
template <class ContainerAllocator>
struct IsMessage<amtec::GetStatusResponse_<ContainerAllocator> const>
    : public TrueType {};
template <class ContainerAllocator>
struct MD5Sum<amtec::GetStatusResponse_<ContainerAllocator> > {
  static const char *value() { return "1faf4b4c83e1e50040afc67afdd423b0"; }

  static const char *
  value(const ::amtec::GetStatusResponse_<ContainerAllocator> &) {
    return value();
  }
  static const uint64_t static_value1 = 0x1faf4b4c83e1e500ULL;
  static const uint64_t static_value2 = 0x40afc67afdd423b0ULL;
};

template <class ContainerAllocator>
struct DataType<amtec::GetStatusResponse_<ContainerAllocator> > {
  static const char *value() { return "amtec/GetStatusResponse"; }

  static const char *
  value(const ::amtec::GetStatusResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct Definition<amtec::GetStatusResponse_<ContainerAllocator> > {
  static const char *value() {
    return "float64 position_pan\n\
float64 position_tilt\n\
float64 velocity_pan\n\
float64 velocity_tilt\n\
\n\
\n\
";
  }

  static const char *
  value(const ::amtec::GetStatusResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct IsFixedSize<amtec::GetStatusResponse_<ContainerAllocator> >
    : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<amtec::GetStatusRequest_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream &stream, T m) {}

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetStatusRequest_
} // namespace serialization
} // namespace ros

namespace ros {
namespace serialization {

template <class ContainerAllocator>
struct Serializer<amtec::GetStatusResponse_<ContainerAllocator> > {
  template <typename Stream, typename T>
  inline static void allInOne(Stream &stream, T m) {
    stream.next(m.position_pan);
    stream.next(m.position_tilt);
    stream.next(m.velocity_pan);
    stream.next(m.velocity_tilt);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetStatusResponse_
} // namespace serialization
} // namespace ros

namespace ros {
namespace service_traits {
template <> struct MD5Sum<amtec::GetStatus> {
  static const char *value() { return "1faf4b4c83e1e50040afc67afdd423b0"; }

  static const char *value(const amtec::GetStatus &) { return value(); }
};

template <> struct DataType<amtec::GetStatus> {
  static const char *value() { return "amtec/GetStatus"; }

  static const char *value(const amtec::GetStatus &) { return value(); }
};

template <class ContainerAllocator>
struct MD5Sum<amtec::GetStatusRequest_<ContainerAllocator> > {
  static const char *value() { return "1faf4b4c83e1e50040afc67afdd423b0"; }

  static const char *
  value(const amtec::GetStatusRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct DataType<amtec::GetStatusRequest_<ContainerAllocator> > {
  static const char *value() { return "amtec/GetStatus"; }

  static const char *
  value(const amtec::GetStatusRequest_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct MD5Sum<amtec::GetStatusResponse_<ContainerAllocator> > {
  static const char *value() { return "1faf4b4c83e1e50040afc67afdd423b0"; }

  static const char *
  value(const amtec::GetStatusResponse_<ContainerAllocator> &) {
    return value();
  }
};

template <class ContainerAllocator>
struct DataType<amtec::GetStatusResponse_<ContainerAllocator> > {
  static const char *value() { return "amtec/GetStatus"; }

  static const char *
  value(const amtec::GetStatusResponse_<ContainerAllocator> &) {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AMTEC_SERVICE_GETSTATUS_H
