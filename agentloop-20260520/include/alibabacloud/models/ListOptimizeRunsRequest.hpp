// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPTIMIZERUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPTIMIZERUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ListOptimizeRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOptimizeRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(windowStartTimeBegin, windowStartTimeBegin_);
      DARABONBA_PTR_TO_JSON(windowStartTimeEnd, windowStartTimeEnd_);
    };
    friend void from_json(const Darabonba::Json& j, ListOptimizeRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(windowStartTimeBegin, windowStartTimeBegin_);
      DARABONBA_PTR_FROM_JSON(windowStartTimeEnd, windowStartTimeEnd_);
    };
    ListOptimizeRunsRequest() = default ;
    ListOptimizeRunsRequest(const ListOptimizeRunsRequest &) = default ;
    ListOptimizeRunsRequest(ListOptimizeRunsRequest &&) = default ;
    ListOptimizeRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOptimizeRunsRequest() = default ;
    ListOptimizeRunsRequest& operator=(const ListOptimizeRunsRequest &) = default ;
    ListOptimizeRunsRequest& operator=(ListOptimizeRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->status_ == nullptr && this->windowStartTimeBegin_ == nullptr && this->windowStartTimeEnd_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOptimizeRunsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOptimizeRunsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListOptimizeRunsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // windowStartTimeBegin Field Functions 
    bool hasWindowStartTimeBegin() const { return this->windowStartTimeBegin_ != nullptr;};
    void deleteWindowStartTimeBegin() { this->windowStartTimeBegin_ = nullptr;};
    inline int64_t getWindowStartTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(windowStartTimeBegin_, 0L) };
    inline ListOptimizeRunsRequest& setWindowStartTimeBegin(int64_t windowStartTimeBegin) { DARABONBA_PTR_SET_VALUE(windowStartTimeBegin_, windowStartTimeBegin) };


    // windowStartTimeEnd Field Functions 
    bool hasWindowStartTimeEnd() const { return this->windowStartTimeEnd_ != nullptr;};
    void deleteWindowStartTimeEnd() { this->windowStartTimeEnd_ = nullptr;};
    inline int64_t getWindowStartTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(windowStartTimeEnd_, 0L) };
    inline ListOptimizeRunsRequest& setWindowStartTimeEnd(int64_t windowStartTimeEnd) { DARABONBA_PTR_SET_VALUE(windowStartTimeEnd_, windowStartTimeEnd) };


  protected:
    // The maximum number of entries to return. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The status used to filter results.
    shared_ptr<string> status_ {};
    // The lower bound of the window start time in UNIX seconds.
    shared_ptr<int64_t> windowStartTimeBegin_ {};
    // The upper bound of the window start time in UNIX seconds.
    shared_ptr<int64_t> windowStartTimeEnd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
