// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHECKRESULTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHECKRESULTWHITELISTREQUEST_HPP_
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
  class AddCheckResultWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCheckResultWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCheckResultWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    AddCheckResultWhiteListRequest() = default ;
    AddCheckResultWhiteListRequest(const AddCheckResultWhiteListRequest &) = default ;
    AddCheckResultWhiteListRequest(AddCheckResultWhiteListRequest &&) = default ;
    AddCheckResultWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCheckResultWhiteListRequest() = default ;
    AddCheckResultWhiteListRequest& operator=(const AddCheckResultWhiteListRequest &) = default ;
    AddCheckResultWhiteListRequest& operator=(AddCheckResultWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr
        && return this->remark_ == nullptr && return this->ruleType_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & checkIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> checkIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline AddCheckResultWhiteListRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline AddCheckResultWhiteListRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddCheckResultWhiteListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline AddCheckResultWhiteListRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The IDs of the check items.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of the check items.
    std::shared_ptr<vector<int64_t>> checkIds_ = nullptr;
    // The description. The value of this parameter can be up to 65,535 bytes in length.
    std::shared_ptr<string> remark_ = nullptr;
    // The type of the rule. Default value: **WHITE**. Valid value:
    // 
    // *   **WHITE**: Add check items to the whitelist.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
