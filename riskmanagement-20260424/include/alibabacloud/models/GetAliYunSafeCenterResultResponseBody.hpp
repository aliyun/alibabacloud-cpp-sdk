// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIYUNSAFECENTERRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIYUNSAFECENTERRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetAliYunSafeCenterResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAliYunSafeCenterResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAliYunSafeCenterResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAliYunSafeCenterResultResponseBody() = default ;
    GetAliYunSafeCenterResultResponseBody(const GetAliYunSafeCenterResultResponseBody &) = default ;
    GetAliYunSafeCenterResultResponseBody(GetAliYunSafeCenterResultResponseBody &&) = default ;
    GetAliYunSafeCenterResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAliYunSafeCenterResultResponseBody() = default ;
    GetAliYunSafeCenterResultResponseBody& operator=(const GetAliYunSafeCenterResultResponseBody &) = default ;
    GetAliYunSafeCenterResultResponseBody& operator=(GetAliYunSafeCenterResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(EcsInstanceStatus, ecsInstanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(SwasInstanceStatus, swasInstanceStatus_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(EcsInstanceStatus, ecsInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(SwasInstanceStatus, swasInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->agentStatus_ == nullptr
        && this->ecsInstanceStatus_ == nullptr && this->instanceIds_ == nullptr && this->requestId_ == nullptr && this->swasInstanceStatus_ == nullptr && this->taskId_ == nullptr
        && this->taskStatus_ == nullptr; };
      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline bool getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, false) };
      inline Data& setAgentStatus(bool agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // ecsInstanceStatus Field Functions 
      bool hasEcsInstanceStatus() const { return this->ecsInstanceStatus_ != nullptr;};
      void deleteEcsInstanceStatus() { this->ecsInstanceStatus_ = nullptr;};
      inline bool getEcsInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceStatus_, false) };
      inline Data& setEcsInstanceStatus(bool ecsInstanceStatus) { DARABONBA_PTR_SET_VALUE(ecsInstanceStatus_, ecsInstanceStatus) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<int64_t> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<int64_t>) };
      inline vector<int64_t> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<int64_t>) };
      inline Data& setInstanceIds(const vector<int64_t> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline Data& setInstanceIds(vector<int64_t> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // swasInstanceStatus Field Functions 
      bool hasSwasInstanceStatus() const { return this->swasInstanceStatus_ != nullptr;};
      void deleteSwasInstanceStatus() { this->swasInstanceStatus_ = nullptr;};
      inline bool getSwasInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(swasInstanceStatus_, false) };
      inline Data& setSwasInstanceStatus(bool swasInstanceStatus) { DARABONBA_PTR_SET_VALUE(swasInstanceStatus_, swasInstanceStatus) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline bool getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, false) };
      inline Data& setTaskStatus(bool taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<bool> agentStatus_ {};
      shared_ptr<bool> ecsInstanceStatus_ {};
      shared_ptr<vector<int64_t>> instanceIds_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<bool> swasInstanceStatus_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<bool> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAliYunSafeCenterResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAliYunSafeCenterResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAliYunSafeCenterResultResponseBody::Data) };
    inline GetAliYunSafeCenterResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAliYunSafeCenterResultResponseBody::Data) };
    inline GetAliYunSafeCenterResultResponseBody& setData(const GetAliYunSafeCenterResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAliYunSafeCenterResultResponseBody& setData(GetAliYunSafeCenterResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAliYunSafeCenterResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAliYunSafeCenterResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAliYunSafeCenterResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAliYunSafeCenterResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
