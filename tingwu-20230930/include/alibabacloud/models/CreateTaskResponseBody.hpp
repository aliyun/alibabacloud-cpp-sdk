// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateTaskResponseBody() = default ;
    CreateTaskResponseBody(const CreateTaskResponseBody &) = default ;
    CreateTaskResponseBody(CreateTaskResponseBody &&) = default ;
    CreateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskResponseBody() = default ;
    CreateTaskResponseBody& operator=(const CreateTaskResponseBody &) = default ;
    CreateTaskResponseBody& operator=(CreateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MeetingJoinUrl, meetingJoinUrl_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MeetingJoinUrl, meetingJoinUrl_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskKey, taskKey_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
      virtual bool empty() const override { return this->meetingJoinUrl_ == nullptr
        && this->taskId_ == nullptr && this->taskKey_ == nullptr && this->taskStatus_ == nullptr; };
      // meetingJoinUrl Field Functions 
      bool hasMeetingJoinUrl() const { return this->meetingJoinUrl_ != nullptr;};
      void deleteMeetingJoinUrl() { this->meetingJoinUrl_ = nullptr;};
      inline string getMeetingJoinUrl() const { DARABONBA_PTR_GET_DEFAULT(meetingJoinUrl_, "") };
      inline Data& setMeetingJoinUrl(string meetingJoinUrl) { DARABONBA_PTR_SET_VALUE(meetingJoinUrl_, meetingJoinUrl) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskKey Field Functions 
      bool hasTaskKey() const { return this->taskKey_ != nullptr;};
      void deleteTaskKey() { this->taskKey_ = nullptr;};
      inline string getTaskKey() const { DARABONBA_PTR_GET_DEFAULT(taskKey_, "") };
      inline Data& setTaskKey(string taskKey) { DARABONBA_PTR_SET_VALUE(taskKey_, taskKey) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> meetingJoinUrl_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskKey_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateTaskResponseBody::Data) };
    inline CreateTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateTaskResponseBody::Data) };
    inline CreateTaskResponseBody& setData(const CreateTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateTaskResponseBody& setData(CreateTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
