// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATEASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATEASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class TextTranslateAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TextTranslateAsyncResponseBody() = default ;
    TextTranslateAsyncResponseBody(const TextTranslateAsyncResponseBody &) = default ;
    TextTranslateAsyncResponseBody(TextTranslateAsyncResponseBody &&) = default ;
    TextTranslateAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateAsyncResponseBody() = default ;
    TextTranslateAsyncResponseBody& operator=(const TextTranslateAsyncResponseBody &) = default ;
    TextTranslateAsyncResponseBody& operator=(TextTranslateAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->taskId_ == nullptr; };
      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The ID of the asynchronous task. It is used for result queries and notification association. Do not use the example prefix as a business validation rule.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TextTranslateAsyncResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TextTranslateAsyncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TextTranslateAsyncResponseBody::Data) };
    inline TextTranslateAsyncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TextTranslateAsyncResponseBody::Data) };
    inline TextTranslateAsyncResponseBody& setData(const TextTranslateAsyncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TextTranslateAsyncResponseBody& setData(TextTranslateAsyncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextTranslateAsyncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextTranslateAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TextTranslateAsyncResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code of the submission call. Example: success.
    shared_ptr<string> code_ {};
    // The submission result of the text translation asynchronous node.
    shared_ptr<TextTranslateAsyncResponseBody::Data> data_ {};
    // The invocation message. Example of a successful call: Success. If the call fails, check the actual error message.
    shared_ptr<string> message_ {};
    // The ID of the submission request. It is used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the submission call is successful. A successful call does not mean that the translation is complete.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
