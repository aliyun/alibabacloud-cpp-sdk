// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEEORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListTrusteeOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrusteeOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrusteeOrderList, trusteeOrderList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrusteeOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrusteeOrderList, trusteeOrderList_);
    };
    ListTrusteeOrderResponseBody() = default ;
    ListTrusteeOrderResponseBody(const ListTrusteeOrderResponseBody &) = default ;
    ListTrusteeOrderResponseBody(ListTrusteeOrderResponseBody &&) = default ;
    ListTrusteeOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrusteeOrderResponseBody() = default ;
    ListTrusteeOrderResponseBody& operator=(const ListTrusteeOrderResponseBody &) = default ;
    ListTrusteeOrderResponseBody& operator=(ListTrusteeOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trusteeOrderList_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrusteeOrderResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrusteeOrderResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrusteeOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTrusteeOrderResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trusteeOrderList Field Functions 
    bool hasTrusteeOrderList() const { return this->trusteeOrderList_ != nullptr;};
    void deleteTrusteeOrderList() { this->trusteeOrderList_ = nullptr;};
    inline string getTrusteeOrderList() const { DARABONBA_PTR_GET_DEFAULT(trusteeOrderList_, "") };
    inline ListTrusteeOrderResponseBody& setTrusteeOrderList(string trusteeOrderList) { DARABONBA_PTR_SET_VALUE(trusteeOrderList_, trusteeOrderList) };


  protected:
    // The maximum number of records to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. If NextToken is empty, no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of orders.
    shared_ptr<int32_t> totalCount_ {};
    // The list of orders.
    shared_ptr<string> trusteeOrderList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
