// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTDOMAINASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastDomainAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastDomainAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastAssociations, transitRouterMulticastAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastDomainAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastAssociations, transitRouterMulticastAssociations_);
    };
    ListTransitRouterMulticastDomainAssociationsResponseBody() = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody(const ListTransitRouterMulticastDomainAssociationsResponseBody &) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody(ListTransitRouterMulticastDomainAssociationsResponseBody &&) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastDomainAssociationsResponseBody() = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody& operator=(const ListTransitRouterMulticastDomainAssociationsResponseBody &) = default ;
    ListTransitRouterMulticastDomainAssociationsResponseBody& operator=(ListTransitRouterMulticastDomainAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterMulticastAssociations_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterMulticastAssociations Field Functions 
    bool hasTransitRouterMulticastAssociations() const { return this->transitRouterMulticastAssociations_ != nullptr;};
    void deleteTransitRouterMulticastAssociations() { this->transitRouterMulticastAssociations_ = nullptr;};
    inline const vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations> & transitRouterMulticastAssociations() const { DARABONBA_PTR_GET_CONST(transitRouterMulticastAssociations_, vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations>) };
    inline vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations> transitRouterMulticastAssociations() { DARABONBA_PTR_GET(transitRouterMulticastAssociations_, vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations>) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setTransitRouterMulticastAssociations(const vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations> & transitRouterMulticastAssociations) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastAssociations_, transitRouterMulticastAssociations) };
    inline ListTransitRouterMulticastDomainAssociationsResponseBody& setTransitRouterMulticastAssociations(vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations> && transitRouterMulticastAssociations) { DARABONBA_PTR_SET_RVALUE(transitRouterMulticastAssociations_, transitRouterMulticastAssociations) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no subsequent query is to be sent.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the resource associated with the multicast domain.
    std::shared_ptr<vector<ListTransitRouterMulticastDomainAssociationsResponseBodyTransitRouterMulticastAssociations>> transitRouterMulticastAssociations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
