// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetAccessKeyLastUsedEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UsedTimestamp, usedTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UsedTimestamp, usedTimestamp_);
    };
    GetAccessKeyLastUsedEventsResponseBodyEvents() = default ;
    GetAccessKeyLastUsedEventsResponseBodyEvents(const GetAccessKeyLastUsedEventsResponseBodyEvents &) = default ;
    GetAccessKeyLastUsedEventsResponseBodyEvents(GetAccessKeyLastUsedEventsResponseBodyEvents &&) = default ;
    GetAccessKeyLastUsedEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedEventsResponseBodyEvents() = default ;
    GetAccessKeyLastUsedEventsResponseBodyEvents& operator=(const GetAccessKeyLastUsedEventsResponseBodyEvents &) = default ;
    GetAccessKeyLastUsedEventsResponseBodyEvents& operator=(GetAccessKeyLastUsedEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->eventName_ != nullptr && this->source_ != nullptr && this->usedTimestamp_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline GetAccessKeyLastUsedEventsResponseBodyEvents& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline GetAccessKeyLastUsedEventsResponseBodyEvents& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAccessKeyLastUsedEventsResponseBodyEvents& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // usedTimestamp Field Functions 
    bool hasUsedTimestamp() const { return this->usedTimestamp_ != nullptr;};
    void deleteUsedTimestamp() { this->usedTimestamp_ = nullptr;};
    inline int64_t usedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(usedTimestamp_, 0L) };
    inline GetAccessKeyLastUsedEventsResponseBodyEvents& setUsedTimestamp(int64_t usedTimestamp) { DARABONBA_PTR_SET_VALUE(usedTimestamp_, usedTimestamp) };


  protected:
    // An array that consists of the details about the event.
    std::shared_ptr<string> detail_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> eventName_ = nullptr;
    // The event source.
    std::shared_ptr<string> source_ = nullptr;
    // The timestamp when the event was generated.
    std::shared_ptr<int64_t> usedTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
