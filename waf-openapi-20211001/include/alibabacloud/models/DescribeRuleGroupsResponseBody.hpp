// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleGroupsResponseBodyRuleGroups.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ruleGroups_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleGroups Field Functions 
    bool hasRuleGroups() const { return this->ruleGroups_ != nullptr;};
    void deleteRuleGroups() { this->ruleGroups_ = nullptr;};
    inline const vector<DescribeRuleGroupsResponseBodyRuleGroups> & ruleGroups() const { DARABONBA_PTR_GET_CONST(ruleGroups_, vector<DescribeRuleGroupsResponseBodyRuleGroups>) };
    inline vector<DescribeRuleGroupsResponseBodyRuleGroups> ruleGroups() { DARABONBA_PTR_GET(ruleGroups_, vector<DescribeRuleGroupsResponseBodyRuleGroups>) };
    inline DescribeRuleGroupsResponseBody& setRuleGroups(const vector<DescribeRuleGroupsResponseBodyRuleGroups> & ruleGroups) { DARABONBA_PTR_SET_VALUE(ruleGroups_, ruleGroups) };
    inline DescribeRuleGroupsResponseBody& setRuleGroups(vector<DescribeRuleGroupsResponseBodyRuleGroups> && ruleGroups) { DARABONBA_PTR_SET_RVALUE(ruleGroups_, ruleGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeRuleGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array of regular expression rule groups.
    std::shared_ptr<vector<DescribeRuleGroupsResponseBodyRuleGroups>> ruleGroups_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
