// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHEALTHCHECKTEMPLATEATTRIBUTEREQUEST_HPP_
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
  class UpdateHealthCheckTemplateAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHealthCheckTemplateAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckCodes, healthCheckCodes_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
      DARABONBA_PTR_TO_JSON(HealthCheckTemplateName, healthCheckTemplateName_);
      DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHealthCheckTemplateAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckCodes, healthCheckCodes_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
      DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateId, healthCheckTemplateId_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTemplateName, healthCheckTemplateName_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    UpdateHealthCheckTemplateAttributeRequest() = default ;
    UpdateHealthCheckTemplateAttributeRequest(const UpdateHealthCheckTemplateAttributeRequest &) = default ;
    UpdateHealthCheckTemplateAttributeRequest(UpdateHealthCheckTemplateAttributeRequest &&) = default ;
    UpdateHealthCheckTemplateAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHealthCheckTemplateAttributeRequest() = default ;
    UpdateHealthCheckTemplateAttributeRequest& operator=(const UpdateHealthCheckTemplateAttributeRequest &) = default ;
    UpdateHealthCheckTemplateAttributeRequest& operator=(UpdateHealthCheckTemplateAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->healthCheckCodes_ == nullptr && this->healthCheckConnectPort_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckHttpVersion_ == nullptr
        && this->healthCheckInterval_ == nullptr && this->healthCheckMethod_ == nullptr && this->healthCheckPath_ == nullptr && this->healthCheckProtocol_ == nullptr && this->healthCheckTemplateId_ == nullptr
        && this->healthCheckTemplateName_ == nullptr && this->healthCheckTimeout_ == nullptr && this->healthyThreshold_ == nullptr && this->unhealthyThreshold_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateHealthCheckTemplateAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckCodes Field Functions 
    bool hasHealthCheckCodes() const { return this->healthCheckCodes_ != nullptr;};
    void deleteHealthCheckCodes() { this->healthCheckCodes_ = nullptr;};
    inline const vector<string> & getHealthCheckCodes() const { DARABONBA_PTR_GET_CONST(healthCheckCodes_, vector<string>) };
    inline vector<string> getHealthCheckCodes() { DARABONBA_PTR_GET(healthCheckCodes_, vector<string>) };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckCodes(const vector<string> & healthCheckCodes) { DARABONBA_PTR_SET_VALUE(healthCheckCodes_, healthCheckCodes) };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckCodes(vector<string> && healthCheckCodes) { DARABONBA_PTR_SET_RVALUE(healthCheckCodes_, healthCheckCodes) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckHttpVersion Field Functions 
    bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
    void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
    inline string getHealthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckPath Field Functions 
    bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
    void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
    inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


    // healthCheckProtocol Field Functions 
    bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
    void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
    inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


    // healthCheckTemplateId Field Functions 
    bool hasHealthCheckTemplateId() const { return this->healthCheckTemplateId_ != nullptr;};
    void deleteHealthCheckTemplateId() { this->healthCheckTemplateId_ = nullptr;};
    inline string getHealthCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateId_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckTemplateId(string healthCheckTemplateId) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateId_, healthCheckTemplateId) };


    // healthCheckTemplateName Field Functions 
    bool hasHealthCheckTemplateName() const { return this->healthCheckTemplateName_ != nullptr;};
    void deleteHealthCheckTemplateName() { this->healthCheckTemplateName_ = nullptr;};
    inline string getHealthCheckTemplateName() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateName_, "") };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckTemplateName(string healthCheckTemplateName) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateName_, healthCheckTemplateName) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline UpdateHealthCheckTemplateAttributeRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline UpdateHealthCheckTemplateAttributeRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a **2xx** HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The HTTP status codes that indicate a healthy backend server.
    shared_ptr<vector<string>> healthCheckCodes_ {};
    // The port that is used for health checks. Valid values: **0 to 65535**. Default value: **0**. This value indicates that the port of a backend server is used for health checks.
    shared_ptr<int32_t> healthCheckConnectPort_ {};
    // The domain name that is used for health checks. Valid values:
    // 
    // *   **$SERVER_IP** (default): the private IP address of a backend server. If an IP address is specified, or this parameter is not specified, the ALB instance uses the private IP addresses of backend servers as domain names for health checks.
    // *   **domain**: The domain name must be 1 to 80 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // >  This parameter is available only if `HealthCheckProtocol` is set to **HTTP** or **HTTPS**.
    shared_ptr<string> healthCheckHost_ {};
    // The HTTP version that is used for health checks.
    // 
    // Valid values: **HTTP1.0** and **HTTP1.1**.
    // 
    // Default value: **HTTP1.1**.
    // 
    // >  This parameter is available only if you set `HealthCheckProtocol` to **HTTP** or **HTTPS**.
    shared_ptr<string> healthCheckHttpVersion_ {};
    // The interval at which health checks are performed. Unit: seconds. Valid values: **1 to 50**. Default value: **2**.
    shared_ptr<int32_t> healthCheckInterval_ {};
    // The HTTP method that is used for health checks. Valid values:
    // 
    // *   **HEAD** (default): By default, HTTP and HTTPS health checks use the HEAD method.
    // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
    // *   **POST**: gRPC health checks use the POST method by default.
    // 
    // >  This parameter is available only if you set **HealthCheckProtocol** to **HTTP**, **HTTPS**, or **gRPC**.
    shared_ptr<string> healthCheckMethod_ {};
    // The URL that is used for health checks.
    // 
    // The URL must be 1 to 80 characters in length and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), percent signs (%), question marks (?), number signs (#), ampersands (&), and the following extended character sets: `_ ; ~ ! ( ) * [ ] @ $ ^ : \\" , +`.
    // 
    // The URL must start with a forward slash (/).
    // 
    // >  This parameter is available only if you set **HealthCheckProtocol** to **HTTP**, **HTTPS**, or **gRPC**.
    shared_ptr<string> healthCheckPath_ {};
    // The protocol that is used for health checks. Valid values:
    // 
    // *   **HTTP** (default): HTTP health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers.
    // *   **HTTPS**: The ALB instance sends HEAD or GET requests, which simulate browser requests, to check whether the backend server is healthy. HTTPS supports encryption and provides higher security than HTTP.
    // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to check whether the port of the backend server is reachable.
    // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to check whether the backend server is healthy.
    shared_ptr<string> healthCheckProtocol_ {};
    // The template ID.
    // 
    // This parameter is required.
    shared_ptr<string> healthCheckTemplateId_ {};
    // The name of the health check template.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> healthCheckTemplateName_ {};
    // The timeout period of a health check response. If a backend server does not respond within the specified timeout period, the backend server is declared unhealthy.
    // 
    // Unit: seconds. Valid values: **1 to 300**. Default value: **5**.
    shared_ptr<int32_t> healthCheckTimeout_ {};
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**.
    // 
    // Valid values: **2 to 10**.
    // 
    // Default value: **3**.
    shared_ptr<int32_t> healthyThreshold_ {};
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
    // 
    // Valid values: **2 to 10**.
    // 
    // Default value: **3**.
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
