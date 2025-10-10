// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSHEALTHCHECKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPSHEALTHCHECKCONFIG_HPP_
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
  class ListServerGroupsResponseBodyServerGroupsHealthCheckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& obj) { 
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
    ListServerGroupsResponseBodyServerGroupsHealthCheckConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsHealthCheckConfig(const ListServerGroupsResponseBodyServerGroupsHealthCheckConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsHealthCheckConfig(ListServerGroupsResponseBodyServerGroupsHealthCheckConfig &&) = default ;
    ListServerGroupsResponseBodyServerGroupsHealthCheckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsResponseBodyServerGroupsHealthCheckConfig() = default ;
    ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& operator=(const ListServerGroupsResponseBodyServerGroupsHealthCheckConfig &) = default ;
    ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& operator=(ListServerGroupsResponseBodyServerGroupsHealthCheckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthCheckCodes_ != nullptr
        && this->healthCheckConnectPort_ != nullptr && this->healthCheckEnabled_ != nullptr && this->healthCheckHost_ != nullptr && this->healthCheckHttpVersion_ != nullptr && this->healthCheckInterval_ != nullptr
        && this->healthCheckMethod_ != nullptr && this->healthCheckPath_ != nullptr && this->healthCheckProtocol_ != nullptr && this->healthCheckTimeout_ != nullptr && this->healthyThreshold_ != nullptr
        && this->unhealthyThreshold_ != nullptr; };
    // healthCheckCodes Field Functions 
    bool hasHealthCheckCodes() const { return this->healthCheckCodes_ != nullptr;};
    void deleteHealthCheckCodes() { this->healthCheckCodes_ = nullptr;};
    inline const vector<string> & healthCheckCodes() const { DARABONBA_PTR_GET_CONST(healthCheckCodes_, vector<string>) };
    inline vector<string> healthCheckCodes() { DARABONBA_PTR_GET(healthCheckCodes_, vector<string>) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckCodes(const vector<string> & healthCheckCodes) { DARABONBA_PTR_SET_VALUE(healthCheckCodes_, healthCheckCodes) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckCodes(vector<string> && healthCheckCodes) { DARABONBA_PTR_SET_RVALUE(healthCheckCodes_, healthCheckCodes) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckEnabled Field Functions 
    bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
    void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
    inline bool healthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string healthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckHttpVersion Field Functions 
    bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
    void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
    inline string healthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckPath Field Functions 
    bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
    void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
    inline string healthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


    // healthCheckProtocol Field Functions 
    bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
    void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
    inline string healthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline ListServerGroupsResponseBodyServerGroupsHealthCheckConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The HTTP status codes that indicate healthy backend servers.
    std::shared_ptr<vector<string>> healthCheckCodes_ = nullptr;
    // The backend port that is used for health checks. Valid values: **0** to **65535**.
    // 
    // A value of **0** indicates that the port of a backend server is used for health checks.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> healthCheckEnabled_ = nullptr;
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
    std::shared_ptr<string> healthCheckHost_ = nullptr;
    // The HTTP version that is used for health checks.
    // 
    // Valid values: **HTTP1.0** and **HTTP1.1**.
    // 
    // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
    std::shared_ptr<string> healthCheckHttpVersion_ = nullptr;
    // The interval at which health checks are performed. Unit: seconds. Valid values: **1** to **50**.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The HTTP method that is used for health checks. Valid values:
    // 
    // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
    // *   **POST**: gRPC health checks use the POST method by default.
    // *   **HEAD**: HTTP and HTTPS health checks use the HEAD method by default.
    // 
    // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP**, **HTTPS**, or **gRPC**.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The URL that is used for health checks.
    // 
    // >  This parameter takes effect only if **HealthCheckProtocol** is set to **HTTP** or **HTTPS**.
    std::shared_ptr<string> healthCheckPath_ = nullptr;
    // The protocol that is used for health checks. Valid values:
    // 
    // *   **HTTP**: HTTP health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers.
    // *   **HTTPS**: HTTPS health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers. HTTPS supports encryption and provides higher security than HTTP.
    // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to check whether the port of the backend server is reachable.
    // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to check whether the backend server is healthy.
    std::shared_ptr<string> healthCheckProtocol_ = nullptr;
    // The timeout period of a health check response. If a backend server does not respond within the specified timeout period, the backend server is declared unhealthy. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
