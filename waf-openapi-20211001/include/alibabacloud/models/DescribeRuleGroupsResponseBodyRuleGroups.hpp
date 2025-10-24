// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEGROUPSRESPONSEBODYRULEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEGROUPSRESPONSEBODYRULEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleGroupsResponseBodyRuleGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleGroupsResponseBodyRuleGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IsSubscribe, isSubscribe_);
      DARABONBA_PTR_TO_JSON(ParentRuleGroupId, parentRuleGroupId_);
      DARABONBA_PTR_TO_JSON(RuleGroupId, ruleGroupId_);
      DARABONBA_PTR_TO_JSON(RuleGroupName, ruleGroupName_);
      DARABONBA_PTR_TO_JSON(RuleTotalCount, ruleTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleGroupsResponseBodyRuleGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IsSubscribe, isSubscribe_);
      DARABONBA_PTR_FROM_JSON(ParentRuleGroupId, parentRuleGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleGroupId, ruleGroupId_);
      DARABONBA_PTR_FROM_JSON(RuleGroupName, ruleGroupName_);
      DARABONBA_PTR_FROM_JSON(RuleTotalCount, ruleTotalCount_);
    };
    DescribeRuleGroupsResponseBodyRuleGroups() = default ;
    DescribeRuleGroupsResponseBodyRuleGroups(const DescribeRuleGroupsResponseBodyRuleGroups &) = default ;
    DescribeRuleGroupsResponseBodyRuleGroups(DescribeRuleGroupsResponseBodyRuleGroups &&) = default ;
    DescribeRuleGroupsResponseBodyRuleGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleGroupsResponseBodyRuleGroups() = default ;
    DescribeRuleGroupsResponseBodyRuleGroups& operator=(const DescribeRuleGroupsResponseBodyRuleGroups &) = default ;
    DescribeRuleGroupsResponseBodyRuleGroups& operator=(DescribeRuleGroupsResponseBodyRuleGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtModified_ == nullptr
        && return this->isSubscribe_ == nullptr && return this->parentRuleGroupId_ == nullptr && return this->ruleGroupId_ == nullptr && return this->ruleGroupName_ == nullptr && return this->ruleTotalCount_ == nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeRuleGroupsResponseBodyRuleGroups& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // isSubscribe Field Functions 
    bool hasIsSubscribe() const { return this->isSubscribe_ != nullptr;};
    void deleteIsSubscribe() { this->isSubscribe_ = nullptr;};
    inline int32_t isSubscribe() const { DARABONBA_PTR_GET_DEFAULT(isSubscribe_, 0) };
    inline DescribeRuleGroupsResponseBodyRuleGroups& setIsSubscribe(int32_t isSubscribe) { DARABONBA_PTR_SET_VALUE(isSubscribe_, isSubscribe) };


    // parentRuleGroupId Field Functions 
    bool hasParentRuleGroupId() const { return this->parentRuleGroupId_ != nullptr;};
    void deleteParentRuleGroupId() { this->parentRuleGroupId_ = nullptr;};
    inline int64_t parentRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentRuleGroupId_, 0L) };
    inline DescribeRuleGroupsResponseBodyRuleGroups& setParentRuleGroupId(int64_t parentRuleGroupId) { DARABONBA_PTR_SET_VALUE(parentRuleGroupId_, parentRuleGroupId) };


    // ruleGroupId Field Functions 
    bool hasRuleGroupId() const { return this->ruleGroupId_ != nullptr;};
    void deleteRuleGroupId() { this->ruleGroupId_ = nullptr;};
    inline int64_t ruleGroupId() const { DARABONBA_PTR_GET_DEFAULT(ruleGroupId_, 0L) };
    inline DescribeRuleGroupsResponseBodyRuleGroups& setRuleGroupId(int64_t ruleGroupId) { DARABONBA_PTR_SET_VALUE(ruleGroupId_, ruleGroupId) };


    // ruleGroupName Field Functions 
    bool hasRuleGroupName() const { return this->ruleGroupName_ != nullptr;};
    void deleteRuleGroupName() { this->ruleGroupName_ = nullptr;};
    inline string ruleGroupName() const { DARABONBA_PTR_GET_DEFAULT(ruleGroupName_, "") };
    inline DescribeRuleGroupsResponseBodyRuleGroups& setRuleGroupName(string ruleGroupName) { DARABONBA_PTR_SET_VALUE(ruleGroupName_, ruleGroupName) };


    // ruleTotalCount Field Functions 
    bool hasRuleTotalCount() const { return this->ruleTotalCount_ != nullptr;};
    void deleteRuleTotalCount() { this->ruleTotalCount_ = nullptr;};
    inline int32_t ruleTotalCount() const { DARABONBA_PTR_GET_DEFAULT(ruleTotalCount_, 0) };
    inline DescribeRuleGroupsResponseBodyRuleGroups& setRuleTotalCount(int32_t ruleTotalCount) { DARABONBA_PTR_SET_VALUE(ruleTotalCount_, ruleTotalCount) };


  protected:
    // The most recent time when the rule group was modified.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Indicates whether the automatic update feature is enabled for the rule group.
    // 
    // *   1: The automatic update feature is enabled for the rule group.
    // *   2: The automatic update feature is disabled for the rule group.
    std::shared_ptr<int32_t> isSubscribe_ = nullptr;
    // The ID of the rule group.
    // 
    // *   0: The rule group is created from scratch.
    // *   1011: The rule group is a strict rule group.
    // *   1012: The rule group is a medium rule group.
    // *   1013: The rue group is a loose rule group.
    std::shared_ptr<int64_t> parentRuleGroupId_ = nullptr;
    // The ID of the regular expression rule group.
    std::shared_ptr<int64_t> ruleGroupId_ = nullptr;
    // The name of the rule group.
    std::shared_ptr<string> ruleGroupName_ = nullptr;
    // The number of built-in rules in the rule group.
    std::shared_ptr<int32_t> ruleTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
