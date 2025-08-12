// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRtcMPUEventSubRecordResponseBodyLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUEventSubRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUEventSubRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUEventSubRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRtcMPUEventSubRecordResponseBody() = default ;
    ListRtcMPUEventSubRecordResponseBody(const ListRtcMPUEventSubRecordResponseBody &) = default ;
    ListRtcMPUEventSubRecordResponseBody(ListRtcMPUEventSubRecordResponseBody &&) = default ;
    ListRtcMPUEventSubRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUEventSubRecordResponseBody() = default ;
    ListRtcMPUEventSubRecordResponseBody& operator=(const ListRtcMPUEventSubRecordResponseBody &) = default ;
    ListRtcMPUEventSubRecordResponseBody& operator=(ListRtcMPUEventSubRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->hasMore_ != nullptr && this->logs_ != nullptr && this->requestId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRtcMPUEventSubRecordResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListRtcMPUEventSubRecordResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListRtcMPUEventSubRecordResponseBodyLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListRtcMPUEventSubRecordResponseBodyLogs>) };
    inline vector<ListRtcMPUEventSubRecordResponseBodyLogs> logs() { DARABONBA_PTR_GET(logs_, vector<ListRtcMPUEventSubRecordResponseBodyLogs>) };
    inline ListRtcMPUEventSubRecordResponseBody& setLogs(const vector<ListRtcMPUEventSubRecordResponseBodyLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListRtcMPUEventSubRecordResponseBody& setLogs(vector<ListRtcMPUEventSubRecordResponseBodyLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRtcMPUEventSubRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries per page.
    std::shared_ptr<int64_t> count_ = nullptr;
    // Indicates whether the current page is followed by a page.
    std::shared_ptr<bool> hasMore_ = nullptr;
    // The callback records.
    std::shared_ptr<vector<ListRtcMPUEventSubRecordResponseBodyLogs>> logs_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
