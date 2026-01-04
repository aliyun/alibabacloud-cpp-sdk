// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
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
        DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AnyPortEnabled, anyPortEnabled_);
        DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
        DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
        DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_TO_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
        DARABONBA_PTR_TO_JSON(ServerGroupStatus, serverGroupStatus_);
        DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, ServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AnyPortEnabled, anyPortEnabled_);
        DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
        DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
        DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
        DARABONBA_PTR_FROM_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
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
        // The tag key. At most 10 tag keys are returned.
        // 
        // The tag key can be up to 64 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
        shared_ptr<string> key_ {};
        // The tag value. At most 10 tag values are returned.
        // 
        // The tag value can be up to 128 characters in length, and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
        shared_ptr<string> value_ {};
      };

      class HealthCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheck& obj) { 
          DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
          DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_TO_JSON(HealthCheckExp, healthCheckExp_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
          DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
          DARABONBA_PTR_TO_JSON(HealthCheckUrl, healthCheckUrl_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(HttpCheckMethod, httpCheckMethod_);
          DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
          DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
          DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
          DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
          DARABONBA_PTR_FROM_JSON(HealthCheckUrl, healthCheckUrl_);
          DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_FROM_JSON(HttpCheckMethod, httpCheckMethod_);
          DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
        };
        HealthCheck() = default ;
        HealthCheck(const HealthCheck &) = default ;
        HealthCheck(HealthCheck &&) = default ;
        HealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HealthCheck() = default ;
        HealthCheck& operator=(const HealthCheck &) = default ;
        HealthCheck& operator=(HealthCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->healthCheckConnectPort_ == nullptr
        && this->healthCheckConnectTimeout_ == nullptr && this->healthCheckDomain_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckExp_ == nullptr && this->healthCheckHttpCode_ == nullptr
        && this->healthCheckHttpVersion_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckReq_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckUrl_ == nullptr
        && this->healthyThreshold_ == nullptr && this->httpCheckMethod_ == nullptr && this->unhealthyThreshold_ == nullptr; };
        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline HealthCheck& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckConnectTimeout Field Functions 
        bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
        void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
        inline int32_t getHealthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
        inline HealthCheck& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


        // healthCheckDomain Field Functions 
        bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
        void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
        inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
        inline HealthCheck& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


        // healthCheckEnabled Field Functions 
        bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
        void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
        inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
        inline HealthCheck& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


        // healthCheckExp Field Functions 
        bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
        void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
        inline string getHealthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
        inline HealthCheck& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


        // healthCheckHttpCode Field Functions 
        bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
        void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
        inline const vector<string> & getHealthCheckHttpCode() const { DARABONBA_PTR_GET_CONST(healthCheckHttpCode_, vector<string>) };
        inline vector<string> getHealthCheckHttpCode() { DARABONBA_PTR_GET(healthCheckHttpCode_, vector<string>) };
        inline HealthCheck& setHealthCheckHttpCode(const vector<string> & healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };
        inline HealthCheck& setHealthCheckHttpCode(vector<string> && healthCheckHttpCode) { DARABONBA_PTR_SET_RVALUE(healthCheckHttpCode_, healthCheckHttpCode) };


        // healthCheckHttpVersion Field Functions 
        bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
        void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
        inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
        inline HealthCheck& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline HealthCheck& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckReq Field Functions 
        bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
        void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
        inline string getHealthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
        inline HealthCheck& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


        // healthCheckType Field Functions 
        bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
        void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
        inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
        inline HealthCheck& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


        // healthCheckUrl Field Functions 
        bool hasHealthCheckUrl() const { return this->healthCheckUrl_ != nullptr;};
        void deleteHealthCheckUrl() { this->healthCheckUrl_ = nullptr;};
        inline string getHealthCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(healthCheckUrl_, "") };
        inline HealthCheck& setHealthCheckUrl(string healthCheckUrl) { DARABONBA_PTR_SET_VALUE(healthCheckUrl_, healthCheckUrl) };


        // healthyThreshold Field Functions 
        bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
        void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
        inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
        inline HealthCheck& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


        // httpCheckMethod Field Functions 
        bool hasHttpCheckMethod() const { return this->httpCheckMethod_ != nullptr;};
        void deleteHttpCheckMethod() { this->httpCheckMethod_ = nullptr;};
        inline string getHttpCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(httpCheckMethod_, "") };
        inline HealthCheck& setHttpCheckMethod(string httpCheckMethod) { DARABONBA_PTR_SET_VALUE(httpCheckMethod_, httpCheckMethod) };


        // unhealthyThreshold Field Functions 
        bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
        void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
        inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
        inline HealthCheck& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


      protected:
        // The backend port that is used for health checks.
        // 
        // Valid values: **0** to **65535**.
        // 
        // A value of **0** indicates that the port on a backend server is used for health checks.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // The maximum timeout period of a health check response. Unit: seconds. Default value: **5**.
        // 
        // Valid values: **1** to **300**
        shared_ptr<int32_t> healthCheckConnectTimeout_ {};
        // The domain name that you want to use for health checks. Valid values:
        // 
        // *   **$SERVER_IP**: the private IP address of a backend server.
        // *   **domain**: a specified domain name. The domain name must be 1 to 80 characters in length, and can contain lowercase letters, digits, hyphens (-), and periods (.).
        // 
        // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
        shared_ptr<string> healthCheckDomain_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> healthCheckEnabled_ {};
        // The response string of UDP health checks. The string must be 1 to 512 characters in length, and can contain letters and digits.
        shared_ptr<string> healthCheckExp_ {};
        // The HTTP status codes returned for health checks. Multiple HTTP status codes are separated by commas (,). Valid values: **http_2xx**, **http_3xx**, **http_4xx**, and **http_5xx**.
        // 
        // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
        shared_ptr<vector<string>> healthCheckHttpCode_ {};
        // The version of the HTTP protocol. Valid values: **HTTP1.0** and **HTTP1.1**.
        // 
        // >  This parameter takes effect only if you set **HealthCheckType** to **HTTP**.
        shared_ptr<string> healthCheckHttpVersion_ {};
        // The interval at which health checks are performed. Unit: seconds. Default value: **5**.
        // 
        // *   If you set **HealthCheckType** to **TCP** or **HTTP**, valid values are **1 to 50**.
        // *   If you set **HealthCheckType** to **UDP**, valid values are **1 to 300**. Set the health check interval equal to or larger than the response timeout period to ensure that UDP response timeouts are not determined as no responses.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The request string of UDP health checks. The string must be 1 to 512 characters in length, and can contain letters and digits.
        shared_ptr<string> healthCheckReq_ {};
        // The protocol that is used for health checks. Valid values:
        // 
        // *   **TCP**
        // *   **HTTP**
        // *   **UDP**
        shared_ptr<string> healthCheckType_ {};
        // The path to which health check probes are sent.
        // 
        // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
        shared_ptr<string> healthCheckUrl_ {};
        // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status changes from **fail** to **success**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The HTTP method that is used for health checks. Valid values: **GET** and **HEAD**.
        // 
        // > This parameter takes effect only when **HealthCheckType** is set to **HTTP**.
        shared_ptr<string> httpCheckMethod_ {};
        // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status changes from **success** to **fail**.
        // 
        // Valid values: **2** to **10**.
        shared_ptr<int32_t> unhealthyThreshold_ {};
      };

      virtual bool empty() const override { return this->addressIPVersion_ == nullptr
        && this->aliUid_ == nullptr && this->anyPortEnabled_ == nullptr && this->connectionDrainEnabled_ == nullptr && this->connectionDrainTimeout_ == nullptr && this->healthCheck_ == nullptr
        && this->preserveClientIpEnabled_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->relatedLoadBalancerIds_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scheduler_ == nullptr && this->serverCount_ == nullptr && this->serverGroupId_ == nullptr && this->serverGroupName_ == nullptr && this->serverGroupStatus_ == nullptr
        && this->serverGroupType_ == nullptr && this->tags_ == nullptr && this->vpcId_ == nullptr; };
      // addressIPVersion Field Functions 
      bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
      void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
      inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
      inline ServerGroups& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline ServerGroups& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // anyPortEnabled Field Functions 
      bool hasAnyPortEnabled() const { return this->anyPortEnabled_ != nullptr;};
      void deleteAnyPortEnabled() { this->anyPortEnabled_ = nullptr;};
      inline bool getAnyPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(anyPortEnabled_, false) };
      inline ServerGroups& setAnyPortEnabled(bool anyPortEnabled) { DARABONBA_PTR_SET_VALUE(anyPortEnabled_, anyPortEnabled) };


      // connectionDrainEnabled Field Functions 
      bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
      void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
      inline bool getConnectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
      inline ServerGroups& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


      // connectionDrainTimeout Field Functions 
      bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
      void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
      inline int32_t getConnectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
      inline ServerGroups& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline const ServerGroups::HealthCheck & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, ServerGroups::HealthCheck) };
      inline ServerGroups::HealthCheck getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, ServerGroups::HealthCheck) };
      inline ServerGroups& setHealthCheck(const ServerGroups::HealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
      inline ServerGroups& setHealthCheck(ServerGroups::HealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


      // preserveClientIpEnabled Field Functions 
      bool hasPreserveClientIpEnabled() const { return this->preserveClientIpEnabled_ != nullptr;};
      void deletePreserveClientIpEnabled() { this->preserveClientIpEnabled_ = nullptr;};
      inline bool getPreserveClientIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(preserveClientIpEnabled_, false) };
      inline ServerGroups& setPreserveClientIpEnabled(bool preserveClientIpEnabled) { DARABONBA_PTR_SET_VALUE(preserveClientIpEnabled_, preserveClientIpEnabled) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ServerGroups& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ServerGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
      // The IP version. Valid values:
      // 
      // *   **ipv4**
      // *   **DualStack**
      shared_ptr<string> addressIPVersion_ {};
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // Indicates whether the feature of forwarding requests to all ports is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> anyPortEnabled_ {};
      // Indicates whether connection draining is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> connectionDrainEnabled_ {};
      // The timeout period of connection draining. Unit: seconds. Valid values: **10** to **900**.
      shared_ptr<int32_t> connectionDrainTimeout_ {};
      // The configurations of health checks.
      shared_ptr<ServerGroups::HealthCheck> healthCheck_ {};
      // Indicates whether client IP preservation is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // > This parameter is set to **true** by default when **AddressIPVersion** is set to **ipv4**. This parameter is set to **false** when **AddressIPVersion** is set to **ipv6**. **true** will be supported by later versions.
      shared_ptr<bool> preserveClientIpEnabled_ {};
      // The backend protocol. Valid values: **TCP** and **UDP**.
      shared_ptr<string> protocol_ {};
      // The region ID of the NLB instance.
      shared_ptr<string> regionId_ {};
      // The NLB instances.
      shared_ptr<vector<string>> relatedLoadBalancerIds_ {};
      // The ID of the resource group to which the server group belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The routing algorithm. Valid values:
      // 
      // *   **Wrr**: Backend servers with higher weights receive more requests than backend servers with lower weights.
      // *   **rr**: Requests are forwarded to the backend servers in sequence. sch: Requests are forwarded to the backend servers based on source IP address hashing.
      // *   **sch**: Requests from the same source IP address are forwarded to the same backend server.
      // *   **tch**: Four-element hashing, which specifies consistent hashing that is based on four factors: source IP address, destination IP address, source port, and destination port. Requests that contain the same information based on the four factors are forwarded to the same backend server.
      // *   **qch**: QUIC ID hashing. Requests that contain the same QUIC ID are forwarded to the same backend server.
      shared_ptr<string> scheduler_ {};
      // The number of server groups associated with the NLB instances.
      shared_ptr<int32_t> serverCount_ {};
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
      // The type of server group. Valid values:
      // 
      // *   **Instance** : contains servers of the **Ecs**, **Ens**, and **Eci** types.
      // *   **Ip**: contains servers specified by IP addresses.
      shared_ptr<string> serverGroupType_ {};
      // The tag.
      shared_ptr<vector<ServerGroups::Tags>> tags_ {};
      // The ID of the VPC to which the server group belongs.
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
    // The number of entries per page. Valid values: **1** to **100**.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of server groups.
    shared_ptr<vector<ListServerGroupsResponseBody::ServerGroups>> serverGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
