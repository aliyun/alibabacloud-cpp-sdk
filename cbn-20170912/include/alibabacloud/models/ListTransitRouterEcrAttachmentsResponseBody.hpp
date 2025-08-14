// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERECRATTACHMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERECRATTACHMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterEcrAttachmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterEcrAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterEcrAttachmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachments, transitRouterAttachments_);
    };
    ListTransitRouterEcrAttachmentsResponseBody() = default ;
    ListTransitRouterEcrAttachmentsResponseBody(const ListTransitRouterEcrAttachmentsResponseBody &) = default ;
    ListTransitRouterEcrAttachmentsResponseBody(ListTransitRouterEcrAttachmentsResponseBody &&) = default ;
    ListTransitRouterEcrAttachmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterEcrAttachmentsResponseBody() = default ;
    ListTransitRouterEcrAttachmentsResponseBody& operator=(const ListTransitRouterEcrAttachmentsResponseBody &) = default ;
    ListTransitRouterEcrAttachmentsResponseBody& operator=(ListTransitRouterEcrAttachmentsResponseBody &&) = default ;
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
    inline ListTransitRouterEcrAttachmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterEcrAttachmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAttachments Field Functions 
    bool hasTransitRouterAttachments() const { return this->transitRouterAttachments_ != nullptr;};
    void deleteTransitRouterAttachments() { this->transitRouterAttachments_ = nullptr;};
    inline const vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments> & transitRouterAttachments() const { DARABONBA_PTR_GET_CONST(transitRouterAttachments_, vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments>) };
    inline vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments> transitRouterAttachments() { DARABONBA_PTR_GET(transitRouterAttachments_, vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments>) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setTransitRouterAttachments(const vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments> & transitRouterAttachments) { DARABONBA_PTR_SET_VALUE(transitRouterAttachments_, transitRouterAttachments) };
    inline ListTransitRouterEcrAttachmentsResponseBody& setTransitRouterAttachments(vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments> && transitRouterAttachments) { DARABONBA_PTR_SET_RVALUE(transitRouterAttachments_, transitRouterAttachments) };


  protected:
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the ECR connections.
    std::shared_ptr<vector<ListTransitRouterEcrAttachmentsResponseBodyTransitRouterAttachments>> transitRouterAttachments_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
