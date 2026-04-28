// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHADVISORCOSTCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHADVISORCOSTCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class RefreshAdvisorCostCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAdvisorCostCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAdvisorCostCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RefreshAdvisorCostCheckResponseBody() = default ;
    RefreshAdvisorCostCheckResponseBody(const RefreshAdvisorCostCheckResponseBody &) = default ;
    RefreshAdvisorCostCheckResponseBody(RefreshAdvisorCostCheckResponseBody &&) = default ;
    RefreshAdvisorCostCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAdvisorCostCheckResponseBody() = default ;
    RefreshAdvisorCostCheckResponseBody& operator=(const RefreshAdvisorCostCheckResponseBody &) = default ;
    RefreshAdvisorCostCheckResponseBody& operator=(RefreshAdvisorCostCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CommandId, commandId_);
        DARABONBA_PTR_TO_JSON(ManagerTaskId, managerTaskId_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
        DARABONBA_PTR_FROM_JSON(ManagerTaskId, managerTaskId_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->commandId_ == nullptr
        && this->managerTaskId_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
      // commandId Field Functions 
      bool hasCommandId() const { return this->commandId_ != nullptr;};
      void deleteCommandId() { this->commandId_ = nullptr;};
      inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
      inline Data& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


      // managerTaskId Field Functions 
      bool hasManagerTaskId() const { return this->managerTaskId_ != nullptr;};
      void deleteManagerTaskId() { this->managerTaskId_ = nullptr;};
      inline int64_t getManagerTaskId() const { DARABONBA_PTR_GET_DEFAULT(managerTaskId_, 0L) };
      inline Data& setManagerTaskId(int64_t managerTaskId) { DARABONBA_PTR_SET_VALUE(managerTaskId_, managerTaskId) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> commandId_ {};
      shared_ptr<int64_t> managerTaskId_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RefreshAdvisorCostCheckResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RefreshAdvisorCostCheckResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RefreshAdvisorCostCheckResponseBody::Data) };
    inline RefreshAdvisorCostCheckResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RefreshAdvisorCostCheckResponseBody::Data) };
    inline RefreshAdvisorCostCheckResponseBody& setData(const RefreshAdvisorCostCheckResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RefreshAdvisorCostCheckResponseBody& setData(RefreshAdvisorCostCheckResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RefreshAdvisorCostCheckResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshAdvisorCostCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RefreshAdvisorCostCheckResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<RefreshAdvisorCostCheckResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
