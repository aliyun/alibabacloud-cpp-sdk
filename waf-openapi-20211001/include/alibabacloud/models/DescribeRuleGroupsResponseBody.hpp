// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleGroups, ruleGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleGroups, ruleGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRuleGroupsResponseBody() = default ;
    DescribeRuleGroupsResponseBody(const DescribeRuleGroupsResponseBody &) = default ;
    DescribeRuleGroupsResponseBody(DescribeRuleGroupsResponseBody &&) = default ;
    DescribeRuleGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleGroupsResponseBody() = default ;
    DescribeRuleGroupsResponseBody& operator=(const DescribeRuleGroupsResponseBody &) = default ;
    DescribeRuleGroupsResponseBody& operator=(DescribeRuleGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleGroups& obj) { 
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(IsSubscribe, isSubscribe_);
        DARABONBA_PTR_TO_JSON(ParentRuleGroupId, parentRuleGroupId_);
        DARABONBA_PTR_TO_JSON(RuleGroupId, ruleGroupId_);
        DARABONBA_PTR_TO_JSON(RuleGroupName, ruleGroupName_);
        DARABONBA_PTR_TO_JSON(RuleTotalCount, ruleTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, RuleGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(IsSubscribe, isSubscribe_);
        DARABONBA_PTR_FROM_JSON(ParentRuleGroupId, parentRuleGroupId_);
        DARABONBA_PTR_FROM_JSON(RuleGroupId, ruleGroupId_);
        DARABONBA_PTR_FROM_JSON(RuleGroupName, ruleGroupName_);
        DARABONBA_PTR_FROM_JSON(RuleTotalCount, ruleTotalCount_);
      };
      RuleGroups() = default ;
      RuleGroups(const RuleGroups &) = default ;
      RuleGroups(RuleGroups &&) = default ;
      RuleGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleGroups() = default ;
      RuleGroups& operator=(const RuleGroups &) = default ;
      RuleGroups& operator=(RuleGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtModified_ == nullptr
        && this->isSubscribe_ == nullptr && this->parentRuleGroupId_ == nullptr && this->ruleGroupId_ == nullptr && this->ruleGroupName_ == nullptr && this->ruleTotalCount_ == nullptr; };
      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline RuleGroups& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // isSubscribe Field Functions 
      bool hasIsSubscribe() const { return this->isSubscribe_ != nullptr;};
      void deleteIsSubscribe() { this->isSubscribe_ = nullptr;};
      inline int32_t getIsSubscribe() const { DARABONBA_PTR_GET_DEFAULT(isSubscribe_, 0) };
      inline RuleGroups& setIsSubscribe(int32_t isSubscribe) { DARABONBA_PTR_SET_VALUE(isSubscribe_, isSubscribe) };


      // parentRuleGroupId Field Functions 
      bool hasParentRuleGroupId() const { return this->parentRuleGroupId_ != nullptr;};
      void deleteParentRuleGroupId() { this->parentRuleGroupId_ = nullptr;};
      inline int64_t getParentRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentRuleGroupId_, 0L) };
      inline RuleGroups& setParentRuleGroupId(int64_t parentRuleGroupId) { DARABONBA_PTR_SET_VALUE(parentRuleGroupId_, parentRuleGroupId) };


      // ruleGroupId Field Functions 
      bool hasRuleGroupId() const { return this->ruleGroupId_ != nullptr;};
      void deleteRuleGroupId() { this->ruleGroupId_ = nullptr;};
      inline int64_t getRuleGroupId() const { DARABONBA_PTR_GET_DEFAULT(ruleGroupId_, 0L) };
      inline RuleGroups& setRuleGroupId(int64_t ruleGroupId) { DARABONBA_PTR_SET_VALUE(ruleGroupId_, ruleGroupId) };


      // ruleGroupName Field Functions 
      bool hasRuleGroupName() const { return this->ruleGroupName_ != nullptr;};
      void deleteRuleGroupName() { this->ruleGroupName_ = nullptr;};
      inline string getRuleGroupName() const { DARABONBA_PTR_GET_DEFAULT(ruleGroupName_, "") };
      inline RuleGroups& setRuleGroupName(string ruleGroupName) { DARABONBA_PTR_SET_VALUE(ruleGroupName_, ruleGroupName) };


      // ruleTotalCount Field Functions 
      bool hasRuleTotalCount() const { return this->ruleTotalCount_ != nullptr;};
      void deleteRuleTotalCount() { this->ruleTotalCount_ = nullptr;};
      inline int32_t getRuleTotalCount() const { DARABONBA_PTR_GET_DEFAULT(ruleTotalCount_, 0) };
      inline RuleGroups& setRuleTotalCount(int32_t ruleTotalCount) { DARABONBA_PTR_SET_VALUE(ruleTotalCount_, ruleTotalCount) };


    protected:
      // The most recent time when the rule group was modified.
      shared_ptr<int64_t> gmtModified_ {};
      // Indicates whether the automatic update feature is enabled for the rule group.
      // 
      // *   1: The automatic update feature is enabled for the rule group.
      // *   2: The automatic update feature is disabled for the rule group.
      shared_ptr<int32_t> isSubscribe_ {};
      // The ID of the rule group.
      // 
      // *   0: The rule group is created from scratch.
      // *   1011: The rule group is a strict rule group.
      // *   1012: The rule group is a medium rule group.
      // *   1013: The rue group is a loose rule group.
      shared_ptr<int64_t> parentRuleGroupId_ {};
      // The ID of the regular expression rule group.
      shared_ptr<int64_t> ruleGroupId_ {};
      // The name of the rule group.
      shared_ptr<string> ruleGroupName_ {};
      // The number of built-in rules in the rule group.
      shared_ptr<int32_t> ruleTotalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleGroups_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleGroups Field Functions 
    bool hasRuleGroups() const { return this->ruleGroups_ != nullptr;};
    void deleteRuleGroups() { this->ruleGroups_ = nullptr;};
    inline const vector<DescribeRuleGroupsResponseBody::RuleGroups> & getRuleGroups() const { DARABONBA_PTR_GET_CONST(ruleGroups_, vector<DescribeRuleGroupsResponseBody::RuleGroups>) };
    inline vector<DescribeRuleGroupsResponseBody::RuleGroups> getRuleGroups() { DARABONBA_PTR_GET(ruleGroups_, vector<DescribeRuleGroupsResponseBody::RuleGroups>) };
    inline DescribeRuleGroupsResponseBody& setRuleGroups(const vector<DescribeRuleGroupsResponseBody::RuleGroups> & ruleGroups) { DARABONBA_PTR_SET_VALUE(ruleGroups_, ruleGroups) };
    inline DescribeRuleGroupsResponseBody& setRuleGroups(vector<DescribeRuleGroupsResponseBody::RuleGroups> && ruleGroups) { DARABONBA_PTR_SET_RVALUE(ruleGroups_, ruleGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRuleGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array of regular expression rule groups.
    shared_ptr<vector<DescribeRuleGroupsResponseBody::RuleGroups>> ruleGroups_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
