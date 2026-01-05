// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
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
  class UpdateServerGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_TO_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_TO_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_TO_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_FROM_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_FROM_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_FROM_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
    };
    UpdateServerGroupAttributeRequest() = default ;
    UpdateServerGroupAttributeRequest(const UpdateServerGroupAttributeRequest &) = default ;
    UpdateServerGroupAttributeRequest(UpdateServerGroupAttributeRequest &&) = default ;
    UpdateServerGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupAttributeRequest() = default ;
    UpdateServerGroupAttributeRequest& operator=(const UpdateServerGroupAttributeRequest &) = default ;
    UpdateServerGroupAttributeRequest& operator=(UpdateServerGroupAttributeRequest &&) = default ;
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
      // The type of the parameter. Only query strings are supported.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
      // The value of the parameter used for consistent hashing.
      // 
      // This parameter is required.
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
      // The cookie to be configured on the server.
      // 
      // The cookie must be 1 to 200 characters in length and can contain only ASCII characters and digits. It cannot contain commas (,), semicolons (;), or space characters. It cannot start with a dollar sign ($).
      // 
      // > This parameter takes effect when the **StickySessionEnabled** parameter is set to **true** and the **StickySessionType** parameter is set to **Server**.
      shared_ptr<string> cookie_ {};
      // The timeout period of a cookie. Unit: seconds.
      // 
      // Valid values: **1** to **86400**.
      // 
      // > This parameter takes effect when the **StickySessionEnabled** parameter is set to **true** and the **StickySessionType** parameter is set to **Insert**.
      shared_ptr<int32_t> cookieTimeout_ {};
      // Specifies whether to enable session persistence. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> stickySessionEnabled_ {};
      // The method that is used to handle a cookie. Valid values:
      // 
      // *   **Insert**: inserts a cookie.
      // 
      // ALB inserts a cookie (SERVERID) into the first HTTP or HTTPS response packet that is sent to a client. The next request from the client contains this cookie and the listener forwards this request to the recorded backend server.
      // 
      // *   **Server**: rewrites a cookie.
      // 
      // When ALB detects a user-defined cookie, it overwrites the original cookie with the user-defined cookie. Subsequent requests to ALB carry this user-defined cookie, and ALB determines the destination servers of the requests based on the cookies.
      // 
      // > This parameter takes effect when the **StickySessionEnabled** parameter is set to **true** for the server group.
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
      // The backend port that is used for health checks.
      // 
      // Valid values: **0** to **65535**.
      // 
      // If you set the value to **0**, the backend port is used for health checks.
      // 
      // >  This parameter takes effect only if you set **HealthCheckEnabled** to **true**.
      shared_ptr<int32_t> healthCheckConnectPort_ {};
      // Specifies whether to enable the health check feature. Valid values:
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
      //     *   The domain name must be 1 to 80 characters in length.
      //     *   The domain name can contain lowercase letters, digits, hyphens (-), and periods (.).
      //     *   The domain name must contain at least one period (.) but cannot start or end with a period (.).
      //     *   The rightmost domain label of the domain name can contain only letters, and cannot contain digits or hyphens (-).
      //     *   The domain name cannot start or end with a hyphen (-).
      // 
      // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, or **gRPC**.
      shared_ptr<string> healthCheckHost_ {};
      // The HTTP version that is used for health checks. Valid values:
      // 
      // *   **HTTP1.0**
      // *   **HTTP1.1**
      // 
      // >  This parameter takes effect only if you set **HealthCheckEnabled** to true and **HealthCheckProtocol** to **HTTP** or **HTTPS**.
      shared_ptr<string> healthCheckHttpVersion_ {};
      // The interval at which health checks are performed. Unit: seconds.
      // 
      // Valid values: **1** to **50**.
      // 
      // >  This parameter takes effect only if you set **HealthCheckEnabled** to **true**.
      shared_ptr<int32_t> healthCheckInterval_ {};
      // The HTTP method that is used for health checks. Valid values:
      // 
      // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
      // *   **POST**: gRPC health checks use the POST method by default.
      // *   **HEAD**: HTTP and HTTPS health checks use the HEAD method by default.
      // 
      // >  This parameter takes effect only if you set **HealthCheckEnabled** to true and **HealthCheckProtocol** to **HTTP**, **HTTPS**, or **gRPC**.
      shared_ptr<string> healthCheckMethod_ {};
      // The URL that is used for health checks.
      // 
      // The URL must be 1 to 80 characters in length, and can contain letters, digits, and the following special characters: `- / . % ? # & =`. It can also contain the following extended characters: `_ ; ~ ! ( ) * [ ] @ $ ^ : \\" , +`. The URL must start with a forward slash (`/`).
      // 
      // >  This parameter takes effect only if you set **HealthCheckEnabled** to **true** and **HealthCheckProtocol** to **HTTP** or **HTTPS**.
      shared_ptr<string> healthCheckPath_ {};
      // The protocol that you want to use for health checks. Valid values:
      // 
      // *   **HTTP**: HTTP health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers.
      // *   **HTTPS**: HTTPS health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers. HTTPS supports encryption and provides higher security than HTTP.
      // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to probe the availability of backend servers.
      // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to check whether the backend server is healthy.
      shared_ptr<string> healthCheckProtocol_ {};
      // The timeout period of a health check response. If a backend ECS instance does not respond within the specified timeout period, the ECS instance fails the health check. Unit: seconds.
      // 
      // Valid values: **1** to **300**.
      // 
      // >  This parameter takes effect only if you set **HealthCheckEnabled** to **true**.
      shared_ptr<int32_t> healthCheckTimeout_ {};
      // The number of times that an unhealthy backend server must consecutively pass health checks before it can be declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
      // 
      // Valid values: **2** to **10**.
      shared_ptr<int32_t> healthyThreshold_ {};
      // The number of times that a healthy backend server must consecutively fail health checks before it can be declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
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
      // Specifies whether to enable connection draining. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> connectionDrainEnabled_ {};
      // The timeout period of connection draining.
      // 
      // Valid values: **0** to **900**.
      shared_ptr<int32_t> connectionDrainTimeout_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->connectionDrainConfig_ == nullptr && this->crossZoneEnabled_ == nullptr && this->dryRun_ == nullptr && this->healthCheckConfig_ == nullptr && this->scheduler_ == nullptr
        && this->serverGroupId_ == nullptr && this->serverGroupName_ == nullptr && this->serviceName_ == nullptr && this->slowStartConfig_ == nullptr && this->stickySessionConfig_ == nullptr
        && this->uchConfig_ == nullptr && this->upstreamKeepaliveEnabled_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServerGroupAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::ConnectionDrainConfig & getConnectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, UpdateServerGroupAttributeRequest::ConnectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest::ConnectionDrainConfig getConnectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, UpdateServerGroupAttributeRequest::ConnectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainConfig(const UpdateServerGroupAttributeRequest::ConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainConfig(UpdateServerGroupAttributeRequest::ConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool getCrossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline UpdateServerGroupAttributeRequest& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServerGroupAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, UpdateServerGroupAttributeRequest::HealthCheckConfig) };
    inline UpdateServerGroupAttributeRequest::HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, UpdateServerGroupAttributeRequest::HealthCheckConfig) };
    inline UpdateServerGroupAttributeRequest& setHealthCheckConfig(const UpdateServerGroupAttributeRequest::HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline UpdateServerGroupAttributeRequest& setHealthCheckConfig(UpdateServerGroupAttributeRequest::HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateServerGroupAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateServerGroupAttributeRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string getServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline UpdateServerGroupAttributeRequest& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateServerGroupAttributeRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // slowStartConfig Field Functions 
    bool hasSlowStartConfig() const { return this->slowStartConfig_ != nullptr;};
    void deleteSlowStartConfig() { this->slowStartConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::SlowStartConfig & getSlowStartConfig() const { DARABONBA_PTR_GET_CONST(slowStartConfig_, UpdateServerGroupAttributeRequest::SlowStartConfig) };
    inline UpdateServerGroupAttributeRequest::SlowStartConfig getSlowStartConfig() { DARABONBA_PTR_GET(slowStartConfig_, UpdateServerGroupAttributeRequest::SlowStartConfig) };
    inline UpdateServerGroupAttributeRequest& setSlowStartConfig(const UpdateServerGroupAttributeRequest::SlowStartConfig & slowStartConfig) { DARABONBA_PTR_SET_VALUE(slowStartConfig_, slowStartConfig) };
    inline UpdateServerGroupAttributeRequest& setSlowStartConfig(UpdateServerGroupAttributeRequest::SlowStartConfig && slowStartConfig) { DARABONBA_PTR_SET_RVALUE(slowStartConfig_, slowStartConfig) };


    // stickySessionConfig Field Functions 
    bool hasStickySessionConfig() const { return this->stickySessionConfig_ != nullptr;};
    void deleteStickySessionConfig() { this->stickySessionConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::StickySessionConfig & getStickySessionConfig() const { DARABONBA_PTR_GET_CONST(stickySessionConfig_, UpdateServerGroupAttributeRequest::StickySessionConfig) };
    inline UpdateServerGroupAttributeRequest::StickySessionConfig getStickySessionConfig() { DARABONBA_PTR_GET(stickySessionConfig_, UpdateServerGroupAttributeRequest::StickySessionConfig) };
    inline UpdateServerGroupAttributeRequest& setStickySessionConfig(const UpdateServerGroupAttributeRequest::StickySessionConfig & stickySessionConfig) { DARABONBA_PTR_SET_VALUE(stickySessionConfig_, stickySessionConfig) };
    inline UpdateServerGroupAttributeRequest& setStickySessionConfig(UpdateServerGroupAttributeRequest::StickySessionConfig && stickySessionConfig) { DARABONBA_PTR_SET_RVALUE(stickySessionConfig_, stickySessionConfig) };


    // uchConfig Field Functions 
    bool hasUchConfig() const { return this->uchConfig_ != nullptr;};
    void deleteUchConfig() { this->uchConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequest::UchConfig & getUchConfig() const { DARABONBA_PTR_GET_CONST(uchConfig_, UpdateServerGroupAttributeRequest::UchConfig) };
    inline UpdateServerGroupAttributeRequest::UchConfig getUchConfig() { DARABONBA_PTR_GET(uchConfig_, UpdateServerGroupAttributeRequest::UchConfig) };
    inline UpdateServerGroupAttributeRequest& setUchConfig(const UpdateServerGroupAttributeRequest::UchConfig & uchConfig) { DARABONBA_PTR_SET_VALUE(uchConfig_, uchConfig) };
    inline UpdateServerGroupAttributeRequest& setUchConfig(UpdateServerGroupAttributeRequest::UchConfig && uchConfig) { DARABONBA_PTR_SET_RVALUE(uchConfig_, uchConfig) };


    // upstreamKeepaliveEnabled Field Functions 
    bool hasUpstreamKeepaliveEnabled() const { return this->upstreamKeepaliveEnabled_ != nullptr;};
    void deleteUpstreamKeepaliveEnabled() { this->upstreamKeepaliveEnabled_ = nullptr;};
    inline bool getUpstreamKeepaliveEnabled() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepaliveEnabled_, false) };
    inline UpdateServerGroupAttributeRequest& setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) { DARABONBA_PTR_SET_VALUE(upstreamKeepaliveEnabled_, upstreamKeepaliveEnabled) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The configurations of connection draining.
    // 
    // After connection draining is enabled, SLB remains data transmission for a period of time after a backend server is removed or declared unhealthy.
    // 
    // > *   Basic SLB instances do not support connection draining. Standard and WAF-enabled SLB instances support connection draining.
    // > *   Server groups of the server and IP types support connection draining. Server groups of the Function Compute type do not support connection draining.
    shared_ptr<UpdateServerGroupAttributeRequest::ConnectionDrainConfig> connectionDrainConfig_ {};
    // Indicates whether cross-zone load balancing is enabled for the server group. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > *   Basic ALB instances do not support server groups that have cross-zone load balancing disabled. Only Standard and WAF-enabled ALB instances support server groups that have cross-zone load balancing.
    // >*   Cross-zone load balancing can be disabled for server groups of the server and IP type, but not for server groups of the Function Compute type.
    // >*   When cross-zone load balancing is disabled, session persistence cannot be enabled.
    shared_ptr<bool> crossZoneEnabled_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: checks the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx` HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The configuration of health checks.
    shared_ptr<UpdateServerGroupAttributeRequest::HealthCheckConfig> healthCheckConfig_ {};
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr**: the weighted round robin algorithm. Backend servers that have higher weights receive more requests than those that have lower weights.
    // *   **Wlc**: the weighted least connections algorithm. Requests are distributed based on the weights and the number of connections to backend servers. If two backend servers have the same weight, the backend server that has fewer connections is expected to receive more requests.
    // *   **Sch**: the consistent hashing algorithm. Requests from the same source IP address are distributed to the same backend server.
    shared_ptr<string> scheduler_ {};
    // The server group ID.
    // 
    // This parameter is required.
    shared_ptr<string> serverGroupId_ {};
    // The server group name.
    // 
    // The name must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> serverGroupName_ {};
    // This parameter is available only if the ALB Ingress controller is used. In this case, set this parameter to the name of the `Kubernetes Service` that is associated with the server group.
    shared_ptr<string> serviceName_ {};
    // The configurations of slow starts.
    // 
    // After slow starts are enabled, ALB prefetches data to newly added backend servers. Requests distributed to the backend servers gradually increase.
    // 
    // > *   Basic ALB instances do not support slow starts. Standard and WAF-enabled ALB instances support slow starts.
    // >*   Server groups of the instance and IP types support slow starts. Server groups of the Function Compute type do not support slow starts.
    // >*   Slow start is supported only by the weighted round-robin scheduling algorithm.
    shared_ptr<UpdateServerGroupAttributeRequest::SlowStartConfig> slowStartConfig_ {};
    // The configuration of session persistence.
    shared_ptr<UpdateServerGroupAttributeRequest::StickySessionConfig> stickySessionConfig_ {};
    // The configurations of consistent hashing based on URLs.
    shared_ptr<UpdateServerGroupAttributeRequest::UchConfig> uchConfig_ {};
    // Specifies whether to enable persistent TCP connections.
    shared_ptr<bool> upstreamKeepaliveEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
