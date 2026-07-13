// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROTECTIONPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListProtectionPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProtectionPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyId, protectionPolicyId_);
      DARABONBA_PTR_TO_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProtectionPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyId, protectionPolicyId_);
      DARABONBA_PTR_FROM_JSON(ProtectionPolicyRegionId, protectionPolicyRegionId_);
    };
    ListProtectionPoliciesRequest() = default ;
    ListProtectionPoliciesRequest(const ListProtectionPoliciesRequest &) = default ;
    ListProtectionPoliciesRequest(ListProtectionPoliciesRequest &&) = default ;
    ListProtectionPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProtectionPoliciesRequest() = default ;
    ListProtectionPoliciesRequest& operator=(const ListProtectionPoliciesRequest &) = default ;
    ListProtectionPoliciesRequest& operator=(ListProtectionPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->protectionPolicyId_ == nullptr && this->protectionPolicyRegionId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProtectionPoliciesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProtectionPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // protectionPolicyId Field Functions 
    bool hasProtectionPolicyId() const { return this->protectionPolicyId_ != nullptr;};
    void deleteProtectionPolicyId() { this->protectionPolicyId_ = nullptr;};
    inline string getProtectionPolicyId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyId_, "") };
    inline ListProtectionPoliciesRequest& setProtectionPolicyId(string protectionPolicyId) { DARABONBA_PTR_SET_VALUE(protectionPolicyId_, protectionPolicyId) };


    // protectionPolicyRegionId Field Functions 
    bool hasProtectionPolicyRegionId() const { return this->protectionPolicyRegionId_ != nullptr;};
    void deleteProtectionPolicyRegionId() { this->protectionPolicyRegionId_ = nullptr;};
    inline string getProtectionPolicyRegionId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyRegionId_, "") };
    inline ListProtectionPoliciesRequest& setProtectionPolicyRegionId(string protectionPolicyRegionId) { DARABONBA_PTR_SET_VALUE(protectionPolicyRegionId_, protectionPolicyRegionId) };


  protected:
    // The maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    // The paging token.
    shared_ptr<string> nextToken_ {};
    // The protection policy ID.
    shared_ptr<string> protectionPolicyId_ {};
    // The region ID of the protection policy.
    shared_ptr<string> protectionPolicyRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
