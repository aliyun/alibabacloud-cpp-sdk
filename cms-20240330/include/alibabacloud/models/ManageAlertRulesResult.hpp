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
    };
    friend void from_json(const Darabonba::Json& j, ManageAlertRulesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(alertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_FROM_JSON(deletedUuidList, deletedUuidList_);
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
        && this->deletedCount_ == nullptr && this->deletedUuidList_ == nullptr; };
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


  protected:
    shared_ptr<AlertRuleV2> alertRule_ {};
    // 成功删除的规则数量
    shared_ptr<int32_t> deletedCount_ {};
    // 成功删除的规则 UUID 列表
    shared_ptr<vector<string>> deletedUuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
