// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUESTCONNECTIONTRACKINGCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUESTCONNECTIONTRACKINGCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(TcpClosedAndTimeWaitTimeout, tcpClosedAndTimeWaitTimeout_);
      DARABONBA_PTR_TO_JSON(TcpEstablishedTimeout, tcpEstablishedTimeout_);
      DARABONBA_PTR_TO_JSON(UdpTimeout, udpTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(TcpClosedAndTimeWaitTimeout, tcpClosedAndTimeWaitTimeout_);
      DARABONBA_PTR_FROM_JSON(TcpEstablishedTimeout, tcpEstablishedTimeout_);
      DARABONBA_PTR_FROM_JSON(UdpTimeout, udpTimeout_);
    };
    ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration() = default ;
    ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration(const ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration &) = default ;
    ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration(ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration &&) = default ;
    ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration() = default ;
    ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& operator=(const ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration &) = default ;
    ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& operator=(ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tcpClosedAndTimeWaitTimeout_ != nullptr
        && this->tcpEstablishedTimeout_ != nullptr && this->udpTimeout_ != nullptr; };
    // tcpClosedAndTimeWaitTimeout Field Functions 
    bool hasTcpClosedAndTimeWaitTimeout() const { return this->tcpClosedAndTimeWaitTimeout_ != nullptr;};
    void deleteTcpClosedAndTimeWaitTimeout() { this->tcpClosedAndTimeWaitTimeout_ = nullptr;};
    inline int32_t tcpClosedAndTimeWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpClosedAndTimeWaitTimeout_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& setTcpClosedAndTimeWaitTimeout(int32_t tcpClosedAndTimeWaitTimeout) { DARABONBA_PTR_SET_VALUE(tcpClosedAndTimeWaitTimeout_, tcpClosedAndTimeWaitTimeout) };


    // tcpEstablishedTimeout Field Functions 
    bool hasTcpEstablishedTimeout() const { return this->tcpEstablishedTimeout_ != nullptr;};
    void deleteTcpEstablishedTimeout() { this->tcpEstablishedTimeout_ = nullptr;};
    inline int32_t tcpEstablishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpEstablishedTimeout_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& setTcpEstablishedTimeout(int32_t tcpEstablishedTimeout) { DARABONBA_PTR_SET_VALUE(tcpEstablishedTimeout_, tcpEstablishedTimeout) };


    // udpTimeout Field Functions 
    bool hasUdpTimeout() const { return this->udpTimeout_ != nullptr;};
    void deleteUdpTimeout() { this->udpTimeout_ = nullptr;};
    inline int32_t udpTimeout() const { DARABONBA_PTR_GET_DEFAULT(udpTimeout_, 0) };
    inline ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration& setUdpTimeout(int32_t udpTimeout) { DARABONBA_PTR_SET_VALUE(udpTimeout_, udpTimeout) };


  protected:
    // The timeout period for TCP connections in the TIME_WAIT or CLOSE_WAIT state. Unit: seconds. Valid values: integers from 3 to 15.
    // 
    // Default value: 3.
    // 
    // >  If the associated ECS instance is used together with a Network Load Balancer (NLB) or Classic Load Balancer (CLB) instance, the default timeout period for TCP connections in the `TIME_WAIT` state is 15 seconds.
    std::shared_ptr<int32_t> tcpClosedAndTimeWaitTimeout_ = nullptr;
    // The timeout period for TCP connections in the ESTABLISHED state. Unit: seconds. Valid values: 30, 60, 80, 100, 200, 300, 500, 700, and 910.
    // 
    // Default value: 910.
    std::shared_ptr<int32_t> tcpEstablishedTimeout_ = nullptr;
    // The timeout period for UDP flows. Unit: seconds. Valid values: 10, 20, 30, 60, 80, and 100.
    // 
    // Default value: 30.
    // 
    // >  If the associated ECS instance is used together with an NLB or CLB instance, the default timeout period for UDP flows is 100 seconds.
    std::shared_ptr<int32_t> udpTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
