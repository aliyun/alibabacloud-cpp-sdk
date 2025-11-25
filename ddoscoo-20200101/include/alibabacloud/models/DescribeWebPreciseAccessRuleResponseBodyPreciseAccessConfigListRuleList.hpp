// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODYPRECISEACCESSCONFIGLISTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBPRECISEACCESSRULERESPONSEBODYPRECISEACCESSCONFIGLISTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ConditionList, conditionList_);
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ConditionList, conditionList_);
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
    };
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList() = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList(const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList &) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList(DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList &&) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList() = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& operator=(const DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList &) = default ;
    DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& operator=(DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->conditionList_ == nullptr && return this->expires_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // conditionList Field Functions 
    bool hasConditionList() const { return this->conditionList_ != nullptr;};
    void deleteConditionList() { this->conditionList_ = nullptr;};
    inline const vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList> & conditionList() const { DARABONBA_PTR_GET_CONST(conditionList_, vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList>) };
    inline vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList> conditionList() { DARABONBA_PTR_GET(conditionList_, vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList>) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& setConditionList(const vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList> & conditionList) { DARABONBA_PTR_SET_VALUE(conditionList_, conditionList) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& setConditionList(vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList> && conditionList) { DARABONBA_PTR_SET_RVALUE(conditionList_, conditionList) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int64_t expires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


  protected:
    // The action triggered if the rule is matched. Valid values:
    // 
    // *   **accept**: The requests that match the rule are allowed.
    // *   **block**: The requests that match the rule are blocked.
    // *   **challenge**: Completely Automated Public Turing test to tell Computers and Humans Apart (CAPTCHA) verification for the requests that match the rule is implemented.
    std::shared_ptr<string> action_ = nullptr;
    // The match conditions.
    std::shared_ptr<vector<Models::DescribeWebPreciseAccessRuleResponseBodyPreciseAccessConfigListRuleListConditionList>> conditionList_ = nullptr;
    // The validity period of the rule. Unit: seconds. This parameter takes effect only when **action** of a rule is **block**. Access requests that match the rule are blocked within the specified validity period of the rule. The value **0** indicates that the whitelist takes effect all the time.
    std::shared_ptr<int64_t> expires_ = nullptr;
    // The name of the scheduling rule.
    std::shared_ptr<string> name_ = nullptr;
    // The source of the rule. Valid values:
    // 
    // *   **manual** (default): manually created.
    // *   **auto**: automatically generated.
    std::shared_ptr<string> owner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
