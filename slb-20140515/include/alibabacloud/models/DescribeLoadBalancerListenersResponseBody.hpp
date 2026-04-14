// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadBalancerListenersResponseBody() = default ;
    DescribeLoadBalancerListenersResponseBody(const DescribeLoadBalancerListenersResponseBody &) = default ;
    DescribeLoadBalancerListenersResponseBody(DescribeLoadBalancerListenersResponseBody &&) = default ;
    DescribeLoadBalancerListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBody() = default ;
    DescribeLoadBalancerListenersResponseBody& operator=(const DescribeLoadBalancerListenersResponseBody &) = default ;
    DescribeLoadBalancerListenersResponseBody& operator=(DescribeLoadBalancerListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
        DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_TO_JSON(AclType, aclType_);
        DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HTTPListenerConfig, HTTPListenerConfig_);
        DARABONBA_PTR_TO_JSON(HTTPSListenerConfig, HTTPSListenerConfig_);
        DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TCPListenerConfig, TCPListenerConfig_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UDPListenerConfig, UDPListenerConfig_);
        DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
        DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
        DARABONBA_PTR_FROM_JSON(AclType, aclType_);
        DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HTTPListenerConfig, HTTPListenerConfig_);
        DARABONBA_PTR_FROM_JSON(HTTPSListenerConfig, HTTPSListenerConfig_);
        DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
        DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TCPListenerConfig, TCPListenerConfig_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UDPListenerConfig, UDPListenerConfig_);
        DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UDPListenerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UDPListenerConfig& obj) { 
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
        friend void from_json(const Darabonba::Json& j, UDPListenerConfig& obj) { 
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
        UDPListenerConfig() = default ;
        UDPListenerConfig(const UDPListenerConfig &) = default ;
        UDPListenerConfig(UDPListenerConfig &&) = default ;
        UDPListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UDPListenerConfig() = default ;
        UDPListenerConfig& operator=(const UDPListenerConfig &) = default ;
        UDPListenerConfig& operator=(UDPListenerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionDrain_ == nullptr
        && this->connectionDrainTimeout_ == nullptr && this->healthCheck_ == nullptr && this->healthCheckConnectPort_ == nullptr && this->healthCheckConnectTimeout_ == nullptr && this->healthCheckExp_ == nullptr
        && this->healthCheckInterval_ == nullptr && this->healthCheckReq_ == nullptr && this->healthyThreshold_ == nullptr && this->masterSlaveServerGroupId_ == nullptr && this->proxyProtocolV2Enabled_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
        // connectionDrain Field Functions 
        bool hasConnectionDrain() const { return this->connectionDrain_ != nullptr;};
        void deleteConnectionDrain() { this->connectionDrain_ = nullptr;};
        inline string getConnectionDrain() const { DARABONBA_PTR_GET_DEFAULT(connectionDrain_, "") };
        inline UDPListenerConfig& setConnectionDrain(string connectionDrain) { DARABONBA_PTR_SET_VALUE(connectionDrain_, connectionDrain) };


        // connectionDrainTimeout Field Functions 
        bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
        void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
        inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
        inline UDPListenerConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


        // healthCheck Field Functions 
        bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
        void deleteHealthCheck() { this->healthCheck_ = nullptr;};
        inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
        inline UDPListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline UDPListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckConnectTimeout Field Functions 
        bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
        void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
        inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
        inline UDPListenerConfig& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


        // healthCheckExp Field Functions 
        bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
        void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
        inline string getHealthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
        inline UDPListenerConfig& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline UDPListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckReq Field Functions 
        bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
        void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
        inline string getHealthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
        inline UDPListenerConfig& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline UDPListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // masterSlaveServerGroupId Field Functions 
        bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
        void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
        inline string getMasterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
        inline UDPListenerConfig& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


        // proxyProtocolV2Enabled Field Functions 
        bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
        void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
        inline string getProxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, "") };
        inline UDPListenerConfig& setProxyProtocolV2Enabled(string proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline UDPListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


      protected:
        // Indicates whether connection draining is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> connectionDrain_ {};
        // The timeout period of connection draining. Unit: seconds.
        // 
        // Value values: **10 to 900**.
        shared_ptr<int32_t> connectionDrainTimeout_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> healthCheck_ {};
        // The port that is used for health checks.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // The timeout period for a health check response.
        shared_ptr<int32_t> healthCheckConnectTimeout_ {};
        // The response string of UDP health checks.
        shared_ptr<string> healthCheckExp_ {};
        // The interval between two consecutive health checks. Unit: seconds.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The request string of UDP health checks.
        shared_ptr<string> healthCheckReq_ {};
        // The number of times that a backend server must consecutively pass health checks before it is declared healthy.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The ID of the primary/secondary server group that is associated with the listener.
        shared_ptr<string> masterSlaveServerGroupId_ {};
        // Indicates whether the Proxy protocol is used to pass source client IP addresses to backend servers. Valid values:
        // 
        // *   **true**: enables the burst feature for the data disk.
        // *   **false**: The task is not being retried.
        shared_ptr<string> proxyProtocolV2Enabled_ {};
        // The number of times that a backend server must consecutively fail health checks before it is declared unhealthy.
        shared_ptr<int32_t> unhealthyThreshold_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class TCPListenerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TCPListenerConfig& obj) { 
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
        friend void from_json(const Darabonba::Json& j, TCPListenerConfig& obj) { 
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
        TCPListenerConfig() = default ;
        TCPListenerConfig(const TCPListenerConfig &) = default ;
        TCPListenerConfig(TCPListenerConfig &&) = default ;
        TCPListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TCPListenerConfig() = default ;
        TCPListenerConfig& operator=(const TCPListenerConfig &) = default ;
        TCPListenerConfig& operator=(TCPListenerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionDrain_ == nullptr
        && this->connectionDrainTimeout_ == nullptr && this->establishedTimeout_ == nullptr && this->healthCheck_ == nullptr && this->healthCheckConnectPort_ == nullptr && this->healthCheckConnectTimeout_ == nullptr
        && this->healthCheckDomain_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckMethod_ == nullptr && this->healthCheckType_ == nullptr
        && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr && this->masterSlaveServerGroupId_ == nullptr && this->persistenceTimeout_ == nullptr && this->proxyProtocolV2Enabled_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
        // connectionDrain Field Functions 
        bool hasConnectionDrain() const { return this->connectionDrain_ != nullptr;};
        void deleteConnectionDrain() { this->connectionDrain_ = nullptr;};
        inline string getConnectionDrain() const { DARABONBA_PTR_GET_DEFAULT(connectionDrain_, "") };
        inline TCPListenerConfig& setConnectionDrain(string connectionDrain) { DARABONBA_PTR_SET_VALUE(connectionDrain_, connectionDrain) };


        // connectionDrainTimeout Field Functions 
        bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
        void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
        inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
        inline TCPListenerConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


        // establishedTimeout Field Functions 
        bool hasEstablishedTimeout() const { return this->establishedTimeout_ != nullptr;};
        void deleteEstablishedTimeout() { this->establishedTimeout_ = nullptr;};
        inline int32_t getEstablishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(establishedTimeout_, 0) };
        inline TCPListenerConfig& setEstablishedTimeout(int32_t establishedTimeout) { DARABONBA_PTR_SET_VALUE(establishedTimeout_, establishedTimeout) };


        // healthCheck Field Functions 
        bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
        void deleteHealthCheck() { this->healthCheck_ = nullptr;};
        inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
        inline TCPListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline TCPListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckConnectTimeout Field Functions 
        bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
        void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
        inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
        inline TCPListenerConfig& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


        // healthCheckDomain Field Functions 
        bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
        void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
        inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
        inline TCPListenerConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


        // healthCheckHttpCode Field Functions 
        bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
        void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
        inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
        inline TCPListenerConfig& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline TCPListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckMethod Field Functions 
        bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
        void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
        inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
        inline TCPListenerConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


        // healthCheckType Field Functions 
        bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
        void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
        inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
        inline TCPListenerConfig& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


        // healthCheckURI Field Functions 
        bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
        void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
        inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
        inline TCPListenerConfig& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline TCPListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // masterSlaveServerGroupId Field Functions 
        bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
        void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
        inline string getMasterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
        inline TCPListenerConfig& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


        // persistenceTimeout Field Functions 
        bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
        void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
        inline int32_t getPersistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
        inline TCPListenerConfig& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


        // proxyProtocolV2Enabled Field Functions 
        bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
        void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
        inline string getProxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, "") };
        inline TCPListenerConfig& setProxyProtocolV2Enabled(string proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline TCPListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


      protected:
        // Indicates whether connection draining is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> connectionDrain_ {};
        // The timeout period of connection draining. Unit: seconds.
        // 
        // Value values: **10 to 900**.
        shared_ptr<int32_t> connectionDrainTimeout_ {};
        // The timeout period of a connection. Unit: seconds.
        shared_ptr<int32_t> establishedTimeout_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> healthCheck_ {};
        // The port that is used for health checks.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // The timeout period of health checks. Unit: seconds.
        // 
        // Valid values: **1** to **300**.
        shared_ptr<int32_t> healthCheckConnectTimeout_ {};
        // The domain name that is used for health checks.
        shared_ptr<string> healthCheckDomain_ {};
        // The HTTP status code that indicates a healthy backend server.
        shared_ptr<string> healthCheckHttpCode_ {};
        // The interval between two consecutive health checks. Unit: seconds.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The health check method.
        shared_ptr<string> healthCheckMethod_ {};
        // The protocol that you want to use for health checks.
        shared_ptr<string> healthCheckType_ {};
        // The URI that is used for health checks.
        shared_ptr<string> healthCheckURI_ {};
        // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The ID of the primary/secondary server group associated with the listener.
        shared_ptr<string> masterSlaveServerGroupId_ {};
        // Indicates whether session persistence is enabled. Unit: seconds.
        // 
        // Valid values: **0** to **3600**.
        // 
        // **0** indicates that session persistence is disabled.
        shared_ptr<int32_t> persistenceTimeout_ {};
        // Indicates whether the Proxy protocol is used to pass source client IP addresses to backend servers. Valid values:
        // 
        // *   **true**: enables the burst feature for the data disk.
        // *   **false**: The task is not being retried.
        shared_ptr<string> proxyProtocolV2Enabled_ {};
        // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> unhealthyThreshold_ {};
      };

      class HTTPSListenerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HTTPSListenerConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CACertificateId, CACertificateId_);
          DARABONBA_PTR_TO_JSON(Cookie, cookie_);
          DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_TO_JSON(EnableHttp2, enableHttp2_);
          DARABONBA_PTR_TO_JSON(Gzip, gzip_);
          DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
          DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
          DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
          DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
          DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
          DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
          DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_TO_JSON(TLSCipherPolicy, TLSCipherPolicy_);
          DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
          DARABONBA_PTR_TO_JSON(XForwardedFor, XForwardedFor_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertClientVerify, XForwardedFor_ClientCertClientVerify_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertFingerprint, XForwardedFor_ClientCertFingerprint_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertIssuerDN, XForwardedFor_ClientCertIssuerDN_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertSubjectDN, XForwardedFor_ClientCertSubjectDN_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_proto, XForwardedFor_proto_);
        };
        friend void from_json(const Darabonba::Json& j, HTTPSListenerConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CACertificateId, CACertificateId_);
          DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_FROM_JSON(EnableHttp2, enableHttp2_);
          DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
          DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
          DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
          DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
          DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
          DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
          DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
          DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
          DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_FROM_JSON(TLSCipherPolicy, TLSCipherPolicy_);
          DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor, XForwardedFor_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertClientVerify, XForwardedFor_ClientCertClientVerify_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertFingerprint, XForwardedFor_ClientCertFingerprint_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertIssuerDN, XForwardedFor_ClientCertIssuerDN_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertSubjectDN, XForwardedFor_ClientCertSubjectDN_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_proto, XForwardedFor_proto_);
        };
        HTTPSListenerConfig() = default ;
        HTTPSListenerConfig(const HTTPSListenerConfig &) = default ;
        HTTPSListenerConfig(HTTPSListenerConfig &&) = default ;
        HTTPSListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HTTPSListenerConfig() = default ;
        HTTPSListenerConfig& operator=(const HTTPSListenerConfig &) = default ;
        HTTPSListenerConfig& operator=(HTTPSListenerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->CACertificateId_ == nullptr
        && this->cookie_ == nullptr && this->cookieTimeout_ == nullptr && this->enableHttp2_ == nullptr && this->gzip_ == nullptr && this->healthCheck_ == nullptr
        && this->healthCheckConnectPort_ == nullptr && this->healthCheckDomain_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckHttpVersion_ == nullptr && this->healthCheckInterval_ == nullptr
        && this->healthCheckMethod_ == nullptr && this->healthCheckTimeout_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr
        && this->idleTimeout_ == nullptr && this->requestTimeout_ == nullptr && this->serverCertificateId_ == nullptr && this->stickySession_ == nullptr && this->stickySessionType_ == nullptr
        && this->TLSCipherPolicy_ == nullptr && this->unhealthyThreshold_ == nullptr && this->XForwardedFor_ == nullptr && this->XForwardedFor_ClientCertClientVerify_ == nullptr && this->XForwardedFor_ClientCertFingerprint_ == nullptr
        && this->XForwardedFor_ClientCertIssuerDN_ == nullptr && this->XForwardedFor_ClientCertSubjectDN_ == nullptr && this->XForwardedFor_ClientSrcPort_ == nullptr && this->XForwardedFor_SLBID_ == nullptr && this->XForwardedFor_SLBIP_ == nullptr
        && this->XForwardedFor_SLBPORT_ == nullptr && this->XForwardedFor_proto_ == nullptr; };
        // CACertificateId Field Functions 
        bool hasCACertificateId() const { return this->CACertificateId_ != nullptr;};
        void deleteCACertificateId() { this->CACertificateId_ = nullptr;};
        inline string getCACertificateId() const { DARABONBA_PTR_GET_DEFAULT(CACertificateId_, "") };
        inline HTTPSListenerConfig& setCACertificateId(string CACertificateId) { DARABONBA_PTR_SET_VALUE(CACertificateId_, CACertificateId) };


        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline HTTPSListenerConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // cookieTimeout Field Functions 
        bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
        void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
        inline int32_t getCookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
        inline HTTPSListenerConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


        // enableHttp2 Field Functions 
        bool hasEnableHttp2() const { return this->enableHttp2_ != nullptr;};
        void deleteEnableHttp2() { this->enableHttp2_ = nullptr;};
        inline string getEnableHttp2() const { DARABONBA_PTR_GET_DEFAULT(enableHttp2_, "") };
        inline HTTPSListenerConfig& setEnableHttp2(string enableHttp2) { DARABONBA_PTR_SET_VALUE(enableHttp2_, enableHttp2) };


        // gzip Field Functions 
        bool hasGzip() const { return this->gzip_ != nullptr;};
        void deleteGzip() { this->gzip_ = nullptr;};
        inline string getGzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
        inline HTTPSListenerConfig& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


        // healthCheck Field Functions 
        bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
        void deleteHealthCheck() { this->healthCheck_ = nullptr;};
        inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
        inline HTTPSListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline HTTPSListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckDomain Field Functions 
        bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
        void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
        inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
        inline HTTPSListenerConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


        // healthCheckHttpCode Field Functions 
        bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
        void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
        inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
        inline HTTPSListenerConfig& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


        // healthCheckHttpVersion Field Functions 
        bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
        void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
        inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
        inline HTTPSListenerConfig& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline HTTPSListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckMethod Field Functions 
        bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
        void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
        inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
        inline HTTPSListenerConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


        // healthCheckTimeout Field Functions 
        bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
        void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
        inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
        inline HTTPSListenerConfig& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


        // healthCheckType Field Functions 
        bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
        void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
        inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
        inline HTTPSListenerConfig& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


        // healthCheckURI Field Functions 
        bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
        void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
        inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
        inline HTTPSListenerConfig& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline HTTPSListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // idleTimeout Field Functions 
        bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
        void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
        inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
        inline HTTPSListenerConfig& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


        // requestTimeout Field Functions 
        bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
        void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
        inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
        inline HTTPSListenerConfig& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


        // serverCertificateId Field Functions 
        bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
        void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
        inline string getServerCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
        inline HTTPSListenerConfig& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


        // stickySession Field Functions 
        bool hasStickySession() const { return this->stickySession_ != nullptr;};
        void deleteStickySession() { this->stickySession_ = nullptr;};
        inline string getStickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
        inline HTTPSListenerConfig& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


        // stickySessionType Field Functions 
        bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
        void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
        inline string getStickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
        inline HTTPSListenerConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


        // TLSCipherPolicy Field Functions 
        bool hasTLSCipherPolicy() const { return this->TLSCipherPolicy_ != nullptr;};
        void deleteTLSCipherPolicy() { this->TLSCipherPolicy_ = nullptr;};
        inline string getTLSCipherPolicy() const { DARABONBA_PTR_GET_DEFAULT(TLSCipherPolicy_, "") };
        inline HTTPSListenerConfig& setTLSCipherPolicy(string TLSCipherPolicy) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicy_, TLSCipherPolicy) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline HTTPSListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


        // XForwardedFor Field Functions 
        bool hasXForwardedFor() const { return this->XForwardedFor_ != nullptr;};
        void deleteXForwardedFor() { this->XForwardedFor_ = nullptr;};
        inline string getXForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_, "") };
        inline HTTPSListenerConfig& setXForwardedFor(string XForwardedFor) { DARABONBA_PTR_SET_VALUE(XForwardedFor_, XForwardedFor) };


        // XForwardedFor_ClientCertClientVerify Field Functions 
        bool hasXForwardedFor_ClientCertClientVerify() const { return this->XForwardedFor_ClientCertClientVerify_ != nullptr;};
        void deleteXForwardedFor_ClientCertClientVerify() { this->XForwardedFor_ClientCertClientVerify_ = nullptr;};
        inline string getXForwardedFor_ClientCertClientVerify() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertClientVerify_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_ClientCertClientVerify(string XForwardedFor_ClientCertClientVerify) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertClientVerify_, XForwardedFor_ClientCertClientVerify) };


        // XForwardedFor_ClientCertFingerprint Field Functions 
        bool hasXForwardedFor_ClientCertFingerprint() const { return this->XForwardedFor_ClientCertFingerprint_ != nullptr;};
        void deleteXForwardedFor_ClientCertFingerprint() { this->XForwardedFor_ClientCertFingerprint_ = nullptr;};
        inline string getXForwardedFor_ClientCertFingerprint() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertFingerprint_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_ClientCertFingerprint(string XForwardedFor_ClientCertFingerprint) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertFingerprint_, XForwardedFor_ClientCertFingerprint) };


        // XForwardedFor_ClientCertIssuerDN Field Functions 
        bool hasXForwardedFor_ClientCertIssuerDN() const { return this->XForwardedFor_ClientCertIssuerDN_ != nullptr;};
        void deleteXForwardedFor_ClientCertIssuerDN() { this->XForwardedFor_ClientCertIssuerDN_ = nullptr;};
        inline string getXForwardedFor_ClientCertIssuerDN() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertIssuerDN_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_ClientCertIssuerDN(string XForwardedFor_ClientCertIssuerDN) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertIssuerDN_, XForwardedFor_ClientCertIssuerDN) };


        // XForwardedFor_ClientCertSubjectDN Field Functions 
        bool hasXForwardedFor_ClientCertSubjectDN() const { return this->XForwardedFor_ClientCertSubjectDN_ != nullptr;};
        void deleteXForwardedFor_ClientCertSubjectDN() { this->XForwardedFor_ClientCertSubjectDN_ = nullptr;};
        inline string getXForwardedFor_ClientCertSubjectDN() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertSubjectDN_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_ClientCertSubjectDN(string XForwardedFor_ClientCertSubjectDN) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertSubjectDN_, XForwardedFor_ClientCertSubjectDN) };


        // XForwardedFor_ClientSrcPort Field Functions 
        bool hasXForwardedFor_ClientSrcPort() const { return this->XForwardedFor_ClientSrcPort_ != nullptr;};
        void deleteXForwardedFor_ClientSrcPort() { this->XForwardedFor_ClientSrcPort_ = nullptr;};
        inline string getXForwardedFor_ClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientSrcPort_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_ClientSrcPort(string XForwardedFor_ClientSrcPort) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientSrcPort_, XForwardedFor_ClientSrcPort) };


        // XForwardedFor_SLBID Field Functions 
        bool hasXForwardedFor_SLBID() const { return this->XForwardedFor_SLBID_ != nullptr;};
        void deleteXForwardedFor_SLBID() { this->XForwardedFor_SLBID_ = nullptr;};
        inline string getXForwardedFor_SLBID() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBID_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_SLBID(string XForwardedFor_SLBID) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBID_, XForwardedFor_SLBID) };


        // XForwardedFor_SLBIP Field Functions 
        bool hasXForwardedFor_SLBIP() const { return this->XForwardedFor_SLBIP_ != nullptr;};
        void deleteXForwardedFor_SLBIP() { this->XForwardedFor_SLBIP_ = nullptr;};
        inline string getXForwardedFor_SLBIP() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBIP_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_SLBIP(string XForwardedFor_SLBIP) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBIP_, XForwardedFor_SLBIP) };


        // XForwardedFor_SLBPORT Field Functions 
        bool hasXForwardedFor_SLBPORT() const { return this->XForwardedFor_SLBPORT_ != nullptr;};
        void deleteXForwardedFor_SLBPORT() { this->XForwardedFor_SLBPORT_ = nullptr;};
        inline string getXForwardedFor_SLBPORT() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBPORT_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_SLBPORT(string XForwardedFor_SLBPORT) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBPORT_, XForwardedFor_SLBPORT) };


        // XForwardedFor_proto Field Functions 
        bool hasXForwardedFor_proto() const { return this->XForwardedFor_proto_ != nullptr;};
        void deleteXForwardedFor_proto() { this->XForwardedFor_proto_ = nullptr;};
        inline string getXForwardedFor_proto() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_proto_, "") };
        inline HTTPSListenerConfig& setXForwardedFor_proto(string XForwardedFor_proto) { DARABONBA_PTR_SET_VALUE(XForwardedFor_proto_, XForwardedFor_proto) };


      protected:
        // The ID of the CA certificate.
        shared_ptr<string> CACertificateId_ {};
        // The cookie configures for the server.
        shared_ptr<string> cookie_ {};
        // The maximum amount of time to wait before the session cookie expires. Unit: seconds.
        // 
        // Valid values: **1** to **86400**.
        shared_ptr<int32_t> cookieTimeout_ {};
        // Indicates whether `HTTP 2.0` is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> enableHttp2_ {};
        // Indicates whether GZIP compression is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> gzip_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> healthCheck_ {};
        // The port that is used for health checks.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // The domain name that is used for health checks.
        shared_ptr<string> healthCheckDomain_ {};
        // The HTTP status code that indicates a healthy backend server.
        shared_ptr<string> healthCheckHttpCode_ {};
        // The HTTP version for health checks.
        shared_ptr<string> healthCheckHttpVersion_ {};
        // The interval at which health checks are performed. Unit: seconds.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The health check method.
        shared_ptr<string> healthCheckMethod_ {};
        // The timeout period of a health check response. Unit: seconds.
        shared_ptr<int32_t> healthCheckTimeout_ {};
        // The protocol that you want to use for health checks.
        shared_ptr<string> healthCheckType_ {};
        // The URI that is used for health checks.
        shared_ptr<string> healthCheckURI_ {};
        // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The timeout period of an idle connection. Unit: seconds. Valid values: **1** to **60**.
        // 
        // If no request is received within the specified timeout period, CLB closes the connection. When a request is received, CLB establishes a new connection.
        shared_ptr<int32_t> idleTimeout_ {};
        // The request timeout period. Unit: seconds. Valid values: **1** to **180**.
        // 
        // If no response is received from a backend server during the request timeout period, CLB sends the `HTTP 504` status code to the client.
        shared_ptr<int32_t> requestTimeout_ {};
        // The ID of the server certificate.
        shared_ptr<string> serverCertificateId_ {};
        // Indicates whether session persistence is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> stickySession_ {};
        // The method used to handle the cookie.
        // 
        // *   **insert**: inserts a cookie. CLB inserts the SERVERID cookie to the HTTP or HTTPS response to the first request from a client. Subsequent requests that carry the SERVERID cookie from the client are forwarded to the same backend server as the first request.
        // *   **server**: rewrites the original cookie. CLB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
        shared_ptr<string> stickySessionType_ {};
        // A TLS security policy contains TLS protocols and cipher suites available for HTTPS.
        // 
        // *   **tls_cipher_policy_1_0**:
        // 
        //     Supported TLS versions: TLSv1.0, TLSv1.1, and TLSv1.2.
        // 
        //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
        // 
        // *   **tls_cipher_policy_1_1**:
        // 
        //     Supported TLS versions: TLSv1.1 and TLSv1.2.
        // 
        //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
        // 
        // *   **tls_cipher_policy_1_2**
        // 
        //     Supported TLS versions: TLSv1.2.
        // 
        //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
        // 
        // *   **tls_cipher_policy_1_2_strict**
        // 
        //     Supported TLS versions: TLSv1.2.
        // 
        //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
        // 
        // *   **tls_cipher_policy_1_2_strict_with_1_3**
        // 
        //     Supported TLS versions: TLSv1.2 and TLSv1.3.
        // 
        //     Supported cipher suites: TLS_AES_128_GCM_SHA256, TLS_AES_256_GCM_SHA384, TLS_CHACHA20_POLY1305_SHA256, TLS_AES_128_CCM_SHA256, TLS_AES_128_CCM_8_SHA256, ECDHE-ECDSA-AES128-GCM-SHA256, ECDHE-ECDSA-AES256-GCM-SHA384, ECDHE-ECDSA-AES128-SHA256, ECDHE-ECDSA-AES256-SHA384, ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-ECDSA-AES128-SHA, ECDHE-ECDSA-AES256-SHA, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
        shared_ptr<string> TLSCipherPolicy_ {};
        // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> unhealthyThreshold_ {};
        // Indicates whether the `X-Forwarded-For` header is used to retrieve client IP addresses. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ {};
        // Indicates whether the `XForwardedFor_ClientCertClientVerify` header is used to obtain the verification result of the client certificate. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ClientCertClientVerify_ {};
        // Indicates whether the `XForwardedFor_ClientCertFingerprint` header is used to obtain the fingerprint of the client certificate. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ClientCertFingerprint_ {};
        // Indicates whether the `XForwardedFor_ClientCertIssuerDN` header is used to obtain information about the authority that issues the client certificate. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ClientCertIssuerDN_ {};
        // Indicates whether the `XForwardedFor_ClientCertSubjectDN` header is used to obtain information about the owner of the client certificate. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ClientCertSubjectDN_ {};
        // Indicates whether the `XForwardedFor_ClientSrcPort` header is used to retrieve the client port. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ClientSrcPort_ {};
        // Indicates whether the `SLB-ID` header is used to retrieve the ID of the CLB instance. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_SLBID_ {};
        // Indicates whether the `SLB-IP` header is used to retrieve the VIP of the client. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_SLBIP_ {};
        // Indicates whether the `XForwardedFor_SLBPORT` header is used to retrieve the listener port of the CLB instance. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_SLBPORT_ {};
        // Indicates whether the `X-Forwarded-Proto` header is used to obtain the listener protocol. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_proto_ {};
      };

      class HTTPListenerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HTTPListenerConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Cookie, cookie_);
          DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_TO_JSON(Gzip, gzip_);
          DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
          DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
          DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
          DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
          DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
          DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
          DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
          DARABONBA_PTR_TO_JSON(XForwardedFor, XForwardedFor_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
          DARABONBA_PTR_TO_JSON(XForwardedFor_proto, XForwardedFor_proto_);
        };
        friend void from_json(const Darabonba::Json& j, HTTPListenerConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
          DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
          DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
          DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
          DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
          DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
          DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
          DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
          DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
          DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor, XForwardedFor_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
          DARABONBA_PTR_FROM_JSON(XForwardedFor_proto, XForwardedFor_proto_);
        };
        HTTPListenerConfig() = default ;
        HTTPListenerConfig(const HTTPListenerConfig &) = default ;
        HTTPListenerConfig(HTTPListenerConfig &&) = default ;
        HTTPListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HTTPListenerConfig() = default ;
        HTTPListenerConfig& operator=(const HTTPListenerConfig &) = default ;
        HTTPListenerConfig& operator=(HTTPListenerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cookie_ == nullptr
        && this->cookieTimeout_ == nullptr && this->forwardPort_ == nullptr && this->gzip_ == nullptr && this->healthCheck_ == nullptr && this->healthCheckConnectPort_ == nullptr
        && this->healthCheckDomain_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckHttpVersion_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckMethod_ == nullptr
        && this->healthCheckTimeout_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr && this->idleTimeout_ == nullptr
        && this->listenerForward_ == nullptr && this->requestTimeout_ == nullptr && this->stickySession_ == nullptr && this->stickySessionType_ == nullptr && this->unhealthyThreshold_ == nullptr
        && this->XForwardedFor_ == nullptr && this->XForwardedFor_ClientSrcPort_ == nullptr && this->XForwardedFor_SLBID_ == nullptr && this->XForwardedFor_SLBIP_ == nullptr && this->XForwardedFor_SLBPORT_ == nullptr
        && this->XForwardedFor_proto_ == nullptr; };
        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline HTTPListenerConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // cookieTimeout Field Functions 
        bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
        void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
        inline int32_t getCookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
        inline HTTPListenerConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


        // forwardPort Field Functions 
        bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
        void deleteForwardPort() { this->forwardPort_ = nullptr;};
        inline int32_t getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
        inline HTTPListenerConfig& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


        // gzip Field Functions 
        bool hasGzip() const { return this->gzip_ != nullptr;};
        void deleteGzip() { this->gzip_ = nullptr;};
        inline string getGzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
        inline HTTPListenerConfig& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


        // healthCheck Field Functions 
        bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
        void deleteHealthCheck() { this->healthCheck_ = nullptr;};
        inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
        inline HTTPListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline HTTPListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckDomain Field Functions 
        bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
        void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
        inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
        inline HTTPListenerConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


        // healthCheckHttpCode Field Functions 
        bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
        void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
        inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
        inline HTTPListenerConfig& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


        // healthCheckHttpVersion Field Functions 
        bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
        void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
        inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
        inline HTTPListenerConfig& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline HTTPListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckMethod Field Functions 
        bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
        void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
        inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
        inline HTTPListenerConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


        // healthCheckTimeout Field Functions 
        bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
        void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
        inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
        inline HTTPListenerConfig& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


        // healthCheckType Field Functions 
        bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
        void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
        inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
        inline HTTPListenerConfig& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


        // healthCheckURI Field Functions 
        bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
        void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
        inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
        inline HTTPListenerConfig& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline HTTPListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // idleTimeout Field Functions 
        bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
        void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
        inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
        inline HTTPListenerConfig& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


        // listenerForward Field Functions 
        bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
        void deleteListenerForward() { this->listenerForward_ = nullptr;};
        inline string getListenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
        inline HTTPListenerConfig& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


        // requestTimeout Field Functions 
        bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
        void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
        inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
        inline HTTPListenerConfig& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


        // stickySession Field Functions 
        bool hasStickySession() const { return this->stickySession_ != nullptr;};
        void deleteStickySession() { this->stickySession_ = nullptr;};
        inline string getStickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
        inline HTTPListenerConfig& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


        // stickySessionType Field Functions 
        bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
        void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
        inline string getStickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
        inline HTTPListenerConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline HTTPListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


        // XForwardedFor Field Functions 
        bool hasXForwardedFor() const { return this->XForwardedFor_ != nullptr;};
        void deleteXForwardedFor() { this->XForwardedFor_ = nullptr;};
        inline string getXForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_, "") };
        inline HTTPListenerConfig& setXForwardedFor(string XForwardedFor) { DARABONBA_PTR_SET_VALUE(XForwardedFor_, XForwardedFor) };


        // XForwardedFor_ClientSrcPort Field Functions 
        bool hasXForwardedFor_ClientSrcPort() const { return this->XForwardedFor_ClientSrcPort_ != nullptr;};
        void deleteXForwardedFor_ClientSrcPort() { this->XForwardedFor_ClientSrcPort_ = nullptr;};
        inline string getXForwardedFor_ClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientSrcPort_, "") };
        inline HTTPListenerConfig& setXForwardedFor_ClientSrcPort(string XForwardedFor_ClientSrcPort) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientSrcPort_, XForwardedFor_ClientSrcPort) };


        // XForwardedFor_SLBID Field Functions 
        bool hasXForwardedFor_SLBID() const { return this->XForwardedFor_SLBID_ != nullptr;};
        void deleteXForwardedFor_SLBID() { this->XForwardedFor_SLBID_ = nullptr;};
        inline string getXForwardedFor_SLBID() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBID_, "") };
        inline HTTPListenerConfig& setXForwardedFor_SLBID(string XForwardedFor_SLBID) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBID_, XForwardedFor_SLBID) };


        // XForwardedFor_SLBIP Field Functions 
        bool hasXForwardedFor_SLBIP() const { return this->XForwardedFor_SLBIP_ != nullptr;};
        void deleteXForwardedFor_SLBIP() { this->XForwardedFor_SLBIP_ = nullptr;};
        inline string getXForwardedFor_SLBIP() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBIP_, "") };
        inline HTTPListenerConfig& setXForwardedFor_SLBIP(string XForwardedFor_SLBIP) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBIP_, XForwardedFor_SLBIP) };


        // XForwardedFor_SLBPORT Field Functions 
        bool hasXForwardedFor_SLBPORT() const { return this->XForwardedFor_SLBPORT_ != nullptr;};
        void deleteXForwardedFor_SLBPORT() { this->XForwardedFor_SLBPORT_ = nullptr;};
        inline string getXForwardedFor_SLBPORT() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBPORT_, "") };
        inline HTTPListenerConfig& setXForwardedFor_SLBPORT(string XForwardedFor_SLBPORT) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBPORT_, XForwardedFor_SLBPORT) };


        // XForwardedFor_proto Field Functions 
        bool hasXForwardedFor_proto() const { return this->XForwardedFor_proto_ != nullptr;};
        void deleteXForwardedFor_proto() { this->XForwardedFor_proto_ = nullptr;};
        inline string getXForwardedFor_proto() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_proto_, "") };
        inline HTTPListenerConfig& setXForwardedFor_proto(string XForwardedFor_proto) { DARABONBA_PTR_SET_VALUE(XForwardedFor_proto_, XForwardedFor_proto) };


      protected:
        // The cookie configures for the server.
        shared_ptr<string> cookie_ {};
        // The maximum amount of time to wait before the session cookie expires. Unit: seconds.
        // 
        // Valid values: **1** to **86400**.
        shared_ptr<int32_t> cookieTimeout_ {};
        // The listener port that is used for HTTP-to-HTTPS redirection.
        // 
        // >  If the **ListenerForward** parameter is set to **off**, this parameter is not returned.
        shared_ptr<int32_t> forwardPort_ {};
        // Indicates whether GZIP compression is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> gzip_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> healthCheck_ {};
        // The port that is used for health checks.
        // 
        // >  This parameter takes effect only when **HealthCheck** is set to **on**.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // The domain name that is used for health checks.
        shared_ptr<string> healthCheckDomain_ {};
        // The HTTP status code that indicates a healthy backend server.
        shared_ptr<string> healthCheckHttpCode_ {};
        // The HTTP version for health checks.
        shared_ptr<string> healthCheckHttpVersion_ {};
        // The interval at which health checks are performed. Unit: seconds.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The health check method. Valid values: **head** and **get**.
        shared_ptr<string> healthCheckMethod_ {};
        // The maximum timeout period of a health check. Unit: seconds.
        shared_ptr<int32_t> healthCheckTimeout_ {};
        // The protocol that you want to use for health checks.
        shared_ptr<string> healthCheckType_ {};
        // The URI that is used for health checks.
        shared_ptr<string> healthCheckURI_ {};
        // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The timeout period of an idle connection. Unit: seconds. Valid values: **1** to **60**.
        // 
        // If no request is received within the specified timeout period, CLB closes the connection. When a request is received, CLB establishes a new connection.
        shared_ptr<int32_t> idleTimeout_ {};
        // Indicates whether HTTP-to-HTTPS redirection is enabled for the listener. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> listenerForward_ {};
        // The timeout period of a request. Unit: seconds. Valid values: **1** to **180**.
        // 
        // If no response is received from a backend server during the request timeout period, CLB sends the `HTTP 504` status code to the client.
        shared_ptr<int32_t> requestTimeout_ {};
        // Indicates whether session persistence is enabled. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> stickySession_ {};
        // The method used to handle the cookie. Valid values:
        // 
        // *   **insert**: inserts a cookie. CLB inserts the SERVERID cookie to the HTTP or HTTPS response to the first request from a client. Subsequent requests that carry the SERVERID cookie from the client are forwarded to the same backend server as the first request.
        // *   **server**: rewrites the original cookie. CLB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
        shared_ptr<string> stickySessionType_ {};
        // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> unhealthyThreshold_ {};
        // Indicates whether the `X-Forwarded-For` header is used to preserve client IP addresses. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ {};
        // Indicates whether the `XForwardedFor_ClientSrcPort` header is used to retrieve the client port. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_ClientSrcPort_ {};
        // Indicates whether the `SLB-ID` header is used to retrieve the ID of the CLB instance. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_SLBID_ {};
        // Indicates whether the `SLB-IP` header is used to retrieve the VIP of the client. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_SLBIP_ {};
        // Indicates whether the `XForwardedFor_SLBPORT` header is used to retrieve the listener port of the CLB instance. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_SLBPORT_ {};
        // Indicates whether the `X-Forwarded-Proto` header is used to obtain the listener protocol. Valid values:
        // 
        // *   **on**
        // *   **off**
        shared_ptr<string> XForwardedFor_proto_ {};
      };

      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclIds_ == nullptr && this->aclStatus_ == nullptr && this->aclType_ == nullptr && this->backendServerPort_ == nullptr && this->bandwidth_ == nullptr
        && this->description_ == nullptr && this->HTTPListenerConfig_ == nullptr && this->HTTPSListenerConfig_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr
        && this->loadBalancerId_ == nullptr && this->scheduler_ == nullptr && this->status_ == nullptr && this->TCPListenerConfig_ == nullptr && this->tags_ == nullptr
        && this->UDPListenerConfig_ == nullptr && this->VServerGroupId_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline Listeners& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // aclIds Field Functions 
      bool hasAclIds() const { return this->aclIds_ != nullptr;};
      void deleteAclIds() { this->aclIds_ = nullptr;};
      inline const vector<string> & getAclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, vector<string>) };
      inline vector<string> getAclIds() { DARABONBA_PTR_GET(aclIds_, vector<string>) };
      inline Listeners& setAclIds(const vector<string> & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
      inline Listeners& setAclIds(vector<string> && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
      inline Listeners& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // aclType Field Functions 
      bool hasAclType() const { return this->aclType_ != nullptr;};
      void deleteAclType() { this->aclType_ = nullptr;};
      inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
      inline Listeners& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


      // backendServerPort Field Functions 
      bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
      void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
      inline int32_t getBackendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
      inline Listeners& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline Listeners& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Listeners& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // HTTPListenerConfig Field Functions 
      bool hasHTTPListenerConfig() const { return this->HTTPListenerConfig_ != nullptr;};
      void deleteHTTPListenerConfig() { this->HTTPListenerConfig_ = nullptr;};
      inline const Listeners::HTTPListenerConfig & getHTTPListenerConfig() const { DARABONBA_PTR_GET_CONST(HTTPListenerConfig_, Listeners::HTTPListenerConfig) };
      inline Listeners::HTTPListenerConfig getHTTPListenerConfig() { DARABONBA_PTR_GET(HTTPListenerConfig_, Listeners::HTTPListenerConfig) };
      inline Listeners& setHTTPListenerConfig(const Listeners::HTTPListenerConfig & hTTPListenerConfig) { DARABONBA_PTR_SET_VALUE(HTTPListenerConfig_, hTTPListenerConfig) };
      inline Listeners& setHTTPListenerConfig(Listeners::HTTPListenerConfig && hTTPListenerConfig) { DARABONBA_PTR_SET_RVALUE(HTTPListenerConfig_, hTTPListenerConfig) };


      // HTTPSListenerConfig Field Functions 
      bool hasHTTPSListenerConfig() const { return this->HTTPSListenerConfig_ != nullptr;};
      void deleteHTTPSListenerConfig() { this->HTTPSListenerConfig_ = nullptr;};
      inline const Listeners::HTTPSListenerConfig & getHTTPSListenerConfig() const { DARABONBA_PTR_GET_CONST(HTTPSListenerConfig_, Listeners::HTTPSListenerConfig) };
      inline Listeners::HTTPSListenerConfig getHTTPSListenerConfig() { DARABONBA_PTR_GET(HTTPSListenerConfig_, Listeners::HTTPSListenerConfig) };
      inline Listeners& setHTTPSListenerConfig(const Listeners::HTTPSListenerConfig & hTTPSListenerConfig) { DARABONBA_PTR_SET_VALUE(HTTPSListenerConfig_, hTTPSListenerConfig) };
      inline Listeners& setHTTPSListenerConfig(Listeners::HTTPSListenerConfig && hTTPSListenerConfig) { DARABONBA_PTR_SET_RVALUE(HTTPSListenerConfig_, hTTPSListenerConfig) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
      inline Listeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      // listenerProtocol Field Functions 
      bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
      void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
      inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
      inline Listeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline Listeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // scheduler Field Functions 
      bool hasScheduler() const { return this->scheduler_ != nullptr;};
      void deleteScheduler() { this->scheduler_ = nullptr;};
      inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
      inline Listeners& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Listeners& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // TCPListenerConfig Field Functions 
      bool hasTCPListenerConfig() const { return this->TCPListenerConfig_ != nullptr;};
      void deleteTCPListenerConfig() { this->TCPListenerConfig_ = nullptr;};
      inline const Listeners::TCPListenerConfig & getTCPListenerConfig() const { DARABONBA_PTR_GET_CONST(TCPListenerConfig_, Listeners::TCPListenerConfig) };
      inline Listeners::TCPListenerConfig getTCPListenerConfig() { DARABONBA_PTR_GET(TCPListenerConfig_, Listeners::TCPListenerConfig) };
      inline Listeners& setTCPListenerConfig(const Listeners::TCPListenerConfig & tCPListenerConfig) { DARABONBA_PTR_SET_VALUE(TCPListenerConfig_, tCPListenerConfig) };
      inline Listeners& setTCPListenerConfig(Listeners::TCPListenerConfig && tCPListenerConfig) { DARABONBA_PTR_SET_RVALUE(TCPListenerConfig_, tCPListenerConfig) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Listeners::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Listeners::Tags>) };
      inline vector<Listeners::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Listeners::Tags>) };
      inline Listeners& setTags(const vector<Listeners::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Listeners& setTags(vector<Listeners::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // UDPListenerConfig Field Functions 
      bool hasUDPListenerConfig() const { return this->UDPListenerConfig_ != nullptr;};
      void deleteUDPListenerConfig() { this->UDPListenerConfig_ = nullptr;};
      inline const Listeners::UDPListenerConfig & getUDPListenerConfig() const { DARABONBA_PTR_GET_CONST(UDPListenerConfig_, Listeners::UDPListenerConfig) };
      inline Listeners::UDPListenerConfig getUDPListenerConfig() { DARABONBA_PTR_GET(UDPListenerConfig_, Listeners::UDPListenerConfig) };
      inline Listeners& setUDPListenerConfig(const Listeners::UDPListenerConfig & uDPListenerConfig) { DARABONBA_PTR_SET_VALUE(UDPListenerConfig_, uDPListenerConfig) };
      inline Listeners& setUDPListenerConfig(Listeners::UDPListenerConfig && uDPListenerConfig) { DARABONBA_PTR_SET_RVALUE(UDPListenerConfig_, uDPListenerConfig) };


      // VServerGroupId Field Functions 
      bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
      void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
      inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
      inline Listeners& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    protected:
      // The ID of the access control list (ACL).
      shared_ptr<string> aclId_ {};
      // The IDs of the ACLs.
      shared_ptr<vector<string>> aclIds_ {};
      // Indicates whether access control is enabled. Valid values:
      // 
      // *   **on**
      // *   **off**
      shared_ptr<string> aclStatus_ {};
      // The type of access control. Valid values:
      // 
      // *   **white**: The listener forwards requests only from IP addresses and CIDR blocks on the whitelist. Your service may be adversely affected if the whitelist is not properly configured. If a whitelist is configured, the listener forwards requests only from IP addresses that are added to the whitelist.
      // 
      // If you configure a whitelist but no IP address is added to the whitelist, the listener forwards all requests.
      // 
      // *   **black**: The listener blocks requests from IP addresses and CIDR blocks on the blacklist.
      // 
      // If you configure a blacklist but no IP address is added to the blacklist, the listener forwards all requests.
      shared_ptr<string> aclType_ {};
      // The port of the backend server.
      // 
      // >  This parameter takes effect only when the `VServerGroupId` and `MasterSlaveServerGroupId` parameters are both empty.
      shared_ptr<int32_t> backendServerPort_ {};
      // The maximum bandwidth of the listener. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The description of the listener.
      shared_ptr<string> description_ {};
      // The configurations of the HTTP listener.
      shared_ptr<Listeners::HTTPListenerConfig> HTTPListenerConfig_ {};
      // The configurations of the HTTPS listener.
      shared_ptr<Listeners::HTTPSListenerConfig> HTTPSListenerConfig_ {};
      // The listener port.
      shared_ptr<int32_t> listenerPort_ {};
      // The protocol used by the listener.
      shared_ptr<string> listenerProtocol_ {};
      // The ID of the CLB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The scheduling algorithm. Valid values:
      // 
      // *   **wrr**: Backend servers with higher weights receive more requests than those with lower weights.
      // *   **rr**: Requests are distributed to backend servers in sequence.
      // *   **sch**: consistent hashing that is based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
      // *   **tch**: specifies consistent hashing based on the source IP address, destination IP address, source port, and destination port. Requests that have the same four factors are distributed to the same backend server.
      // *   **qch**: specifies consistent hashing based on Quick UDP Internet Connection (QUIC) IDs. Requests that contain the same QUIC ID are scheduled to the same backend server.
      // 
      // >  Only high-performance CLB instances support the **sch**, **tch**, and **qch** consistent hashing algorithms.
      shared_ptr<string> scheduler_ {};
      // The status of the listener. Valid values:
      // 
      // *   **running**
      // *   **stopped**
      shared_ptr<string> status_ {};
      // The configurations of the TCP listener.
      shared_ptr<Listeners::TCPListenerConfig> TCPListenerConfig_ {};
      // A list of tags.
      shared_ptr<vector<Listeners::Tags>> tags_ {};
      // The configurations of the UDP listener.
      shared_ptr<Listeners::UDPListenerConfig> UDPListenerConfig_ {};
      // The ID of the vServer group associated with the listener.
      shared_ptr<string> VServerGroupId_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeLoadBalancerListenersResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeLoadBalancerListenersResponseBody::Listeners>) };
    inline vector<DescribeLoadBalancerListenersResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeLoadBalancerListenersResponseBody::Listeners>) };
    inline DescribeLoadBalancerListenersResponseBody& setListeners(const vector<DescribeLoadBalancerListenersResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLoadBalancerListenersResponseBody& setListeners(vector<DescribeLoadBalancerListenersResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLoadBalancerListenersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoadBalancerListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of listeners of the CLB instance.
    // 
    // >  This parameter is not returned if the CLB instance does not have a listener.
    shared_ptr<vector<DescribeLoadBalancerListenersResponseBody::Listeners>> listeners_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no subsequent query is to be sent.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
