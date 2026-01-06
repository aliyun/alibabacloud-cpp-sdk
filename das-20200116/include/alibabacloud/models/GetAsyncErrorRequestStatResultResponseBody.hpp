// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCERRORREQUESTSTATRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataResultValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetAsyncErrorRequestStatResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncErrorRequestStatResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncErrorRequestStatResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAsyncErrorRequestStatResultResponseBody() = default ;
    GetAsyncErrorRequestStatResultResponseBody(const GetAsyncErrorRequestStatResultResponseBody &) = default ;
    GetAsyncErrorRequestStatResultResponseBody(GetAsyncErrorRequestStatResultResponseBody &&) = default ;
    GetAsyncErrorRequestStatResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncErrorRequestStatResultResponseBody() = default ;
    GetAsyncErrorRequestStatResultResponseBody& operator=(const GetAsyncErrorRequestStatResultResponseBody &) = default ;
    GetAsyncErrorRequestStatResultResponseBody& operator=(GetAsyncErrorRequestStatResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(complete, complete_);
        DARABONBA_PTR_TO_JSON(fail, fail_);
        DARABONBA_PTR_TO_JSON(isFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(resultId, resultId_);
        DARABONBA_PTR_TO_JSON(state, state_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(complete, complete_);
        DARABONBA_PTR_FROM_JSON(fail, fail_);
        DARABONBA_PTR_FROM_JSON(isFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(resultId, resultId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
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
      virtual bool empty() const override { return this->complete_ == nullptr
        && this->fail_ == nullptr && this->isFinish_ == nullptr && this->result_ == nullptr && this->resultId_ == nullptr && this->state_ == nullptr
        && this->timestamp_ == nullptr; };
      // complete Field Functions 
      bool hasComplete() const { return this->complete_ != nullptr;};
      void deleteComplete() { this->complete_ = nullptr;};
      inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
      inline Data& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline bool getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, false) };
      inline Data& setFail(bool fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const map<string, DataResultValue> & getResult() const { DARABONBA_PTR_GET_CONST(result_, map<string, DataResultValue>) };
      inline map<string, DataResultValue> getResult() { DARABONBA_PTR_GET(result_, map<string, DataResultValue>) };
      inline Data& setResult(const map<string, DataResultValue> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(map<string, DataResultValue> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // Indicates whether the asynchronous request was complete.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> complete_ {};
      // Indicates whether the request failed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> fail_ {};
      // Indicates whether the asynchronous request was successful. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isFinish_ {};
      // The returned data of the asynchronous request.
      shared_ptr<map<string, DataResultValue>> result_ {};
      // The ID of the asynchronous request.
      shared_ptr<string> resultId_ {};
      // The state of the asynchronous request. Valid values:
      // 
      // *   **RUNNING**: The asynchronous request is running.
      // *   **SUCCESS**: The asynchronous request is successful.
      // *   **FAIL**: The asynchronous request fails.
      shared_ptr<string> state_ {};
      // The time when the asynchronous request was made. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAsyncErrorRequestStatResultResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAsyncErrorRequestStatResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAsyncErrorRequestStatResultResponseBody::Data) };
    inline GetAsyncErrorRequestStatResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAsyncErrorRequestStatResultResponseBody::Data) };
    inline GetAsyncErrorRequestStatResultResponseBody& setData(const GetAsyncErrorRequestStatResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAsyncErrorRequestStatResultResponseBody& setData(GetAsyncErrorRequestStatResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAsyncErrorRequestStatResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAsyncErrorRequestStatResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAsyncErrorRequestStatResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetAsyncErrorRequestStatResultResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
