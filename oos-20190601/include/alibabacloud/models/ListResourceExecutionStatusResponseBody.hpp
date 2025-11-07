// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceExecutionStatusResponseBodyResourceExecutionStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListResourceExecutionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExecutionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceExecutionStatus, resourceExecutionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExecutionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceExecutionStatus, resourceExecutionStatus_);
    };
    ListResourceExecutionStatusResponseBody() = default ;
    ListResourceExecutionStatusResponseBody(const ListResourceExecutionStatusResponseBody &) = default ;
    ListResourceExecutionStatusResponseBody(ListResourceExecutionStatusResponseBody &&) = default ;
    ListResourceExecutionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExecutionStatusResponseBody() = default ;
    ListResourceExecutionStatusResponseBody& operator=(const ListResourceExecutionStatusResponseBody &) = default ;
    ListResourceExecutionStatusResponseBody& operator=(ListResourceExecutionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->resourceExecutionStatus_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceExecutionStatusResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceExecutionStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceExecutionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceExecutionStatus Field Functions 
    bool hasResourceExecutionStatus() const { return this->resourceExecutionStatus_ != nullptr;};
    void deleteResourceExecutionStatus() { this->resourceExecutionStatus_ = nullptr;};
    inline const vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus> & resourceExecutionStatus() const { DARABONBA_PTR_GET_CONST(resourceExecutionStatus_, vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus>) };
    inline vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus> resourceExecutionStatus() { DARABONBA_PTR_GET(resourceExecutionStatus_, vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus>) };
    inline ListResourceExecutionStatusResponseBody& setResourceExecutionStatus(const vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus> & resourceExecutionStatus) { DARABONBA_PTR_SET_VALUE(resourceExecutionStatus_, resourceExecutionStatus) };
    inline ListResourceExecutionStatusResponseBody& setResourceExecutionStatus(vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus> && resourceExecutionStatus) { DARABONBA_PTR_SET_RVALUE(resourceExecutionStatus_, resourceExecutionStatus) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The execution information of the resource.
    std::shared_ptr<vector<ListResourceExecutionStatusResponseBodyResourceExecutionStatus>> resourceExecutionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
