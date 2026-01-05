// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
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
  class CreateServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Ipv6Enabled, ipv6Enabled_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_TO_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_TO_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Ipv6Enabled, ipv6Enabled_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_FROM_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_FROM_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateServerGroupRequest() = default ;
    CreateServerGroupRequest(const CreateServerGroupRequest &) = default ;
    CreateServerGroupRequest(CreateServerGroupRequest &&) = default ;
    CreateServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerGroupRequest() = default ;
    CreateServerGroupRequest& operator=(const CreateServerGroupRequest &) = default ;
    CreateServerGroupRequest& operator=(CreateServerGroupRequest &&) = default ;
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
      // The type of the parameter.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The parameter value for consistent hashing.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. The tag key can be up to 128 characters in length, and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 128 characters in length, and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
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
      // The cookie that you want to configure for the server.
      // 
      // The cookie must be 1 to 200 characters in length, and can contain only ASCII letters and digits. It cannot contain commas (,), semicolons (;), or space characters. It cannot start with a dollar sign ($).
      // 
      // >  This parameter takes effect only when **StickySessionEnabled** is set to **true** and **StickySessionType** is set to **server**.
      shared_ptr<string> cookie_ {};
      // The maximum amount of time to wait before the session cookie expires. Unit: seconds
      // 
      // Valid values: **1** to **86400**
      // 
      // Default value: **1000**
      // 
      // >  This parameter takes effect only when **StickySessionEnabled** is set to **true** and **StickySessionType** is set to **Insert**.
      shared_ptr<int32_t> cookieTimeout_ {};
      // Specifies whether to enable session persistence. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
      shared_ptr<bool> stickySessionEnabled_ {};
      // The method that is used to handle cookies. Valid values:
      // 
      // *   **Insert** (default value): inserts a cookie. The first time a client accesses ALB, ALB inserts the SERVERID cookie into the HTTP or HTTPS response packet. Subsequent requests from the client that carry this cookie are forwarded to the same backend server as the first request.
      // *   **Server**: rewrites a cookie. ALB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
      // 
      // >  This parameter takes effect when the **StickySessionEnabled** parameter is set to **true**.
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
      // Valid values: 30 to 900.
      // Default value: 30.
      shared_ptr<int32_t> slowStartDuration_ {};
      // Specifies whether to enable slow starts. Valid values:
      // 
      // - true
      // 
      // - false(default)
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
      // The HTTP status code that indicates healthy backend servers.
      shared_ptr<vector<string>> healthCheckCodes_ {};
      // The backend port that is used for health checks.
      // 
      // Valid values: **0** to **65535**
      // 
      // The default value is **0**, which specifies that the port of a backend server is used for health checks.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // Specifies whether to enable the health check feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // >  If the **ServerGroupType** parameter is set to **Instance** or **Ip**, the health check feature is enabled by default. If the **ServerGroupType** parameter is set to **Fc**, the health check feature is disabled by default.
      // 
      // This parameter is required.
      shared_ptr<bool> healthCheckEnabled_ {};
      // The domain name that is used for health checks.
      // 
      // *   **Backend Server Internal IP** (default): Use the internal IP address of backend servers as the health check domain name.
      // 
      // *   **Custom Domain Name**: Enter a domain name.
      // 
      //     *   The domain name must be 1 to 80 characters in length.
      //     *   The domain name can contain lowercase letters, digits, hyphens (-), and periods (.).
      //     *   The domain name must contain at least one period (.) but cannot start or end with a period (.).
      //     *   The rightmost domain label of the domain name can contain only letters, and cannot contain digits or hyphens (-).
      //     *   The domain name cannot start or end with a hyphen (-).
      // 
      // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, or **gRPC**.
      shared_ptr<string> healthCheckHost_ {};
      // The version of the HTTP protocol. Valid values: **HTTP1.0** and **HTTP1.1**. Default value: HTTP1.1.
      // 
      // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
      shared_ptr<string> healthCheckHttpVersion_ {};
      // The interval at which health checks are performed. Unit: seconds
      // 
      // Valid values: **1** to **50**
      // 
      // Default value: **2**.
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The HTTP method that is used for health checks. Valid values:
      // 
      // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
      // *   **POST**: By default, gRPC health checks use the POST method.
      // *   **HEAD** (default): By default, HTTP and HTTPS use the HEAD method.
      // 
      // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, or **gRPC**.
      shared_ptr<string> healthCheckMethod_ {};
      // The URL that is used for health checks.
      // 
      // The URL must be 1 to 80 characters in length, and can contain letters, digits, and the following special characters: `- / . % ? # & =`. It can also contain the following extended characters: `_ ; ~ ! ( ) * [ ] @ $ ^ : \\" , +`. The URL must start with a forward slash (/).
      // 
      // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
      shared_ptr<string> healthCheckPath_ {};
      // The protocol that is used for health checks. Valid values:
      // 
      // *   **HTTP**: HTTP health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers.
      // *   **HTTPS**: HTTPS health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers. HTTPS provides higher security than HTTP because HTTPS supports data encryption.
      // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to probe the availability of backend servers.
      // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to check whether the backend server is healthy.
      shared_ptr<string> healthCheckProtocol_ {};
      // The timeout period of a health check response. If a backend server does not respond within the specified timeout period, the backend server is declared unhealthy. Unit: seconds
      // 
      // Valid values: **1** to **300**
      // 
      // Default value: **5**
      shared_ptr<int32_t> healthCheckTimeout_ {};
      // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
      // 
      // Valid values: **2** to **10**
      // 
      // Default value: **3**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
      // 
      // Valid values: **2** to **10**
      // 
      // Default value: **3**
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
      // Specifies whether to enable connection draining. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> connectionDrainEnabled_ {};
      // The timeout period of connection draining.
      // 
      // Valid values: **0** to **900**.
      // 
      // Default value: **300**.
      shared_ptr<int32_t> connectionDrainTimeout_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionDrainConfig_ == nullptr && this->crossZoneEnabled_ == nullptr && this->dryRun_ == nullptr && this->healthCheckConfig_ == nullptr && this->ipv6Enabled_ == nullptr
        && this->protocol_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduler_ == nullptr && this->serverGroupName_ == nullptr && this->serverGroupType_ == nullptr
        && this->serviceName_ == nullptr && this->slowStartConfig_ == nullptr && this->stickySessionConfig_ == nullptr && this->tag_ == nullptr && this->uchConfig_ == nullptr
        && this->upstreamKeepaliveEnabled_ == nullptr && this->vpcId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const CreateServerGroupRequest::ConnectionDrainConfig & getConnectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, CreateServerGroupRequest::ConnectionDrainConfig) };
    inline CreateServerGroupRequest::ConnectionDrainConfig getConnectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, CreateServerGroupRequest::ConnectionDrainConfig) };
    inline CreateServerGroupRequest& setConnectionDrainConfig(const CreateServerGroupRequest::ConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline CreateServerGroupRequest& setConnectionDrainConfig(CreateServerGroupRequest::ConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool getCrossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline CreateServerGroupRequest& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const CreateServerGroupRequest::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, CreateServerGroupRequest::HealthCheckConfig) };
    inline CreateServerGroupRequest::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, CreateServerGroupRequest::HealthCheckConfig) };
    inline CreateServerGroupRequest& setHealthCheckConfig(const CreateServerGroupRequest::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline CreateServerGroupRequest& setHealthCheckConfig(CreateServerGroupRequest::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // ipv6Enabled Field Functions 
    bool hasIpv6Enabled() const { return this->ipv6Enabled_ != nullptr;};
    void deleteIpv6Enabled() { this->ipv6Enabled_ = nullptr;};
    inline bool getIpv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(ipv6Enabled_, false) };
    inline CreateServerGroupRequest& setIpv6Enabled(bool ipv6Enabled) { DARABONBA_PTR_SET_VALUE(ipv6Enabled_, ipv6Enabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateServerGroupRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline CreateServerGroupRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string getServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline CreateServerGroupRequest& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


    // serverGroupType Field Functions 
    bool hasServerGroupType() const { return this->serverGroupType_ != nullptr;};
    void deleteServerGroupType() { this->serverGroupType_ = nullptr;};
    inline string getServerGroupType() const { DARABONBA_PTR_GET_DEFAULT(serverGroupType_, "") };
    inline CreateServerGroupRequest& setServerGroupType(string serverGroupType) { DARABONBA_PTR_SET_VALUE(serverGroupType_, serverGroupType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateServerGroupRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // slowStartConfig Field Functions 
    bool hasSlowStartConfig() const { return this->slowStartConfig_ != nullptr;};
    void deleteSlowStartConfig() { this->slowStartConfig_ = nullptr;};
    inline const CreateServerGroupRequest::SlowStartConfig & getSlowStartConfig() const { DARABONBA_PTR_GET_CONST(slowStartConfig_, CreateServerGroupRequest::SlowStartConfig) };
    inline CreateServerGroupRequest::SlowStartConfig getSlowStartConfig() { DARABONBA_PTR_GET(slowStartConfig_, CreateServerGroupRequest::SlowStartConfig) };
    inline CreateServerGroupRequest& setSlowStartConfig(const CreateServerGroupRequest::SlowStartConfig & slowStartConfig) { DARABONBA_PTR_SET_VALUE(slowStartConfig_, slowStartConfig) };
    inline CreateServerGroupRequest& setSlowStartConfig(CreateServerGroupRequest::SlowStartConfig && slowStartConfig) { DARABONBA_PTR_SET_RVALUE(slowStartConfig_, slowStartConfig) };


    // stickySessionConfig Field Functions 
    bool hasStickySessionConfig() const { return this->stickySessionConfig_ != nullptr;};
    void deleteStickySessionConfig() { this->stickySessionConfig_ = nullptr;};
    inline const CreateServerGroupRequest::StickySessionConfig & getStickySessionConfig() const { DARABONBA_PTR_GET_CONST(stickySessionConfig_, CreateServerGroupRequest::StickySessionConfig) };
    inline CreateServerGroupRequest::StickySessionConfig getStickySessionConfig() { DARABONBA_PTR_GET(stickySessionConfig_, CreateServerGroupRequest::StickySessionConfig) };
    inline CreateServerGroupRequest& setStickySessionConfig(const CreateServerGroupRequest::StickySessionConfig & stickySessionConfig) { DARABONBA_PTR_SET_VALUE(stickySessionConfig_, stickySessionConfig) };
    inline CreateServerGroupRequest& setStickySessionConfig(CreateServerGroupRequest::StickySessionConfig && stickySessionConfig) { DARABONBA_PTR_SET_RVALUE(stickySessionConfig_, stickySessionConfig) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServerGroupRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServerGroupRequest::Tag>) };
    inline vector<CreateServerGroupRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateServerGroupRequest::Tag>) };
    inline CreateServerGroupRequest& setTag(const vector<CreateServerGroupRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServerGroupRequest& setTag(vector<CreateServerGroupRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // uchConfig Field Functions 
    bool hasUchConfig() const { return this->uchConfig_ != nullptr;};
    void deleteUchConfig() { this->uchConfig_ = nullptr;};
    inline const CreateServerGroupRequest::UchConfig & getUchConfig() const { DARABONBA_PTR_GET_CONST(uchConfig_, CreateServerGroupRequest::UchConfig) };
    inline CreateServerGroupRequest::UchConfig getUchConfig() { DARABONBA_PTR_GET(uchConfig_, CreateServerGroupRequest::UchConfig) };
    inline CreateServerGroupRequest& setUchConfig(const CreateServerGroupRequest::UchConfig & uchConfig) { DARABONBA_PTR_SET_VALUE(uchConfig_, uchConfig) };
    inline CreateServerGroupRequest& setUchConfig(CreateServerGroupRequest::UchConfig && uchConfig) { DARABONBA_PTR_SET_RVALUE(uchConfig_, uchConfig) };


    // upstreamKeepaliveEnabled Field Functions 
    bool hasUpstreamKeepaliveEnabled() const { return this->upstreamKeepaliveEnabled_ != nullptr;};
    void deleteUpstreamKeepaliveEnabled() { this->upstreamKeepaliveEnabled_ = nullptr;};
    inline bool getUpstreamKeepaliveEnabled() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepaliveEnabled_, false) };
    inline CreateServerGroupRequest& setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) { DARABONBA_PTR_SET_VALUE(upstreamKeepaliveEnabled_, upstreamKeepaliveEnabled) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateServerGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The configurations of connection draining.
    // 
    // After connection draining is enabled, ALB maintains data transmission for a period of time after the backend server is removed or declared unhealthy.
    // 
    // 
    // >*   Basic ALB instances do not support connection draining. Standard and WAF-enabled ALB instances support connection draining.
    // >*   Server groups of the instance and IP types support connection draining. Server groups of the Function Compute type do not support connection draining.
    shared_ptr<CreateServerGroupRequest::ConnectionDrainConfig> connectionDrainConfig_ {};
    // Specifies whether to enable cross-zone load balancing. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > *   Basic ALB instances do not support server groups that have cross-zone load balancing disabled. Only Standard and WAF-enabled ALB instances support server groups that have cross-zone load balancing.
    // > *   Cross-zone load balancing can be disabled for server groups of the server and IP type, but not for server groups of the Function Compute type.
    // > *   When cross-zone load balancing is disabled, session persistence cannot be enabled.
    shared_ptr<bool> crossZoneEnabled_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The configuration of the health check feature.
    // 
    // This parameter is required.
    shared_ptr<CreateServerGroupRequest::HealthCheckConfig> healthCheckConfig_ {};
    // Specifies whether to enable Ipv6.
    shared_ptr<bool> ipv6Enabled_ {};
    // The backend protocol. Valid values:
    // 
    // *   **HTTP**: allows you to associate an HTTPS, HTTP, or QUIC listener with the server group. This is the default value.
    // *   **HTTPS**: allows you to associate HTTPS listeners with backend servers.
    // *   **gRPC**: allows you to associate an HTTPS or QUIC listener with the server group.
    // 
    // >  You do not need to specify a backend protocol if you set **ServerGroupType** to **Fc**.
    shared_ptr<string> protocol_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr** (default): The weighted round-robin algorithm is used. Backend servers that have higher weights receive more requests than those that have lower weights.
    // *   **Wlc**: The weighted least connections algorithm is used. Requests are distributed based on the weights and the number of connections to backend servers. If two backend servers have the same weight, the backend server that has fewer connections is expected to receive more requests.
    // *   **Sch**: The consistent hashing algorithm is used. Requests from the same source IP address are distributed to the same backend server.
    // 
    // > This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    shared_ptr<string> scheduler_ {};
    // The name of the server group. The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupName_ {};
    // The type of server group. Valid values:
    // 
    // *   **Instance** (default): allows you to add servers by specifying **Ecs**, **Eni**, or **Eci**.
    // *   **Ip**: allows you to add servers by specifying IP addresses.
    // *   **Fc**: allows you to add servers by specifying functions of Function Compute.
    shared_ptr<string> serverGroupType_ {};
    // This parameter is available only if the ALB Ingress controller is used. In this case, set this parameter to the name of the `Kubernetes Service` that is associated with the server group.
    shared_ptr<string> serviceName_ {};
    // The configurations of slow starts.
    // After slow starts are enabled, SLB prefetches data to newly added backend servers. Requests distributed to the backend servers gradually increase.
    // 
    // > - Basic SLB instances do not support slow starts. Standard and WAF-enabled SLB instances support slow starts. 
    // >* Server groups of the server and IP types support slow starts. Server groups of the Function Compute type do not support slow starts.
    // >* Slow start is supported only by the weighted round-robin scheduling algorithm.
    shared_ptr<CreateServerGroupRequest::SlowStartConfig> slowStartConfig_ {};
    // The configuration of session persistence.
    // 
    // >  This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    shared_ptr<CreateServerGroupRequest::StickySessionConfig> stickySessionConfig_ {};
    // The tag.
    shared_ptr<vector<CreateServerGroupRequest::Tag>> tag_ {};
    // The configuration of consistent hashing based on URLs.
    shared_ptr<CreateServerGroupRequest::UchConfig> uchConfig_ {};
    // Specifies whether to enable persistent TCP connections.
    shared_ptr<bool> upstreamKeepaliveEnabled_ {};
    // The ID of the virtual private cloud (VPC). You can add only servers that are deployed in the specified VPC to the server group.
    // 
    // >  This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
