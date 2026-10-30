// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERTCPLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerTCPListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerTCPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipTransmit, eipTransmit_);
      DARABONBA_PTR_TO_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerTCPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipTransmit, eipTransmit_);
      DARABONBA_PTR_FROM_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    DescribeLoadBalancerTCPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBody(const DescribeLoadBalancerTCPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBody(DescribeLoadBalancerTCPListenerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerTCPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBody& operator=(const DescribeLoadBalancerTCPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerTCPListenerAttributeResponseBody& operator=(DescribeLoadBalancerTCPListenerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServerPort_ == nullptr
        && this->bandwidth_ == nullptr && this->description_ == nullptr && this->eipTransmit_ == nullptr && this->establishedTimeout_ == nullptr && this->healthCheck_ == nullptr
        && this->healthCheckConnectPort_ == nullptr && this->healthCheckConnectTimeout_ == nullptr && this->healthCheckDomain_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckInterval_ == nullptr
        && this->healthCheckType_ == nullptr && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr && this->listenerPort_ == nullptr && this->persistenceTimeout_ == nullptr
        && this->requestId_ == nullptr && this->scheduler_ == nullptr && this->status_ == nullptr && this->unhealthyThreshold_ == nullptr; };
    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t getBackendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipTransmit Field Functions 
    bool hasEipTransmit() const { return this->eipTransmit_ != nullptr;};
    void deleteEipTransmit() { this->eipTransmit_ = nullptr;};
    inline string getEipTransmit() const { DARABONBA_PTR_GET_DEFAULT(eipTransmit_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setEipTransmit(string eipTransmit) { DARABONBA_PTR_SET_VALUE(eipTransmit_, eipTransmit) };


    // establishedTimeout Field Functions 
    bool hasEstablishedTimeout() const { return this->establishedTimeout_ != nullptr;};
    void deleteEstablishedTimeout() { this->establishedTimeout_ = nullptr;};
    inline int32_t getEstablishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(establishedTimeout_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setEstablishedTimeout(int32_t establishedTimeout) { DARABONBA_PTR_SET_VALUE(establishedTimeout_, establishedTimeout) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // persistenceTimeout Field Functions 
    bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
    void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
    inline int32_t getPersistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerTCPListenerAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The port used by the backend server of the load balancing instance. Valid values: **1** to **65535**.
    shared_ptr<int32_t> backendServerPort_ {};
    // The peak bandwidth of the load balancing instance. Default value: -1, which indicates that no bandwidth throttling is applied.
    shared_ptr<int32_t> bandwidth_ {};
    // The name of the listener.
    shared_ptr<string> description_ {};
    // Specifies whether to enable EIP pass-through. Valid values:
    // 
    // - **on**: enabled
    // - **off** (default): disabled
    shared_ptr<string> eipTransmit_ {};
    // The connection timeout period. Valid values: **10** to **900**. Unit: seconds.
    shared_ptr<int32_t> establishedTimeout_ {};
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // - **on**: enabled
    // - **off**: disabled
    shared_ptr<string> healthCheck_ {};
    // The port used for health checks. Valid values: **1** to **65535**. If the Settings for this parameter are not specified, the backend service port (BackendServerPort) is used.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthCheckConnectPort_ {};
    // The timeout period for receiving a health check response. If a backend ENS instance does not respond within the specified timeout period, the health check fails.
    // - Default value: 5.
    // - Valid values: **1** to **300**.
    // - Unit: seconds.
    // > - This parameter takes effect only when HealthCheck is set to on.
    // > - If the value of HealthCheckConnectTimeout is less than the value of HealthCheckInterval, HealthCheckConnectTimeout becomes invalid and the timeout period is the value of HealthCheckInterval.
    shared_ptr<int32_t> healthCheckConnectTimeout_ {};
    // The domain name used for health checks.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckDomain_ {};
    // The HTTP status code that indicates a successful health check. Valid values:
    // 
    // - **http_2xx** (default)
    // - **http_3xx**
    // - **http_4xx**
    // - **http_5xx**
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckHttpCode_ {};
    // The interval between two consecutive health checks. Valid values: **1** to **50**. Unit: seconds.
    shared_ptr<int32_t> healthCheckInterval_ {};
    // The health check type. Valid values:
    // - **tcp** (default)
    // - **http**
    shared_ptr<string> healthCheckType_ {};
    // The URI used for health checks. The URI must be **1** to **80** characters in length.
    // > - The URI cannot contain only a forward slash (`/`), but it must start with a forward slash.
    // > - This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckURI_ {};
    // The number of consecutive successful health checks required to change the health check status of a backend server from fail (unreachable) to success (reachable). Valid values: **2** to **10**.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthyThreshold_ {};
    // The frontend port used by the load balancing instance.
    shared_ptr<int32_t> listenerPort_ {};
    // The timeout period for session persistence.
    // 
    // - Default value: 0, which indicates that session persistence is disabled.
    // - Valid values: **0** to **3600**.
    // - Unit: seconds.
    shared_ptr<int32_t> persistenceTimeout_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scheduling algorithm. Valid values:
    // - **wrr**: Backend servers with higher weights are polled more frequently.
    // - **wlc**: Backend servers are polled based on their weights and actual loads (number of connections). If weights are the same, backend servers with fewer current connections are polled more frequently.
    // - **rr**: External requests are distributed to backend servers in sequence.
    // - **sch**: Consistent hashing is based on source IP addresses. Requests from the same source IP address are scheduled to the same backend server.
    // - **tch**: Consistent hashing is based on quadruples (source IP address, destination IP address, source port, and destination port). Requests from the same stream are scheduled to the same backend server.
    shared_ptr<string> scheduler_ {};
    // The status of the listener. Valid values:
    // 
    // - **Running**: running normally
    // - **Stopped**: stopped
    // - **Starting**: starting
    // - **Configuring**: configuring
    // - **Stopping**: stopping
    shared_ptr<string> status_ {};
    // The number of consecutive failed health checks required to change the health check status of a backend server from success (reachable) to fail (unreachable). Valid values: **2** to **10**.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
