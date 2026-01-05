// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTRESPONSEBODY_HPP_
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
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        DARABONBA_PTR_TO_JSON(SubId, subId_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        DARABONBA_PTR_FROM_JSON(SubId, subId_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
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
        && this->code_ == nullptr && this->cost_ == nullptr && this->data_ == nullptr && this->messageId_ == nullptr && this->subId_ == nullptr
        && this->time_ == nullptr && this->url_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Logs& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Logs& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline int32_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
      inline Logs& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Logs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Logs& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


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


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Logs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The application ID.
      shared_ptr<string> appId_ {};
      // The HTTP status code. A value of 200 indicates that the callback was successful.
      shared_ptr<int32_t> code_ {};
      // The callback duration. Unit: milliseconds.
      shared_ptr<int32_t> cost_ {};
      // The details about the callback.
      shared_ptr<string> data_ {};
      // The ID of the callback record.
      shared_ptr<string> messageId_ {};
      // The subscription ID.
      shared_ptr<string> subId_ {};
      // The time when the callback was generated.
      shared_ptr<string> time_ {};
      // The callback URL.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->hasMore_ == nullptr && this->logs_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListEventSubEventResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListEventSubEventResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListEventSubEventResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListEventSubEventResponseBody::Logs>) };
    inline vector<ListEventSubEventResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListEventSubEventResponseBody::Logs>) };
    inline ListEventSubEventResponseBody& setLogs(const vector<ListEventSubEventResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListEventSubEventResponseBody& setLogs(vector<ListEventSubEventResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventSubEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The total number of callback records returned on the current page.
    shared_ptr<int64_t> count_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> hasMore_ {};
    // The callback records.
    shared_ptr<vector<ListEventSubEventResponseBody::Logs>> logs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
