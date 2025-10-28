// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTSOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_EVENTSOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EventSourceParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class EventSourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventSourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(eventSourceParameters, eventSourceParameters_);
      DARABONBA_PTR_TO_JSON(eventSourceType, eventSourceType_);
    };
    friend void from_json(const Darabonba::Json& j, EventSourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(eventSourceParameters, eventSourceParameters_);
      DARABONBA_PTR_FROM_JSON(eventSourceType, eventSourceType_);
    };
    EventSourceConfig() = default ;
    EventSourceConfig(const EventSourceConfig &) = default ;
    EventSourceConfig(EventSourceConfig &&) = default ;
    EventSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventSourceConfig() = default ;
    EventSourceConfig& operator=(const EventSourceConfig &) = default ;
    EventSourceConfig& operator=(EventSourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventSourceParameters_ == nullptr
        && return this->eventSourceType_ == nullptr; };
    // eventSourceParameters Field Functions 
    bool hasEventSourceParameters() const { return this->eventSourceParameters_ != nullptr;};
    void deleteEventSourceParameters() { this->eventSourceParameters_ = nullptr;};
    inline const EventSourceParameters & eventSourceParameters() const { DARABONBA_PTR_GET_CONST(eventSourceParameters_, EventSourceParameters) };
    inline EventSourceParameters eventSourceParameters() { DARABONBA_PTR_GET(eventSourceParameters_, EventSourceParameters) };
    inline EventSourceConfig& setEventSourceParameters(const EventSourceParameters & eventSourceParameters) { DARABONBA_PTR_SET_VALUE(eventSourceParameters_, eventSourceParameters) };
    inline EventSourceConfig& setEventSourceParameters(EventSourceParameters && eventSourceParameters) { DARABONBA_PTR_SET_RVALUE(eventSourceParameters_, eventSourceParameters) };


    // eventSourceType Field Functions 
    bool hasEventSourceType() const { return this->eventSourceType_ != nullptr;};
    void deleteEventSourceType() { this->eventSourceType_ = nullptr;};
    inline string eventSourceType() const { DARABONBA_PTR_GET_DEFAULT(eventSourceType_, "") };
    inline EventSourceConfig& setEventSourceType(string eventSourceType) { DARABONBA_PTR_SET_VALUE(eventSourceType_, eventSourceType) };


  protected:
    std::shared_ptr<EventSourceParameters> eventSourceParameters_ = nullptr;
    std::shared_ptr<string> eventSourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
