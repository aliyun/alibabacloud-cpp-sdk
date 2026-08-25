// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePoliciesV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(AccountScope, accountScope_);
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RuleScope, ruleScope_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountScope, accountScope_);
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RuleScope, ruleScope_);
    };
    DescribePoliciesV2Request() = default ;
    DescribePoliciesV2Request(const DescribePoliciesV2Request &) = default ;
    DescribePoliciesV2Request(DescribePoliciesV2Request &&) = default ;
    DescribePoliciesV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2Request() = default ;
    DescribePoliciesV2Request& operator=(const DescribePoliciesV2Request &) = default ;
    DescribePoliciesV2Request& operator=(DescribePoliciesV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
        DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
        DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
        DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
        DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      };
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->crossAccountRoleName_ == nullptr
        && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr; };
      // crossAccountRoleName Field Functions 
      bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
      void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
      inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
      inline Accounts& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


      // crossAccountType Field Functions 
      bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
      void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
      inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
      inline Accounts& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


      // crossAccountUserId Field Functions 
      bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
      void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
      inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
      inline Accounts& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    protected:
      shared_ptr<string> crossAccountRoleName_ {};
      shared_ptr<string> crossAccountType_ {};
      shared_ptr<int64_t> crossAccountUserId_ {};
    };

    virtual bool empty() const override { return this->accountScope_ == nullptr
        && this->accounts_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->policyId_ == nullptr && this->ruleScope_ == nullptr; };
    // accountScope Field Functions 
    bool hasAccountScope() const { return this->accountScope_ != nullptr;};
    void deleteAccountScope() { this->accountScope_ = nullptr;};
    inline string getAccountScope() const { DARABONBA_PTR_GET_DEFAULT(accountScope_, "") };
    inline DescribePoliciesV2Request& setAccountScope(string accountScope) { DARABONBA_PTR_SET_VALUE(accountScope_, accountScope) };


    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<DescribePoliciesV2Request::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<DescribePoliciesV2Request::Accounts>) };
    inline vector<DescribePoliciesV2Request::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<DescribePoliciesV2Request::Accounts>) };
    inline DescribePoliciesV2Request& setAccounts(const vector<DescribePoliciesV2Request::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribePoliciesV2Request& setAccounts(vector<DescribePoliciesV2Request::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePoliciesV2Request& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePoliciesV2Request& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePoliciesV2Request& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // ruleScope Field Functions 
    bool hasRuleScope() const { return this->ruleScope_ != nullptr;};
    void deleteRuleScope() { this->ruleScope_ = nullptr;};
    inline string getRuleScope() const { DARABONBA_PTR_GET_DEFAULT(ruleScope_, "") };
    inline DescribePoliciesV2Request& setRuleScope(string ruleScope) { DARABONBA_PTR_SET_VALUE(ruleScope_, ruleScope) };


  protected:
    shared_ptr<string> accountScope_ {};
    shared_ptr<vector<DescribePoliciesV2Request::Accounts>> accounts_ {};
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
