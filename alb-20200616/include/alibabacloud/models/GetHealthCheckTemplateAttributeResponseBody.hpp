// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHEALTHCHECKTEMPLATEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHEALTHCHECKTEMPLATEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHealthCheckTemplateAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetHealthCheckTemplateAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHealthCheckTemplateAttributeResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, GetHealthCheckTemplateAttributeResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    GetHealthCheckTemplateAttributeResponseBody() = default ;
    GetHealthCheckTemplateAttributeResponseBody(const GetHealthCheckTemplateAttributeResponseBody &) = default ;
    GetHealthCheckTemplateAttributeResponseBody(GetHealthCheckTemplateAttributeResponseBody &&) = default ;
    GetHealthCheckTemplateAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHealthCheckTemplateAttributeResponseBody() = default ;
    GetHealthCheckTemplateAttributeResponseBody& operator=(const GetHealthCheckTemplateAttributeResponseBody &) = default ;
    GetHealthCheckTemplateAttributeResponseBody& operator=(GetHealthCheckTemplateAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthCheckCodes_ != nullptr
        && this->healthCheckConnectPort_ != nullptr && this->healthCheckHost_ != nullptr && this->healthCheckHttpVersion_ != nullptr && this->healthCheckInterval_ != nullptr && this->healthCheckMethod_ != nullptr
        && this->healthCheckPath_ != nullptr && this->healthCheckProtocol_ != nullptr && this->healthCheckTemplateId_ != nullptr && this->healthCheckTemplateName_ != nullptr && this->healthCheckTimeout_ != nullptr
        && this->healthyThreshold_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->unhealthyThreshold_ != nullptr; };
    // healthCheckCodes Field Functions 
    bool hasHealthCheckCodes() const { return this->healthCheckCodes_ != nullptr;};
    void deleteHealthCheckCodes() { this->healthCheckCodes_ = nullptr;};
    inline const vector<string> & healthCheckCodes() const { DARABONBA_PTR_GET_CONST(healthCheckCodes_, vector<string>) };
    inline vector<string> healthCheckCodes() { DARABONBA_PTR_GET(healthCheckCodes_, vector<string>) };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckCodes(const vector<string> & healthCheckCodes) { DARABONBA_PTR_SET_VALUE(healthCheckCodes_, healthCheckCodes) };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckCodes(vector<string> && healthCheckCodes) { DARABONBA_PTR_SET_RVALUE(healthCheckCodes_, healthCheckCodes) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string healthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckHttpVersion Field Functions 
    bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
    void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
    inline string healthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckPath Field Functions 
    bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
    void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
    inline string healthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


    // healthCheckProtocol Field Functions 
    bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
    void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
    inline string healthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


    // healthCheckTemplateId Field Functions 
    bool hasHealthCheckTemplateId() const { return this->healthCheckTemplateId_ != nullptr;};
    void deleteHealthCheckTemplateId() { this->healthCheckTemplateId_ = nullptr;};
    inline string healthCheckTemplateId() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateId_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckTemplateId(string healthCheckTemplateId) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateId_, healthCheckTemplateId) };


    // healthCheckTemplateName Field Functions 
    bool hasHealthCheckTemplateName() const { return this->healthCheckTemplateName_ != nullptr;};
    void deleteHealthCheckTemplateName() { this->healthCheckTemplateName_ = nullptr;};
    inline string healthCheckTemplateName() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTemplateName_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckTemplateName(string healthCheckTemplateName) { DARABONBA_PTR_SET_VALUE(healthCheckTemplateName_, healthCheckTemplateName) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline GetHealthCheckTemplateAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetHealthCheckTemplateAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetHealthCheckTemplateAttributeResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetHealthCheckTemplateAttributeResponseBodyTags>) };
    inline vector<GetHealthCheckTemplateAttributeResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetHealthCheckTemplateAttributeResponseBodyTags>) };
    inline GetHealthCheckTemplateAttributeResponseBody& setTags(const vector<GetHealthCheckTemplateAttributeResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetHealthCheckTemplateAttributeResponseBody& setTags(vector<GetHealthCheckTemplateAttributeResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline GetHealthCheckTemplateAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The HTTP status codes that indicate a healthy backend server.
    std::shared_ptr<vector<string>> healthCheckCodes_ = nullptr;
    // The port that is used for health checks.
    // 
    // Valid values: **0** to **65535**.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that is used for health checks. Valid values:
    // 
    // *   **$SERVER_IP**: the private IP addresses of backend servers. If an IP address is specified, or this parameter is not specified, the ALB instance uses the private IP addresses of backend servers as domain names for health checks.
    // *   **domain**: The domain name must be 1 to 80 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // >  This parameter takes effect only if `HealthCheckProtocol` is set to **HTTP** or **HTTPS**.
    std::shared_ptr<string> healthCheckHost_ = nullptr;
    // The HTTP version for health checks.
    // 
    // Valid values: **HTTP1.0** and **HTTP1.1**.
    // 
    // >  This parameter takes effect only if you set `HealthCheckProtocol` to **HTTP** or **HTTPS**.
    std::shared_ptr<string> healthCheckHttpVersion_ = nullptr;
    // The interval at which health checks are performed. Unit: seconds. Valid values: **1 to 50**.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The HTTP method that is used for health checks. Valid values:
    // 
    // *   **HEAD** (default): By default, HTTP and HTTPS health checks use the HEAD method.
    // *   **GET**: If the length of a response exceeds 8 KB, the response is truncated. However, the health check result is not affected.
    // *   **POST**: gRPC health checks use the POST method by default.
    // 
    // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**, **HTTPS**, or **gRPC**.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The URL that is used for health checks.
    // 
    // The URL must be 1 to 80 characters in length, and can contain letters, digits, the following special characters: - / . % ? # &, and the following extended characters: `_ ; ~ ! ( ) * [ ] @ $ ^ : \\" , +`. The URL must start with a forward slash (/).
    // 
    // >  This parameter takes effect only if you set **HealthCheckProtocol** to **HTTP**, **HTTPS**, or **gRPC**.
    std::shared_ptr<string> healthCheckPath_ = nullptr;
    // The protocol that is used for health checks. Valid values:
    // 
    // *   **HTTP** (default): HTTP health checks simulate browser behaviors by sending HEAD or GET requests to probe the availability of backend servers.
    // *   **HTTPS**: The ALB instance sends HEAD or GET requests, which simulate browser requests, to check whether the backend server is healthy. HTTPS supports encryption and provides higher security than HTTP.
    // *   **TCP**: TCP health checks send TCP SYN packets to a backend server to probe the availability of backend servers.
    // *   **gRPC**: gRPC health checks send POST or GET requests to a backend server to probe the availability of backend servers.
    std::shared_ptr<string> healthCheckProtocol_ = nullptr;
    // The ID of the health check template.
    std::shared_ptr<string> healthCheckTemplateId_ = nullptr;
    // The name of the health check template.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> healthCheckTemplateName_ = nullptr;
    // The timeout period of a health check response. If a backend server does not respond within the specified timeout period, the backend server is declared unhealthy. Unit: seconds.
    // 
    // Valid values: **1** to **300**.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**.
    // 
    // Valid values: **2** to **10**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetHealthCheckTemplateAttributeResponseBodyTags>> tags_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
    // 
    // Valid values: **2** to **10**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
