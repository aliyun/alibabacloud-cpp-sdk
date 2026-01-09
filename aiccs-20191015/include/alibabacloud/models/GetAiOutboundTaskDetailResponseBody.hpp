// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAiOutboundTaskDetailResponseBody() = default ;
    GetAiOutboundTaskDetailResponseBody(const GetAiOutboundTaskDetailResponseBody &) = default ;
    GetAiOutboundTaskDetailResponseBody(GetAiOutboundTaskDetailResponseBody &&) = default ;
    GetAiOutboundTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskDetailResponseBody() = default ;
    GetAiOutboundTaskDetailResponseBody& operator=(const GetAiOutboundTaskDetailResponseBody &) = default ;
    GetAiOutboundTaskDetailResponseBody& operator=(GetAiOutboundTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConcurrentRate, concurrentRate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
        DARABONBA_PTR_TO_JSON(ForecastCallRate, forecastCallRate_);
        DARABONBA_PTR_TO_JSON(HandlerId, handlerId_);
        DARABONBA_PTR_TO_JSON(HandlerName, handlerName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NumRepeated, numRepeated_);
        DARABONBA_PTR_TO_JSON(OutboundNums, outboundNums_);
        DARABONBA_PTR_TO_JSON(RecallRule, recallRule_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConcurrentRate, concurrentRate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
        DARABONBA_PTR_FROM_JSON(ForecastCallRate, forecastCallRate_);
        DARABONBA_PTR_FROM_JSON(HandlerId, handlerId_);
        DARABONBA_PTR_FROM_JSON(HandlerName, handlerName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NumRepeated, numRepeated_);
        DARABONBA_PTR_FROM_JSON(OutboundNums, outboundNums_);
        DARABONBA_PTR_FROM_JSON(RecallRule, recallRule_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class RecallRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallRule& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
        };
        friend void from_json(const Darabonba::Json& j, RecallRule& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
        };
        RecallRule() = default ;
        RecallRule(const RecallRule &) = default ;
        RecallRule(RecallRule &&) = default ;
        RecallRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallRule() = default ;
        RecallRule& operator=(const RecallRule &) = default ;
        RecallRule& operator=(RecallRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->interval_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline RecallRule& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline RecallRule& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<int32_t> interval_ {};
      };

      virtual bool empty() const override { return this->concurrentRate_ == nullptr
        && this->description_ == nullptr && this->executionTime_ == nullptr && this->forecastCallRate_ == nullptr && this->handlerId_ == nullptr && this->handlerName_ == nullptr
        && this->name_ == nullptr && this->numRepeated_ == nullptr && this->outboundNums_ == nullptr && this->recallRule_ == nullptr && this->status_ == nullptr
        && this->statusDesc_ == nullptr && this->taskId_ == nullptr && this->type_ == nullptr; };
      // concurrentRate Field Functions 
      bool hasConcurrentRate() const { return this->concurrentRate_ != nullptr;};
      void deleteConcurrentRate() { this->concurrentRate_ = nullptr;};
      inline int32_t getConcurrentRate() const { DARABONBA_PTR_GET_DEFAULT(concurrentRate_, 0) };
      inline Data& setConcurrentRate(int32_t concurrentRate) { DARABONBA_PTR_SET_VALUE(concurrentRate_, concurrentRate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // executionTime Field Functions 
      bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
      void deleteExecutionTime() { this->executionTime_ = nullptr;};
      inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
      inline Data& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


      // forecastCallRate Field Functions 
      bool hasForecastCallRate() const { return this->forecastCallRate_ != nullptr;};
      void deleteForecastCallRate() { this->forecastCallRate_ = nullptr;};
      inline float getForecastCallRate() const { DARABONBA_PTR_GET_DEFAULT(forecastCallRate_, 0.0) };
      inline Data& setForecastCallRate(float forecastCallRate) { DARABONBA_PTR_SET_VALUE(forecastCallRate_, forecastCallRate) };


      // handlerId Field Functions 
      bool hasHandlerId() const { return this->handlerId_ != nullptr;};
      void deleteHandlerId() { this->handlerId_ = nullptr;};
      inline int64_t getHandlerId() const { DARABONBA_PTR_GET_DEFAULT(handlerId_, 0L) };
      inline Data& setHandlerId(int64_t handlerId) { DARABONBA_PTR_SET_VALUE(handlerId_, handlerId) };


      // handlerName Field Functions 
      bool hasHandlerName() const { return this->handlerName_ != nullptr;};
      void deleteHandlerName() { this->handlerName_ = nullptr;};
      inline string getHandlerName() const { DARABONBA_PTR_GET_DEFAULT(handlerName_, "") };
      inline Data& setHandlerName(string handlerName) { DARABONBA_PTR_SET_VALUE(handlerName_, handlerName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // numRepeated Field Functions 
      bool hasNumRepeated() const { return this->numRepeated_ != nullptr;};
      void deleteNumRepeated() { this->numRepeated_ = nullptr;};
      inline int32_t getNumRepeated() const { DARABONBA_PTR_GET_DEFAULT(numRepeated_, 0) };
      inline Data& setNumRepeated(int32_t numRepeated) { DARABONBA_PTR_SET_VALUE(numRepeated_, numRepeated) };


      // outboundNums Field Functions 
      bool hasOutboundNums() const { return this->outboundNums_ != nullptr;};
      void deleteOutboundNums() { this->outboundNums_ = nullptr;};
      inline const vector<string> & getOutboundNums() const { DARABONBA_PTR_GET_CONST(outboundNums_, vector<string>) };
      inline vector<string> getOutboundNums() { DARABONBA_PTR_GET(outboundNums_, vector<string>) };
      inline Data& setOutboundNums(const vector<string> & outboundNums) { DARABONBA_PTR_SET_VALUE(outboundNums_, outboundNums) };
      inline Data& setOutboundNums(vector<string> && outboundNums) { DARABONBA_PTR_SET_RVALUE(outboundNums_, outboundNums) };


      // recallRule Field Functions 
      bool hasRecallRule() const { return this->recallRule_ != nullptr;};
      void deleteRecallRule() { this->recallRule_ = nullptr;};
      inline const Data::RecallRule & getRecallRule() const { DARABONBA_PTR_GET_CONST(recallRule_, Data::RecallRule) };
      inline Data::RecallRule getRecallRule() { DARABONBA_PTR_GET(recallRule_, Data::RecallRule) };
      inline Data& setRecallRule(const Data::RecallRule & recallRule) { DARABONBA_PTR_SET_VALUE(recallRule_, recallRule) };
      inline Data& setRecallRule(Data::RecallRule && recallRule) { DARABONBA_PTR_SET_RVALUE(recallRule_, recallRule) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline Data& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int32_t> concurrentRate_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> executionTime_ {};
      shared_ptr<float> forecastCallRate_ {};
      shared_ptr<int64_t> handlerId_ {};
      shared_ptr<string> handlerName_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> numRepeated_ {};
      shared_ptr<vector<string>> outboundNums_ {};
      shared_ptr<Data::RecallRule> recallRule_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> statusDesc_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiOutboundTaskDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiOutboundTaskDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiOutboundTaskDetailResponseBody::Data) };
    inline GetAiOutboundTaskDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiOutboundTaskDetailResponseBody::Data) };
    inline GetAiOutboundTaskDetailResponseBody& setData(const GetAiOutboundTaskDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiOutboundTaskDetailResponseBody& setData(GetAiOutboundTaskDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiOutboundTaskDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiOutboundTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAiOutboundTaskDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAiOutboundTaskDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
