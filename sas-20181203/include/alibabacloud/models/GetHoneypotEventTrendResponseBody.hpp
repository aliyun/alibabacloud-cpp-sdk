// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTEVENTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTEVENTTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotEventTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotEventTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotEventTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHoneypotEventTrendResponseBody() = default ;
    GetHoneypotEventTrendResponseBody(const GetHoneypotEventTrendResponseBody &) = default ;
    GetHoneypotEventTrendResponseBody(GetHoneypotEventTrendResponseBody &&) = default ;
    GetHoneypotEventTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotEventTrendResponseBody() = default ;
    GetHoneypotEventTrendResponseBody& operator=(const GetHoneypotEventTrendResponseBody &) = default ;
    GetHoneypotEventTrendResponseBody& operator=(GetHoneypotEventTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->keyName_ == nullptr && this->timeStamp_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // keyName Field Functions 
      bool hasKeyName() const { return this->keyName_ != nullptr;};
      void deleteKeyName() { this->keyName_ = nullptr;};
      inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
      inline Data& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
      inline Data& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The number of attacks that occurred.
      shared_ptr<int32_t> count_ {};
      // The name of the attack.
      shared_ptr<string> keyName_ {};
      // The timestamp when the attack event occurred.
      shared_ptr<int64_t> timeStamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHoneypotEventTrendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetHoneypotEventTrendResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetHoneypotEventTrendResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetHoneypotEventTrendResponseBody::Data>) };
    inline vector<GetHoneypotEventTrendResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetHoneypotEventTrendResponseBody::Data>) };
    inline GetHoneypotEventTrendResponseBody& setData(const vector<GetHoneypotEventTrendResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHoneypotEventTrendResponseBody& setData(vector<GetHoneypotEventTrendResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetHoneypotEventTrendResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHoneypotEventTrendResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHoneypotEventTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHoneypotEventTrendResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The list of data returned. ￼
    shared_ptr<vector<GetHoneypotEventTrendResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
