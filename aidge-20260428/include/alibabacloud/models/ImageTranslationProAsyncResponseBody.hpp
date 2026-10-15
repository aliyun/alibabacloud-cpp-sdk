// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONPROASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONPROASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationProAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationProAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationProAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImageTranslationProAsyncResponseBody() = default ;
    ImageTranslationProAsyncResponseBody(const ImageTranslationProAsyncResponseBody &) = default ;
    ImageTranslationProAsyncResponseBody(ImageTranslationProAsyncResponseBody &&) = default ;
    ImageTranslationProAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationProAsyncResponseBody() = default ;
    ImageTranslationProAsyncResponseBody& operator=(const ImageTranslationProAsyncResponseBody &) = default ;
    ImageTranslationProAsyncResponseBody& operator=(ImageTranslationProAsyncResponseBody &&) = default ;
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
      // The ID of the asynchronous task. It is used to query results and associate notifications. Do not use the example prefix as a business validation rule.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImageTranslationProAsyncResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageTranslationProAsyncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImageTranslationProAsyncResponseBody::Data) };
    inline ImageTranslationProAsyncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImageTranslationProAsyncResponseBody::Data) };
    inline ImageTranslationProAsyncResponseBody& setData(const ImageTranslationProAsyncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageTranslationProAsyncResponseBody& setData(ImageTranslationProAsyncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImageTranslationProAsyncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageTranslationProAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImageTranslationProAsyncResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. A value of success indicates that the task is submitted successfully.
    shared_ptr<string> code_ {};
    // The submission result of the Image Translation Pro asynchronous task.
    shared_ptr<ImageTranslationProAsyncResponseBody::Data> data_ {};
    // The call description. A successful call returns Success. If the call fails, read the actual error message.
    shared_ptr<string> message_ {};
    // The ID of the submission request. It is used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the submission call is successful. This does not indicate that the translation is complete.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
