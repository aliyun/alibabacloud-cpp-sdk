// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICETESTCASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICETESTCASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceTestCaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceTestCaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TestCaseName, testCaseName_);
      DARABONBA_PTR_TO_JSON(TestConfig, testConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceTestCaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TestCaseName, testCaseName_);
      DARABONBA_PTR_FROM_JSON(TestConfig, testConfig_);
    };
    CreateServiceTestCaseRequest() = default ;
    CreateServiceTestCaseRequest(const CreateServiceTestCaseRequest &) = default ;
    CreateServiceTestCaseRequest(CreateServiceTestCaseRequest &&) = default ;
    CreateServiceTestCaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceTestCaseRequest() = default ;
    CreateServiceTestCaseRequest& operator=(const CreateServiceTestCaseRequest &) = default ;
    CreateServiceTestCaseRequest& operator=(CreateServiceTestCaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->serviceId_ != nullptr && this->serviceVersion_ != nullptr && this->templateName_ != nullptr && this->testCaseName_ != nullptr && this->testConfig_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceTestCaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceTestCaseRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline CreateServiceTestCaseRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateServiceTestCaseRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // testCaseName Field Functions 
    bool hasTestCaseName() const { return this->testCaseName_ != nullptr;};
    void deleteTestCaseName() { this->testCaseName_ = nullptr;};
    inline string testCaseName() const { DARABONBA_PTR_GET_DEFAULT(testCaseName_, "") };
    inline CreateServiceTestCaseRequest& setTestCaseName(string testCaseName) { DARABONBA_PTR_SET_VALUE(testCaseName_, testCaseName) };


    // testConfig Field Functions 
    bool hasTestConfig() const { return this->testConfig_ != nullptr;};
    void deleteTestConfig() { this->testConfig_ = nullptr;};
    inline string testConfig() const { DARABONBA_PTR_GET_DEFAULT(testConfig_, "") };
    inline CreateServiceTestCaseRequest& setTestConfig(string testConfig) { DARABONBA_PTR_SET_VALUE(testConfig_, testConfig) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service version.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The template name.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // Service Test case name.
    // 
    // This parameter is required.
    std::shared_ptr<string> testCaseName_ = nullptr;
    // The service test config
    // 
    // This parameter is required.
    std::shared_ptr<string> testConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
