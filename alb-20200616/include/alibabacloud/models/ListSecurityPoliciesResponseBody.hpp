// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecurityPoliciesResponseBodySecurityPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListSecurityPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicies, securityPolicies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSecurityPoliciesResponseBody() = default ;
    ListSecurityPoliciesResponseBody(const ListSecurityPoliciesResponseBody &) = default ;
    ListSecurityPoliciesResponseBody(ListSecurityPoliciesResponseBody &&) = default ;
    ListSecurityPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityPoliciesResponseBody() = default ;
    ListSecurityPoliciesResponseBody& operator=(const ListSecurityPoliciesResponseBody &) = default ;
    ListSecurityPoliciesResponseBody& operator=(ListSecurityPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->securityPolicies_ != nullptr && this->totalCount_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSecurityPoliciesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSecurityPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecurityPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityPolicies Field Functions 
    bool hasSecurityPolicies() const { return this->securityPolicies_ != nullptr;};
    void deleteSecurityPolicies() { this->securityPolicies_ = nullptr;};
    inline const vector<ListSecurityPoliciesResponseBodySecurityPolicies> & securityPolicies() const { DARABONBA_PTR_GET_CONST(securityPolicies_, vector<ListSecurityPoliciesResponseBodySecurityPolicies>) };
    inline vector<ListSecurityPoliciesResponseBodySecurityPolicies> securityPolicies() { DARABONBA_PTR_GET(securityPolicies_, vector<ListSecurityPoliciesResponseBodySecurityPolicies>) };
    inline ListSecurityPoliciesResponseBody& setSecurityPolicies(const vector<ListSecurityPoliciesResponseBodySecurityPolicies> & securityPolicies) { DARABONBA_PTR_SET_VALUE(securityPolicies_, securityPolicies) };
    inline ListSecurityPoliciesResponseBody& setSecurityPolicies(vector<ListSecurityPoliciesResponseBodySecurityPolicies> && securityPolicies) { DARABONBA_PTR_SET_RVALUE(securityPolicies_, securityPolicies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecurityPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The supported security policies.
    std::shared_ptr<vector<ListSecurityPoliciesResponseBodySecurityPolicies>> securityPolicies_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
