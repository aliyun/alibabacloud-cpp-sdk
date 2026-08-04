// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetScheduleTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetScheduleTaskResponseBody() = default ;
    GetScheduleTaskResponseBody(const GetScheduleTaskResponseBody &) = default ;
    GetScheduleTaskResponseBody(GetScheduleTaskResponseBody &&) = default ;
    GetScheduleTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleTaskResponseBody() = default ;
    GetScheduleTaskResponseBody& operator=(const GetScheduleTaskResponseBody &) = default ;
    GetScheduleTaskResponseBody& operator=(GetScheduleTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ActionTopicList, actionTopicList_);
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(ScheduleEndTime, scheduleEndTime_);
        DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
        DARABONBA_PTR_TO_JSON(ScheduleStartTime, scheduleStartTime_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionTopicList, actionTopicList_);
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(ScheduleEndTime, scheduleEndTime_);
        DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
        DARABONBA_PTR_FROM_JSON(ScheduleStartTime, scheduleStartTime_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ActionTopicList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActionTopicList& obj) { 
          DARABONBA_ANY_TO_JSON(CustomAction, customAction_);
        };
        friend void from_json(const Darabonba::Json& j, ActionTopicList& obj) { 
          DARABONBA_ANY_FROM_JSON(CustomAction, customAction_);
        };
        ActionTopicList() = default ;
        ActionTopicList(const ActionTopicList &) = default ;
        ActionTopicList(ActionTopicList &&) = default ;
        ActionTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActionTopicList() = default ;
        ActionTopicList& operator=(const ActionTopicList &) = default ;
        ActionTopicList& operator=(ActionTopicList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customAction_ == nullptr; };
        // customAction Field Functions 
        bool hasCustomAction() const { return this->customAction_ != nullptr;};
        void deleteCustomAction() { this->customAction_ = nullptr;};
        inline         const Darabonba::Json & getCustomAction() const { DARABONBA_GET(customAction_) };
        Darabonba::Json & getCustomAction() { DARABONBA_GET(customAction_) };
        inline ActionTopicList& setCustomAction(const Darabonba::Json & customAction) { DARABONBA_SET_VALUE(customAction_, customAction) };
        inline ActionTopicList& setCustomAction(Darabonba::Json && customAction) { DARABONBA_SET_RVALUE(customAction_, customAction) };


      protected:
        // Vendor-defined command
        Darabonba::Json customAction_ {};
      };

      virtual bool empty() const override { return this->actionTopicList_ == nullptr
        && this->cron_ == nullptr && this->scheduleEndTime_ == nullptr && this->scheduleId_ == nullptr && this->scheduleStartTime_ == nullptr && this->scheduleType_ == nullptr; };
      // actionTopicList Field Functions 
      bool hasActionTopicList() const { return this->actionTopicList_ != nullptr;};
      void deleteActionTopicList() { this->actionTopicList_ = nullptr;};
      inline const vector<Result::ActionTopicList> & getActionTopicList() const { DARABONBA_PTR_GET_CONST(actionTopicList_, vector<Result::ActionTopicList>) };
      inline vector<Result::ActionTopicList> getActionTopicList() { DARABONBA_PTR_GET(actionTopicList_, vector<Result::ActionTopicList>) };
      inline Result& setActionTopicList(const vector<Result::ActionTopicList> & actionTopicList) { DARABONBA_PTR_SET_VALUE(actionTopicList_, actionTopicList) };
      inline Result& setActionTopicList(vector<Result::ActionTopicList> && actionTopicList) { DARABONBA_PTR_SET_RVALUE(actionTopicList_, actionTopicList) };


      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Result& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // scheduleEndTime Field Functions 
      bool hasScheduleEndTime() const { return this->scheduleEndTime_ != nullptr;};
      void deleteScheduleEndTime() { this->scheduleEndTime_ = nullptr;};
      inline string getScheduleEndTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleEndTime_, "") };
      inline Result& setScheduleEndTime(string scheduleEndTime) { DARABONBA_PTR_SET_VALUE(scheduleEndTime_, scheduleEndTime) };


      // scheduleId Field Functions 
      bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
      void deleteScheduleId() { this->scheduleId_ = nullptr;};
      inline int64_t getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
      inline Result& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


      // scheduleStartTime Field Functions 
      bool hasScheduleStartTime() const { return this->scheduleStartTime_ != nullptr;};
      void deleteScheduleStartTime() { this->scheduleStartTime_ = nullptr;};
      inline string getScheduleStartTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleStartTime_, "") };
      inline Result& setScheduleStartTime(string scheduleStartTime) { DARABONBA_PTR_SET_VALUE(scheduleStartTime_, scheduleStartTime) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline Result& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    protected:
      // Trigger behavior
      shared_ptr<vector<Result::ActionTopicList>> actionTopicList_ {};
      // Trigger Cron Expression
      shared_ptr<string> cron_ {};
      // Validity Period - End Time
      shared_ptr<string> scheduleEndTime_ {};
      // Job ID
      shared_ptr<int64_t> scheduleId_ {};
      // Validity Period - Start Time
      shared_ptr<string> scheduleStartTime_ {};
      // Schedule Type
      shared_ptr<string> scheduleType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetScheduleTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetScheduleTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetScheduleTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetScheduleTaskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetScheduleTaskResponseBody::Result) };
    inline GetScheduleTaskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetScheduleTaskResponseBody::Result) };
    inline GetScheduleTaskResponseBody& setResult(const GetScheduleTaskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetScheduleTaskResponseBody& setResult(GetScheduleTaskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Response code
    shared_ptr<int32_t> code_ {};
    // Response message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Service response parameters
    shared_ptr<GetScheduleTaskResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
