// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCEREQUESTEVENTINFOS_HPP_
#define ALIBABACLOUD_MODELS_BATCHEVENTREDEPLOYINSTANCEREQUESTEVENTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class BatchEventRedeployInstanceRequestEventInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchEventRedeployInstanceRequestEventInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(OpsType, opsType_);
      DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchEventRedeployInstanceRequestEventInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(OpsType, opsType_);
      DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    BatchEventRedeployInstanceRequestEventInfos() = default ;
    BatchEventRedeployInstanceRequestEventInfos(const BatchEventRedeployInstanceRequestEventInfos &) = default ;
    BatchEventRedeployInstanceRequestEventInfos(BatchEventRedeployInstanceRequestEventInfos &&) = default ;
    BatchEventRedeployInstanceRequestEventInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchEventRedeployInstanceRequestEventInfos() = default ;
    BatchEventRedeployInstanceRequestEventInfos& operator=(const BatchEventRedeployInstanceRequestEventInfos &) = default ;
    BatchEventRedeployInstanceRequestEventInfos& operator=(BatchEventRedeployInstanceRequestEventInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventId_ == nullptr
        && return this->opsType_ == nullptr && return this->planTime_ == nullptr && return this->resourceId_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline BatchEventRedeployInstanceRequestEventInfos& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // opsType Field Functions 
    bool hasOpsType() const { return this->opsType_ != nullptr;};
    void deleteOpsType() { this->opsType_ = nullptr;};
    inline string opsType() const { DARABONBA_PTR_GET_DEFAULT(opsType_, "") };
    inline BatchEventRedeployInstanceRequestEventInfos& setOpsType(string opsType) { DARABONBA_PTR_SET_VALUE(opsType_, opsType) };


    // planTime Field Functions 
    bool hasPlanTime() const { return this->planTime_ != nullptr;};
    void deletePlanTime() { this->planTime_ = nullptr;};
    inline int64_t planTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, 0L) };
    inline BatchEventRedeployInstanceRequestEventInfos& setPlanTime(int64_t planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline BatchEventRedeployInstanceRequestEventInfos& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<string> opsType_ = nullptr;
    std::shared_ptr<int64_t> planTime_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
