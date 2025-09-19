// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHECKINSTANCERESULTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHECKINSTANCERESULTWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddCheckInstanceResultWhiteListRequestInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddCheckInstanceResultWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCheckInstanceResultWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckGroupId, checkGroupId_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCheckInstanceResultWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckGroupId, checkGroupId_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    AddCheckInstanceResultWhiteListRequest() = default ;
    AddCheckInstanceResultWhiteListRequest(const AddCheckInstanceResultWhiteListRequest &) = default ;
    AddCheckInstanceResultWhiteListRequest(AddCheckInstanceResultWhiteListRequest &&) = default ;
    AddCheckInstanceResultWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCheckInstanceResultWhiteListRequest() = default ;
    AddCheckInstanceResultWhiteListRequest& operator=(const AddCheckInstanceResultWhiteListRequest &) = default ;
    AddCheckInstanceResultWhiteListRequest& operator=(AddCheckInstanceResultWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkGroupId_ != nullptr
        && this->checkId_ != nullptr && this->instanceIds_ != nullptr && this->instanceList_ != nullptr && this->remark_ != nullptr && this->ruleType_ != nullptr; };
    // checkGroupId Field Functions 
    bool hasCheckGroupId() const { return this->checkGroupId_ != nullptr;};
    void deleteCheckGroupId() { this->checkGroupId_ = nullptr;};
    inline string checkGroupId() const { DARABONBA_PTR_GET_DEFAULT(checkGroupId_, "") };
    inline AddCheckInstanceResultWhiteListRequest& setCheckGroupId(string checkGroupId) { DARABONBA_PTR_SET_VALUE(checkGroupId_, checkGroupId) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline AddCheckInstanceResultWhiteListRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<AddCheckInstanceResultWhiteListRequestInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<AddCheckInstanceResultWhiteListRequestInstanceList>) };
    inline vector<AddCheckInstanceResultWhiteListRequestInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<AddCheckInstanceResultWhiteListRequestInstanceList>) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceList(const vector<AddCheckInstanceResultWhiteListRequestInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline AddCheckInstanceResultWhiteListRequest& setInstanceList(vector<AddCheckInstanceResultWhiteListRequestInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddCheckInstanceResultWhiteListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline AddCheckInstanceResultWhiteListRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the group to which the check item belongs.
    std::shared_ptr<string> checkGroupId_ = nullptr;
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of check items.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The instance IDs of the assets.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The asset instances.
    std::shared_ptr<vector<AddCheckInstanceResultWhiteListRequestInstanceList>> instanceList_ = nullptr;
    // The description. The value of this parameter can be up to 65,535 bytes in length.
    std::shared_ptr<string> remark_ = nullptr;
    // The type of the rule. Default value: **WHITE**. Valid value:
    // 
    // *   WHITE: adds check items to the whitelist.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
