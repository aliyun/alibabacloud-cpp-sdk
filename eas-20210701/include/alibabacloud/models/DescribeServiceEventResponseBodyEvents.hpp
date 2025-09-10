// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEEVENTRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEEVENTRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceEventResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceEventResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceEventResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeServiceEventResponseBodyEvents() = default ;
    DescribeServiceEventResponseBodyEvents(const DescribeServiceEventResponseBodyEvents &) = default ;
    DescribeServiceEventResponseBodyEvents(DescribeServiceEventResponseBodyEvents &&) = default ;
    DescribeServiceEventResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceEventResponseBodyEvents() = default ;
    DescribeServiceEventResponseBodyEvents& operator=(const DescribeServiceEventResponseBodyEvents &) = default ;
    DescribeServiceEventResponseBodyEvents& operator=(DescribeServiceEventResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->reason_ != nullptr && this->time_ != nullptr && this->type_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeServiceEventResponseBodyEvents& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeServiceEventResponseBodyEvents& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeServiceEventResponseBodyEvents& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeServiceEventResponseBodyEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The returned message. The message is formatted and returned in the JSON format.
    std::shared_ptr<string> message_ = nullptr;
    // The cause of the event. The information about the change in the service status is returned.
    std::shared_ptr<string> reason_ = nullptr;
    // The time when the event occurred. The time must be in UTC.
    std::shared_ptr<string> time_ = nullptr;
    // The event type. Valid values:
    // 
    // *   Normal
    // *   Warning
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
