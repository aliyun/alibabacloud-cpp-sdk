// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSTCPLISTENERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSTCPLISTENERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionDrain, connectionDrain_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionDrain, connectionDrain_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig(const DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig(DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig &&) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& operator=(const DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& operator=(DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionDrain_ == nullptr
        && return this->connectionDrainTimeout_ == nullptr && return this->establishedTimeout_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckConnectTimeout_ == nullptr
        && return this->healthCheckDomain_ == nullptr && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckInterval_ == nullptr && return this->healthCheckMethod_ == nullptr && return this->healthCheckType_ == nullptr
        && return this->healthCheckURI_ == nullptr && return this->healthyThreshold_ == nullptr && return this->masterSlaveServerGroupId_ == nullptr && return this->persistenceTimeout_ == nullptr && return this->proxyProtocolV2Enabled_ == nullptr
        && return this->unhealthyThreshold_ == nullptr; };
    // connectionDrain Field Functions 
    bool hasConnectionDrain() const { return this->connectionDrain_ != nullptr;};
    void deleteConnectionDrain() { this->connectionDrain_ = nullptr;};
    inline string connectionDrain() const { DARABONBA_PTR_GET_DEFAULT(connectionDrain_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setConnectionDrain(string connectionDrain) { DARABONBA_PTR_SET_VALUE(connectionDrain_, connectionDrain) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    // establishedTimeout Field Functions 
    bool hasEstablishedTimeout() const { return this->establishedTimeout_ != nullptr;};
    void deleteEstablishedTimeout() { this->establishedTimeout_ = nullptr;};
    inline int32_t establishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(establishedTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setEstablishedTimeout(int32_t establishedTimeout) { DARABONBA_PTR_SET_VALUE(establishedTimeout_, establishedTimeout) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t healthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string healthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // persistenceTimeout Field Functions 
    bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
    void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
    inline int32_t persistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


    // proxyProtocolV2Enabled Field Functions 
    bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
    void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
    inline string proxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setProxyProtocolV2Enabled(string proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersTCPListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


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
    // The timeout period of a connection. Unit: seconds.
    std::shared_ptr<int32_t> establishedTimeout_ = nullptr;
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The port that is used for health checks.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The timeout period of health checks. Unit: seconds.
    // 
    // Valid values: **1** to **300**.
    std::shared_ptr<int32_t> healthCheckConnectTimeout_ = nullptr;
    // The domain name that is used for health checks.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code that indicates a healthy backend server.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The interval between two consecutive health checks. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The health check method.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The protocol that you want to use for health checks.
    std::shared_ptr<string> healthCheckType_ = nullptr;
    // The URI that is used for health checks.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
    // 
    // Valid values: **2** to **10**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The ID of the primary/secondary server group associated with the listener.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    // Indicates whether session persistence is enabled. Unit: seconds.
    // 
    // Valid values: **0** to **3600**.
    // 
    // **0** indicates that session persistence is disabled.
    std::shared_ptr<int32_t> persistenceTimeout_ = nullptr;
    // Indicates whether the Proxy protocol is used to pass source client IP addresses to backend servers. Valid values:
    // 
    // *   **true**: enables the burst feature for the data disk.
    // *   **false**: The task is not being retried.
    std::shared_ptr<string> proxyProtocolV2Enabled_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
    // 
    // Valid values: **2** to **10**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
