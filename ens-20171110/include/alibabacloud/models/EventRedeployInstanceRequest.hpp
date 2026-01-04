// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTREDEPLOYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVENTREDEPLOYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class EventRedeployInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventRedeployInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(OpsType, opsType_);
      DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, EventRedeployInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(OpsType, opsType_);
      DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    EventRedeployInstanceRequest() = default ;
    EventRedeployInstanceRequest(const EventRedeployInstanceRequest &) = default ;
    EventRedeployInstanceRequest(EventRedeployInstanceRequest &&) = default ;
    EventRedeployInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventRedeployInstanceRequest() = default ;
    EventRedeployInstanceRequest& operator=(const EventRedeployInstanceRequest &) = default ;
    EventRedeployInstanceRequest& operator=(EventRedeployInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->opsType_ == nullptr && this->planTime_ == nullptr && this->resourceId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline EventRedeployInstanceRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // opsType Field Functions 
    bool hasOpsType() const { return this->opsType_ != nullptr;};
    void deleteOpsType() { this->opsType_ = nullptr;};
    inline string getOpsType() const { DARABONBA_PTR_GET_DEFAULT(opsType_, "") };
    inline EventRedeployInstanceRequest& setOpsType(string opsType) { DARABONBA_PTR_SET_VALUE(opsType_, opsType) };


    // planTime Field Functions 
    bool hasPlanTime() const { return this->planTime_ != nullptr;};
    void deletePlanTime() { this->planTime_ = nullptr;};
    inline int64_t getPlanTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, 0L) };
    inline EventRedeployInstanceRequest& setPlanTime(int64_t planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline EventRedeployInstanceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The ID of the system event.
    // 
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    // The type of the O\\&M task. Valid values:
    // 
    // *   immediate
    // *   scheduled
    // 
    // This parameter is required.
    shared_ptr<string> opsType_ {};
    // The execution time of the reservation. The timestamp is measured in milliseconds. If the OpsType parameter is set to scheduled, this parameter is required.
    shared_ptr<int64_t> planTime_ {};
    // The ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
