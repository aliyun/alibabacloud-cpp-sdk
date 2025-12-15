// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODYLOGDETAILSTAGES_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODYLOGDETAILSTAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetCommonLogDetailResponseBodyLogDetailStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonLogDetailResponseBodyLogDetailStages& obj) { 
      DARABONBA_PTR_TO_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonLogDetailResponseBodyLogDetailStages& obj) { 
      DARABONBA_PTR_FROM_JSON(LogLevel, logLevel_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    GetCommonLogDetailResponseBodyLogDetailStages() = default ;
    GetCommonLogDetailResponseBodyLogDetailStages(const GetCommonLogDetailResponseBodyLogDetailStages &) = default ;
    GetCommonLogDetailResponseBodyLogDetailStages(GetCommonLogDetailResponseBodyLogDetailStages &&) = default ;
    GetCommonLogDetailResponseBodyLogDetailStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonLogDetailResponseBodyLogDetailStages() = default ;
    GetCommonLogDetailResponseBodyLogDetailStages& operator=(const GetCommonLogDetailResponseBodyLogDetailStages &) = default ;
    GetCommonLogDetailResponseBodyLogDetailStages& operator=(GetCommonLogDetailResponseBodyLogDetailStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logLevel_ == nullptr
        && return this->message_ == nullptr && return this->method_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->target_ == nullptr
        && return this->time_ == nullptr; };
    // logLevel Field Functions 
    bool hasLogLevel() const { return this->logLevel_ != nullptr;};
    void deleteLogLevel() { this->logLevel_ = nullptr;};
    inline string logLevel() const { DARABONBA_PTR_GET_DEFAULT(logLevel_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setLogLevel(string logLevel) { DARABONBA_PTR_SET_VALUE(logLevel_, logLevel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetCommonLogDetailResponseBodyLogDetailStages& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The log level.
    // 
    // Valid values:
    // 
    // *   ERROR
    // *   INFO
    // *   WARN
    std::shared_ptr<string> logLevel_ = nullptr;
    // The output message of the log.
    std::shared_ptr<string> message_ = nullptr;
    // The method involved in the log.
    std::shared_ptr<string> method_ = nullptr;
    // The request ID associated with the log.
    std::shared_ptr<string> requestId_ = nullptr;
    // The action state involved in the log. Valid values:
    // 
    // *   InProgress: The action is being performed.
    // *   Finished: The action is completed.
    // *   Failed: The action failed.
    std::shared_ptr<string> status_ = nullptr;
    // The resource involved in the log.
    std::shared_ptr<string> target_ = nullptr;
    // The time when the log was generated.
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
