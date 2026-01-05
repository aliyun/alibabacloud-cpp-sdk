// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
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
        DARABONBA_PTR_TO_JSON(ConfigManagedEnabled, configManagedEnabled_);
        DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
        DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
        DARABONBA_PTR_TO_JSON(Ipv6Enabled, ipv6Enabled_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
        DARABONBA_PTR_TO_JSON(ServerGroupStatus, serverGroupStatus_);
        DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(SlowStartConfig, slowStartConfig_);
        DARABONBA_PTR_TO_JSON(StickySessionConfig, stickySessionConfig_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UchConfig, uchConfig_);
        DARABONBA_PTR_TO_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, ServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigManagedEnabled, configManagedEnabled_);
        DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
        DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
        DARABONBA_PTR_FROM_JSON(Ipv6Enabled, ipv6Enabled_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
        DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
        DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
        DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
        DARABONBA_PTR_FROM_JSON(ServerGroupStatus, serverGroupStatus_);
        DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(SlowStartConfig, slowStartConfig_);
        DARABONBA_PTR_FROM_JSON(StickySessionConfig, stickySessionConfig_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UchConfig, uchConfig_);
        DARABONBA_PTR_FROM_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
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
      class UchConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UchConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, UchConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        UchConfig() = default ;
        UchConfig(const UchConfig &) = default ;
        UchConfig(UchConfig &&) = default ;
        UchConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UchConfig() = default ;
        UchConfig& operator=(const UchConfig &) = default ;
        UchConfig& operator=(UchConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UchConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline UchConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The parameter type. Valid value: QueryString.
        shared_ptr<string> type_ {};
        // The hash value.
        shared_ptr<string> value_ {};
      };

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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class StickySessionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StickySessionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Cookie, cookie_);
          DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_TO_JSON(StickySessionEnabled, stickySessionEnabled_);
          DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
        };
        friend void from_json(const Darabonba::Json& j, StickySessionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
          DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
          DARABONBA_PTR_FROM_JSON(StickySessionEnabled, stickySessionEnabled_);
          DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
        };
        StickySessionConfig() = default ;
        StickySessionConfig(const StickySessionConfig &) = default ;
        StickySessionConfig(StickySessionConfig &&) = default ;
        StickySessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StickySessionConfig() = default ;
        StickySessionConfig& operator=(const StickySessionConfig &) = default ;
        StickySessionConfig& operator=(StickySessionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cookie_ == nullptr
        && this->cookieTimeout_ == nullptr && this->stickySessionEnabled_ == nullptr && this->stickySessionType_ == nullptr; };
        // cookie Field Functions 
        bool hasCookie() const { return this->cookie_ != nullptr;};
        void deleteCookie() { this->cookie_ = nullptr;};
        inline string getCookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
        inline StickySessionConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


        // cookieTimeout Field Functions 
        bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
        void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
        inline int32_t getCookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
        inline StickySessionConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


        // stickySessionEnabled Field Functions 
        bool hasStickySessionEnabled() const { return this->stickySessionEnabled_ != nullptr;};
        void deleteStickySessionEnabled() { this->stickySessionEnabled_ = nullptr;};
        inline bool getStickySessionEnabled() const { DARABONBA_PTR_GET_DEFAULT(stickySessionEnabled_, false) };
        inline StickySessionConfig& setStickySessionEnabled(bool stickySessionEnabled) { DARABONBA_PTR_SET_VALUE(stickySessionEnabled_, stickySessionEnabled) };


        // stickySessionType Field Functions 
        bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
        void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
        inline string getStickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
        inline StickySessionConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


      protected:
        // The cookie configured for the server.
        shared_ptr<string> cookie_ {};
        // The timeout period of the cookie. Unit: seconds. Valid values: **1** to **86400**.
        // 
        // >  This parameter takes effect only when **StickySessionEnabled** is set to **true** and **StickySessionType** is set to **Insert**.
        shared_ptr<int32_t> cookieTimeout_ {};
        // Indicates whether session persistence is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> stickySessionEnabled_ {};
        // The method that is used to handle the cookie. Valid values:
        // 
        // *   **insert**: inserts the cookie. The first time a client accesses ALB, ALB inserts the SERVERID cookie into the HTTP or HTTPS response packet. Subsequent requests from the client that carry this cookie are forwarded to the same backend server as the first request.
        // *   **Server**: rewrites the cookie. ALB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
        shared_ptr<string> stickySessionType_ {};
      };

      class SlowStartConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlowStartConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SlowStartDuration, slowStartDuration_);
          DARABONBA_PTR_TO_JSON(SlowStartEnabled, slowStartEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, SlowStartConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SlowStartDuration, slowStartDuration_);
          DARABONBA_PTR_FROM_JSON(SlowStartEnabled, slowStartEnabled_);
        };
        SlowStartConfig() = default ;
        SlowStartConfig(const SlowStartConfig &) = default ;
        SlowStartConfig(SlowStartConfig &&) = default ;
        SlowStartConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlowStartConfig() = default ;
        SlowStartConfig& operator=(const SlowStartConfig &) = default ;
        SlowStartConfig& operator=(SlowStartConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->slowStartDuration_ == nullptr
        && this->slowStartEnabled_ == nullptr; };
        // slowStartDuration Field Functions 
        bool hasSlowStartDuration() const { return this->slowStartDuration_ != nullptr;};
        void deleteSlowStartDuration() { this->slowStartDuration_ = nullptr;};
        inline int32_t getSlowStartDuration() const { DARABONBA_PTR_GET_DEFAULT(slowStartDuration_, 0) };
        inline SlowStartConfig& setSlowStartDuration(int32_t slowStartDuration) { DARABONBA_PTR_SET_VALUE(slowStartDuration_, slowStartDuration) };


        // slowStartEnabled Field Functions 
        bool hasSlowStartEnabled() const { return this->slowStartEnabled_ != nullptr;};
        void deleteSlowStartEnabled() { this->slowStartEnabled_ = nullptr;};
        inline bool getSlowStartEnabled() const { DARABONBA_PTR_GET_DEFAULT(slowStartEnabled_, false) };
        inline SlowStartConfig& setSlowStartEnabled(bool slowStartEnabled) { DARABONBA_PTR_SET_VALUE(slowStartEnabled_, slowStartEnabled) };


      protected:
        // The duration of a slow start.
        shared_ptr<int32_t> slowStartDuration_ {};
        // Indicates whether slow starts are enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> slowStartEnabled_ {};
      };

      class HealthCheckConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheckConfig& obj) { 
          DARABONBA_PTR_TO_JSON(HealthCheckCodes, healthCheckCodes_);
          DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
          DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
          DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
          DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
          DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
          DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
          DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheckConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(HealthCheckCodes, healthCheckCodes_);
          DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
          DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
          DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
          DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
          DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
          DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
          DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
          DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
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
        virtual bool empty() const override { return this->healthCheckCodes_ == nullptr
        && this->healthCheckConnectPort_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckHttpVersion_ == nullptr && this->healthCheckInterval_ == nullptr
        && this->healthCheckMethod_ == nullptr && this->healthCheckPath_ == nullptr && this->healthCheckProtocol_ == nullptr && this->healthCheckTimeout_ == nullptr && this->healthyThreshold_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
        // healthCheckCodes Field Functions 
        bool hasHealthCheckCodes() const { return this->healthCheckCodes_ != nullptr;};
        void deleteHealthCheckCodes() { this->healthCheckCodes_ = nullptr;};
        inline const vector<string> & getHealthCheckCodes() const { DARABONBA_PTR_GET_CONST(healthCheckCodes_, vector<string>) };
        inline vector<string> getHealthCheckCodes() { DARABONBA_PTR_GET(healthCheckCodes_, vector<string>) };
        inline HealthCheckConfig& setHealthCheckCodes(const vector<string> & healthCheckCodes) { DARABONBA_PTR_SET_VALUE(healthCheckCodes_, healthCheckCodes) };
        inline HealthCheckConfig& setHealthCheckCodes(vector<string> && healthCheckCodes) { DARABONBA_PTR_SET_RVALUE(healthCheckCodes_, healthCheckCodes) };


        // healthCheckConnectPort Field Functions 
        bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
        void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
        inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
        inline HealthCheckConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


        // healthCheckEnabled Field Functions 
        bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
        void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
        inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
        inline HealthCheckConfig& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


        // healthCheckHost Field Functions 
        bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
        void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
        inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
        inline HealthCheckConfig& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


        // healthCheckHttpVersion Field Functions 
        bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
        void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
        inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
        inline HealthCheckConfig& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


        // healthCheckInterval Field Functions 
        bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
        void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
        inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
        inline HealthCheckConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


        // healthCheckMethod Field Functions 
        bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
        void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
        inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
        inline HealthCheckConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


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


        // healthCheckTimeout Field Functions 
        bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
        void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
        inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
        inline HealthCheckConfig& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


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
        // The HTTP status codes that indicate healthy backend servers.
        shared_ptr<vector<string>> healthCheckCodes_ {};
        // The backend port that is used for health checks. Valid values: **0** to **65535**.
        // 
        // A value of **0** indicates that the port of a backend server is used for health checks.
        shared_ptr<int32_t> healthCheckConnectPort_ {};
        // Indicates whether the health check feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> healthCheckEnabled_ {};
        // The domain name that is used for health checks.
        // 
        // *   **Backend Server Internal IP** (default): Use the internal IP address of backend servers as the health check domain name.
        // 
        // *   **Custom Domain Name**: Enter a domain name.
        // 
        //     *   The domain name is 1 to 80 characters in length.
        //     *   The domain name contains lowercase letters, digits, hyphens (-), and periods (.).
        //     *   The domain name contains at least one period (.) but does not start or end with a period (.).
        //     *   The rightmost domain label of the domain name contains only letters, and does not contain digits or hyphens (-).
        //     *   The domain name does not start or end with a hyphen (-).
        // 
        // >  This parameter takes effect only if HealthCheckProtocol is set to HTTP, HTTPS, or gRPC.
        shared_ptr<string> healthCheckHost_ {};
        // The HTTP version that is used for health checks.
        // 
        // Valid values: **HTTP1.0** and **HTTP1.1**.
        // 
        // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
        shared_ptr<string> healthCheckHttpVersion_ {};
        // The interval at which health checks are performed. Unit: seconds. Valid values: **1** to **50**.
        shared_ptr<int32_t> healthCheckInterval_ {};
        // The HTTP method that is used for health checks. Valid values:
        // 
        // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
        // *   **POST**: gRPC health checks use the POST method by default.
        // *   **HEAD**: HTTP and HTTPS health checks use the HEAD method by default.
        // 
        // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, or **gRPC**.
        shared_ptr<string> healthCheckMethod_ {};
        // The URL that is used for health checks.
        // 
        // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
        shared_ptr<string> healthCheckPath_ {};
        // The protocol that is used for health checks. Valid values:
        // 
        // *   **HTTP**: HTTP health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers.
        // *   **HTTPS**: HTTPS health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers. HTTPS supports encryption and provides higher security than HTTP.
        // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to check whether the port of the backend server is reachable.
        // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to check whether the backend server is healthy.
        shared_ptr<string> healthCheckProtocol_ {};
        // The timeout period of a health check response. If a backend server does not respond within the specified timeout period, the backend server is declared unhealthy. Unit: seconds.
        shared_ptr<int32_t> healthCheckTimeout_ {};
        // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**.
        shared_ptr<int32_t> healthyThreshold_ {};
        // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
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
        shared_ptr<int32_t> connectionDrainTimeout_ {};
      };

      virtual bool empty() const override { return this->configManagedEnabled_ == nullptr
        && this->connectionDrainConfig_ == nullptr && this->createTime_ == nullptr && this->crossZoneEnabled_ == nullptr && this->healthCheckConfig_ == nullptr && this->ipv6Enabled_ == nullptr
        && this->protocol_ == nullptr && this->relatedLoadBalancerIds_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduler_ == nullptr && this->serverCount_ == nullptr
        && this->serverGroupId_ == nullptr && this->serverGroupName_ == nullptr && this->serverGroupStatus_ == nullptr && this->serverGroupType_ == nullptr && this->serviceName_ == nullptr
        && this->slowStartConfig_ == nullptr && this->stickySessionConfig_ == nullptr && this->tags_ == nullptr && this->uchConfig_ == nullptr && this->upstreamKeepaliveEnabled_ == nullptr
        && this->vpcId_ == nullptr; };
      // configManagedEnabled Field Functions 
      bool hasConfigManagedEnabled() const { return this->configManagedEnabled_ != nullptr;};
      void deleteConfigManagedEnabled() { this->configManagedEnabled_ = nullptr;};
      inline bool getConfigManagedEnabled() const { DARABONBA_PTR_GET_DEFAULT(configManagedEnabled_, false) };
      inline ServerGroups& setConfigManagedEnabled(bool configManagedEnabled) { DARABONBA_PTR_SET_VALUE(configManagedEnabled_, configManagedEnabled) };


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


      // crossZoneEnabled Field Functions 
      bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
      void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
      inline bool getCrossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
      inline ServerGroups& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


      // healthCheckConfig Field Functions 
      bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
      void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
      inline const ServerGroups::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, ServerGroups::HealthCheckConfig) };
      inline ServerGroups::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, ServerGroups::HealthCheckConfig) };
      inline ServerGroups& setHealthCheckConfig(const ServerGroups::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
      inline ServerGroups& setHealthCheckConfig(ServerGroups::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


      // ipv6Enabled Field Functions 
      bool hasIpv6Enabled() const { return this->ipv6Enabled_ != nullptr;};
      void deleteIpv6Enabled() { this->ipv6Enabled_ = nullptr;};
      inline bool getIpv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(ipv6Enabled_, false) };
      inline ServerGroups& setIpv6Enabled(bool ipv6Enabled) { DARABONBA_PTR_SET_VALUE(ipv6Enabled_, ipv6Enabled) };


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


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ServerGroups& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // slowStartConfig Field Functions 
      bool hasSlowStartConfig() const { return this->slowStartConfig_ != nullptr;};
      void deleteSlowStartConfig() { this->slowStartConfig_ = nullptr;};
      inline const ServerGroups::SlowStartConfig & getSlowStartConfig() const { DARABONBA_PTR_GET_CONST(slowStartConfig_, ServerGroups::SlowStartConfig) };
      inline ServerGroups::SlowStartConfig getSlowStartConfig() { DARABONBA_PTR_GET(slowStartConfig_, ServerGroups::SlowStartConfig) };
      inline ServerGroups& setSlowStartConfig(const ServerGroups::SlowStartConfig & slowStartConfig) { DARABONBA_PTR_SET_VALUE(slowStartConfig_, slowStartConfig) };
      inline ServerGroups& setSlowStartConfig(ServerGroups::SlowStartConfig && slowStartConfig) { DARABONBA_PTR_SET_RVALUE(slowStartConfig_, slowStartConfig) };


      // stickySessionConfig Field Functions 
      bool hasStickySessionConfig() const { return this->stickySessionConfig_ != nullptr;};
      void deleteStickySessionConfig() { this->stickySessionConfig_ = nullptr;};
      inline const ServerGroups::StickySessionConfig & getStickySessionConfig() const { DARABONBA_PTR_GET_CONST(stickySessionConfig_, ServerGroups::StickySessionConfig) };
      inline ServerGroups::StickySessionConfig getStickySessionConfig() { DARABONBA_PTR_GET(stickySessionConfig_, ServerGroups::StickySessionConfig) };
      inline ServerGroups& setStickySessionConfig(const ServerGroups::StickySessionConfig & stickySessionConfig) { DARABONBA_PTR_SET_VALUE(stickySessionConfig_, stickySessionConfig) };
      inline ServerGroups& setStickySessionConfig(ServerGroups::StickySessionConfig && stickySessionConfig) { DARABONBA_PTR_SET_RVALUE(stickySessionConfig_, stickySessionConfig) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ServerGroups::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ServerGroups::Tags>) };
      inline vector<ServerGroups::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ServerGroups::Tags>) };
      inline ServerGroups& setTags(const vector<ServerGroups::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ServerGroups& setTags(vector<ServerGroups::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // uchConfig Field Functions 
      bool hasUchConfig() const { return this->uchConfig_ != nullptr;};
      void deleteUchConfig() { this->uchConfig_ = nullptr;};
      inline const ServerGroups::UchConfig & getUchConfig() const { DARABONBA_PTR_GET_CONST(uchConfig_, ServerGroups::UchConfig) };
      inline ServerGroups::UchConfig getUchConfig() { DARABONBA_PTR_GET(uchConfig_, ServerGroups::UchConfig) };
      inline ServerGroups& setUchConfig(const ServerGroups::UchConfig & uchConfig) { DARABONBA_PTR_SET_VALUE(uchConfig_, uchConfig) };
      inline ServerGroups& setUchConfig(ServerGroups::UchConfig && uchConfig) { DARABONBA_PTR_SET_RVALUE(uchConfig_, uchConfig) };


      // upstreamKeepaliveEnabled Field Functions 
      bool hasUpstreamKeepaliveEnabled() const { return this->upstreamKeepaliveEnabled_ != nullptr;};
      void deleteUpstreamKeepaliveEnabled() { this->upstreamKeepaliveEnabled_ = nullptr;};
      inline bool getUpstreamKeepaliveEnabled() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepaliveEnabled_, false) };
      inline ServerGroups& setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) { DARABONBA_PTR_SET_VALUE(upstreamKeepaliveEnabled_, upstreamKeepaliveEnabled) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ServerGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // Indicates whether configuration management is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> configManagedEnabled_ {};
      // The configurations of connection draining.
      // 
      // After connection draining is enabled, ALB maintains data transmission for a period of time after the backend server is removed or declared unhealthy.
      // > 
      // > - Basic ALB instances do not support connection draining. Standard and WAF-enabled ALB instances support connection draining. 
      // > -  Server groups of the instance and IP types support connection draining. Server groups of the Function Compute type do not support connection draining.
      shared_ptr<ServerGroups::ConnectionDrainConfig> connectionDrainConfig_ {};
      // The time when the resource was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether cross-zone load balancing is enabled. Valid values:
      // 
      // *   **true** (default)
      // *   **false**
      shared_ptr<bool> crossZoneEnabled_ {};
      // The health check configurations.
      shared_ptr<ServerGroups::HealthCheckConfig> healthCheckConfig_ {};
      // Indicates whether IPv6 is supported. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> ipv6Enabled_ {};
      // The backend protocol. Valid values:
      // 
      // *   **HTTP**: allows you to associate HTTPS, HTTP, or QUIC listeners with backend servers.
      // *   **HTTPS**: allows you to associate HTTPS listeners with backend servers.
      // *   **GRPC**: allows you to associate HTTPS and QUIC listeners with backend servers.
      shared_ptr<string> protocol_ {};
      // The ID of the ALB instance associated with the server group.
      shared_ptr<vector<string>> relatedLoadBalancerIds_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The scheduling algorithm. Valid values:
      // 
      // *   **Wrr**: weighted round-robin. Backend servers with higher weights receive more requests than backend servers with lower weights.
      // *   **Wlc**: weighted least connections. Requests are distributed based on the weight and load of each backend server. The load refers to the number of connections on a backend server. If multiple backend servers have the same weight, requests are forwarded to the backend server with the least number of connections.
      // *   **Sch**: consistent hashing. Requests that have the same hash factors are distributed to the same backend server. If you do not specify the UchConfig parameter, the source IP address is used as the hash factor by default. Requests that are from the same IP address are distributed to the same backend server. If you specify the UchConfig parameter, the URL string is used as the hash factor. Requests that have the same URL string are distributed to the same backend server.
      shared_ptr<string> scheduler_ {};
      // The number of backend servers in the server group.
      shared_ptr<int32_t> serverCount_ {};
      // The server group ID.
      shared_ptr<string> serverGroupId_ {};
      // The server group name.
      shared_ptr<string> serverGroupName_ {};
      // The status of the server group. Valid values:
      // 
      // *   **Creating**.
      // *   **Available**
      // *   **Configuring**
      shared_ptr<string> serverGroupStatus_ {};
      // The server group type. Valid values:
      // 
      // *   **Instance**: instances, including ECS instances, ENIs, and elastic container instances.
      // *   **Ip**: IP addresses.
      // *   **Fc**: Function Compute
      shared_ptr<string> serverGroupType_ {};
      // The name of the server group.
      shared_ptr<string> serviceName_ {};
      // The configurations of slow starts.
      // 
      // After slow starts are enabled, ALB prefetches data to newly added backend servers. Requests distributed to the backend servers gradually increase.
      // 
      // > 
      // > - Basic ALB instances do not support slow starts. Standard and WAF-enabled ALB instances support slow starts.
      // > - Server groups of the instance and IP types support slow starts. Server groups of the Function Compute type do not support slow starts.
      // > - Slow start is supported only by the weighted round-robin scheduling algorithm.
      shared_ptr<ServerGroups::SlowStartConfig> slowStartConfig_ {};
      // The configuration of session persistence.
      shared_ptr<ServerGroups::StickySessionConfig> stickySessionConfig_ {};
      // The tags that are added to the server group.
      shared_ptr<vector<ServerGroups::Tags>> tags_ {};
      // The configuration of consistent hashing based on URLs.
      shared_ptr<ServerGroups::UchConfig> uchConfig_ {};
      // Indicates whether persistent TCP connections are enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> upstreamKeepaliveEnabled_ {};
      // The ID of the VPC to which the ALB instance belongs.
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
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If **NextToken** is not empty, the value of NextToken can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The server groups.
    shared_ptr<vector<ListServerGroupsResponseBody::ServerGroups>> serverGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
