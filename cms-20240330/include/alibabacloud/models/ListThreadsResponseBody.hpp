// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListThreadsResponseBodyThreads.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListThreadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListThreadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_PTR_TO_JSON(threads, threads_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListThreadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_PTR_FROM_JSON(threads, threads_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListThreadsResponseBody() = default ;
    ListThreadsResponseBody(const ListThreadsResponseBody &) = default ;
    ListThreadsResponseBody(ListThreadsResponseBody &&) = default ;
    ListThreadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListThreadsResponseBody() = default ;
    ListThreadsResponseBody& operator=(const ListThreadsResponseBody &) = default ;
    ListThreadsResponseBody& operator=(ListThreadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->threadId_ == nullptr && return this->threads_ == nullptr && return this->total_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListThreadsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListThreadsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListThreadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline ListThreadsResponseBody& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // threads Field Functions 
    bool hasThreads() const { return this->threads_ != nullptr;};
    void deleteThreads() { this->threads_ = nullptr;};
    inline const vector<ListThreadsResponseBodyThreads> & threads() const { DARABONBA_PTR_GET_CONST(threads_, vector<ListThreadsResponseBodyThreads>) };
    inline vector<ListThreadsResponseBodyThreads> threads() { DARABONBA_PTR_GET(threads_, vector<ListThreadsResponseBodyThreads>) };
    inline ListThreadsResponseBody& setThreads(const vector<ListThreadsResponseBodyThreads> & threads) { DARABONBA_PTR_SET_VALUE(threads_, threads) };
    inline ListThreadsResponseBody& setThreads(vector<ListThreadsResponseBodyThreads> && threads) { DARABONBA_PTR_SET_RVALUE(threads_, threads) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListThreadsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<vector<ListThreadsResponseBodyThreads>> threads_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
