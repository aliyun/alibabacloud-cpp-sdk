// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMULATEDSYSTEMEVENTSRESPONSEBODYEVENTIDSET_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMULATEDSYSTEMEVENTSRESPONSEBODYEVENTIDSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateSimulatedSystemEventsResponseBodyEventIdSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimulatedSystemEventsResponseBodyEventIdSet& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimulatedSystemEventsResponseBodyEventIdSet& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
    };
    CreateSimulatedSystemEventsResponseBodyEventIdSet() = default ;
    CreateSimulatedSystemEventsResponseBodyEventIdSet(const CreateSimulatedSystemEventsResponseBodyEventIdSet &) = default ;
    CreateSimulatedSystemEventsResponseBodyEventIdSet(CreateSimulatedSystemEventsResponseBodyEventIdSet &&) = default ;
    CreateSimulatedSystemEventsResponseBodyEventIdSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimulatedSystemEventsResponseBodyEventIdSet() = default ;
    CreateSimulatedSystemEventsResponseBodyEventIdSet& operator=(const CreateSimulatedSystemEventsResponseBodyEventIdSet &) = default ;
    CreateSimulatedSystemEventsResponseBodyEventIdSet& operator=(CreateSimulatedSystemEventsResponseBodyEventIdSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventId_ != nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline const vector<string> & eventId() const { DARABONBA_PTR_GET_CONST(eventId_, vector<string>) };
    inline vector<string> eventId() { DARABONBA_PTR_GET(eventId_, vector<string>) };
    inline CreateSimulatedSystemEventsResponseBodyEventIdSet& setEventId(const vector<string> & eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };
    inline CreateSimulatedSystemEventsResponseBodyEventIdSet& setEventId(vector<string> && eventId) { DARABONBA_PTR_SET_RVALUE(eventId_, eventId) };


  protected:
    std::shared_ptr<vector<string>> eventId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
