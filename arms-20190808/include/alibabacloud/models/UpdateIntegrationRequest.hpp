// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DuplicateKey, duplicateKey_);
      DARABONBA_PTR_TO_JSON(ExtendedFieldRedefineRules, extendedFieldRedefineRules_);
      DARABONBA_PTR_TO_JSON(FieldRedefineRules, fieldRedefineRules_);
      DARABONBA_PTR_TO_JSON(InitiativeRecoverField, initiativeRecoverField_);
      DARABONBA_PTR_TO_JSON(InitiativeRecoverValue, initiativeRecoverValue_);
      DARABONBA_PTR_TO_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_TO_JSON(Stat, stat_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DuplicateKey, duplicateKey_);
      DARABONBA_PTR_FROM_JSON(ExtendedFieldRedefineRules, extendedFieldRedefineRules_);
      DARABONBA_PTR_FROM_JSON(FieldRedefineRules, fieldRedefineRules_);
      DARABONBA_PTR_FROM_JSON(InitiativeRecoverField, initiativeRecoverField_);
      DARABONBA_PTR_FROM_JSON(InitiativeRecoverValue, initiativeRecoverValue_);
      DARABONBA_PTR_FROM_JSON(IntegrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_FROM_JSON(Stat, stat_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    UpdateIntegrationRequest() = default ;
    UpdateIntegrationRequest(const UpdateIntegrationRequest &) = default ;
    UpdateIntegrationRequest(UpdateIntegrationRequest &&) = default ;
    UpdateIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntegrationRequest() = default ;
    UpdateIntegrationRequest& operator=(const UpdateIntegrationRequest &) = default ;
    UpdateIntegrationRequest& operator=(UpdateIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRecover_ != nullptr
        && this->description_ != nullptr && this->duplicateKey_ != nullptr && this->extendedFieldRedefineRules_ != nullptr && this->fieldRedefineRules_ != nullptr && this->initiativeRecoverField_ != nullptr
        && this->initiativeRecoverValue_ != nullptr && this->integrationId_ != nullptr && this->integrationName_ != nullptr && this->integrationProductType_ != nullptr && this->liveness_ != nullptr
        && this->recoverTime_ != nullptr && this->stat_ != nullptr && this->state_ != nullptr; };
    // autoRecover Field Functions 
    bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
    void deleteAutoRecover() { this->autoRecover_ = nullptr;};
    inline bool autoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
    inline UpdateIntegrationRequest& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIntegrationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duplicateKey Field Functions 
    bool hasDuplicateKey() const { return this->duplicateKey_ != nullptr;};
    void deleteDuplicateKey() { this->duplicateKey_ = nullptr;};
    inline string duplicateKey() const { DARABONBA_PTR_GET_DEFAULT(duplicateKey_, "") };
    inline UpdateIntegrationRequest& setDuplicateKey(string duplicateKey) { DARABONBA_PTR_SET_VALUE(duplicateKey_, duplicateKey) };


    // extendedFieldRedefineRules Field Functions 
    bool hasExtendedFieldRedefineRules() const { return this->extendedFieldRedefineRules_ != nullptr;};
    void deleteExtendedFieldRedefineRules() { this->extendedFieldRedefineRules_ = nullptr;};
    inline string extendedFieldRedefineRules() const { DARABONBA_PTR_GET_DEFAULT(extendedFieldRedefineRules_, "") };
    inline UpdateIntegrationRequest& setExtendedFieldRedefineRules(string extendedFieldRedefineRules) { DARABONBA_PTR_SET_VALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };


    // fieldRedefineRules Field Functions 
    bool hasFieldRedefineRules() const { return this->fieldRedefineRules_ != nullptr;};
    void deleteFieldRedefineRules() { this->fieldRedefineRules_ = nullptr;};
    inline string fieldRedefineRules() const { DARABONBA_PTR_GET_DEFAULT(fieldRedefineRules_, "") };
    inline UpdateIntegrationRequest& setFieldRedefineRules(string fieldRedefineRules) { DARABONBA_PTR_SET_VALUE(fieldRedefineRules_, fieldRedefineRules) };


    // initiativeRecoverField Field Functions 
    bool hasInitiativeRecoverField() const { return this->initiativeRecoverField_ != nullptr;};
    void deleteInitiativeRecoverField() { this->initiativeRecoverField_ = nullptr;};
    inline string initiativeRecoverField() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverField_, "") };
    inline UpdateIntegrationRequest& setInitiativeRecoverField(string initiativeRecoverField) { DARABONBA_PTR_SET_VALUE(initiativeRecoverField_, initiativeRecoverField) };


    // initiativeRecoverValue Field Functions 
    bool hasInitiativeRecoverValue() const { return this->initiativeRecoverValue_ != nullptr;};
    void deleteInitiativeRecoverValue() { this->initiativeRecoverValue_ = nullptr;};
    inline string initiativeRecoverValue() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverValue_, "") };
    inline UpdateIntegrationRequest& setInitiativeRecoverValue(string initiativeRecoverValue) { DARABONBA_PTR_SET_VALUE(initiativeRecoverValue_, initiativeRecoverValue) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline int64_t integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
    inline UpdateIntegrationRequest& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline UpdateIntegrationRequest& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationProductType Field Functions 
    bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
    void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
    inline string integrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
    inline UpdateIntegrationRequest& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline UpdateIntegrationRequest& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline UpdateIntegrationRequest& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    // stat Field Functions 
    bool hasStat() const { return this->stat_ != nullptr;};
    void deleteStat() { this->stat_ = nullptr;};
    inline string stat() const { DARABONBA_PTR_GET_DEFAULT(stat_, "") };
    inline UpdateIntegrationRequest& setStat(string stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline bool state() const { DARABONBA_PTR_GET_DEFAULT(state_, false) };
    inline UpdateIntegrationRequest& setState(bool state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Specifies whether to automatically clear alert events. Valid values:
    // 
    // *   true (default)
    // *   false
    std::shared_ptr<bool> autoRecover_ = nullptr;
    // The description of the alert integration.
    std::shared_ptr<string> description_ = nullptr;
    // The fields whose values are deduplicated.
    std::shared_ptr<string> duplicateKey_ = nullptr;
    // The extended mapped fields are mapped to the fields of ARMS alerts. For more information, see the description of the ExtendedFieldRedefineRules parameter.
    std::shared_ptr<string> extendedFieldRedefineRules_ = nullptr;
    // The predefined mapped fields are mapped to the fields of ARMS alerts. The predefined mapped fields were generated when the alert integration was created. For more information, see the description of the FieldRedefineRules parameter.
    std::shared_ptr<string> fieldRedefineRules_ = nullptr;
    // The field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
    // 
    // > Only the Log Service alert integration supports the parameter.
    std::shared_ptr<string> initiativeRecoverField_ = nullptr;
    // The value of the field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
    // 
    // > Only the Log Service alert integration supports the parameter.
    std::shared_ptr<string> initiativeRecoverValue_ = nullptr;
    // The ID of the alert integration.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> integrationId_ = nullptr;
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
    // The activity of the alert integration
    std::shared_ptr<string> liveness_ = nullptr;
    // The period of time within which alert events are automatically cleared. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
    // The total number of alert events and the number of abnormal alert events in the last hour.
    std::shared_ptr<string> stat_ = nullptr;
    // Indicates whether the alert integration was enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
