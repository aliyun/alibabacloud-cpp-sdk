// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateIntegrationRequest() = default ;
    CreateIntegrationRequest(const CreateIntegrationRequest &) = default ;
    CreateIntegrationRequest(CreateIntegrationRequest &&) = default ;
    CreateIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationRequest() = default ;
    CreateIntegrationRequest& operator=(const CreateIntegrationRequest &) = default ;
    CreateIntegrationRequest& operator=(CreateIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRecover_ != nullptr
        && this->description_ != nullptr && this->integrationName_ != nullptr && this->integrationProductType_ != nullptr && this->recoverTime_ != nullptr && this->regionId_ != nullptr; };
    // autoRecover Field Functions 
    bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
    void deleteAutoRecover() { this->autoRecover_ = nullptr;};
    inline bool autoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
    inline CreateIntegrationRequest& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIntegrationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline CreateIntegrationRequest& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationProductType Field Functions 
    bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
    void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
    inline string integrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
    inline CreateIntegrationRequest& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline CreateIntegrationRequest& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIntegrationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to automatically clear alert events. Default value: true. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRecover_ = nullptr;
    // The description of the alert integration.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the alert integration.
    // 
    // This parameter is required.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The service of the alert integration. Valid values:
    // 
    // *   CLOUD_MONITOR: CloudMonitor
    // *   LOG_SERVICE: Log Service
    // 
    // This parameter is required.
    std::shared_ptr<string> integrationProductType_ = nullptr;
    // The period of time within which alert events are automatically cleared. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
