// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(HTTPCode, HTTPCode_);
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
        DARABONBA_PTR_TO_JSON(SubId, subId_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(HTTPCode, HTTPCode_);
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
        DARABONBA_PTR_FROM_JSON(SubId, subId_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->callbackUrl_ == nullptr && this->cost_ == nullptr && this->data_ == nullptr && this->HTTPCode_ == nullptr && this->msgId_ == nullptr
        && this->subId_ == nullptr && this->time_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Logs& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // callbackUrl Field Functions 
      bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
      void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
      inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
      inline Logs& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
      inline Logs& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Logs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // HTTPCode Field Functions 
      bool hasHTTPCode() const { return this->HTTPCode_ != nullptr;};
      void deleteHTTPCode() { this->HTTPCode_ = nullptr;};
      inline string getHTTPCode() const { DARABONBA_PTR_GET_DEFAULT(HTTPCode_, "") };
      inline Logs& setHTTPCode(string HTTPCode) { DARABONBA_PTR_SET_VALUE(HTTPCode_, HTTPCode) };


      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
      inline Logs& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


      // subId Field Functions 
      bool hasSubId() const { return this->subId_ != nullptr;};
      void deleteSubId() { this->subId_ = nullptr;};
      inline string getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
      inline Logs& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Logs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The callback URL.
      shared_ptr<string> callbackUrl_ {};
      // The callback duration. Unit: milliseconds.
      shared_ptr<int64_t> cost_ {};
      // For more information about the callback, see [CreateRtcMPUEventSub](https://help.aliyun.com/document_detail/2804583.html).
      shared_ptr<string> data_ {};
      // The HTTP status code. 200 indicates that the callback is successful.
      shared_ptr<string> HTTPCode_ {};
      // The ID of the callback record.
      shared_ptr<string> msgId_ {};
      // The ID of the subscription.
      shared_ptr<string> subId_ {};
      // The time when the callback was invoked. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->hasMore_ == nullptr && this->logs_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListRtcMPUEventSubRecordResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListRtcMPUEventSubRecordResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListRtcMPUEventSubRecordResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListRtcMPUEventSubRecordResponseBody::Logs>) };
    inline vector<ListRtcMPUEventSubRecordResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListRtcMPUEventSubRecordResponseBody::Logs>) };
    inline ListRtcMPUEventSubRecordResponseBody& setLogs(const vector<ListRtcMPUEventSubRecordResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListRtcMPUEventSubRecordResponseBody& setLogs(vector<ListRtcMPUEventSubRecordResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRtcMPUEventSubRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries per page.
    shared_ptr<int64_t> count_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> hasMore_ {};
    // The callback records.
    shared_ptr<vector<ListRtcMPUEventSubRecordResponseBody::Logs>> logs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
