// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONRESPONSEBODYINTEGRATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONRESPONSEBODYINTEGRATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateIntegrationResponseBodyIntegration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationResponseBodyIntegration& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationResponseBodyIntegration& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
    };
    CreateIntegrationResponseBodyIntegration() = default ;
    CreateIntegrationResponseBodyIntegration(const CreateIntegrationResponseBodyIntegration &) = default ;
    CreateIntegrationResponseBodyIntegration(CreateIntegrationResponseBodyIntegration &&) = default ;
    CreateIntegrationResponseBodyIntegration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationResponseBodyIntegration() = default ;
    CreateIntegrationResponseBodyIntegration& operator=(const CreateIntegrationResponseBodyIntegration &) = default ;
    CreateIntegrationResponseBodyIntegration& operator=(CreateIntegrationResponseBodyIntegration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRecover_ != nullptr
        && this->description_ != nullptr && this->integrationId_ != nullptr && this->integrationName_ != nullptr && this->integrationProductType_ != nullptr && this->recoverTime_ != nullptr; };
    // autoRecover Field Functions 
    bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
    void deleteAutoRecover() { this->autoRecover_ = nullptr;};
    inline bool autoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
    inline CreateIntegrationResponseBodyIntegration& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIntegrationResponseBodyIntegration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline int64_t integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
    inline CreateIntegrationResponseBodyIntegration& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline CreateIntegrationResponseBodyIntegration& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationProductType Field Functions 
    bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
    void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
    inline string integrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
    inline CreateIntegrationResponseBodyIntegration& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline CreateIntegrationResponseBodyIntegration& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


  protected:
    // Indicates whether alert events are automatically cleared. Default value: true. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRecover_ = nullptr;
    // The description of the alert integration.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the alert integration.
    std::shared_ptr<int64_t> integrationId_ = nullptr;
    // The name of the alert integration.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The service of the alert integration. Valid values:
    // 
    // *   CLOUD_MONITOR: CloudMonitor
    // *   LOG_SERVICE: Log Service
    std::shared_ptr<string> integrationProductType_ = nullptr;
    // The period of time within which alert events are automatically cleared. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
