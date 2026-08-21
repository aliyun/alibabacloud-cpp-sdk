// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateScheduledTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    UpdateScheduledTaskResponseBody() = default ;
    UpdateScheduledTaskResponseBody(const UpdateScheduledTaskResponseBody &) = default ;
    UpdateScheduledTaskResponseBody(UpdateScheduledTaskResponseBody &&) = default ;
    UpdateScheduledTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduledTaskResponseBody() = default ;
    UpdateScheduledTaskResponseBody& operator=(const UpdateScheduledTaskResponseBody &) = default ;
    UpdateScheduledTaskResponseBody& operator=(UpdateScheduledTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr && this->updated_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateScheduledTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateScheduledTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateScheduledTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateScheduledTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline UpdateScheduledTaskResponseBody& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* or InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The error description. Empty when the request is successful.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The task ID (echoed back).
    shared_ptr<string> taskId_ {};
    // Indicates whether an actual update was made.
    shared_ptr<bool> updated_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
