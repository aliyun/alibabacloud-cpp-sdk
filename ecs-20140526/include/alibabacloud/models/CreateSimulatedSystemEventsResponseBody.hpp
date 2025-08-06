// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMULATEDSYSTEMEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMULATEDSYSTEMEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSimulatedSystemEventsResponseBodyEventIdSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateSimulatedSystemEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimulatedSystemEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventIdSet, eventIdSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimulatedSystemEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventIdSet, eventIdSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSimulatedSystemEventsResponseBody() = default ;
    CreateSimulatedSystemEventsResponseBody(const CreateSimulatedSystemEventsResponseBody &) = default ;
    CreateSimulatedSystemEventsResponseBody(CreateSimulatedSystemEventsResponseBody &&) = default ;
    CreateSimulatedSystemEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimulatedSystemEventsResponseBody() = default ;
    CreateSimulatedSystemEventsResponseBody& operator=(const CreateSimulatedSystemEventsResponseBody &) = default ;
    CreateSimulatedSystemEventsResponseBody& operator=(CreateSimulatedSystemEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventIdSet_ != nullptr
        && this->requestId_ != nullptr; };
    // eventIdSet Field Functions 
    bool hasEventIdSet() const { return this->eventIdSet_ != nullptr;};
    void deleteEventIdSet() { this->eventIdSet_ = nullptr;};
    inline const CreateSimulatedSystemEventsResponseBodyEventIdSet & eventIdSet() const { DARABONBA_PTR_GET_CONST(eventIdSet_, CreateSimulatedSystemEventsResponseBodyEventIdSet) };
    inline CreateSimulatedSystemEventsResponseBodyEventIdSet eventIdSet() { DARABONBA_PTR_GET(eventIdSet_, CreateSimulatedSystemEventsResponseBodyEventIdSet) };
    inline CreateSimulatedSystemEventsResponseBody& setEventIdSet(const CreateSimulatedSystemEventsResponseBodyEventIdSet & eventIdSet) { DARABONBA_PTR_SET_VALUE(eventIdSet_, eventIdSet) };
    inline CreateSimulatedSystemEventsResponseBody& setEventIdSet(CreateSimulatedSystemEventsResponseBodyEventIdSet && eventIdSet) { DARABONBA_PTR_SET_RVALUE(eventIdSet_, eventIdSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSimulatedSystemEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the simulated events.
    std::shared_ptr<CreateSimulatedSystemEventsResponseBodyEventIdSet> eventIdSet_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
