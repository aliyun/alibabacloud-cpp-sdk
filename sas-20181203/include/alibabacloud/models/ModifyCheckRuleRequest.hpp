// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCHECKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCHECKRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCheckRuleRequestAddInstanceList.hpp>
#include <alibabacloud/models/ModifyCheckRuleRequestDeleteInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCheckRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCheckRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddInstanceList, addInstanceList_);
      DARABONBA_PTR_TO_JSON(DeleteInstanceList, deleteInstanceList_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCheckRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddInstanceList, addInstanceList_);
      DARABONBA_PTR_FROM_JSON(DeleteInstanceList, deleteInstanceList_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    ModifyCheckRuleRequest() = default ;
    ModifyCheckRuleRequest(const ModifyCheckRuleRequest &) = default ;
    ModifyCheckRuleRequest(ModifyCheckRuleRequest &&) = default ;
    ModifyCheckRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCheckRuleRequest() = default ;
    ModifyCheckRuleRequest& operator=(const ModifyCheckRuleRequest &) = default ;
    ModifyCheckRuleRequest& operator=(ModifyCheckRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addInstanceList_ == nullptr
        && return this->deleteInstanceList_ == nullptr && return this->remark_ == nullptr && return this->ruleId_ == nullptr && return this->ruleType_ == nullptr && return this->scopeType_ == nullptr; };
    // addInstanceList Field Functions 
    bool hasAddInstanceList() const { return this->addInstanceList_ != nullptr;};
    void deleteAddInstanceList() { this->addInstanceList_ = nullptr;};
    inline const vector<ModifyCheckRuleRequestAddInstanceList> & addInstanceList() const { DARABONBA_PTR_GET_CONST(addInstanceList_, vector<ModifyCheckRuleRequestAddInstanceList>) };
    inline vector<ModifyCheckRuleRequestAddInstanceList> addInstanceList() { DARABONBA_PTR_GET(addInstanceList_, vector<ModifyCheckRuleRequestAddInstanceList>) };
    inline ModifyCheckRuleRequest& setAddInstanceList(const vector<ModifyCheckRuleRequestAddInstanceList> & addInstanceList) { DARABONBA_PTR_SET_VALUE(addInstanceList_, addInstanceList) };
    inline ModifyCheckRuleRequest& setAddInstanceList(vector<ModifyCheckRuleRequestAddInstanceList> && addInstanceList) { DARABONBA_PTR_SET_RVALUE(addInstanceList_, addInstanceList) };


    // deleteInstanceList Field Functions 
    bool hasDeleteInstanceList() const { return this->deleteInstanceList_ != nullptr;};
    void deleteDeleteInstanceList() { this->deleteInstanceList_ = nullptr;};
    inline const vector<ModifyCheckRuleRequestDeleteInstanceList> & deleteInstanceList() const { DARABONBA_PTR_GET_CONST(deleteInstanceList_, vector<ModifyCheckRuleRequestDeleteInstanceList>) };
    inline vector<ModifyCheckRuleRequestDeleteInstanceList> deleteInstanceList() { DARABONBA_PTR_GET(deleteInstanceList_, vector<ModifyCheckRuleRequestDeleteInstanceList>) };
    inline ModifyCheckRuleRequest& setDeleteInstanceList(const vector<ModifyCheckRuleRequestDeleteInstanceList> & deleteInstanceList) { DARABONBA_PTR_SET_VALUE(deleteInstanceList_, deleteInstanceList) };
    inline ModifyCheckRuleRequest& setDeleteInstanceList(vector<ModifyCheckRuleRequestDeleteInstanceList> && deleteInstanceList) { DARABONBA_PTR_SET_RVALUE(deleteInstanceList_, deleteInstanceList) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ModifyCheckRuleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyCheckRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline ModifyCheckRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline ModifyCheckRuleRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The list of instances to be added in this rule update. This parameter does not need to be passed if there are no instances to add.
    std::shared_ptr<vector<ModifyCheckRuleRequestAddInstanceList>> addInstanceList_ = nullptr;
    // The list of instances to be removed in this rule update. This parameter does not need to be passed if there are no instances to remove.
    std::shared_ptr<vector<ModifyCheckRuleRequestDeleteInstanceList>> deleteInstanceList_ = nullptr;
    // Remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // Rule ID.
    // > You can obtain this parameter by calling the [ListCheckRule](https://help.aliyun.com/document_detail/2590599.html) API.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // Rule type. Default is **WHITE**. Values:
    // - **WHITE**: Add to whitelist
    std::shared_ptr<string> ruleType_ = nullptr;
    // The scope of effect for modifying the rule:
    // - **INSTANCE**: Instance
    // - **ITEM**: Check item
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
