// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESERVICEINSTANCENAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESERVICEINSTANCENAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ValidateServiceInstanceNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateServiceInstanceNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceName, serviceInstanceName_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateServiceInstanceNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(IsTrial, isTrial_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceName, serviceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ValidateServiceInstanceNameRequest() = default ;
    ValidateServiceInstanceNameRequest(const ValidateServiceInstanceNameRequest &) = default ;
    ValidateServiceInstanceNameRequest(ValidateServiceInstanceNameRequest &&) = default ;
    ValidateServiceInstanceNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateServiceInstanceNameRequest() = default ;
    ValidateServiceInstanceNameRequest& operator=(const ValidateServiceInstanceNameRequest &) = default ;
    ValidateServiceInstanceNameRequest& operator=(ValidateServiceInstanceNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->isTrial_ != nullptr && this->serviceId_ != nullptr && this->serviceInstanceName_ != nullptr && this->serviceVersion_ != nullptr && this->templateName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ValidateServiceInstanceNameRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // isTrial Field Functions 
    bool hasIsTrial() const { return this->isTrial_ != nullptr;};
    void deleteIsTrial() { this->isTrial_ = nullptr;};
    inline bool isTrial() const { DARABONBA_PTR_GET_DEFAULT(isTrial_, false) };
    inline ValidateServiceInstanceNameRequest& setIsTrial(bool isTrial) { DARABONBA_PTR_SET_VALUE(isTrial_, isTrial) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ValidateServiceInstanceNameRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceName Field Functions 
    bool hasServiceInstanceName() const { return this->serviceInstanceName_ != nullptr;};
    void deleteServiceInstanceName() { this->serviceInstanceName_ = nullptr;};
    inline string serviceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceName_, "") };
    inline ValidateServiceInstanceNameRequest& setServiceInstanceName(string serviceInstanceName) { DARABONBA_PTR_SET_VALUE(serviceInstanceName_, serviceInstanceName) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline ValidateServiceInstanceNameRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ValidateServiceInstanceNameRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<bool> isTrial_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceName_ = nullptr;
    std::shared_ptr<string> serviceVersion_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
