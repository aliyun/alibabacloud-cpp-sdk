// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerUDPListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerUDPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EipTransmit, eipTransmit_);
      DARABONBA_PTR_TO_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckExp, healthCheckExp_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerUDPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EipTransmit, eipTransmit_);
      DARABONBA_PTR_FROM_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    DescribeLoadBalancerUDPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody(const DescribeLoadBalancerUDPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody(DescribeLoadBalancerUDPListenerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerUDPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody& operator=(const DescribeLoadBalancerUDPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody& operator=(DescribeLoadBalancerUDPListenerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServerPort_ == nullptr
        && this->bandwidth_ == nullptr && this->description_ == nullptr && this->eipTransmit_ == nullptr && this->establishedTimeout_ == nullptr && this->healthCheck_ == nullptr
        && this->healthCheckConnectPort_ == nullptr && this->healthCheckConnectTimeout_ == nullptr && this->healthCheckExp_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckReq_ == nullptr
        && this->healthyThreshold_ == nullptr && this->listenerPort_ == nullptr && this->requestId_ == nullptr && this->scheduler_ == nullptr && this->status_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t getBackendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eipTransmit Field Functions 
    bool hasEipTransmit() const { return this->eipTransmit_ != nullptr;};
    void deleteEipTransmit() { this->eipTransmit_ = nullptr;};
    inline string getEipTransmit() const { DARABONBA_PTR_GET_DEFAULT(eipTransmit_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setEipTransmit(string eipTransmit) { DARABONBA_PTR_SET_VALUE(eipTransmit_, eipTransmit) };


    // establishedTimeout Field Functions 
    bool hasEstablishedTimeout() const { return this->establishedTimeout_ != nullptr;};
    void deleteEstablishedTimeout() { this->establishedTimeout_ = nullptr;};
    inline int32_t getEstablishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(establishedTimeout_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setEstablishedTimeout(int32_t establishedTimeout) { DARABONBA_PTR_SET_VALUE(establishedTimeout_, establishedTimeout) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckExp Field Functions 
    bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
    void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
    inline string getHealthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckReq Field Functions 
    bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
    void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
    inline string getHealthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The port used by the backend ELB server of the ELB instance. Valid values: **1** to **65535**.
    shared_ptr<int32_t> backendServerPort_ {};
    // The peak bandwidth of the Edge Load Balancer (ELB) instance. The default value is -1, which indicates that the bandwidth is not limited.
    shared_ptr<int32_t> bandwidth_ {};
    // The name of the listener.
    shared_ptr<string> description_ {};
    // Indicates whether EIP pass-through is enabled. Valid values:
    // 
    // *   **on**
    // *   **off** (default)
    shared_ptr<string> eipTransmit_ {};
    // The timeout period of a connection. Valid values: **10** to **900**. Unit: seconds.
    shared_ptr<int32_t> establishedTimeout_ {};
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // *   **on**
    // *   **off**
    shared_ptr<string> healthCheck_ {};
    // The port that is used for health checks. Valid values: **1** to **65535**. If you leave this parameter empty, the port specified by BackendServerPort is used for health checks.
    shared_ptr<int32_t> healthCheckConnectPort_ {};
    // The timeout period for a health check response. If a backend server does not respond within the specified timeout period, the server fails the health check.
    // 
    // *   Default value: 5.
    // *   Valid values: **1** to **300**.
    // *   Unit: seconds.
    // 
    // > 
    // 
    // *   This parameter takes effect only if the HealthCheck parameter is set to on.
    // 
    // *   If the value of the HealthCheckTimeout property is smaller than the value of the HealthCheckInterval property, the timeout period specified by the HealthCheckTimeout property becomes invalid and the value of the HealthCheckInterval property is used as the timeout period.
    shared_ptr<int32_t> healthCheckConnectTimeout_ {};
    // The response string for UDP listener health checks. The string can be up to 64 characters in length and can contain only letters and digits.
    shared_ptr<string> healthCheckExp_ {};
    // The interval at which health checks are performed. Valid values: **1** to **50**. Unit: seconds.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    shared_ptr<int32_t> healthCheckInterval_ {};
    // The request string for UDP listener health checks. The string can be up to 64 characters in length and can contain only letters and digits.
    shared_ptr<string> healthCheckReq_ {};
    // The number of consecutive successful health checks that must occur before an unhealthy and inaccessible backend server is declared healthy and accessible. Valid values: **2** to **10**.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    shared_ptr<int32_t> healthyThreshold_ {};
    // The listener port.
    shared_ptr<int32_t> listenerPort_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The routing algorithm. Valid values:
    // 
    // *   **wrr**: Backend servers with higher weights receive more requests than those with lower weights.
    // *   **wlc**: Requests are distributed based on the weight and load of each backend server. The load refers to the number of connections to a backend server. If two backend servers have the same weight, the backend server that has fewer connections receives more requests.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // *   **sch**: consistent hashing that is based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
    // *   **qch**: consistent hashing that is based on QUIC connection IDs. Requests that contain the same QUIC connection ID are distributed to the same backend server.
    // *   **iqch**: consistent hashing that is based on specific three bytes of the iQUIC CIDs. Requests whose second to fourth bytes are the same are distributed to the same backend server.
    shared_ptr<string> scheduler_ {};
    // The status of the listener. Valid values:
    // 
    // *   **Running**
    // *   **Stopped**
    // *   **Starting**
    // *   **Configuring**
    // *   **Stopping**
    shared_ptr<string> status_ {};
    // The number of consecutive failed health checks that must occur before a healthy and accessible backend server is declared unhealthy and inaccessible. Valid values: **2** to **10**.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
