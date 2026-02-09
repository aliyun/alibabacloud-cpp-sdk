// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisTaskDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisTaskDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    QueryPushAnalysisTaskDetailResponseBody() = default ;
    QueryPushAnalysisTaskDetailResponseBody(const QueryPushAnalysisTaskDetailResponseBody &) = default ;
    QueryPushAnalysisTaskDetailResponseBody(QueryPushAnalysisTaskDetailResponseBody &&) = default ;
    QueryPushAnalysisTaskDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisTaskDetailResponseBody() = default ;
    QueryPushAnalysisTaskDetailResponseBody& operator=(const QueryPushAnalysisTaskDetailResponseBody &) = default ;
    QueryPushAnalysisTaskDetailResponseBody& operator=(QueryPushAnalysisTaskDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(PushArrivalNum, pushArrivalNum_);
          DARABONBA_PTR_TO_JSON(PushNum, pushNum_);
          DARABONBA_PTR_TO_JSON(PushSuccessNum, pushSuccessNum_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(PushArrivalNum, pushArrivalNum_);
          DARABONBA_PTR_FROM_JSON(PushNum, pushNum_);
          DARABONBA_PTR_FROM_JSON(PushSuccessNum, pushSuccessNum_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->endTime_ == nullptr && this->pushArrivalNum_ == nullptr && this->pushNum_ == nullptr && this->pushSuccessNum_ == nullptr && this->startTime_ == nullptr
        && this->taskId_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Data& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // pushArrivalNum Field Functions 
        bool hasPushArrivalNum() const { return this->pushArrivalNum_ != nullptr;};
        void deletePushArrivalNum() { this->pushArrivalNum_ = nullptr;};
        inline float getPushArrivalNum() const { DARABONBA_PTR_GET_DEFAULT(pushArrivalNum_, 0.0) };
        inline Data& setPushArrivalNum(float pushArrivalNum) { DARABONBA_PTR_SET_VALUE(pushArrivalNum_, pushArrivalNum) };


        // pushNum Field Functions 
        bool hasPushNum() const { return this->pushNum_ != nullptr;};
        void deletePushNum() { this->pushNum_ = nullptr;};
        inline float getPushNum() const { DARABONBA_PTR_GET_DEFAULT(pushNum_, 0.0) };
        inline Data& setPushNum(float pushNum) { DARABONBA_PTR_SET_VALUE(pushNum_, pushNum) };


        // pushSuccessNum Field Functions 
        bool hasPushSuccessNum() const { return this->pushSuccessNum_ != nullptr;};
        void deletePushSuccessNum() { this->pushSuccessNum_ = nullptr;};
        inline float getPushSuccessNum() const { DARABONBA_PTR_GET_DEFAULT(pushSuccessNum_, 0.0) };
        inline Data& setPushSuccessNum(float pushSuccessNum) { DARABONBA_PTR_SET_VALUE(pushSuccessNum_, pushSuccessNum) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
        inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        shared_ptr<string> duration_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<float> pushArrivalNum_ {};
        shared_ptr<float> pushNum_ {};
        shared_ptr<float> pushSuccessNum_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<int64_t> taskId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const ResultContent::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResultContent::Data) };
      inline ResultContent::Data getData() { DARABONBA_PTR_GET(data_, ResultContent::Data) };
      inline ResultContent& setData(const ResultContent::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultContent& setData(ResultContent::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<ResultContent::Data> data_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPushAnalysisTaskDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline QueryPushAnalysisTaskDetailResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const QueryPushAnalysisTaskDetailResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, QueryPushAnalysisTaskDetailResponseBody::ResultContent) };
    inline QueryPushAnalysisTaskDetailResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, QueryPushAnalysisTaskDetailResponseBody::ResultContent) };
    inline QueryPushAnalysisTaskDetailResponseBody& setResultContent(const QueryPushAnalysisTaskDetailResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline QueryPushAnalysisTaskDetailResponseBody& setResultContent(QueryPushAnalysisTaskDetailResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline QueryPushAnalysisTaskDetailResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<QueryPushAnalysisTaskDetailResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
