// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTEGRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTEGRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateIntegrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Integration, integration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntegrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Integration, integration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateIntegrationResponseBody() = default ;
    UpdateIntegrationResponseBody(const UpdateIntegrationResponseBody &) = default ;
    UpdateIntegrationResponseBody(UpdateIntegrationResponseBody &&) = default ;
    UpdateIntegrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntegrationResponseBody() = default ;
    UpdateIntegrationResponseBody& operator=(const UpdateIntegrationResponseBody &) = default ;
    UpdateIntegrationResponseBody& operator=(UpdateIntegrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Integration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Integration& obj) { 
        DARABONBA_PTR_TO_JSON(ApiEndpoint, apiEndpoint_);
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
        DARABONBA_PTR_TO_JSON(ShortToken, shortToken_);
        DARABONBA_PTR_TO_JSON(Stat, stat_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Integration& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiEndpoint, apiEndpoint_);
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
        DARABONBA_PTR_FROM_JSON(ShortToken, shortToken_);
        DARABONBA_PTR_FROM_JSON(Stat, stat_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Integration() = default ;
      Integration(const Integration &) = default ;
      Integration(Integration &&) = default ;
      Integration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Integration() = default ;
      Integration& operator=(const Integration &) = default ;
      Integration& operator=(Integration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiEndpoint_ == nullptr
        && this->autoRecover_ == nullptr && this->description_ == nullptr && this->duplicateKey_ == nullptr && this->extendedFieldRedefineRules_ == nullptr && this->fieldRedefineRules_ == nullptr
        && this->initiativeRecoverField_ == nullptr && this->initiativeRecoverValue_ == nullptr && this->integrationId_ == nullptr && this->integrationName_ == nullptr && this->integrationProductType_ == nullptr
        && this->liveness_ == nullptr && this->recoverTime_ == nullptr && this->shortToken_ == nullptr && this->stat_ == nullptr && this->state_ == nullptr; };
      // apiEndpoint Field Functions 
      bool hasApiEndpoint() const { return this->apiEndpoint_ != nullptr;};
      void deleteApiEndpoint() { this->apiEndpoint_ = nullptr;};
      inline string getApiEndpoint() const { DARABONBA_PTR_GET_DEFAULT(apiEndpoint_, "") };
      inline Integration& setApiEndpoint(string apiEndpoint) { DARABONBA_PTR_SET_VALUE(apiEndpoint_, apiEndpoint) };


      // autoRecover Field Functions 
      bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
      void deleteAutoRecover() { this->autoRecover_ = nullptr;};
      inline bool getAutoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
      inline Integration& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Integration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duplicateKey Field Functions 
      bool hasDuplicateKey() const { return this->duplicateKey_ != nullptr;};
      void deleteDuplicateKey() { this->duplicateKey_ = nullptr;};
      inline string getDuplicateKey() const { DARABONBA_PTR_GET_DEFAULT(duplicateKey_, "") };
      inline Integration& setDuplicateKey(string duplicateKey) { DARABONBA_PTR_SET_VALUE(duplicateKey_, duplicateKey) };


      // extendedFieldRedefineRules Field Functions 
      bool hasExtendedFieldRedefineRules() const { return this->extendedFieldRedefineRules_ != nullptr;};
      void deleteExtendedFieldRedefineRules() { this->extendedFieldRedefineRules_ = nullptr;};
      inline const vector<Darabonba::Json> & getExtendedFieldRedefineRules() const { DARABONBA_PTR_GET_CONST(extendedFieldRedefineRules_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getExtendedFieldRedefineRules() { DARABONBA_PTR_GET(extendedFieldRedefineRules_, vector<Darabonba::Json>) };
      inline Integration& setExtendedFieldRedefineRules(const vector<Darabonba::Json> & extendedFieldRedefineRules) { DARABONBA_PTR_SET_VALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };
      inline Integration& setExtendedFieldRedefineRules(vector<Darabonba::Json> && extendedFieldRedefineRules) { DARABONBA_PTR_SET_RVALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };


      // fieldRedefineRules Field Functions 
      bool hasFieldRedefineRules() const { return this->fieldRedefineRules_ != nullptr;};
      void deleteFieldRedefineRules() { this->fieldRedefineRules_ = nullptr;};
      inline const vector<Darabonba::Json> & getFieldRedefineRules() const { DARABONBA_PTR_GET_CONST(fieldRedefineRules_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getFieldRedefineRules() { DARABONBA_PTR_GET(fieldRedefineRules_, vector<Darabonba::Json>) };
      inline Integration& setFieldRedefineRules(const vector<Darabonba::Json> & fieldRedefineRules) { DARABONBA_PTR_SET_VALUE(fieldRedefineRules_, fieldRedefineRules) };
      inline Integration& setFieldRedefineRules(vector<Darabonba::Json> && fieldRedefineRules) { DARABONBA_PTR_SET_RVALUE(fieldRedefineRules_, fieldRedefineRules) };


      // initiativeRecoverField Field Functions 
      bool hasInitiativeRecoverField() const { return this->initiativeRecoverField_ != nullptr;};
      void deleteInitiativeRecoverField() { this->initiativeRecoverField_ = nullptr;};
      inline string getInitiativeRecoverField() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverField_, "") };
      inline Integration& setInitiativeRecoverField(string initiativeRecoverField) { DARABONBA_PTR_SET_VALUE(initiativeRecoverField_, initiativeRecoverField) };


      // initiativeRecoverValue Field Functions 
      bool hasInitiativeRecoverValue() const { return this->initiativeRecoverValue_ != nullptr;};
      void deleteInitiativeRecoverValue() { this->initiativeRecoverValue_ = nullptr;};
      inline string getInitiativeRecoverValue() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverValue_, "") };
      inline Integration& setInitiativeRecoverValue(string initiativeRecoverValue) { DARABONBA_PTR_SET_VALUE(initiativeRecoverValue_, initiativeRecoverValue) };


      // integrationId Field Functions 
      bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
      void deleteIntegrationId() { this->integrationId_ = nullptr;};
      inline int64_t getIntegrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, 0L) };
      inline Integration& setIntegrationId(int64_t integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


      // integrationName Field Functions 
      bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
      void deleteIntegrationName() { this->integrationName_ = nullptr;};
      inline string getIntegrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
      inline Integration& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


      // integrationProductType Field Functions 
      bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
      void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
      inline string getIntegrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
      inline Integration& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


      // liveness Field Functions 
      bool hasLiveness() const { return this->liveness_ != nullptr;};
      void deleteLiveness() { this->liveness_ = nullptr;};
      inline string getLiveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
      inline Integration& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


      // recoverTime Field Functions 
      bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
      void deleteRecoverTime() { this->recoverTime_ = nullptr;};
      inline int64_t getRecoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
      inline Integration& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


      // shortToken Field Functions 
      bool hasShortToken() const { return this->shortToken_ != nullptr;};
      void deleteShortToken() { this->shortToken_ = nullptr;};
      inline string getShortToken() const { DARABONBA_PTR_GET_DEFAULT(shortToken_, "") };
      inline Integration& setShortToken(string shortToken) { DARABONBA_PTR_SET_VALUE(shortToken_, shortToken) };


      // stat Field Functions 
      bool hasStat() const { return this->stat_ != nullptr;};
      void deleteStat() { this->stat_ = nullptr;};
      inline const vector<int64_t> & getStat() const { DARABONBA_PTR_GET_CONST(stat_, vector<int64_t>) };
      inline vector<int64_t> getStat() { DARABONBA_PTR_GET(stat_, vector<int64_t>) };
      inline Integration& setStat(const vector<int64_t> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
      inline Integration& setStat(vector<int64_t> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline bool getState() const { DARABONBA_PTR_GET_DEFAULT(state_, false) };
      inline Integration& setState(bool state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The endpoint of the alert integration.
      shared_ptr<string> apiEndpoint_ {};
      // Indicates whether alert events are automatically cleared. Valid values:
      // 
      // *   true (default)
      // *   false
      shared_ptr<bool> autoRecover_ {};
      // The description of the alert integration.
      shared_ptr<string> description_ {};
      // The fields whose values are deduplicated.
      shared_ptr<string> duplicateKey_ {};
      // The extended mapped fields of the alert source.
      shared_ptr<vector<Darabonba::Json>> extendedFieldRedefineRules_ {};
      // The predefined mapped fields of the alert source.
      shared_ptr<vector<Darabonba::Json>> fieldRedefineRules_ {};
      // The field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
      // 
      // > Only Log Service supports this parameter.
      shared_ptr<string> initiativeRecoverField_ {};
      // The value of the field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
      // 
      // > Only Log Service supports this parameter.
      shared_ptr<string> initiativeRecoverValue_ {};
      // The ID of the alert integration.
      shared_ptr<int64_t> integrationId_ {};
      // The name of the alert integration.
      shared_ptr<string> integrationName_ {};
      // The service of the alert integration. Valid values:
      // 
      // *   CLOUD_MONITOR: CloudMonitor
      // *   LOG_SERVICE: Log Service
      shared_ptr<string> integrationProductType_ {};
      // The activity of the alert integration
      shared_ptr<string> liveness_ {};
      // The time when alert events are automatically cleared. Unit: seconds. Default value: 300.
      shared_ptr<int64_t> recoverTime_ {};
      // The authentication token of the alert integration.
      shared_ptr<string> shortToken_ {};
      // The total number of alert events and the number of abnormal alert events in the last hour.
      shared_ptr<vector<int64_t>> stat_ {};
      // Indicates whether the alert integration is enabled. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> state_ {};
    };

    virtual bool empty() const override { return this->integration_ == nullptr
        && this->requestId_ == nullptr; };
    // integration Field Functions 
    bool hasIntegration() const { return this->integration_ != nullptr;};
    void deleteIntegration() { this->integration_ = nullptr;};
    inline const UpdateIntegrationResponseBody::Integration & getIntegration() const { DARABONBA_PTR_GET_CONST(integration_, UpdateIntegrationResponseBody::Integration) };
    inline UpdateIntegrationResponseBody::Integration getIntegration() { DARABONBA_PTR_GET(integration_, UpdateIntegrationResponseBody::Integration) };
    inline UpdateIntegrationResponseBody& setIntegration(const UpdateIntegrationResponseBody::Integration & integration) { DARABONBA_PTR_SET_VALUE(integration_, integration) };
    inline UpdateIntegrationResponseBody& setIntegration(UpdateIntegrationResponseBody::Integration && integration) { DARABONBA_PTR_SET_RVALUE(integration_, integration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateIntegrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Information about the alert integration.
    shared_ptr<UpdateIntegrationResponseBody::Integration> integration_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
