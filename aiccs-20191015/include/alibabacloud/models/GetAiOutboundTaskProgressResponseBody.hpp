// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAiOutboundTaskProgressResponseBody() = default ;
    GetAiOutboundTaskProgressResponseBody(const GetAiOutboundTaskProgressResponseBody &) = default ;
    GetAiOutboundTaskProgressResponseBody(GetAiOutboundTaskProgressResponseBody &&) = default ;
    GetAiOutboundTaskProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskProgressResponseBody() = default ;
    GetAiOutboundTaskProgressResponseBody& operator=(const GetAiOutboundTaskProgressResponseBody &) = default ;
    GetAiOutboundTaskProgressResponseBody& operator=(GetAiOutboundTaskProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CalloutProgress, calloutProgress_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CalloutProgress, calloutProgress_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
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
      class TaskProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskProgress& obj) { 
          DARABONBA_PTR_TO_JSON(CallingCount, callingCount_);
          DARABONBA_PTR_TO_JSON(ConnectCount, connectCount_);
          DARABONBA_PTR_TO_JSON(ConnectRate, connectRate_);
          DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
          DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
          DARABONBA_PTR_TO_JSON(ServicerPickupCount, servicerPickupCount_);
          DARABONBA_PTR_TO_JSON(ServicerPickupRate, servicerPickupRate_);
          DARABONBA_PTR_TO_JSON(TerminateCount, terminateCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(UserPickupCount, userPickupCount_);
          DARABONBA_PTR_TO_JSON(UserPickupRate, userPickupRate_);
          DARABONBA_PTR_TO_JSON(WaitingCallCount, waitingCallCount_);
          DARABONBA_PTR_TO_JSON(WaitingRecallCount, waitingRecallCount_);
        };
        friend void from_json(const Darabonba::Json& j, TaskProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(CallingCount, callingCount_);
          DARABONBA_PTR_FROM_JSON(ConnectCount, connectCount_);
          DARABONBA_PTR_FROM_JSON(ConnectRate, connectRate_);
          DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
          DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
          DARABONBA_PTR_FROM_JSON(ServicerPickupCount, servicerPickupCount_);
          DARABONBA_PTR_FROM_JSON(ServicerPickupRate, servicerPickupRate_);
          DARABONBA_PTR_FROM_JSON(TerminateCount, terminateCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(UserPickupCount, userPickupCount_);
          DARABONBA_PTR_FROM_JSON(UserPickupRate, userPickupRate_);
          DARABONBA_PTR_FROM_JSON(WaitingCallCount, waitingCallCount_);
          DARABONBA_PTR_FROM_JSON(WaitingRecallCount, waitingRecallCount_);
        };
        TaskProgress() = default ;
        TaskProgress(const TaskProgress &) = default ;
        TaskProgress(TaskProgress &&) = default ;
        TaskProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskProgress() = default ;
        TaskProgress& operator=(const TaskProgress &) = default ;
        TaskProgress& operator=(TaskProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callingCount_ == nullptr
        && this->connectCount_ == nullptr && this->connectRate_ == nullptr && this->finishCount_ == nullptr && this->finishRate_ == nullptr && this->servicerPickupCount_ == nullptr
        && this->servicerPickupRate_ == nullptr && this->terminateCount_ == nullptr && this->totalCount_ == nullptr && this->userPickupCount_ == nullptr && this->userPickupRate_ == nullptr
        && this->waitingCallCount_ == nullptr && this->waitingRecallCount_ == nullptr; };
        // callingCount Field Functions 
        bool hasCallingCount() const { return this->callingCount_ != nullptr;};
        void deleteCallingCount() { this->callingCount_ = nullptr;};
        inline int32_t getCallingCount() const { DARABONBA_PTR_GET_DEFAULT(callingCount_, 0) };
        inline TaskProgress& setCallingCount(int32_t callingCount) { DARABONBA_PTR_SET_VALUE(callingCount_, callingCount) };


        // connectCount Field Functions 
        bool hasConnectCount() const { return this->connectCount_ != nullptr;};
        void deleteConnectCount() { this->connectCount_ = nullptr;};
        inline int32_t getConnectCount() const { DARABONBA_PTR_GET_DEFAULT(connectCount_, 0) };
        inline TaskProgress& setConnectCount(int32_t connectCount) { DARABONBA_PTR_SET_VALUE(connectCount_, connectCount) };


        // connectRate Field Functions 
        bool hasConnectRate() const { return this->connectRate_ != nullptr;};
        void deleteConnectRate() { this->connectRate_ = nullptr;};
        inline float getConnectRate() const { DARABONBA_PTR_GET_DEFAULT(connectRate_, 0.0) };
        inline TaskProgress& setConnectRate(float connectRate) { DARABONBA_PTR_SET_VALUE(connectRate_, connectRate) };


        // finishCount Field Functions 
        bool hasFinishCount() const { return this->finishCount_ != nullptr;};
        void deleteFinishCount() { this->finishCount_ = nullptr;};
        inline int32_t getFinishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
        inline TaskProgress& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


        // finishRate Field Functions 
        bool hasFinishRate() const { return this->finishRate_ != nullptr;};
        void deleteFinishRate() { this->finishRate_ = nullptr;};
        inline float getFinishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
        inline TaskProgress& setFinishRate(float finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


        // servicerPickupCount Field Functions 
        bool hasServicerPickupCount() const { return this->servicerPickupCount_ != nullptr;};
        void deleteServicerPickupCount() { this->servicerPickupCount_ = nullptr;};
        inline int32_t getServicerPickupCount() const { DARABONBA_PTR_GET_DEFAULT(servicerPickupCount_, 0) };
        inline TaskProgress& setServicerPickupCount(int32_t servicerPickupCount) { DARABONBA_PTR_SET_VALUE(servicerPickupCount_, servicerPickupCount) };


        // servicerPickupRate Field Functions 
        bool hasServicerPickupRate() const { return this->servicerPickupRate_ != nullptr;};
        void deleteServicerPickupRate() { this->servicerPickupRate_ = nullptr;};
        inline float getServicerPickupRate() const { DARABONBA_PTR_GET_DEFAULT(servicerPickupRate_, 0.0) };
        inline TaskProgress& setServicerPickupRate(float servicerPickupRate) { DARABONBA_PTR_SET_VALUE(servicerPickupRate_, servicerPickupRate) };


        // terminateCount Field Functions 
        bool hasTerminateCount() const { return this->terminateCount_ != nullptr;};
        void deleteTerminateCount() { this->terminateCount_ = nullptr;};
        inline int32_t getTerminateCount() const { DARABONBA_PTR_GET_DEFAULT(terminateCount_, 0) };
        inline TaskProgress& setTerminateCount(int32_t terminateCount) { DARABONBA_PTR_SET_VALUE(terminateCount_, terminateCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline TaskProgress& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // userPickupCount Field Functions 
        bool hasUserPickupCount() const { return this->userPickupCount_ != nullptr;};
        void deleteUserPickupCount() { this->userPickupCount_ = nullptr;};
        inline int32_t getUserPickupCount() const { DARABONBA_PTR_GET_DEFAULT(userPickupCount_, 0) };
        inline TaskProgress& setUserPickupCount(int32_t userPickupCount) { DARABONBA_PTR_SET_VALUE(userPickupCount_, userPickupCount) };


        // userPickupRate Field Functions 
        bool hasUserPickupRate() const { return this->userPickupRate_ != nullptr;};
        void deleteUserPickupRate() { this->userPickupRate_ = nullptr;};
        inline float getUserPickupRate() const { DARABONBA_PTR_GET_DEFAULT(userPickupRate_, 0.0) };
        inline TaskProgress& setUserPickupRate(float userPickupRate) { DARABONBA_PTR_SET_VALUE(userPickupRate_, userPickupRate) };


        // waitingCallCount Field Functions 
        bool hasWaitingCallCount() const { return this->waitingCallCount_ != nullptr;};
        void deleteWaitingCallCount() { this->waitingCallCount_ = nullptr;};
        inline int32_t getWaitingCallCount() const { DARABONBA_PTR_GET_DEFAULT(waitingCallCount_, 0) };
        inline TaskProgress& setWaitingCallCount(int32_t waitingCallCount) { DARABONBA_PTR_SET_VALUE(waitingCallCount_, waitingCallCount) };


        // waitingRecallCount Field Functions 
        bool hasWaitingRecallCount() const { return this->waitingRecallCount_ != nullptr;};
        void deleteWaitingRecallCount() { this->waitingRecallCount_ = nullptr;};
        inline int32_t getWaitingRecallCount() const { DARABONBA_PTR_GET_DEFAULT(waitingRecallCount_, 0) };
        inline TaskProgress& setWaitingRecallCount(int32_t waitingRecallCount) { DARABONBA_PTR_SET_VALUE(waitingRecallCount_, waitingRecallCount) };


      protected:
        shared_ptr<int32_t> callingCount_ {};
        shared_ptr<int32_t> connectCount_ {};
        shared_ptr<float> connectRate_ {};
        shared_ptr<int32_t> finishCount_ {};
        shared_ptr<float> finishRate_ {};
        shared_ptr<int32_t> servicerPickupCount_ {};
        shared_ptr<float> servicerPickupRate_ {};
        shared_ptr<int32_t> terminateCount_ {};
        shared_ptr<int32_t> totalCount_ {};
        shared_ptr<int32_t> userPickupCount_ {};
        shared_ptr<float> userPickupRate_ {};
        shared_ptr<int32_t> waitingCallCount_ {};
        shared_ptr<int32_t> waitingRecallCount_ {};
      };

      class CalloutProgress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CalloutProgress& obj) { 
          DARABONBA_PTR_TO_JSON(CallLossCount, callLossCount_);
          DARABONBA_PTR_TO_JSON(CallLossRate, callLossRate_);
          DARABONBA_PTR_TO_JSON(CallOutConnectCount, callOutConnectCount_);
          DARABONBA_PTR_TO_JSON(CallOutConnectRate, callOutConnectRate_);
          DARABONBA_PTR_TO_JSON(CallOutCount, callOutCount_);
          DARABONBA_PTR_TO_JSON(CallOutServicerPickupCount, callOutServicerPickupCount_);
          DARABONBA_PTR_TO_JSON(CallOutServicerPickupRate, callOutServicerPickupRate_);
          DARABONBA_PTR_TO_JSON(CallOutUserPickupCount, callOutUserPickupCount_);
          DARABONBA_PTR_TO_JSON(CallOutUserPickupRate, callOutUserPickupRate_);
        };
        friend void from_json(const Darabonba::Json& j, CalloutProgress& obj) { 
          DARABONBA_PTR_FROM_JSON(CallLossCount, callLossCount_);
          DARABONBA_PTR_FROM_JSON(CallLossRate, callLossRate_);
          DARABONBA_PTR_FROM_JSON(CallOutConnectCount, callOutConnectCount_);
          DARABONBA_PTR_FROM_JSON(CallOutConnectRate, callOutConnectRate_);
          DARABONBA_PTR_FROM_JSON(CallOutCount, callOutCount_);
          DARABONBA_PTR_FROM_JSON(CallOutServicerPickupCount, callOutServicerPickupCount_);
          DARABONBA_PTR_FROM_JSON(CallOutServicerPickupRate, callOutServicerPickupRate_);
          DARABONBA_PTR_FROM_JSON(CallOutUserPickupCount, callOutUserPickupCount_);
          DARABONBA_PTR_FROM_JSON(CallOutUserPickupRate, callOutUserPickupRate_);
        };
        CalloutProgress() = default ;
        CalloutProgress(const CalloutProgress &) = default ;
        CalloutProgress(CalloutProgress &&) = default ;
        CalloutProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CalloutProgress() = default ;
        CalloutProgress& operator=(const CalloutProgress &) = default ;
        CalloutProgress& operator=(CalloutProgress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callLossCount_ == nullptr
        && this->callLossRate_ == nullptr && this->callOutConnectCount_ == nullptr && this->callOutConnectRate_ == nullptr && this->callOutCount_ == nullptr && this->callOutServicerPickupCount_ == nullptr
        && this->callOutServicerPickupRate_ == nullptr && this->callOutUserPickupCount_ == nullptr && this->callOutUserPickupRate_ == nullptr; };
        // callLossCount Field Functions 
        bool hasCallLossCount() const { return this->callLossCount_ != nullptr;};
        void deleteCallLossCount() { this->callLossCount_ = nullptr;};
        inline int32_t getCallLossCount() const { DARABONBA_PTR_GET_DEFAULT(callLossCount_, 0) };
        inline CalloutProgress& setCallLossCount(int32_t callLossCount) { DARABONBA_PTR_SET_VALUE(callLossCount_, callLossCount) };


        // callLossRate Field Functions 
        bool hasCallLossRate() const { return this->callLossRate_ != nullptr;};
        void deleteCallLossRate() { this->callLossRate_ = nullptr;};
        inline float getCallLossRate() const { DARABONBA_PTR_GET_DEFAULT(callLossRate_, 0.0) };
        inline CalloutProgress& setCallLossRate(float callLossRate) { DARABONBA_PTR_SET_VALUE(callLossRate_, callLossRate) };


        // callOutConnectCount Field Functions 
        bool hasCallOutConnectCount() const { return this->callOutConnectCount_ != nullptr;};
        void deleteCallOutConnectCount() { this->callOutConnectCount_ = nullptr;};
        inline int32_t getCallOutConnectCount() const { DARABONBA_PTR_GET_DEFAULT(callOutConnectCount_, 0) };
        inline CalloutProgress& setCallOutConnectCount(int32_t callOutConnectCount) { DARABONBA_PTR_SET_VALUE(callOutConnectCount_, callOutConnectCount) };


        // callOutConnectRate Field Functions 
        bool hasCallOutConnectRate() const { return this->callOutConnectRate_ != nullptr;};
        void deleteCallOutConnectRate() { this->callOutConnectRate_ = nullptr;};
        inline float getCallOutConnectRate() const { DARABONBA_PTR_GET_DEFAULT(callOutConnectRate_, 0.0) };
        inline CalloutProgress& setCallOutConnectRate(float callOutConnectRate) { DARABONBA_PTR_SET_VALUE(callOutConnectRate_, callOutConnectRate) };


        // callOutCount Field Functions 
        bool hasCallOutCount() const { return this->callOutCount_ != nullptr;};
        void deleteCallOutCount() { this->callOutCount_ = nullptr;};
        inline int32_t getCallOutCount() const { DARABONBA_PTR_GET_DEFAULT(callOutCount_, 0) };
        inline CalloutProgress& setCallOutCount(int32_t callOutCount) { DARABONBA_PTR_SET_VALUE(callOutCount_, callOutCount) };


        // callOutServicerPickupCount Field Functions 
        bool hasCallOutServicerPickupCount() const { return this->callOutServicerPickupCount_ != nullptr;};
        void deleteCallOutServicerPickupCount() { this->callOutServicerPickupCount_ = nullptr;};
        inline int32_t getCallOutServicerPickupCount() const { DARABONBA_PTR_GET_DEFAULT(callOutServicerPickupCount_, 0) };
        inline CalloutProgress& setCallOutServicerPickupCount(int32_t callOutServicerPickupCount) { DARABONBA_PTR_SET_VALUE(callOutServicerPickupCount_, callOutServicerPickupCount) };


        // callOutServicerPickupRate Field Functions 
        bool hasCallOutServicerPickupRate() const { return this->callOutServicerPickupRate_ != nullptr;};
        void deleteCallOutServicerPickupRate() { this->callOutServicerPickupRate_ = nullptr;};
        inline float getCallOutServicerPickupRate() const { DARABONBA_PTR_GET_DEFAULT(callOutServicerPickupRate_, 0.0) };
        inline CalloutProgress& setCallOutServicerPickupRate(float callOutServicerPickupRate) { DARABONBA_PTR_SET_VALUE(callOutServicerPickupRate_, callOutServicerPickupRate) };


        // callOutUserPickupCount Field Functions 
        bool hasCallOutUserPickupCount() const { return this->callOutUserPickupCount_ != nullptr;};
        void deleteCallOutUserPickupCount() { this->callOutUserPickupCount_ = nullptr;};
        inline int32_t getCallOutUserPickupCount() const { DARABONBA_PTR_GET_DEFAULT(callOutUserPickupCount_, 0) };
        inline CalloutProgress& setCallOutUserPickupCount(int32_t callOutUserPickupCount) { DARABONBA_PTR_SET_VALUE(callOutUserPickupCount_, callOutUserPickupCount) };


        // callOutUserPickupRate Field Functions 
        bool hasCallOutUserPickupRate() const { return this->callOutUserPickupRate_ != nullptr;};
        void deleteCallOutUserPickupRate() { this->callOutUserPickupRate_ = nullptr;};
        inline float getCallOutUserPickupRate() const { DARABONBA_PTR_GET_DEFAULT(callOutUserPickupRate_, 0.0) };
        inline CalloutProgress& setCallOutUserPickupRate(float callOutUserPickupRate) { DARABONBA_PTR_SET_VALUE(callOutUserPickupRate_, callOutUserPickupRate) };


      protected:
        shared_ptr<int32_t> callLossCount_ {};
        shared_ptr<float> callLossRate_ {};
        shared_ptr<int32_t> callOutConnectCount_ {};
        shared_ptr<float> callOutConnectRate_ {};
        shared_ptr<int32_t> callOutCount_ {};
        shared_ptr<int32_t> callOutServicerPickupCount_ {};
        shared_ptr<float> callOutServicerPickupRate_ {};
        shared_ptr<int32_t> callOutUserPickupCount_ {};
        shared_ptr<float> callOutUserPickupRate_ {};
      };

      virtual bool empty() const override { return this->calloutProgress_ == nullptr
        && this->taskId_ == nullptr && this->taskProgress_ == nullptr && this->type_ == nullptr; };
      // calloutProgress Field Functions 
      bool hasCalloutProgress() const { return this->calloutProgress_ != nullptr;};
      void deleteCalloutProgress() { this->calloutProgress_ = nullptr;};
      inline const Data::CalloutProgress & getCalloutProgress() const { DARABONBA_PTR_GET_CONST(calloutProgress_, Data::CalloutProgress) };
      inline Data::CalloutProgress getCalloutProgress() { DARABONBA_PTR_GET(calloutProgress_, Data::CalloutProgress) };
      inline Data& setCalloutProgress(const Data::CalloutProgress & calloutProgress) { DARABONBA_PTR_SET_VALUE(calloutProgress_, calloutProgress) };
      inline Data& setCalloutProgress(Data::CalloutProgress && calloutProgress) { DARABONBA_PTR_SET_RVALUE(calloutProgress_, calloutProgress) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Data& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskProgress Field Functions 
      bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
      void deleteTaskProgress() { this->taskProgress_ = nullptr;};
      inline const Data::TaskProgress & getTaskProgress() const { DARABONBA_PTR_GET_CONST(taskProgress_, Data::TaskProgress) };
      inline Data::TaskProgress getTaskProgress() { DARABONBA_PTR_GET(taskProgress_, Data::TaskProgress) };
      inline Data& setTaskProgress(const Data::TaskProgress & taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };
      inline Data& setTaskProgress(Data::TaskProgress && taskProgress) { DARABONBA_PTR_SET_RVALUE(taskProgress_, taskProgress) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Data::CalloutProgress> calloutProgress_ {};
      shared_ptr<int64_t> taskId_ {};
      shared_ptr<Data::TaskProgress> taskProgress_ {};
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAiOutboundTaskProgressResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAiOutboundTaskProgressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAiOutboundTaskProgressResponseBody::Data) };
    inline GetAiOutboundTaskProgressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAiOutboundTaskProgressResponseBody::Data) };
    inline GetAiOutboundTaskProgressResponseBody& setData(const GetAiOutboundTaskProgressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAiOutboundTaskProgressResponseBody& setData(GetAiOutboundTaskProgressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAiOutboundTaskProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAiOutboundTaskProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAiOutboundTaskProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAiOutboundTaskProgressResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
