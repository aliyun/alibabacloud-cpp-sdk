// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventSubEventResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEventSubEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventSubEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventSubEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEventSubEventResponseBody() = default ;
    ListEventSubEventResponseBody(const ListEventSubEventResponseBody &) = default ;
    ListEventSubEventResponseBody(ListEventSubEventResponseBody &&) = default ;
    ListEventSubEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventSubEventResponseBody() = default ;
    ListEventSubEventResponseBody& operator=(const ListEventSubEventResponseBody &) = default ;
    ListEventSubEventResponseBody& operator=(ListEventSubEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->hasMore_ == nullptr && return this->logs_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListEventSubEventResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListEventSubEventResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListEventSubEventResponseBodyLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListEventSubEventResponseBodyLogs>) };
    inline vector<ListEventSubEventResponseBodyLogs> logs() { DARABONBA_PTR_GET(logs_, vector<ListEventSubEventResponseBodyLogs>) };
    inline ListEventSubEventResponseBody& setLogs(const vector<ListEventSubEventResponseBodyLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListEventSubEventResponseBody& setLogs(vector<ListEventSubEventResponseBodyLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventSubEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of callback records returned on the current page.
    std::shared_ptr<int64_t> count_ = nullptr;
    // Indicates whether the current page is followed by a page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The callback records.
    std::shared_ptr<vector<ListEventSubEventResponseBodyLogs>> logs_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
