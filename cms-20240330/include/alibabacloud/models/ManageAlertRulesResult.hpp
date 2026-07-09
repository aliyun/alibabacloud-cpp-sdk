// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANAGEALERTRULESRESULT_HPP_
#define ALIBABACLOUD_MODELS_MANAGEALERTRULESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AlertRuleV2.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ManageAlertRulesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManageAlertRulesResult& obj) { 
      DARABONBA_PTR_TO_JSON(alertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_TO_JSON(deletedUuidList, deletedUuidList_);
      DARABONBA_PTR_TO_JSON(updatedCount, updatedCount_);
      DARABONBA_PTR_TO_JSON(updatedUuidList, updatedUuidList_);
    };
    friend void from_json(const Darabonba::Json& j, ManageAlertRulesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(alertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_FROM_JSON(deletedUuidList, deletedUuidList_);
      DARABONBA_PTR_FROM_JSON(updatedCount, updatedCount_);
      DARABONBA_PTR_FROM_JSON(updatedUuidList, updatedUuidList_);
    };
    ManageAlertRulesResult() = default ;
    ManageAlertRulesResult(const ManageAlertRulesResult &) = default ;
    ManageAlertRulesResult(ManageAlertRulesResult &&) = default ;
    ManageAlertRulesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManageAlertRulesResult() = default ;
    ManageAlertRulesResult& operator=(const ManageAlertRulesResult &) = default ;
    ManageAlertRulesResult& operator=(ManageAlertRulesResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertRule_ == nullptr
        && this->deletedCount_ == nullptr && this->deletedUuidList_ == nullptr && this->updatedCount_ == nullptr && this->updatedUuidList_ == nullptr; };
    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline const AlertRuleV2 & getAlertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, AlertRuleV2) };
    inline AlertRuleV2 getAlertRule() { DARABONBA_PTR_GET(alertRule_, AlertRuleV2) };
    inline ManageAlertRulesResult& setAlertRule(const AlertRuleV2 & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
    inline ManageAlertRulesResult& setAlertRule(AlertRuleV2 && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


    // deletedCount Field Functions 
    bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
    void deleteDeletedCount() { this->deletedCount_ = nullptr;};
    inline int32_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0) };
    inline ManageAlertRulesResult& setDeletedCount(int32_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


    // deletedUuidList Field Functions 
    bool hasDeletedUuidList() const { return this->deletedUuidList_ != nullptr;};
    void deleteDeletedUuidList() { this->deletedUuidList_ = nullptr;};
    inline const vector<string> & getDeletedUuidList() const { DARABONBA_PTR_GET_CONST(deletedUuidList_, vector<string>) };
    inline vector<string> getDeletedUuidList() { DARABONBA_PTR_GET(deletedUuidList_, vector<string>) };
    inline ManageAlertRulesResult& setDeletedUuidList(const vector<string> & deletedUuidList) { DARABONBA_PTR_SET_VALUE(deletedUuidList_, deletedUuidList) };
    inline ManageAlertRulesResult& setDeletedUuidList(vector<string> && deletedUuidList) { DARABONBA_PTR_SET_RVALUE(deletedUuidList_, deletedUuidList) };


    // updatedCount Field Functions 
    bool hasUpdatedCount() const { return this->updatedCount_ != nullptr;};
    void deleteUpdatedCount() { this->updatedCount_ = nullptr;};
    inline int32_t getUpdatedCount() const { DARABONBA_PTR_GET_DEFAULT(updatedCount_, 0) };
    inline ManageAlertRulesResult& setUpdatedCount(int32_t updatedCount) { DARABONBA_PTR_SET_VALUE(updatedCount_, updatedCount) };


    // updatedUuidList Field Functions 
    bool hasUpdatedUuidList() const { return this->updatedUuidList_ != nullptr;};
    void deleteUpdatedUuidList() { this->updatedUuidList_ = nullptr;};
    inline const vector<string> & getUpdatedUuidList() const { DARABONBA_PTR_GET_CONST(updatedUuidList_, vector<string>) };
    inline vector<string> getUpdatedUuidList() { DARABONBA_PTR_GET(updatedUuidList_, vector<string>) };
    inline ManageAlertRulesResult& setUpdatedUuidList(const vector<string> & updatedUuidList) { DARABONBA_PTR_SET_VALUE(updatedUuidList_, updatedUuidList) };
    inline ManageAlertRulesResult& setUpdatedUuidList(vector<string> && updatedUuidList) { DARABONBA_PTR_SET_RVALUE(updatedUuidList_, updatedUuidList) };


  protected:
    // The details of the created or updated alert rule.
    shared_ptr<AlertRuleV2> alertRule_ {};
    // The number of deleted alert rules.
    shared_ptr<int32_t> deletedCount_ {};
    // A list of UUIDs of deleted alert rules.
    shared_ptr<vector<string>> deletedUuidList_ {};
    // The number of updated alert rules.
    shared_ptr<int32_t> updatedCount_ {};
    // A list of UUIDs of updated alert rules.
    shared_ptr<vector<string>> updatedUuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
