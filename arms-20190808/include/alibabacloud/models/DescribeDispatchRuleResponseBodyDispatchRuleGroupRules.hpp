// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULEGROUPRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULEGROUPRULES_HPP_
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
  class DescribeDispatchRuleResponseBodyDispatchRuleGroupRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInterval, groupInterval_);
      DARABONBA_PTR_TO_JSON(GroupWaitTime, groupWaitTime_);
      DARABONBA_PTR_TO_JSON(GroupingFields, groupingFields_);
      DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInterval, groupInterval_);
      DARABONBA_PTR_FROM_JSON(GroupWaitTime, groupWaitTime_);
      DARABONBA_PTR_FROM_JSON(GroupingFields, groupingFields_);
      DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
    };
    DescribeDispatchRuleResponseBodyDispatchRuleGroupRules() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleGroupRules(const DescribeDispatchRuleResponseBodyDispatchRuleGroupRules &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleGroupRules(DescribeDispatchRuleResponseBodyDispatchRuleGroupRules &&) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleGroupRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBodyDispatchRuleGroupRules() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& operator=(const DescribeDispatchRuleResponseBodyDispatchRuleGroupRules &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& operator=(DescribeDispatchRuleResponseBodyDispatchRuleGroupRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupInterval_ != nullptr && this->groupWaitTime_ != nullptr && this->groupingFields_ != nullptr && this->repeatInterval_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInterval Field Functions 
    bool hasGroupInterval() const { return this->groupInterval_ != nullptr;};
    void deleteGroupInterval() { this->groupInterval_ = nullptr;};
    inline int64_t groupInterval() const { DARABONBA_PTR_GET_DEFAULT(groupInterval_, 0L) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& setGroupInterval(int64_t groupInterval) { DARABONBA_PTR_SET_VALUE(groupInterval_, groupInterval) };


    // groupWaitTime Field Functions 
    bool hasGroupWaitTime() const { return this->groupWaitTime_ != nullptr;};
    void deleteGroupWaitTime() { this->groupWaitTime_ = nullptr;};
    inline int64_t groupWaitTime() const { DARABONBA_PTR_GET_DEFAULT(groupWaitTime_, 0L) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& setGroupWaitTime(int64_t groupWaitTime) { DARABONBA_PTR_SET_VALUE(groupWaitTime_, groupWaitTime) };


    // groupingFields Field Functions 
    bool hasGroupingFields() const { return this->groupingFields_ != nullptr;};
    void deleteGroupingFields() { this->groupingFields_ = nullptr;};
    inline const vector<string> & groupingFields() const { DARABONBA_PTR_GET_CONST(groupingFields_, vector<string>) };
    inline vector<string> groupingFields() { DARABONBA_PTR_GET(groupingFields_, vector<string>) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& setGroupingFields(const vector<string> & groupingFields) { DARABONBA_PTR_SET_VALUE(groupingFields_, groupingFields) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& setGroupingFields(vector<string> && groupingFields) { DARABONBA_PTR_SET_RVALUE(groupingFields_, groupingFields) };


    // repeatInterval Field Functions 
    bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
    void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
    inline int64_t repeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleGroupRules& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


  protected:
    // The ID of the group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The grouping interval.
    std::shared_ptr<int64_t> groupInterval_ = nullptr;
    // The waiting time for grouping.
    std::shared_ptr<int64_t> groupWaitTime_ = nullptr;
    // The grouping fields.
    std::shared_ptr<vector<string>> groupingFields_ = nullptr;
    // The time interval at which a notification is resent for a long-lasting unresolved alert. Unit: seconds.
    std::shared_ptr<int64_t> repeatInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
