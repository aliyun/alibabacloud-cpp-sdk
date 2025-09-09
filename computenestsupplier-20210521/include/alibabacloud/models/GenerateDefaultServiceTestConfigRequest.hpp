// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDEFAULTSERVICETESTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDEFAULTSERVICETESTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GenerateDefaultServiceTestConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDefaultServiceTestConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDefaultServiceTestConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GenerateDefaultServiceTestConfigRequest() = default ;
    GenerateDefaultServiceTestConfigRequest(const GenerateDefaultServiceTestConfigRequest &) = default ;
    GenerateDefaultServiceTestConfigRequest(GenerateDefaultServiceTestConfigRequest &&) = default ;
    GenerateDefaultServiceTestConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDefaultServiceTestConfigRequest() = default ;
    GenerateDefaultServiceTestConfigRequest& operator=(const GenerateDefaultServiceTestConfigRequest &) = default ;
    GenerateDefaultServiceTestConfigRequest& operator=(GenerateDefaultServiceTestConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceId_ != nullptr
        && this->serviceVersion_ != nullptr && this->templateName_ != nullptr; };
    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GenerateDefaultServiceTestConfigRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GenerateDefaultServiceTestConfigRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GenerateDefaultServiceTestConfigRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service version.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
