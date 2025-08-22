// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODYPAGEINFOINTEGRATIONSINTEGRATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONRESPONSEBODYPAGEINFOINTEGRATIONSINTEGRATIONDETAIL_HPP_
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
  class ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DuplicateKey, duplicateKey_);
      DARABONBA_PTR_TO_JSON(ExtendedFieldRedefineRules, extendedFieldRedefineRules_);
      DARABONBA_PTR_TO_JSON(FieldRedefineRules, fieldRedefineRules_);
      DARABONBA_PTR_TO_JSON(InitiativeRecoverField, initiativeRecoverField_);
      DARABONBA_PTR_TO_JSON(InitiativeRecoverValue, initiativeRecoverValue_);
      DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_TO_JSON(Stat, stat_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRecover, autoRecover_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DuplicateKey, duplicateKey_);
      DARABONBA_PTR_FROM_JSON(ExtendedFieldRedefineRules, extendedFieldRedefineRules_);
      DARABONBA_PTR_FROM_JSON(FieldRedefineRules, fieldRedefineRules_);
      DARABONBA_PTR_FROM_JSON(InitiativeRecoverField, initiativeRecoverField_);
      DARABONBA_PTR_FROM_JSON(InitiativeRecoverValue, initiativeRecoverValue_);
      DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_FROM_JSON(Stat, stat_);
    };
    ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail() = default ;
    ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail(const ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail &) = default ;
    ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail(ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail &&) = default ;
    ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail() = default ;
    ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& operator=(const ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail &) = default ;
    ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& operator=(ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRecover_ != nullptr
        && this->description_ != nullptr && this->duplicateKey_ != nullptr && this->extendedFieldRedefineRules_ != nullptr && this->fieldRedefineRules_ != nullptr && this->initiativeRecoverField_ != nullptr
        && this->initiativeRecoverValue_ != nullptr && this->recoverTime_ != nullptr && this->stat_ != nullptr; };
    // autoRecover Field Functions 
    bool hasAutoRecover() const { return this->autoRecover_ != nullptr;};
    void deleteAutoRecover() { this->autoRecover_ = nullptr;};
    inline bool autoRecover() const { DARABONBA_PTR_GET_DEFAULT(autoRecover_, false) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setAutoRecover(bool autoRecover) { DARABONBA_PTR_SET_VALUE(autoRecover_, autoRecover) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duplicateKey Field Functions 
    bool hasDuplicateKey() const { return this->duplicateKey_ != nullptr;};
    void deleteDuplicateKey() { this->duplicateKey_ = nullptr;};
    inline string duplicateKey() const { DARABONBA_PTR_GET_DEFAULT(duplicateKey_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setDuplicateKey(string duplicateKey) { DARABONBA_PTR_SET_VALUE(duplicateKey_, duplicateKey) };


    // extendedFieldRedefineRules Field Functions 
    bool hasExtendedFieldRedefineRules() const { return this->extendedFieldRedefineRules_ != nullptr;};
    void deleteExtendedFieldRedefineRules() { this->extendedFieldRedefineRules_ = nullptr;};
    inline const vector<Darabonba::Json> & extendedFieldRedefineRules() const { DARABONBA_PTR_GET_CONST(extendedFieldRedefineRules_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extendedFieldRedefineRules() { DARABONBA_PTR_GET(extendedFieldRedefineRules_, vector<Darabonba::Json>) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setExtendedFieldRedefineRules(const vector<Darabonba::Json> & extendedFieldRedefineRules) { DARABONBA_PTR_SET_VALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setExtendedFieldRedefineRules(vector<Darabonba::Json> && extendedFieldRedefineRules) { DARABONBA_PTR_SET_RVALUE(extendedFieldRedefineRules_, extendedFieldRedefineRules) };


    // fieldRedefineRules Field Functions 
    bool hasFieldRedefineRules() const { return this->fieldRedefineRules_ != nullptr;};
    void deleteFieldRedefineRules() { this->fieldRedefineRules_ = nullptr;};
    inline const vector<Darabonba::Json> & fieldRedefineRules() const { DARABONBA_PTR_GET_CONST(fieldRedefineRules_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> fieldRedefineRules() { DARABONBA_PTR_GET(fieldRedefineRules_, vector<Darabonba::Json>) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setFieldRedefineRules(const vector<Darabonba::Json> & fieldRedefineRules) { DARABONBA_PTR_SET_VALUE(fieldRedefineRules_, fieldRedefineRules) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setFieldRedefineRules(vector<Darabonba::Json> && fieldRedefineRules) { DARABONBA_PTR_SET_RVALUE(fieldRedefineRules_, fieldRedefineRules) };


    // initiativeRecoverField Field Functions 
    bool hasInitiativeRecoverField() const { return this->initiativeRecoverField_ != nullptr;};
    void deleteInitiativeRecoverField() { this->initiativeRecoverField_ = nullptr;};
    inline string initiativeRecoverField() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverField_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setInitiativeRecoverField(string initiativeRecoverField) { DARABONBA_PTR_SET_VALUE(initiativeRecoverField_, initiativeRecoverField) };


    // initiativeRecoverValue Field Functions 
    bool hasInitiativeRecoverValue() const { return this->initiativeRecoverValue_ != nullptr;};
    void deleteInitiativeRecoverValue() { this->initiativeRecoverValue_ = nullptr;};
    inline string initiativeRecoverValue() const { DARABONBA_PTR_GET_DEFAULT(initiativeRecoverValue_, "") };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setInitiativeRecoverValue(string initiativeRecoverValue) { DARABONBA_PTR_SET_VALUE(initiativeRecoverValue_, initiativeRecoverValue) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    // stat Field Functions 
    bool hasStat() const { return this->stat_ != nullptr;};
    void deleteStat() { this->stat_ = nullptr;};
    inline const vector<int64_t> & stat() const { DARABONBA_PTR_GET_CONST(stat_, vector<int64_t>) };
    inline vector<int64_t> stat() { DARABONBA_PTR_GET(stat_, vector<int64_t>) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setStat(const vector<int64_t> & stat) { DARABONBA_PTR_SET_VALUE(stat_, stat) };
    inline ListIntegrationResponseBodyPageInfoIntegrationsIntegrationDetail& setStat(vector<int64_t> && stat) { DARABONBA_PTR_SET_RVALUE(stat_, stat) };


  protected:
    // Indicates whether alert events are automatically cleared. Valid values:
    // 
    // *   true (default)
    // *   false
    std::shared_ptr<bool> autoRecover_ = nullptr;
    // The description of the alert integration.
    std::shared_ptr<string> description_ = nullptr;
    // The fields whose values are deduplicated.
    std::shared_ptr<string> duplicateKey_ = nullptr;
    // The extended mapped fields of the alert source.
    std::shared_ptr<vector<Darabonba::Json>> extendedFieldRedefineRules_ = nullptr;
    // The predefined mapped fields of the alert source.
    std::shared_ptr<vector<Darabonba::Json>> fieldRedefineRules_ = nullptr;
    // The field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
    // 
    // > Only the Log Service alert integration supports the parameter.
    std::shared_ptr<string> initiativeRecoverField_ = nullptr;
    // The value of the field for clearing alert events. The system queries alert events based on the field of alert clearing events and clears the alert events.
    // 
    // > Only the Log Service alert integration supports the parameter.
    std::shared_ptr<string> initiativeRecoverValue_ = nullptr;
    // The time when alert events are automatically cleared. Unit: seconds. Default value: 300.
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
    // The total number of alert events and the number of abnormal alert events in the last hour.
    std::shared_ptr<vector<int64_t>> stat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
