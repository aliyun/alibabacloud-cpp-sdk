// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class ListServerGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerGroups, serverGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerGroups, serverGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServerGroupsResponseBody() = default ;
    ListServerGroupsResponseBody(const ListServerGroupsResponseBody &) = default ;
    ListServerGroupsResponseBody(ListServerGroupsResponseBody &&) = default ;
    ListServerGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsResponseBody() = default ;
    ListServerGroupsResponseBody& operator=(const ListServerGroupsResponseBody &) = default ;
    ListServerGroupsResponseBody& operator=(ListServerGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServerGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_TO_JSON(ServerFailoverMode, serverFailoverMode_);
        DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
        DARABONBA_PTR_TO_JSON(ServerGroupStatus, serverGroupStatus_);
        DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, ServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_FROM_JSON(ServerFailoverMode, serverFailoverMode_);
        DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
        DARABONBA_PTR_FROM_JSON(ServerGroupStatus, serverGroupStatus_);
        DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      ServerGroups() = default ;
      ServerGroups(const ServerGroups &) = default ;
      ServerGroups(ServerGroups &&) = default ;
      ServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerGroups() = default ;
      ServerGroups& operator=(const ServerGroups &) = default ;
      ServerGroups& operator=(ServerGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key cannot be an empty string. The tag key can be up to 128 characters in length, and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The tag value. The tag value can be up to 256 characters in length and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
      };

      class HealthCheckConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheckConfig& obj) { 
          DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
          DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_TO_JSON(HealthCheckExp, healthCheckExp_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
          DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
          DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
          DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
          DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
          DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
          DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
        };
        HealthCheckConfig() = default ;
        HealthCheckConfig(const HealthCheckConfig &) = default ;
        HealthCheckConfig(HealthCheckConfig &&) = default ;
        HealthCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HealthCheckConfig() = default ;
        HealthCheckConfig& operator=(const HealthCheckConfig &) = default ;
        HealthCheckConfig& operator=(HealthCheckConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->healthCheckConnectPort_ == nullptr
        && this->healthCheckConnectTimeout_ == nullptr && this->healthCheckDomain_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckExp_ == nullptr && this->healthCheckHttpCode_ == nullptr
        && this->healthCheckInterval_ == nullptr && this->healthCheckPath_ == nullptr && this->healthCheckProtocol_ == nullptr && this->healthCheckReq_ == nullptr && this->healthyThreshold_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline HealthCheckConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckConnectTimeout Field Functions 
        bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
        void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
        inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
        inline HealthCheckConfig& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


        // healthCheckDomain Field Functions 
        bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
        void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
        inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
        inline HealthCheckConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


        // healthCheckEnabled Field Functions 
        bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
        void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
        inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
        inline HealthCheckConfig& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


        // healthCheckExp Field Functions 
        bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
        void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
        inline string getHealthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
        inline HealthCheckConfig& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


        // healthCheckHttpCode Field Functions 
        bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
        void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
        inline const vector<string> & getHealthCheckHttpCode() const { DARABONBA_PTR_GET_CONST(healthCheckHttpCode_, vector<string>) };
        inline vector<string> getHealthCheckHttpCode() { DARABONBA_PTR_GET(healthCheckHttpCode_, vector<string>) };
        inline HealthCheckConfig& setHealthCheckHttpCode(const vector<string> & healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };
        inline HealthCheckConfig& setHealthCheckHttpCode(vector<string> && healthCheckHttpCode) { DARABONBA_PTR_SET_RVALUE(healthCheckHttpCode_, healthCheckHttpCode) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline HealthCheckConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckPath Field Functions 
        bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
        void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
        inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
        inline HealthCheckConfig& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


        // healthCheckProtocol Field Functions 
        bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
        void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
        inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
        inline HealthCheckConfig& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


        // healthCheckReq Field Functions 
        bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
        void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
        inline string getHealthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
        inline HealthCheckConfig& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline HealthCheckConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline HealthCheckConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


      protected:
        // The backend server port that is used for health checks.
        // 
        // Valid values: **1** to **65535**.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // The maximum timeout period of a health check.
        // 
        // Unit: seconds
        // 
        // Valid values: **1** to **300**.
        shared_ptr<int32_t> healthCheckConnectTimeout_ {};
        // The domain name that is used for health checks. Valid values:
        // 
        // *   **$SERVER_IP**: the internal IP address of a backend server.
        // *   **domain**: a domain name. The domain name must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), and periods (.).
        // 
        // > This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**.
        shared_ptr<string> healthCheckDomain_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> healthCheckEnabled_ {};
        shared_ptr<string> healthCheckExp_ {};
        // The HTTP status codes that the system returns for health checks.
        shared_ptr<vector<string>> healthCheckHttpCode_ {};
        // The interval at which health checks are performed.
        // 
        // Unit: seconds
        // 
        // Valid values: **1** to **50**.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The URL that is used for health checks.
        // 
        // The URL must be 1 to 80 characters in length, and can contain letters, digits, and the following special characters: ` - / . % ? # &  `The URL must start with a forward slash (/).
        // 
        // > This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**.
        shared_ptr<string> healthCheckPath_ {};
        // The protocol that is used for health checks. Valid values:
        // 
        // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to check whether the port of the backend server is reachable.
        // *   **HTTP**: HTTP health checks simulate a process that uses a web browser to access resources by sending HEAD or GET requests to an instance. These requests are used to check whether the instance is healthy.
        shared_ptr<string> healthCheckProtocol_ {};
        shared_ptr<string> healthCheckReq_ {};
        // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status changes from **fail** to **success**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status changes from **success** to **fail**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> unhealthyThreshold_ {};
      };

      class ConnectionDrainConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectionDrainConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
          DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectionDrainConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
          DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
        };
        ConnectionDrainConfig() = default ;
        ConnectionDrainConfig(const ConnectionDrainConfig &) = default ;
        ConnectionDrainConfig(ConnectionDrainConfig &&) = default ;
        ConnectionDrainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectionDrainConfig() = default ;
        ConnectionDrainConfig& operator=(const ConnectionDrainConfig &) = default ;
        ConnectionDrainConfig& operator=(ConnectionDrainConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionDrainEnabled_ == nullptr
        && this->connectionDrainTimeout_ == nullptr; };
        // connectionDrainEnabled Field Functions 
        bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
        void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
        inline bool getConnectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
        inline ConnectionDrainConfig& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


        // connectionDrainTimeout Field Functions 
        bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
        void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
        inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
        inline ConnectionDrainConfig& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


      protected:
        // Indicates whether connection draining is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> connectionDrainEnabled_ {};
        // The timeout period of connection draining.
        // 
        // Unit: seconds
        // 
        // Valid values: 1 to 3600.
        shared_ptr<int32_t> connectionDrainTimeout_ {};
      };

      virtual bool empty() const override { return this->connectionDrainConfig_ == nullptr
        && this->createTime_ == nullptr && this->healthCheckConfig_ == nullptr && this->protocol_ == nullptr && this->relatedLoadBalancerIds_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scheduler_ == nullptr && this->serverCount_ == nullptr && this->serverFailoverMode_ == nullptr && this->serverGroupId_ == nullptr && this->serverGroupName_ == nullptr
        && this->serverGroupStatus_ == nullptr && this->serverGroupType_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // connectionDrainConfig Field Functions 
      bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
      void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
      inline const ServerGroups::ConnectionDrainConfig & getConnectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, ServerGroups::ConnectionDrainConfig) };
      inline ServerGroups::ConnectionDrainConfig getConnectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, ServerGroups::ConnectionDrainConfig) };
      inline ServerGroups& setConnectionDrainConfig(const ServerGroups::ConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
      inline ServerGroups& setConnectionDrainConfig(ServerGroups::ConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ServerGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // healthCheckConfig Field Functions 
      bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
      void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
      inline const ServerGroups::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, ServerGroups::HealthCheckConfig) };
      inline ServerGroups::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, ServerGroups::HealthCheckConfig) };
      inline ServerGroups& setHealthCheckConfig(const ServerGroups::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
      inline ServerGroups& setHealthCheckConfig(ServerGroups::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ServerGroups& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // relatedLoadBalancerIds Field Functions 
      bool hasRelatedLoadBalancerIds() const { return this->relatedLoadBalancerIds_ != nullptr;};
      void deleteRelatedLoadBalancerIds() { this->relatedLoadBalancerIds_ = nullptr;};
      inline const vector<string> & getRelatedLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(relatedLoadBalancerIds_, vector<string>) };
      inline vector<string> getRelatedLoadBalancerIds() { DARABONBA_PTR_GET(relatedLoadBalancerIds_, vector<string>) };
      inline ServerGroups& setRelatedLoadBalancerIds(const vector<string> & relatedLoadBalancerIds) { DARABONBA_PTR_SET_VALUE(relatedLoadBalancerIds_, relatedLoadBalancerIds) };
      inline ServerGroups& setRelatedLoadBalancerIds(vector<string> && relatedLoadBalancerIds) { DARABONBA_PTR_SET_RVALUE(relatedLoadBalancerIds_, relatedLoadBalancerIds) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ServerGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scheduler Field Functions 
      bool hasScheduler() const { return this->scheduler_ != nullptr;};
      void deleteScheduler() { this->scheduler_ = nullptr;};
      inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
      inline ServerGroups& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


      // serverCount Field Functions 
      bool hasServerCount() const { return this->serverCount_ != nullptr;};
      void deleteServerCount() { this->serverCount_ = nullptr;};
      inline int32_t getServerCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0) };
      inline ServerGroups& setServerCount(int32_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


      // serverFailoverMode Field Functions 
      bool hasServerFailoverMode() const { return this->serverFailoverMode_ != nullptr;};
      void deleteServerFailoverMode() { this->serverFailoverMode_ = nullptr;};
      inline string getServerFailoverMode() const { DARABONBA_PTR_GET_DEFAULT(serverFailoverMode_, "") };
      inline ServerGroups& setServerFailoverMode(string serverFailoverMode) { DARABONBA_PTR_SET_VALUE(serverFailoverMode_, serverFailoverMode) };


      // serverGroupId Field Functions 
      bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
      void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
      inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
      inline ServerGroups& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


      // serverGroupName Field Functions 
      bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
      void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
      inline string getServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
      inline ServerGroups& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


      // serverGroupStatus Field Functions 
      bool hasServerGroupStatus() const { return this->serverGroupStatus_ != nullptr;};
      void deleteServerGroupStatus() { this->serverGroupStatus_ = nullptr;};
      inline string getServerGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(serverGroupStatus_, "") };
      inline ServerGroups& setServerGroupStatus(string serverGroupStatus) { DARABONBA_PTR_SET_VALUE(serverGroupStatus_, serverGroupStatus) };


      // serverGroupType Field Functions 
      bool hasServerGroupType() const { return this->serverGroupType_ != nullptr;};
      void deleteServerGroupType() { this->serverGroupType_ = nullptr;};
      inline string getServerGroupType() const { DARABONBA_PTR_GET_DEFAULT(serverGroupType_, "") };
      inline ServerGroups& setServerGroupType(string serverGroupType) { DARABONBA_PTR_SET_VALUE(serverGroupType_, serverGroupType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ServerGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ServerGroups::Tags>) };
      inline vector<ServerGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ServerGroups::Tags>) };
      inline ServerGroups& setTags(const vector<ServerGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ServerGroups& setTags(vector<ServerGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ServerGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The configurations of connection draining.
      shared_ptr<ServerGroups::ConnectionDrainConfig> connectionDrainConfig_ {};
      // The time when the resource was created. The time follows the ISO 8601 standard in the **yyyy-MM-ddTHH:mm:ssZ** format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The configuration of health checks.
      shared_ptr<ServerGroups::HealthCheckConfig> healthCheckConfig_ {};
      // The backend protocol. Valid values:
      // 
      // *   **GENEVE**.
      shared_ptr<string> protocol_ {};
      // The IDs of the GWLB instances that are associated with the server group.
      shared_ptr<vector<string>> relatedLoadBalancerIds_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The scheduling algorithm. Valid values:
      // 
      // *   **5TCH**: indicates consistent hashing that is based on the following factors: source IP address, destination IP address, source port, protocol, and destination port. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
      // *   **3TCH**: indicates consistent hashing that is based on the following factors: source IP address, destination IP address, and protocol. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
      // *   **2TCH**: indicates consistent hashing that is based on the following factors: source IP address and destination IP address. Requests that contain the same information based on the preceding factors are forwarded to the same backend server.
      shared_ptr<string> scheduler_ {};
      // The number of server groups.
      shared_ptr<int32_t> serverCount_ {};
      // Specifies how GWLB processes requests over existing connections when a backend server is not running as expected. Valid values:
      // 
      // *   **NoRebalance**: GWLB continues to forward requests over existing connections to the unhealthy backend server.
      // *   **Rebalance**: GWLB forwards requests over existing connections to the remaining healthy backend servers.
      shared_ptr<string> serverFailoverMode_ {};
      // The server group ID.
      shared_ptr<string> serverGroupId_ {};
      // The server group name.
      shared_ptr<string> serverGroupName_ {};
      // The status of the server group. Valid values:
      // 
      // *   **Creating**
      // *   **Available**
      // *   **Configuring**
      shared_ptr<string> serverGroupStatus_ {};
      // The server group type. Valid values:
      // 
      // *   **Instance**: allows you to specify servers of the **Ecs**, **Eni**, or **Eci** type.
      // *   **Ip**: allows you to add servers of by specifying IP addresses.
      shared_ptr<string> serverGroupType_ {};
      // The tags.
      shared_ptr<vector<ServerGroups::Tags>> tags_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->serverGroups_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServerGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServerGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServerGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverGroups Field Functions 
    bool hasServerGroups() const { return this->serverGroups_ != nullptr;};
    void deleteServerGroups() { this->serverGroups_ = nullptr;};
    inline const vector<ListServerGroupsResponseBody::ServerGroups> & getServerGroups() const { DARABONBA_PTR_GET_CONST(serverGroups_, vector<ListServerGroupsResponseBody::ServerGroups>) };
    inline vector<ListServerGroupsResponseBody::ServerGroups> getServerGroups() { DARABONBA_PTR_GET(serverGroups_, vector<ListServerGroupsResponseBody::ServerGroups>) };
    inline ListServerGroupsResponseBody& setServerGroups(const vector<ListServerGroupsResponseBody::ServerGroups> & serverGroups) { DARABONBA_PTR_SET_VALUE(serverGroups_, serverGroups) };
    inline ListServerGroupsResponseBody& setServerGroups(vector<ListServerGroupsResponseBody::ServerGroups> && serverGroups) { DARABONBA_PTR_SET_RVALUE(serverGroups_, serverGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServerGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page.
    // 
    // Valid values: 1 to 1000.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The configurations of the server group.
    shared_ptr<vector<ListServerGroupsResponseBody::ServerGroups>> serverGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
