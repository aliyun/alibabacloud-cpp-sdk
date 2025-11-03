// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSRECORDEVENTLEVELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYGROUPSRESPONSEBODYDESCRIBEPOLICYGROUPSRECORDEVENTLEVELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels& obj) { 
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels& obj) { 
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels(DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels &&) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels() = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels& operator=(const DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels &) = default ;
    DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels& operator=(DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventLevel_ == nullptr
        && return this->eventType_ == nullptr; };
    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribePolicyGroupsResponseBodyDescribePolicyGroupsRecordEventLevels& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    // The event severity.
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The event type.
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
