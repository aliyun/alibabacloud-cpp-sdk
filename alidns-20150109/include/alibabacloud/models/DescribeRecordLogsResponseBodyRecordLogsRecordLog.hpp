// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDLOGSRESPONSEBODYRECORDLOGSRECORDLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDLOGSRESPONSEBODYRECORDLOGSRECORDLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordLogsResponseBodyRecordLogsRecordLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordLogsResponseBodyRecordLogsRecordLog& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_TO_JSON(ActionTimestamp, actionTimestamp_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordLogsResponseBodyRecordLogsRecordLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
      DARABONBA_PTR_FROM_JSON(ActionTimestamp, actionTimestamp_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DescribeRecordLogsResponseBodyRecordLogsRecordLog() = default ;
    DescribeRecordLogsResponseBodyRecordLogsRecordLog(const DescribeRecordLogsResponseBodyRecordLogsRecordLog &) = default ;
    DescribeRecordLogsResponseBodyRecordLogsRecordLog(DescribeRecordLogsResponseBodyRecordLogsRecordLog &&) = default ;
    DescribeRecordLogsResponseBodyRecordLogsRecordLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordLogsResponseBodyRecordLogsRecordLog() = default ;
    DescribeRecordLogsResponseBodyRecordLogsRecordLog& operator=(const DescribeRecordLogsResponseBodyRecordLogsRecordLog &) = default ;
    DescribeRecordLogsResponseBodyRecordLogsRecordLog& operator=(DescribeRecordLogsResponseBodyRecordLogsRecordLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actionTime_ == nullptr && return this->actionTimestamp_ == nullptr && return this->clientIp_ == nullptr && return this->message_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeRecordLogsResponseBodyRecordLogsRecordLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actionTime Field Functions 
    bool hasActionTime() const { return this->actionTime_ != nullptr;};
    void deleteActionTime() { this->actionTime_ = nullptr;};
    inline string actionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, "") };
    inline DescribeRecordLogsResponseBodyRecordLogsRecordLog& setActionTime(string actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


    // actionTimestamp Field Functions 
    bool hasActionTimestamp() const { return this->actionTimestamp_ != nullptr;};
    void deleteActionTimestamp() { this->actionTimestamp_ = nullptr;};
    inline int64_t actionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(actionTimestamp_, 0L) };
    inline DescribeRecordLogsResponseBodyRecordLogsRecordLog& setActionTimestamp(int64_t actionTimestamp) { DARABONBA_PTR_SET_VALUE(actionTimestamp_, actionTimestamp) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeRecordLogsResponseBodyRecordLogsRecordLog& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRecordLogsResponseBodyRecordLogsRecordLog& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The operation that you performed.
    std::shared_ptr<string> action_ = nullptr;
    // The time when you performed the operation.
    std::shared_ptr<string> actionTime_ = nullptr;
    // The time when you performed the operation. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> actionTimestamp_ = nullptr;
    // The IP address of the operator.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The operation message.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
