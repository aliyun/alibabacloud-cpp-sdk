// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomains, transitRouterMulticastDomains_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomains, transitRouterMulticastDomains_);
    };
    ListTransitRouterMulticastDomainsResponseBody() = default ;
    ListTransitRouterMulticastDomainsResponseBody(const ListTransitRouterMulticastDomainsResponseBody &) = default ;
    ListTransitRouterMulticastDomainsResponseBody(ListTransitRouterMulticastDomainsResponseBody &&) = default ;
    ListTransitRouterMulticastDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainsResponseBody() = default ;
    ListTransitRouterMulticastDomainsResponseBody& operator=(const ListTransitRouterMulticastDomainsResponseBody &) = default ;
    ListTransitRouterMulticastDomainsResponseBody& operator=(ListTransitRouterMulticastDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterMulticastDomains_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastDomainsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastDomainsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastDomainsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterMulticastDomains Field Functions 
    bool hasTransitRouterMulticastDomains() const { return this->transitRouterMulticastDomains_ != nullptr;};
    void deleteTransitRouterMulticastDomains() { this->transitRouterMulticastDomains_ = nullptr;};
    inline const vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains> & transitRouterMulticastDomains() const { DARABONBA_PTR_GET_CONST(transitRouterMulticastDomains_, vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains>) };
    inline vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains> transitRouterMulticastDomains() { DARABONBA_PTR_GET(transitRouterMulticastDomains_, vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains>) };
    inline ListTransitRouterMulticastDomainsResponseBody& setTransitRouterMulticastDomains(const vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains> & transitRouterMulticastDomains) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomains_, transitRouterMulticastDomains) };
    inline ListTransitRouterMulticastDomainsResponseBody& setTransitRouterMulticastDomains(vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains> && transitRouterMulticastDomains) { DARABONBA_PTR_SET_RVALUE(transitRouterMulticastDomains_, transitRouterMulticastDomains) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of multicast domains.
    std::shared_ptr<vector<ListTransitRouterMulticastDomainsResponseBodyTransitRouterMulticastDomains>> transitRouterMulticastDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
