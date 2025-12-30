// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIDEOCREATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateVideoCreationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVideoCreationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(retryAble, retryAble_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVideoCreationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(retryAble, retryAble_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateVideoCreationTaskResponseBody() = default ;
    CreateVideoCreationTaskResponseBody(const CreateVideoCreationTaskResponseBody &) = default ;
    CreateVideoCreationTaskResponseBody(CreateVideoCreationTaskResponseBody &&) = default ;
    CreateVideoCreationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVideoCreationTaskResponseBody() = default ;
    CreateVideoCreationTaskResponseBody& operator=(const CreateVideoCreationTaskResponseBody &) = default ;
    CreateVideoCreationTaskResponseBody& operator=(CreateVideoCreationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(estimatedWaitTimeInSeconds, estimatedWaitTimeInSeconds_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(estimatedWaitTimeInSeconds, estimatedWaitTimeInSeconds_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
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
      virtual bool empty() const override { return this->estimatedWaitTimeInSeconds_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
      // estimatedWaitTimeInSeconds Field Functions 
      bool hasEstimatedWaitTimeInSeconds() const { return this->estimatedWaitTimeInSeconds_ != nullptr;};
      void deleteEstimatedWaitTimeInSeconds() { this->estimatedWaitTimeInSeconds_ = nullptr;};
      inline int64_t getEstimatedWaitTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(estimatedWaitTimeInSeconds_, 0L) };
      inline Data& setEstimatedWaitTimeInSeconds(int64_t estimatedWaitTimeInSeconds) { DARABONBA_PTR_SET_VALUE(estimatedWaitTimeInSeconds_, estimatedWaitTimeInSeconds) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<int64_t> estimatedWaitTimeInSeconds_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->retryAble_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateVideoCreationTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateVideoCreationTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateVideoCreationTaskResponseBody::Data) };
    inline CreateVideoCreationTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateVideoCreationTaskResponseBody::Data) };
    inline CreateVideoCreationTaskResponseBody& setData(const CreateVideoCreationTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateVideoCreationTaskResponseBody& setData(CreateVideoCreationTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateVideoCreationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retryAble Field Functions 
    bool hasRetryAble() const { return this->retryAble_ != nullptr;};
    void deleteRetryAble() { this->retryAble_ = nullptr;};
    inline bool getRetryAble() const { DARABONBA_PTR_GET_DEFAULT(retryAble_, false) };
    inline CreateVideoCreationTaskResponseBody& setRetryAble(bool retryAble) { DARABONBA_PTR_SET_VALUE(retryAble_, retryAble) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateVideoCreationTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateVideoCreationTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> retryAble_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
