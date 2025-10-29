// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBEVENTRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListEventSubEventResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventSubEventResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Cost, cost_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventSubEventResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Cost, cost_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListEventSubEventResponseBodyLogs() = default ;
    ListEventSubEventResponseBodyLogs(const ListEventSubEventResponseBodyLogs &) = default ;
    ListEventSubEventResponseBodyLogs(ListEventSubEventResponseBodyLogs &&) = default ;
    ListEventSubEventResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventSubEventResponseBodyLogs() = default ;
    ListEventSubEventResponseBodyLogs& operator=(const ListEventSubEventResponseBodyLogs &) = default ;
    ListEventSubEventResponseBodyLogs& operator=(ListEventSubEventResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->code_ == nullptr && return this->cost_ == nullptr && return this->data_ == nullptr && return this->messageId_ == nullptr && return this->subId_ == nullptr
        && return this->time_ == nullptr && return this->url_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListEventSubEventResponseBodyLogs& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEventSubEventResponseBodyLogs& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int32_t cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0) };
    inline ListEventSubEventResponseBodyLogs& setCost(int32_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListEventSubEventResponseBodyLogs& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ListEventSubEventResponseBodyLogs& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline ListEventSubEventResponseBodyLogs& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListEventSubEventResponseBodyLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListEventSubEventResponseBodyLogs& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The HTTP status code. A value of 200 indicates that the callback was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The callback duration. Unit: milliseconds.
    std::shared_ptr<int32_t> cost_ = nullptr;
    // The details about the callback.
    std::shared_ptr<string> data_ = nullptr;
    // The ID of the callback record.
    std::shared_ptr<string> messageId_ = nullptr;
    // The subscription ID.
    std::shared_ptr<string> subId_ = nullptr;
    // The time when the callback was generated.
    std::shared_ptr<string> time_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
