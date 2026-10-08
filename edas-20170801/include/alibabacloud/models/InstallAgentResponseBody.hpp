// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InstallAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExecutionResultList, executionResultList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExecutionResultList, executionResultList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InstallAgentResponseBody() = default ;
    InstallAgentResponseBody(const InstallAgentResponseBody &) = default ;
    InstallAgentResponseBody(InstallAgentResponseBody &&) = default ;
    InstallAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAgentResponseBody() = default ;
    InstallAgentResponseBody& operator=(const InstallAgentResponseBody &) = default ;
    InstallAgentResponseBody& operator=(InstallAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecutionResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutionResultList& obj) { 
        DARABONBA_PTR_TO_JSON(ExecutionResult, executionResult_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutionResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecutionResult, executionResult_);
      };
      ExecutionResultList() = default ;
      ExecutionResultList(const ExecutionResultList &) = default ;
      ExecutionResultList(ExecutionResultList &&) = default ;
      ExecutionResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutionResultList() = default ;
      ExecutionResultList& operator=(const ExecutionResultList &) = default ;
      ExecutionResultList& operator=(ExecutionResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ExecutionResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExecutionResult& obj) { 
          DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InvokeRecordStatus, invokeRecordStatus_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, ExecutionResult& obj) { 
          DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InvokeRecordStatus, invokeRecordStatus_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        ExecutionResult() = default ;
        ExecutionResult(const ExecutionResult &) = default ;
        ExecutionResult(ExecutionResult &&) = default ;
        ExecutionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExecutionResult() = default ;
        ExecutionResult& operator=(const ExecutionResult &) = default ;
        ExecutionResult& operator=(ExecutionResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->finishedTime_ == nullptr
        && this->instanceId_ == nullptr && this->invokeRecordStatus_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
        // finishedTime Field Functions 
        bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
        void deleteFinishedTime() { this->finishedTime_ = nullptr;};
        inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
        inline ExecutionResult& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ExecutionResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // invokeRecordStatus Field Functions 
        bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
        void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
        inline string getInvokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
        inline ExecutionResult& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ExecutionResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline ExecutionResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> finishedTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> invokeRecordStatus_ {};
        shared_ptr<string> status_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->executionResult_ == nullptr; };
      // executionResult Field Functions 
      bool hasExecutionResult() const { return this->executionResult_ != nullptr;};
      void deleteExecutionResult() { this->executionResult_ = nullptr;};
      inline const vector<ExecutionResultList::ExecutionResult> & getExecutionResult() const { DARABONBA_PTR_GET_CONST(executionResult_, vector<ExecutionResultList::ExecutionResult>) };
      inline vector<ExecutionResultList::ExecutionResult> getExecutionResult() { DARABONBA_PTR_GET(executionResult_, vector<ExecutionResultList::ExecutionResult>) };
      inline ExecutionResultList& setExecutionResult(const vector<ExecutionResultList::ExecutionResult> & executionResult) { DARABONBA_PTR_SET_VALUE(executionResult_, executionResult) };
      inline ExecutionResultList& setExecutionResult(vector<ExecutionResultList::ExecutionResult> && executionResult) { DARABONBA_PTR_SET_RVALUE(executionResult_, executionResult) };


    protected:
      shared_ptr<vector<ExecutionResultList::ExecutionResult>> executionResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->executionResultList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InstallAgentResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // executionResultList Field Functions 
    bool hasExecutionResultList() const { return this->executionResultList_ != nullptr;};
    void deleteExecutionResultList() { this->executionResultList_ = nullptr;};
    inline const InstallAgentResponseBody::ExecutionResultList & getExecutionResultList() const { DARABONBA_PTR_GET_CONST(executionResultList_, InstallAgentResponseBody::ExecutionResultList) };
    inline InstallAgentResponseBody::ExecutionResultList getExecutionResultList() { DARABONBA_PTR_GET(executionResultList_, InstallAgentResponseBody::ExecutionResultList) };
    inline InstallAgentResponseBody& setExecutionResultList(const InstallAgentResponseBody::ExecutionResultList & executionResultList) { DARABONBA_PTR_SET_VALUE(executionResultList_, executionResultList) };
    inline InstallAgentResponseBody& setExecutionResultList(InstallAgentResponseBody::ExecutionResultList && executionResultList) { DARABONBA_PTR_SET_RVALUE(executionResultList_, executionResultList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstallAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    shared_ptr<InstallAgentResponseBody::ExecutionResultList> executionResultList_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
