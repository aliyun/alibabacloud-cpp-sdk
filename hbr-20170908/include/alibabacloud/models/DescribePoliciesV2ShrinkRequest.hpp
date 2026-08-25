// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePoliciesV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountScope, accountScope_);
      DARABONBA_PTR_TO_JSON(Accounts, accountsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RuleScope, ruleScope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountScope, accountScope_);
      DARABONBA_PTR_FROM_JSON(Accounts, accountsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RuleScope, ruleScope_);
    };
    DescribePoliciesV2ShrinkRequest() = default ;
    DescribePoliciesV2ShrinkRequest(const DescribePoliciesV2ShrinkRequest &) = default ;
    DescribePoliciesV2ShrinkRequest(DescribePoliciesV2ShrinkRequest &&) = default ;
    DescribePoliciesV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2ShrinkRequest() = default ;
    DescribePoliciesV2ShrinkRequest& operator=(const DescribePoliciesV2ShrinkRequest &) = default ;
    DescribePoliciesV2ShrinkRequest& operator=(DescribePoliciesV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountScope_ == nullptr
        && this->accountsShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->policyId_ == nullptr && this->ruleScope_ == nullptr; };
    // accountScope Field Functions 
    bool hasAccountScope() const { return this->accountScope_ != nullptr;};
    void deleteAccountScope() { this->accountScope_ = nullptr;};
    inline string getAccountScope() const { DARABONBA_PTR_GET_DEFAULT(accountScope_, "") };
    inline DescribePoliciesV2ShrinkRequest& setAccountScope(string accountScope) { DARABONBA_PTR_SET_VALUE(accountScope_, accountScope) };


    // accountsShrink Field Functions 
    bool hasAccountsShrink() const { return this->accountsShrink_ != nullptr;};
    void deleteAccountsShrink() { this->accountsShrink_ = nullptr;};
    inline string getAccountsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountsShrink_, "") };
    inline DescribePoliciesV2ShrinkRequest& setAccountsShrink(string accountsShrink) { DARABONBA_PTR_SET_VALUE(accountsShrink_, accountsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePoliciesV2ShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePoliciesV2ShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePoliciesV2ShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // ruleScope Field Functions 
    bool hasRuleScope() const { return this->ruleScope_ != nullptr;};
    void deleteRuleScope() { this->ruleScope_ = nullptr;};
    inline string getRuleScope() const { DARABONBA_PTR_GET_DEFAULT(ruleScope_, "") };
    inline DescribePoliciesV2ShrinkRequest& setRuleScope(string ruleScope) { DARABONBA_PTR_SET_VALUE(ruleScope_, ruleScope) };


  protected:
    shared_ptr<string> accountScope_ {};
    shared_ptr<string> accountsShrink_ {};
    // The number of results per query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token required to retrieve the next page of policies.
    shared_ptr<string> nextToken_ {};
    // The policy ID.
    shared_ptr<string> policyId_ {};
    shared_ptr<string> ruleScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
