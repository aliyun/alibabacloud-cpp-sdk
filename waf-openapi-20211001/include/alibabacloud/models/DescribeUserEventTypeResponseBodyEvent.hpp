// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTYPERESPONSEBODYEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTYPERESPONSEBODYEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserEventTypeResponseBodyEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEventTypeResponseBodyEvent& obj) { 
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(EventParentType, eventParentType_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEventTypeResponseBodyEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(EventParentType, eventParentType_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    DescribeUserEventTypeResponseBodyEvent() = default ;
    DescribeUserEventTypeResponseBodyEvent(const DescribeUserEventTypeResponseBodyEvent &) = default ;
    DescribeUserEventTypeResponseBodyEvent(DescribeUserEventTypeResponseBodyEvent &&) = default ;
    DescribeUserEventTypeResponseBodyEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEventTypeResponseBodyEvent() = default ;
    DescribeUserEventTypeResponseBodyEvent& operator=(const DescribeUserEventTypeResponseBodyEvent &) = default ;
    DescribeUserEventTypeResponseBodyEvent& operator=(DescribeUserEventTypeResponseBodyEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventCode_ == nullptr
        && return this->eventCount_ == nullptr && return this->eventParentType_ == nullptr && return this->eventType_ == nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeUserEventTypeResponseBodyEvent& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int64_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
    inline DescribeUserEventTypeResponseBodyEvent& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // eventParentType Field Functions 
    bool hasEventParentType() const { return this->eventParentType_ != nullptr;};
    void deleteEventParentType() { this->eventParentType_ = nullptr;};
    inline string eventParentType() const { DARABONBA_PTR_GET_DEFAULT(eventParentType_, "") };
    inline DescribeUserEventTypeResponseBodyEvent& setEventParentType(string eventParentType) { DARABONBA_PTR_SET_VALUE(eventParentType_, eventParentType) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeUserEventTypeResponseBodyEvent& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    // The code of the security event.
    std::shared_ptr<string> eventCode_ = nullptr;
    // The number of events.
    std::shared_ptr<int64_t> eventCount_ = nullptr;
    // The parent type of the security event.
    std::shared_ptr<string> eventParentType_ = nullptr;
    // The type of the security event.
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of security events.
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
