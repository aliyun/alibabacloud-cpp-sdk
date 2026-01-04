// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRedeployInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfos, eventInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfos, eventInfos_);
    };
    BatchEventRedeployInstanceRequest() = default ;
    BatchEventRedeployInstanceRequest(const BatchEventRedeployInstanceRequest &) = default ;
    BatchEventRedeployInstanceRequest(BatchEventRedeployInstanceRequest &&) = default ;
    BatchEventRedeployInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceRequest() = default ;
    BatchEventRedeployInstanceRequest& operator=(const BatchEventRedeployInstanceRequest &) = default ;
    BatchEventRedeployInstanceRequest& operator=(BatchEventRedeployInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventInfos& obj) { 
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(OpsType, opsType_);
        DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, EventInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(OpsType, opsType_);
        DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      };
      EventInfos() = default ;
      EventInfos(const EventInfos &) = default ;
      EventInfos(EventInfos &&) = default ;
      EventInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventInfos() = default ;
      EventInfos& operator=(const EventInfos &) = default ;
      EventInfos& operator=(EventInfos &&) = default ;
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
      inline EventInfos& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // opsType Field Functions 
      bool hasOpsType() const { return this->opsType_ != nullptr;};
      void deleteOpsType() { this->opsType_ = nullptr;};
      inline string getOpsType() const { DARABONBA_PTR_GET_DEFAULT(opsType_, "") };
      inline EventInfos& setOpsType(string opsType) { DARABONBA_PTR_SET_VALUE(opsType_, opsType) };


      // planTime Field Functions 
      bool hasPlanTime() const { return this->planTime_ != nullptr;};
      void deletePlanTime() { this->planTime_ = nullptr;};
      inline int64_t getPlanTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, 0L) };
      inline EventInfos& setPlanTime(int64_t planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline EventInfos& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // System event ID.
      shared_ptr<string> eventId_ {};
      // Operation type, value range:
      // 
      // - immediate: Execute immediately.
      // - scheduled: Scheduled execution.
      shared_ptr<string> opsType_ {};
      // Scheduled execution time, in timestamp, unit is milliseconds. This field is required when OpsType=scheduled.
      shared_ptr<int64_t> planTime_ {};
      // Resource ID.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->eventInfos_ == nullptr; };
    // eventInfos Field Functions 
    bool hasEventInfos() const { return this->eventInfos_ != nullptr;};
    void deleteEventInfos() { this->eventInfos_ = nullptr;};
    inline const vector<BatchEventRedeployInstanceRequest::EventInfos> & getEventInfos() const { DARABONBA_PTR_GET_CONST(eventInfos_, vector<BatchEventRedeployInstanceRequest::EventInfos>) };
    inline vector<BatchEventRedeployInstanceRequest::EventInfos> getEventInfos() { DARABONBA_PTR_GET(eventInfos_, vector<BatchEventRedeployInstanceRequest::EventInfos>) };
    inline BatchEventRedeployInstanceRequest& setEventInfos(const vector<BatchEventRedeployInstanceRequest::EventInfos> & eventInfos) { DARABONBA_PTR_SET_VALUE(eventInfos_, eventInfos) };
    inline BatchEventRedeployInstanceRequest& setEventInfos(vector<BatchEventRedeployInstanceRequest::EventInfos> && eventInfos) { DARABONBA_PTR_SET_RVALUE(eventInfos_, eventInfos) };


  protected:
    // List of events.
    shared_ptr<vector<BatchEventRedeployInstanceRequest::EventInfos>> eventInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
