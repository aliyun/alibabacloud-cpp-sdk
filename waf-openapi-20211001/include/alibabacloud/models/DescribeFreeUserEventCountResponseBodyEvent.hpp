// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTCOUNTRESPONSEBODYEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTCOUNTRESPONSEBODYEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventCountResponseBodyEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventCountResponseBodyEvent& obj) { 
      DARABONBA_PTR_TO_JSON(EventHigh, eventHigh_);
      DARABONBA_PTR_TO_JSON(EventLow, eventLow_);
      DARABONBA_PTR_TO_JSON(EventMedium, eventMedium_);
      DARABONBA_PTR_TO_JSON(EventTotal, eventTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventCountResponseBodyEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(EventHigh, eventHigh_);
      DARABONBA_PTR_FROM_JSON(EventLow, eventLow_);
      DARABONBA_PTR_FROM_JSON(EventMedium, eventMedium_);
      DARABONBA_PTR_FROM_JSON(EventTotal, eventTotal_);
    };
    DescribeFreeUserEventCountResponseBodyEvent() = default ;
    DescribeFreeUserEventCountResponseBodyEvent(const DescribeFreeUserEventCountResponseBodyEvent &) = default ;
    DescribeFreeUserEventCountResponseBodyEvent(DescribeFreeUserEventCountResponseBodyEvent &&) = default ;
    DescribeFreeUserEventCountResponseBodyEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventCountResponseBodyEvent() = default ;
    DescribeFreeUserEventCountResponseBodyEvent& operator=(const DescribeFreeUserEventCountResponseBodyEvent &) = default ;
    DescribeFreeUserEventCountResponseBodyEvent& operator=(DescribeFreeUserEventCountResponseBodyEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventHigh_ != nullptr
        && this->eventLow_ != nullptr && this->eventMedium_ != nullptr && this->eventTotal_ != nullptr; };
    // eventHigh Field Functions 
    bool hasEventHigh() const { return this->eventHigh_ != nullptr;};
    void deleteEventHigh() { this->eventHigh_ = nullptr;};
    inline int64_t eventHigh() const { DARABONBA_PTR_GET_DEFAULT(eventHigh_, 0L) };
    inline DescribeFreeUserEventCountResponseBodyEvent& setEventHigh(int64_t eventHigh) { DARABONBA_PTR_SET_VALUE(eventHigh_, eventHigh) };


    // eventLow Field Functions 
    bool hasEventLow() const { return this->eventLow_ != nullptr;};
    void deleteEventLow() { this->eventLow_ = nullptr;};
    inline int64_t eventLow() const { DARABONBA_PTR_GET_DEFAULT(eventLow_, 0L) };
    inline DescribeFreeUserEventCountResponseBodyEvent& setEventLow(int64_t eventLow) { DARABONBA_PTR_SET_VALUE(eventLow_, eventLow) };


    // eventMedium Field Functions 
    bool hasEventMedium() const { return this->eventMedium_ != nullptr;};
    void deleteEventMedium() { this->eventMedium_ = nullptr;};
    inline int64_t eventMedium() const { DARABONBA_PTR_GET_DEFAULT(eventMedium_, 0L) };
    inline DescribeFreeUserEventCountResponseBodyEvent& setEventMedium(int64_t eventMedium) { DARABONBA_PTR_SET_VALUE(eventMedium_, eventMedium) };


    // eventTotal Field Functions 
    bool hasEventTotal() const { return this->eventTotal_ != nullptr;};
    void deleteEventTotal() { this->eventTotal_ = nullptr;};
    inline int64_t eventTotal() const { DARABONBA_PTR_GET_DEFAULT(eventTotal_, 0L) };
    inline DescribeFreeUserEventCountResponseBodyEvent& setEventTotal(int64_t eventTotal) { DARABONBA_PTR_SET_VALUE(eventTotal_, eventTotal) };


  protected:
    // The number of high-risk events.
    std::shared_ptr<int64_t> eventHigh_ = nullptr;
    // The number of low-risk events.
    std::shared_ptr<int64_t> eventLow_ = nullptr;
    // The number of medium-risk events.
    std::shared_ptr<int64_t> eventMedium_ = nullptr;
    // The total number of security events.
    std::shared_ptr<int64_t> eventTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
