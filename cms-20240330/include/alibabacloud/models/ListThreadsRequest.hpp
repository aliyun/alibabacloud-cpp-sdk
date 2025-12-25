// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTHREADSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTHREADSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListThreadsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListThreadsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListThreadsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
    };
    friend void from_json(const Darabonba::Json& j, ListThreadsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
    };
    ListThreadsRequest() = default ;
    ListThreadsRequest(const ListThreadsRequest &) = default ;
    ListThreadsRequest(ListThreadsRequest &&) = default ;
    ListThreadsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListThreadsRequest() = default ;
    ListThreadsRequest& operator=(const ListThreadsRequest &) = default ;
    ListThreadsRequest& operator=(ListThreadsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->status_ == nullptr && return this->threadId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListThreadsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListThreadsRequestFilter>) };
    inline vector<ListThreadsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListThreadsRequestFilter>) };
    inline ListThreadsRequest& setFilter(const vector<ListThreadsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListThreadsRequest& setFilter(vector<ListThreadsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListThreadsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListThreadsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListThreadsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ListThreadsRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


  protected:
    std::shared_ptr<vector<ListThreadsRequestFilter>> filter_ = nullptr;
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
