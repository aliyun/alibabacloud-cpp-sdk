// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESFORBRANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESFORBRANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCustomPrivacyPoliciesForBrandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPrivacyPoliciesForBrandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BrandCustomPrivacyPolicies, brandCustomPrivacyPolicies_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPrivacyPoliciesForBrandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandCustomPrivacyPolicies, brandCustomPrivacyPolicies_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomPrivacyPoliciesForBrandResponseBody() = default ;
    ListCustomPrivacyPoliciesForBrandResponseBody(const ListCustomPrivacyPoliciesForBrandResponseBody &) = default ;
    ListCustomPrivacyPoliciesForBrandResponseBody(ListCustomPrivacyPoliciesForBrandResponseBody &&) = default ;
    ListCustomPrivacyPoliciesForBrandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPrivacyPoliciesForBrandResponseBody() = default ;
    ListCustomPrivacyPoliciesForBrandResponseBody& operator=(const ListCustomPrivacyPoliciesForBrandResponseBody &) = default ;
    ListCustomPrivacyPoliciesForBrandResponseBody& operator=(ListCustomPrivacyPoliciesForBrandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandCustomPrivacyPolicies_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // brandCustomPrivacyPolicies Field Functions 
    bool hasBrandCustomPrivacyPolicies() const { return this->brandCustomPrivacyPolicies_ != nullptr;};
    void deleteBrandCustomPrivacyPolicies() { this->brandCustomPrivacyPolicies_ = nullptr;};
    inline const vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies> & brandCustomPrivacyPolicies() const { DARABONBA_PTR_GET_CONST(brandCustomPrivacyPolicies_, vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies>) };
    inline vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies> brandCustomPrivacyPolicies() { DARABONBA_PTR_GET(brandCustomPrivacyPolicies_, vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies>) };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setBrandCustomPrivacyPolicies(const vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies> & brandCustomPrivacyPolicies) { DARABONBA_PTR_SET_VALUE(brandCustomPrivacyPolicies_, brandCustomPrivacyPolicies) };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setBrandCustomPrivacyPolicies(vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies> && brandCustomPrivacyPolicies) { DARABONBA_PTR_SET_RVALUE(brandCustomPrivacyPolicies_, brandCustomPrivacyPolicies) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomPrivacyPoliciesForBrandResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListCustomPrivacyPoliciesForBrandResponseBodyBrandCustomPrivacyPolicies>> brandCustomPrivacyPolicies_ = nullptr;
    // 分页查询时每页行数。
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    std::shared_ptr<string> previousToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
