// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEMORYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEMORYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetMemoryRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMemoryRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMemoryRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMemoryRuleResponseBody() = default ;
    GetMemoryRuleResponseBody(const GetMemoryRuleResponseBody &) = default ;
    GetMemoryRuleResponseBody(GetMemoryRuleResponseBody &&) = default ;
    GetMemoryRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMemoryRuleResponseBody() = default ;
    GetMemoryRuleResponseBody& operator=(const GetMemoryRuleResponseBody &) = default ;
    GetMemoryRuleResponseBody& operator=(GetMemoryRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(failedTaskCount, failedTaskCount_);
        DARABONBA_PTR_TO_JSON(lastExecutedAt, lastExecutedAt_);
        DARABONBA_PTR_TO_JSON(lastTaskId, lastTaskId_);
        DARABONBA_PTR_TO_JSON(lastTaskStatus, lastTaskStatus_);
        DARABONBA_PTR_TO_JSON(memoryStoreId, memoryStoreId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
        DARABONBA_PTR_TO_JSON(strategy, strategy_);
        DARABONBA_PTR_TO_JSON(succeededTaskCount, succeededTaskCount_);
        DARABONBA_PTR_TO_JSON(taskCount, taskCount_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(failedTaskCount, failedTaskCount_);
        DARABONBA_PTR_FROM_JSON(lastExecutedAt, lastExecutedAt_);
        DARABONBA_PTR_FROM_JSON(lastTaskId, lastTaskId_);
        DARABONBA_PTR_FROM_JSON(lastTaskStatus, lastTaskStatus_);
        DARABONBA_PTR_FROM_JSON(memoryStoreId, memoryStoreId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(strategy, strategy_);
        DARABONBA_PTR_FROM_JSON(succeededTaskCount, succeededTaskCount_);
        DARABONBA_PTR_FROM_JSON(taskCount, taskCount_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
      class Strategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
          DARABONBA_PTR_TO_JSON(instruction, instruction_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Strategy() = default ;
        Strategy(const Strategy &) = default ;
        Strategy(Strategy &&) = default ;
        Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategy() = default ;
        Strategy& operator=(const Strategy &) = default ;
        Strategy& operator=(Strategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instruction_ == nullptr
        && this->type_ == nullptr; };
        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline Strategy& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Strategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The strategy-level instruction. It takes effect together with the store-level instruction. If a conflict occurs, this field takes precedence.
        shared_ptr<string> instruction_ {};
        // type
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->failedTaskCount_ == nullptr && this->lastExecutedAt_ == nullptr && this->lastTaskId_ == nullptr
        && this->lastTaskStatus_ == nullptr && this->memoryStoreId_ == nullptr && this->name_ == nullptr && this->ruleId_ == nullptr && this->strategy_ == nullptr
        && this->succeededTaskCount_ == nullptr && this->taskCount_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // failedTaskCount Field Functions 
      bool hasFailedTaskCount() const { return this->failedTaskCount_ != nullptr;};
      void deleteFailedTaskCount() { this->failedTaskCount_ = nullptr;};
      inline int64_t getFailedTaskCount() const { DARABONBA_PTR_GET_DEFAULT(failedTaskCount_, 0L) };
      inline Data& setFailedTaskCount(int64_t failedTaskCount) { DARABONBA_PTR_SET_VALUE(failedTaskCount_, failedTaskCount) };


      // lastExecutedAt Field Functions 
      bool hasLastExecutedAt() const { return this->lastExecutedAt_ != nullptr;};
      void deleteLastExecutedAt() { this->lastExecutedAt_ = nullptr;};
      inline string getLastExecutedAt() const { DARABONBA_PTR_GET_DEFAULT(lastExecutedAt_, "") };
      inline Data& setLastExecutedAt(string lastExecutedAt) { DARABONBA_PTR_SET_VALUE(lastExecutedAt_, lastExecutedAt) };


      // lastTaskId Field Functions 
      bool hasLastTaskId() const { return this->lastTaskId_ != nullptr;};
      void deleteLastTaskId() { this->lastTaskId_ = nullptr;};
      inline string getLastTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastTaskId_, "") };
      inline Data& setLastTaskId(string lastTaskId) { DARABONBA_PTR_SET_VALUE(lastTaskId_, lastTaskId) };


      // lastTaskStatus Field Functions 
      bool hasLastTaskStatus() const { return this->lastTaskStatus_ != nullptr;};
      void deleteLastTaskStatus() { this->lastTaskStatus_ = nullptr;};
      inline string getLastTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(lastTaskStatus_, "") };
      inline Data& setLastTaskStatus(string lastTaskStatus) { DARABONBA_PTR_SET_VALUE(lastTaskStatus_, lastTaskStatus) };


      // memoryStoreId Field Functions 
      bool hasMemoryStoreId() const { return this->memoryStoreId_ != nullptr;};
      void deleteMemoryStoreId() { this->memoryStoreId_ = nullptr;};
      inline string getMemoryStoreId() const { DARABONBA_PTR_GET_DEFAULT(memoryStoreId_, "") };
      inline Data& setMemoryStoreId(string memoryStoreId) { DARABONBA_PTR_SET_VALUE(memoryStoreId_, memoryStoreId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Data& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline const Data::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, Data::Strategy) };
      inline Data::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, Data::Strategy) };
      inline Data& setStrategy(const Data::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
      inline Data& setStrategy(Data::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


      // succeededTaskCount Field Functions 
      bool hasSucceededTaskCount() const { return this->succeededTaskCount_ != nullptr;};
      void deleteSucceededTaskCount() { this->succeededTaskCount_ = nullptr;};
      inline int64_t getSucceededTaskCount() const { DARABONBA_PTR_GET_DEFAULT(succeededTaskCount_, 0L) };
      inline Data& setSucceededTaskCount(int64_t succeededTaskCount) { DARABONBA_PTR_SET_VALUE(succeededTaskCount_, succeededTaskCount) };


      // taskCount Field Functions 
      bool hasTaskCount() const { return this->taskCount_ != nullptr;};
      void deleteTaskCount() { this->taskCount_ = nullptr;};
      inline int64_t getTaskCount() const { DARABONBA_PTR_GET_DEFAULT(taskCount_, 0L) };
      inline Data& setTaskCount(int64_t taskCount) { DARABONBA_PTR_SET_VALUE(taskCount_, taskCount) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Data& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // createdAt
      // 
      // This parameter is required.
      shared_ptr<string> createdAt_ {};
      // description
      shared_ptr<string> description_ {};
      // enabled
      // 
      // This parameter is required.
      shared_ptr<bool> enabled_ {};
      // failedTaskCount
      // 
      // This parameter is required.
      shared_ptr<int64_t> failedTaskCount_ {};
      // The time when the last execution started, in RFC 3339 format.
      shared_ptr<string> lastExecutedAt_ {};
      // lastTaskId
      shared_ptr<string> lastTaskId_ {};
      // lastTaskStatus
      shared_ptr<string> lastTaskStatus_ {};
      // memoryStoreId
      // 
      // This parameter is required.
      shared_ptr<string> memoryStoreId_ {};
      // name
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // ruleId
      // 
      // This parameter is required.
      shared_ptr<string> ruleId_ {};
      // strategy
      // 
      // This parameter is required.
      shared_ptr<Data::Strategy> strategy_ {};
      // succeededTaskCount
      // 
      // This parameter is required.
      shared_ptr<int64_t> succeededTaskCount_ {};
      // The total number of distinct task IDs that have started execution. Retries are not counted separately.
      // 
      // This parameter is required.
      shared_ptr<int64_t> taskCount_ {};
      // updatedAt
      // 
      // This parameter is required.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMemoryRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMemoryRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMemoryRuleResponseBody::Data) };
    inline GetMemoryRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMemoryRuleResponseBody::Data) };
    inline GetMemoryRuleResponseBody& setData(const GetMemoryRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMemoryRuleResponseBody& setData(GetMemoryRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMemoryRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMemoryRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMemoryRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMemoryRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // code
    shared_ptr<string> code_ {};
    // data
    shared_ptr<GetMemoryRuleResponseBody::Data> data_ {};
    // httpStatusCode
    shared_ptr<int32_t> httpStatusCode_ {};
    // message
    shared_ptr<string> message_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    // success
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
