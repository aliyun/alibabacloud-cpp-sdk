// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTRCINQUIREDSYSTEMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTRCINQUIREDSYSTEMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AcceptRCInquiredSystemEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptRCInquiredSystemEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptRCInquiredSystemEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AcceptRCInquiredSystemEventRequest() = default ;
    AcceptRCInquiredSystemEventRequest(const AcceptRCInquiredSystemEventRequest &) = default ;
    AcceptRCInquiredSystemEventRequest(AcceptRCInquiredSystemEventRequest &&) = default ;
    AcceptRCInquiredSystemEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptRCInquiredSystemEventRequest() = default ;
    AcceptRCInquiredSystemEventRequest& operator=(const AcceptRCInquiredSystemEventRequest &) = default ;
    AcceptRCInquiredSystemEventRequest& operator=(AcceptRCInquiredSystemEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->regionId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline AcceptRCInquiredSystemEventRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AcceptRCInquiredSystemEventRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the system event.
    // 
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    // The region ID of the system event.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
