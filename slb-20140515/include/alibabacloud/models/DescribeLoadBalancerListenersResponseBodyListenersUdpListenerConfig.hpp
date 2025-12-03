// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSUDPLISTENERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSUDPLISTENERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionDrain, connectionDrain_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckExp, healthCheckExp_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionDrain, connectionDrain_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig(const DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig(DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig &&) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& operator=(const DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& operator=(DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionDrain_ == nullptr
        && return this->connectionDrainTimeout_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckConnectTimeout_ == nullptr && return this->healthCheckExp_ == nullptr
        && return this->healthCheckInterval_ == nullptr && return this->healthCheckReq_ == nullptr && return this->healthyThreshold_ == nullptr && return this->masterSlaveServerGroupId_ == nullptr && return this->proxyProtocolV2Enabled_ == nullptr
        && return this->unhealthyThreshold_ == nullptr; };
    // connectionDrain Field Functions 
    bool hasConnectionDrain() const { return this->connectionDrain_ != nullptr;};
    void deleteConnectionDrain() { this->connectionDrain_ = nullptr;};
    inline string connectionDrain() const { DARABONBA_PTR_GET_DEFAULT(connectionDrain_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setConnectionDrain(string connectionDrain) { DARABONBA_PTR_SET_VALUE(connectionDrain_, connectionDrain) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t healthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckExp Field Functions 
    bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
    void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
    inline string healthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckReq Field Functions 
    bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
    void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
    inline string healthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // proxyProtocolV2Enabled Field Functions 
    bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
    void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
    inline string proxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setProxyProtocolV2Enabled(string proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersUDPListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // Indicates whether connection draining is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> connectionDrain_ = nullptr;
    // The timeout period of connection draining. Unit: seconds.
    // 
    // Value values: **10 to 900**.
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The port that is used for health checks.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The timeout period for a health check response.
    std::shared_ptr<int32_t> healthCheckConnectTimeout_ = nullptr;
    // The response string of UDP health checks.
    std::shared_ptr<string> healthCheckExp_ = nullptr;
    // The interval between two consecutive health checks. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The request string of UDP health checks.
    std::shared_ptr<string> healthCheckReq_ = nullptr;
    // The number of times that a backend server must consecutively pass health checks before it is declared healthy.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The ID of the primary/secondary server group that is associated with the listener.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    // Indicates whether the Proxy protocol is used to pass source client IP addresses to backend servers. Valid values:
    // 
    // *   **true**: enables the burst feature for the data disk.
    // *   **false**: The task is not being retried.
    std::shared_ptr<string> proxyProtocolV2Enabled_ = nullptr;
    // The number of times that a backend server must consecutively fail health checks before it is declared unhealthy.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
