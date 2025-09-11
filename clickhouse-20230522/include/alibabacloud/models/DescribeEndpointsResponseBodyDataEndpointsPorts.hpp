// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODYDATAENDPOINTSPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTSRESPONSEBODYDATAENDPOINTSPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeEndpointsResponseBodyDataEndpointsPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndpointsResponseBodyDataEndpointsPorts& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndpointsResponseBodyDataEndpointsPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeEndpointsResponseBodyDataEndpointsPorts() = default ;
    DescribeEndpointsResponseBodyDataEndpointsPorts(const DescribeEndpointsResponseBodyDataEndpointsPorts &) = default ;
    DescribeEndpointsResponseBodyDataEndpointsPorts(DescribeEndpointsResponseBodyDataEndpointsPorts &&) = default ;
    DescribeEndpointsResponseBodyDataEndpointsPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndpointsResponseBodyDataEndpointsPorts() = default ;
    DescribeEndpointsResponseBodyDataEndpointsPorts& operator=(const DescribeEndpointsResponseBodyDataEndpointsPorts &) = default ;
    DescribeEndpointsResponseBodyDataEndpointsPorts& operator=(DescribeEndpointsResponseBodyDataEndpointsPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->protocol_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeEndpointsResponseBodyDataEndpointsPorts& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeEndpointsResponseBodyDataEndpointsPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The port used to connect to the cluster. Valid values:
    // 
    // *   8123: This value is returned when the value of Protocol is HttpPort.
    // *   8443: This value is returned when the value of Protocol is HttpsPort.
    // *   9000: This value is returned when the value of Protocol is TcpPort.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   HttpPort
    // *   HttpsPort
    // *   TcpPort
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
