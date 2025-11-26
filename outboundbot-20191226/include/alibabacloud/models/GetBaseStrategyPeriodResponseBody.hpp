// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBaseStrategyPeriodResponseBodyWorkingTime.hpp>
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
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->onlyWeekdays_ == nullptr && return this->onlyWorkdays_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->workingTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBaseStrategyPeriodResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBaseStrategyPeriodResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBaseStrategyPeriodResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // onlyWeekdays Field Functions 
    bool hasOnlyWeekdays() const { return this->onlyWeekdays_ != nullptr;};
    void deleteOnlyWeekdays() { this->onlyWeekdays_ = nullptr;};
    inline bool onlyWeekdays() const { DARABONBA_PTR_GET_DEFAULT(onlyWeekdays_, false) };
    inline GetBaseStrategyPeriodResponseBody& setOnlyWeekdays(bool onlyWeekdays) { DARABONBA_PTR_SET_VALUE(onlyWeekdays_, onlyWeekdays) };


    // onlyWorkdays Field Functions 
    bool hasOnlyWorkdays() const { return this->onlyWorkdays_ != nullptr;};
    void deleteOnlyWorkdays() { this->onlyWorkdays_ = nullptr;};
    inline bool onlyWorkdays() const { DARABONBA_PTR_GET_DEFAULT(onlyWorkdays_, false) };
    inline GetBaseStrategyPeriodResponseBody& setOnlyWorkdays(bool onlyWorkdays) { DARABONBA_PTR_SET_VALUE(onlyWorkdays_, onlyWorkdays) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBaseStrategyPeriodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBaseStrategyPeriodResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workingTime Field Functions 
    bool hasWorkingTime() const { return this->workingTime_ != nullptr;};
    void deleteWorkingTime() { this->workingTime_ = nullptr;};
    inline const vector<GetBaseStrategyPeriodResponseBodyWorkingTime> & workingTime() const { DARABONBA_PTR_GET_CONST(workingTime_, vector<GetBaseStrategyPeriodResponseBodyWorkingTime>) };
    inline vector<GetBaseStrategyPeriodResponseBodyWorkingTime> workingTime() { DARABONBA_PTR_GET(workingTime_, vector<GetBaseStrategyPeriodResponseBodyWorkingTime>) };
    inline GetBaseStrategyPeriodResponseBody& setWorkingTime(const vector<GetBaseStrategyPeriodResponseBodyWorkingTime> & workingTime) { DARABONBA_PTR_SET_VALUE(workingTime_, workingTime) };
    inline GetBaseStrategyPeriodResponseBody& setWorkingTime(vector<GetBaseStrategyPeriodResponseBodyWorkingTime> && workingTime) { DARABONBA_PTR_SET_RVALUE(workingTime_, workingTime) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> onlyWeekdays_ = nullptr;
    std::shared_ptr<bool> onlyWorkdays_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<GetBaseStrategyPeriodResponseBodyWorkingTime>> workingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
