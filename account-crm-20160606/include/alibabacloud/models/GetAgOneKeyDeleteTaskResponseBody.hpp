// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGONEKEYDELETETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGONEKEYDELETETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetAgOneKeyDeleteTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgOneKeyDeleteTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskDto, taskDto_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgOneKeyDeleteTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskDto, taskDto_);
    };
    GetAgOneKeyDeleteTaskResponseBody() = default ;
    GetAgOneKeyDeleteTaskResponseBody(const GetAgOneKeyDeleteTaskResponseBody &) = default ;
    GetAgOneKeyDeleteTaskResponseBody(GetAgOneKeyDeleteTaskResponseBody &&) = default ;
    GetAgOneKeyDeleteTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgOneKeyDeleteTaskResponseBody() = default ;
    GetAgOneKeyDeleteTaskResponseBody& operator=(const GetAgOneKeyDeleteTaskResponseBody &) = default ;
    GetAgOneKeyDeleteTaskResponseBody& operator=(GetAgOneKeyDeleteTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskDto& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteStatus, deleteStatus_);
        DARABONBA_PTR_TO_JSON(ExistQuietPeriod, existQuietPeriod_);
        DARABONBA_PTR_TO_JSON(QuietPeriodEndTime, quietPeriodEndTime_);
      };
      friend void from_json(const Darabonba::Json& j, TaskDto& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteStatus, deleteStatus_);
        DARABONBA_PTR_FROM_JSON(ExistQuietPeriod, existQuietPeriod_);
        DARABONBA_PTR_FROM_JSON(QuietPeriodEndTime, quietPeriodEndTime_);
      };
      TaskDto() = default ;
      TaskDto(const TaskDto &) = default ;
      TaskDto(TaskDto &&) = default ;
      TaskDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskDto() = default ;
      TaskDto& operator=(const TaskDto &) = default ;
      TaskDto& operator=(TaskDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleteStatus_ == nullptr
        && this->existQuietPeriod_ == nullptr && this->quietPeriodEndTime_ == nullptr; };
      // deleteStatus Field Functions 
      bool hasDeleteStatus() const { return this->deleteStatus_ != nullptr;};
      void deleteDeleteStatus() { this->deleteStatus_ = nullptr;};
      inline string getDeleteStatus() const { DARABONBA_PTR_GET_DEFAULT(deleteStatus_, "") };
      inline TaskDto& setDeleteStatus(string deleteStatus) { DARABONBA_PTR_SET_VALUE(deleteStatus_, deleteStatus) };


      // existQuietPeriod Field Functions 
      bool hasExistQuietPeriod() const { return this->existQuietPeriod_ != nullptr;};
      void deleteExistQuietPeriod() { this->existQuietPeriod_ = nullptr;};
      inline bool getExistQuietPeriod() const { DARABONBA_PTR_GET_DEFAULT(existQuietPeriod_, false) };
      inline TaskDto& setExistQuietPeriod(bool existQuietPeriod) { DARABONBA_PTR_SET_VALUE(existQuietPeriod_, existQuietPeriod) };


      // quietPeriodEndTime Field Functions 
      bool hasQuietPeriodEndTime() const { return this->quietPeriodEndTime_ != nullptr;};
      void deleteQuietPeriodEndTime() { this->quietPeriodEndTime_ = nullptr;};
      inline string getQuietPeriodEndTime() const { DARABONBA_PTR_GET_DEFAULT(quietPeriodEndTime_, "") };
      inline TaskDto& setQuietPeriodEndTime(string quietPeriodEndTime) { DARABONBA_PTR_SET_VALUE(quietPeriodEndTime_, quietPeriodEndTime) };


    protected:
      shared_ptr<string> deleteStatus_ {};
      shared_ptr<bool> existQuietPeriod_ {};
      shared_ptr<string> quietPeriodEndTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskDto_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAgOneKeyDeleteTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgOneKeyDeleteTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgOneKeyDeleteTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgOneKeyDeleteTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskDto Field Functions 
    bool hasTaskDto() const { return this->taskDto_ != nullptr;};
    void deleteTaskDto() { this->taskDto_ = nullptr;};
    inline const GetAgOneKeyDeleteTaskResponseBody::TaskDto & getTaskDto() const { DARABONBA_PTR_GET_CONST(taskDto_, GetAgOneKeyDeleteTaskResponseBody::TaskDto) };
    inline GetAgOneKeyDeleteTaskResponseBody::TaskDto getTaskDto() { DARABONBA_PTR_GET(taskDto_, GetAgOneKeyDeleteTaskResponseBody::TaskDto) };
    inline GetAgOneKeyDeleteTaskResponseBody& setTaskDto(const GetAgOneKeyDeleteTaskResponseBody::TaskDto & taskDto) { DARABONBA_PTR_SET_VALUE(taskDto_, taskDto) };
    inline GetAgOneKeyDeleteTaskResponseBody& setTaskDto(GetAgOneKeyDeleteTaskResponseBody::TaskDto && taskDto) { DARABONBA_PTR_SET_RVALUE(taskDto_, taskDto) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<GetAgOneKeyDeleteTaskResponseBody::TaskDto> taskDto_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
