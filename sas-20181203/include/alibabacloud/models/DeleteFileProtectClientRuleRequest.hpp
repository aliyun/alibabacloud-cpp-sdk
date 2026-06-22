// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFILEPROTECTCLIENTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFILEPROTECTCLIENTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteFileProtectClientRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFileProtectClientRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(ExcludeIdList, excludeIdList_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SelectAll, selectAll_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFileProtectClientRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(ExcludeIdList, excludeIdList_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SelectAll, selectAll_);
    };
    DeleteFileProtectClientRuleRequest() = default ;
    DeleteFileProtectClientRuleRequest(const DeleteFileProtectClientRuleRequest &) = default ;
    DeleteFileProtectClientRuleRequest(DeleteFileProtectClientRuleRequest &&) = default ;
    DeleteFileProtectClientRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFileProtectClientRuleRequest() = default ;
    DeleteFileProtectClientRuleRequest& operator=(const DeleteFileProtectClientRuleRequest &) = default ;
    DeleteFileProtectClientRuleRequest& operator=(DeleteFileProtectClientRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevel_ == nullptr
        && this->excludeIdList_ == nullptr && this->idList_ == nullptr && this->platform_ == nullptr && this->ruleAction_ == nullptr && this->ruleName_ == nullptr
        && this->selectAll_ == nullptr; };
    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline int32_t getAlertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, 0) };
    inline DeleteFileProtectClientRuleRequest& setAlertLevel(int32_t alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // excludeIdList Field Functions 
    bool hasExcludeIdList() const { return this->excludeIdList_ != nullptr;};
    void deleteExcludeIdList() { this->excludeIdList_ = nullptr;};
    inline const vector<int64_t> & getExcludeIdList() const { DARABONBA_PTR_GET_CONST(excludeIdList_, vector<int64_t>) };
    inline vector<int64_t> getExcludeIdList() { DARABONBA_PTR_GET(excludeIdList_, vector<int64_t>) };
    inline DeleteFileProtectClientRuleRequest& setExcludeIdList(const vector<int64_t> & excludeIdList) { DARABONBA_PTR_SET_VALUE(excludeIdList_, excludeIdList) };
    inline DeleteFileProtectClientRuleRequest& setExcludeIdList(vector<int64_t> && excludeIdList) { DARABONBA_PTR_SET_RVALUE(excludeIdList_, excludeIdList) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline DeleteFileProtectClientRuleRequest& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline DeleteFileProtectClientRuleRequest& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DeleteFileProtectClientRuleRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
    inline DeleteFileProtectClientRuleRequest& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DeleteFileProtectClientRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selectAll Field Functions 
    bool hasSelectAll() const { return this->selectAll_ != nullptr;};
    void deleteSelectAll() { this->selectAll_ = nullptr;};
    inline bool getSelectAll() const { DARABONBA_PTR_GET_DEFAULT(selectAll_, false) };
    inline DeleteFileProtectClientRuleRequest& setSelectAll(bool selectAll) { DARABONBA_PTR_SET_VALUE(selectAll_, selectAll) };


  protected:
    // The alert notification level. Valid values:
    // 
    // - 0: no alert
    // 
    // - 1: reminder
    // 
    // - 2: suspicious
    // 
    // - 3: high-risk.
    shared_ptr<int32_t> alertLevel_ {};
    // The list of excluded policy IDs.
    shared_ptr<vector<int64_t>> excludeIdList_ {};
    // The list of policy IDs.
    shared_ptr<vector<int64_t>> idList_ {};
    // The type of the operating system. Valid values:
    // 
    // - **windows**: Windows
    // - **linux**: Linux.
    shared_ptr<string> platform_ {};
    // The action to take when the rule is triggered. Valid values:
    // 
    // - **monitor**: Alert.
    // - **block**: Block.
    // - **pass**: Allow.
    shared_ptr<string> ruleAction_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // Specifies whether to select all rules.
    // 
    // This parameter is required.
    shared_ptr<bool> selectAll_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
