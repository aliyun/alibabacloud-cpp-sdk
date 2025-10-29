// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUEVENTSUBRECORDRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUEventSubRecordResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUEventSubRecordResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HTTPCode, HTTPCode_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUEventSubRecordResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HTTPCode, HTTPCode_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    ListRtcMPUEventSubRecordResponseBodyLogs() = default ;
    ListRtcMPUEventSubRecordResponseBodyLogs(const ListRtcMPUEventSubRecordResponseBodyLogs &) = default ;
    ListRtcMPUEventSubRecordResponseBodyLogs(ListRtcMPUEventSubRecordResponseBodyLogs &&) = default ;
    ListRtcMPUEventSubRecordResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUEventSubRecordResponseBodyLogs() = default ;
    ListRtcMPUEventSubRecordResponseBodyLogs& operator=(const ListRtcMPUEventSubRecordResponseBodyLogs &) = default ;
    ListRtcMPUEventSubRecordResponseBodyLogs& operator=(ListRtcMPUEventSubRecordResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callbackUrl_ == nullptr && return this->cost_ == nullptr && return this->data_ == nullptr && return this->HTTPCode_ == nullptr && return this->msgId_ == nullptr
        && return this->subId_ == nullptr && return this->time_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // HTTPCode Field Functions 
    bool hasHTTPCode() const { return this->HTTPCode_ != nullptr;};
    void deleteHTTPCode() { this->HTTPCode_ = nullptr;};
    inline string HTTPCode() const { DARABONBA_PTR_GET_DEFAULT(HTTPCode_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setHTTPCode(string HTTPCode) { DARABONBA_PTR_SET_VALUE(HTTPCode_, HTTPCode) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string msgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListRtcMPUEventSubRecordResponseBodyLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The callback duration. Unit: milliseconds.
    std::shared_ptr<int64_t> cost_ = nullptr;
    // For more information about the callback, see [CreateRtcMPUEventSub](https://help.aliyun.com/document_detail/2804583.html).
    std::shared_ptr<string> data_ = nullptr;
    // The HTTP status code. 200 indicates that the callback is successful.
    std::shared_ptr<string> HTTPCode_ = nullptr;
    // The ID of the callback record.
    std::shared_ptr<string> msgId_ = nullptr;
    // The ID of the subscription.
    std::shared_ptr<string> subId_ = nullptr;
    // The time when the callback was invoked. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
