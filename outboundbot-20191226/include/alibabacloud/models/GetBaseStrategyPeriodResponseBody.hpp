// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetBaseStrategyPeriodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaseStrategyPeriodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OnlyWeekdays, onlyWeekdays_);
      DARABONBA_PTR_TO_JSON(OnlyWorkdays, onlyWorkdays_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WorkingTime, workingTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaseStrategyPeriodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OnlyWeekdays, onlyWeekdays_);
      DARABONBA_PTR_FROM_JSON(OnlyWorkdays, onlyWorkdays_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WorkingTime, workingTime_);
    };
    GetBaseStrategyPeriodResponseBody() = default ;
    GetBaseStrategyPeriodResponseBody(const GetBaseStrategyPeriodResponseBody &) = default ;
    GetBaseStrategyPeriodResponseBody(GetBaseStrategyPeriodResponseBody &&) = default ;
    GetBaseStrategyPeriodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaseStrategyPeriodResponseBody() = default ;
    GetBaseStrategyPeriodResponseBody& operator=(const GetBaseStrategyPeriodResponseBody &) = default ;
    GetBaseStrategyPeriodResponseBody& operator=(GetBaseStrategyPeriodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WorkingTime : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkingTime& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(BeginTimeMillis, beginTimeMillis_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EndTimeMillis, endTimeMillis_);
      };
      friend void from_json(const Darabonba::Json& j, WorkingTime& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(BeginTimeMillis, beginTimeMillis_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EndTimeMillis, endTimeMillis_);
      };
      WorkingTime() = default ;
      WorkingTime(const WorkingTime &) = default ;
      WorkingTime(WorkingTime &&) = default ;
      WorkingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkingTime() = default ;
      WorkingTime& operator=(const WorkingTime &) = default ;
      WorkingTime& operator=(WorkingTime &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->beginTimeMillis_ == nullptr && this->endTime_ == nullptr && this->endTimeMillis_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
      inline WorkingTime& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // beginTimeMillis Field Functions 
      bool hasBeginTimeMillis() const { return this->beginTimeMillis_ != nullptr;};
      void deleteBeginTimeMillis() { this->beginTimeMillis_ = nullptr;};
      inline int64_t getBeginTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(beginTimeMillis_, 0L) };
      inline WorkingTime& setBeginTimeMillis(int64_t beginTimeMillis) { DARABONBA_PTR_SET_VALUE(beginTimeMillis_, beginTimeMillis) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline WorkingTime& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // endTimeMillis Field Functions 
      bool hasEndTimeMillis() const { return this->endTimeMillis_ != nullptr;};
      void deleteEndTimeMillis() { this->endTimeMillis_ = nullptr;};
      inline int64_t getEndTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(endTimeMillis_, 0L) };
      inline WorkingTime& setEndTimeMillis(int64_t endTimeMillis) { DARABONBA_PTR_SET_VALUE(endTimeMillis_, endTimeMillis) };


    protected:
      shared_ptr<string> beginTime_ {};
      shared_ptr<int64_t> beginTimeMillis_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<int64_t> endTimeMillis_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->onlyWeekdays_ == nullptr && this->onlyWorkdays_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->workingTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBaseStrategyPeriodResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBaseStrategyPeriodResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBaseStrategyPeriodResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // onlyWeekdays Field Functions 
    bool hasOnlyWeekdays() const { return this->onlyWeekdays_ != nullptr;};
    void deleteOnlyWeekdays() { this->onlyWeekdays_ = nullptr;};
    inline bool getOnlyWeekdays() const { DARABONBA_PTR_GET_DEFAULT(onlyWeekdays_, false) };
    inline GetBaseStrategyPeriodResponseBody& setOnlyWeekdays(bool onlyWeekdays) { DARABONBA_PTR_SET_VALUE(onlyWeekdays_, onlyWeekdays) };


    // onlyWorkdays Field Functions 
    bool hasOnlyWorkdays() const { return this->onlyWorkdays_ != nullptr;};
    void deleteOnlyWorkdays() { this->onlyWorkdays_ = nullptr;};
    inline bool getOnlyWorkdays() const { DARABONBA_PTR_GET_DEFAULT(onlyWorkdays_, false) };
    inline GetBaseStrategyPeriodResponseBody& setOnlyWorkdays(bool onlyWorkdays) { DARABONBA_PTR_SET_VALUE(onlyWorkdays_, onlyWorkdays) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBaseStrategyPeriodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBaseStrategyPeriodResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workingTime Field Functions 
    bool hasWorkingTime() const { return this->workingTime_ != nullptr;};
    void deleteWorkingTime() { this->workingTime_ = nullptr;};
    inline const vector<GetBaseStrategyPeriodResponseBody::WorkingTime> & getWorkingTime() const { DARABONBA_PTR_GET_CONST(workingTime_, vector<GetBaseStrategyPeriodResponseBody::WorkingTime>) };
    inline vector<GetBaseStrategyPeriodResponseBody::WorkingTime> getWorkingTime() { DARABONBA_PTR_GET(workingTime_, vector<GetBaseStrategyPeriodResponseBody::WorkingTime>) };
    inline GetBaseStrategyPeriodResponseBody& setWorkingTime(const vector<GetBaseStrategyPeriodResponseBody::WorkingTime> & workingTime) { DARABONBA_PTR_SET_VALUE(workingTime_, workingTime) };
    inline GetBaseStrategyPeriodResponseBody& setWorkingTime(vector<GetBaseStrategyPeriodResponseBody::WorkingTime> && workingTime) { DARABONBA_PTR_SET_RVALUE(workingTime_, workingTime) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> onlyWeekdays_ {};
    shared_ptr<bool> onlyWorkdays_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<GetBaseStrategyPeriodResponseBody::WorkingTime>> workingTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
