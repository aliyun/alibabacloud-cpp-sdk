// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPeerAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPeerAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPeerAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    ListTransitRouterPeerAttachmentsResponseBody() = default ;
    ListTransitRouterPeerAttachmentsResponseBody(const ListTransitRouterPeerAttachmentsResponseBody &) = default ;
    ListTransitRouterPeerAttachmentsResponseBody(ListTransitRouterPeerAttachmentsResponseBody &&) = default ;
    ListTransitRouterPeerAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPeerAttachmentsResponseBody() = default ;
    ListTransitRouterPeerAttachmentsResponseBody& operator=(const ListTransitRouterPeerAttachmentsResponseBody &) = default ;
    ListTransitRouterPeerAttachmentsResponseBody& operator=(ListTransitRouterPeerAttachmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterAttachments_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterPeerAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAttachments Field Functions 
    bool hasTransitRouterAttachments() const { return this->transitRouterAttachments_ != nullptr;};
    void deleteTransitRouterAttachments() { this->transitRouterAttachments_ = nullptr;};
    inline const vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments> & transitRouterAttachments() const { DARABONBA_PTR_GET_CONST(transitRouterAttachments_, vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments>) };
    inline vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments> transitRouterAttachments() { DARABONBA_PTR_GET(transitRouterAttachments_, vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments>) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setTransitRouterAttachments(const vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments> & transitRouterAttachments) { DARABONBA_PTR_SET_VALUE(transitRouterAttachments_, transitRouterAttachments) };
    inline ListTransitRouterPeerAttachmentsResponseBody& setTransitRouterAttachments(vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments> && transitRouterAttachments) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachments_, transitRouterAttachments) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If the **NextToken** parameter is empty, no next page exists.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of inter-region connections.
    std::shared_ptr<vector<ListTransitRouterPeerAttachmentsResponseBodyTransitRouterAttachments>> transitRouterAttachments_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
