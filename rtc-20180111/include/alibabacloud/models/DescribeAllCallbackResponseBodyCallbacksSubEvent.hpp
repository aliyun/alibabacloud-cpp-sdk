// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODYCALLBACKSSUBEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODYCALLBACKSSUBEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAllCallbackResponseBodyCallbacksSubEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllCallbackResponseBodyCallbacksSubEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllCallbackResponseBodyCallbacksSubEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAllCallbackResponseBodyCallbacksSubEvent() = default ;
    DescribeAllCallbackResponseBodyCallbacksSubEvent(const DescribeAllCallbackResponseBodyCallbacksSubEvent &) = default ;
    DescribeAllCallbackResponseBodyCallbacksSubEvent(DescribeAllCallbackResponseBodyCallbacksSubEvent &&) = default ;
    DescribeAllCallbackResponseBodyCallbacksSubEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllCallbackResponseBodyCallbacksSubEvent() = default ;
    DescribeAllCallbackResponseBodyCallbacksSubEvent& operator=(const DescribeAllCallbackResponseBodyCallbacksSubEvent &) = default ;
    DescribeAllCallbackResponseBodyCallbacksSubEvent& operator=(DescribeAllCallbackResponseBodyCallbacksSubEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->event_ != nullptr
        && this->eventName_ != nullptr && this->type_ != nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline int32_t event() const { DARABONBA_PTR_GET_DEFAULT(event_, 0) };
    inline DescribeAllCallbackResponseBodyCallbacksSubEvent& setEvent(int32_t event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeAllCallbackResponseBodyCallbacksSubEvent& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeAllCallbackResponseBodyCallbacksSubEvent& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> event_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
