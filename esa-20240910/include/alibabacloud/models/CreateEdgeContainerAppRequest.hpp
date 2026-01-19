// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEdgeContainerAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeContainerAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckFailTimes, healthCheckFailTimes_);
      DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckSuccTimes, healthCheckSuccTimes_);
      DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remarks, remarks_);
      DARABONBA_PTR_TO_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeContainerAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckFailTimes, healthCheckFailTimes_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSuccTimes, healthCheckSuccTimes_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(ServicePort, servicePort_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    CreateEdgeContainerAppRequest() = default ;
    CreateEdgeContainerAppRequest(const CreateEdgeContainerAppRequest &) = default ;
    CreateEdgeContainerAppRequest(CreateEdgeContainerAppRequest &&) = default ;
    CreateEdgeContainerAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeContainerAppRequest() = default ;
    CreateEdgeContainerAppRequest& operator=(const CreateEdgeContainerAppRequest &) = default ;
    CreateEdgeContainerAppRequest& operator=(CreateEdgeContainerAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->healthCheckFailTimes_ == nullptr
        && this->healthCheckHost_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckMethod_ == nullptr && this->healthCheckPort_ == nullptr
        && this->healthCheckSuccTimes_ == nullptr && this->healthCheckTimeout_ == nullptr && this->healthCheckType_ == nullptr && this->healthCheckURI_ == nullptr && this->name_ == nullptr
        && this->remarks_ == nullptr && this->servicePort_ == nullptr && this->targetPort_ == nullptr; };
    // healthCheckFailTimes Field Functions 
    bool hasHealthCheckFailTimes() const { return this->healthCheckFailTimes_ != nullptr;};
    void deleteHealthCheckFailTimes() { this->healthCheckFailTimes_ = nullptr;};
    inline int32_t getHealthCheckFailTimes() const { DARABONBA_PTR_GET_DEFAULT(healthCheckFailTimes_, 0) };
    inline CreateEdgeContainerAppRequest& setHealthCheckFailTimes(int32_t healthCheckFailTimes) { DARABONBA_PTR_SET_VALUE(healthCheckFailTimes_, healthCheckFailTimes) };


    // healthCheckHost Field Functions 
    bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
    void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
    inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
    inline CreateEdgeContainerAppRequest& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline CreateEdgeContainerAppRequest& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline CreateEdgeContainerAppRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline CreateEdgeContainerAppRequest& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline int32_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0) };
    inline CreateEdgeContainerAppRequest& setHealthCheckPort(int32_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // healthCheckSuccTimes Field Functions 
    bool hasHealthCheckSuccTimes() const { return this->healthCheckSuccTimes_ != nullptr;};
    void deleteHealthCheckSuccTimes() { this->healthCheckSuccTimes_ = nullptr;};
    inline int32_t getHealthCheckSuccTimes() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSuccTimes_, 0) };
    inline CreateEdgeContainerAppRequest& setHealthCheckSuccTimes(int32_t healthCheckSuccTimes) { DARABONBA_PTR_SET_VALUE(healthCheckSuccTimes_, healthCheckSuccTimes) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline CreateEdgeContainerAppRequest& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string getHealthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline CreateEdgeContainerAppRequest& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline CreateEdgeContainerAppRequest& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEdgeContainerAppRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline CreateEdgeContainerAppRequest& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // servicePort Field Functions 
    bool hasServicePort() const { return this->servicePort_ != nullptr;};
    void deleteServicePort() { this->servicePort_ = nullptr;};
    inline int32_t getServicePort() const { DARABONBA_PTR_GET_DEFAULT(servicePort_, 0) };
    inline CreateEdgeContainerAppRequest& setServicePort(int32_t servicePort) { DARABONBA_PTR_SET_VALUE(servicePort_, servicePort) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline CreateEdgeContainerAppRequest& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // The number of consecutive failed health checks required for an application to be considered as unhealthy. Valid values: 1 to 10. Default value: 5.
    shared_ptr<int32_t> healthCheckFailTimes_ {};
    // The domain name that is used for health checks. This parameter is empty by default.
    shared_ptr<string> healthCheckHost_ {};
    // The HTTP status code returned for a successful health check. Valid values:
    // 
    // *   **http_2xx** (default)
    // *   **http_3xx**
    shared_ptr<string> healthCheckHttpCode_ {};
    // The interval between two consecutive health checks. Unit: seconds. Valid values: **1** to **50**. Default value: **5**.
    shared_ptr<int32_t> healthCheckInterval_ {};
    // The HTTP request method for health checks. Valid values:
    // 
    // *   **HEAD** (default): requests the headers of the resource.
    // *   **GET**: requests the specified resource and returns both the headers and entity body.
    shared_ptr<string> healthCheckMethod_ {};
    // The port used for health checks. Valid values: 1 to 65535. Default value: 80.
    shared_ptr<int32_t> healthCheckPort_ {};
    // The number of consecutive successful health checks required for an application to be considered as healthy. Valid values: 1 to 10. Default value: 2.
    shared_ptr<int32_t> healthCheckSuccTimes_ {};
    // The timeout period of a health check response. If a backend ECS instance does not respond within the specified timeout period, the ECS instance fails the health check. Unit: seconds.\\
    // Valid values: **1** to **100**.\\
    // Default value: **3**.
    shared_ptr<int32_t> healthCheckTimeout_ {};
    // The health check type. By default, this parameter is left empty.
    // 
    // Valid values:
    // 
    // *   **l4**: Layer 4 health check.
    // *   **l7**: Layer 7 health check.
    shared_ptr<string> healthCheckType_ {};
    // The URI used for health checks. The URI must be **1** to **80** characters in length. Default value: "/".
    shared_ptr<string> healthCheckURI_ {};
    // The name of the application. The name must start with a lowercase letter and can contain lowercase letters, digits, and hyphens (-). The name must be 6 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The remarks. This parameter is empty by default.
    shared_ptr<string> remarks_ {};
    // The server port. Valid values: 1 to 65535.
    // 
    // This parameter is required.
    shared_ptr<int32_t> servicePort_ {};
    // The backend port, which is also the service port of the application. Valid values: 1 to 65535.
    // 
    // This parameter is required.
    shared_ptr<int32_t> targetPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
