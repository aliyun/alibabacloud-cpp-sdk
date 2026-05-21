// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUEUEMETA_HPP_
#define ALIBABACLOUD_MODELS_QUEUEMETA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceAmount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QueueMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueueMeta& obj) { 
      DARABONBA_PTR_TO_JSON(GmtDequeuedTime, gmtDequeuedTime_);
      DARABONBA_PTR_TO_JSON(GmtEnqueuedTime, gmtEnqueuedTime_);
      DARABONBA_PTR_TO_JSON(GmtPositionModifiedTime, gmtPositionModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ScheduledResource, scheduledResource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UseOversoldResource, useOversoldResource_);
    };
    friend void from_json(const Darabonba::Json& j, QueueMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtDequeuedTime, gmtDequeuedTime_);
      DARABONBA_PTR_FROM_JSON(GmtEnqueuedTime, gmtEnqueuedTime_);
      DARABONBA_PTR_FROM_JSON(GmtPositionModifiedTime, gmtPositionModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ScheduledResource, scheduledResource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UseOversoldResource, useOversoldResource_);
    };
    QueueMeta() = default ;
    QueueMeta(const QueueMeta &) = default ;
    QueueMeta(QueueMeta &&) = default ;
    QueueMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueueMeta() = default ;
    QueueMeta& operator=(const QueueMeta &) = default ;
    QueueMeta& operator=(QueueMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtDequeuedTime_ == nullptr
        && this->gmtEnqueuedTime_ == nullptr && this->gmtPositionModifiedTime_ == nullptr && this->name_ == nullptr && this->position_ == nullptr && this->queueStrategy_ == nullptr
        && this->quotaId_ == nullptr && this->resource_ == nullptr && this->scheduledResource_ == nullptr && this->status_ == nullptr && this->useOversoldResource_ == nullptr; };
    // gmtDequeuedTime Field Functions 
    bool hasGmtDequeuedTime() const { return this->gmtDequeuedTime_ != nullptr;};
    void deleteGmtDequeuedTime() { this->gmtDequeuedTime_ = nullptr;};
    inline string getGmtDequeuedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtDequeuedTime_, "") };
    inline QueueMeta& setGmtDequeuedTime(string gmtDequeuedTime) { DARABONBA_PTR_SET_VALUE(gmtDequeuedTime_, gmtDequeuedTime) };


    // gmtEnqueuedTime Field Functions 
    bool hasGmtEnqueuedTime() const { return this->gmtEnqueuedTime_ != nullptr;};
    void deleteGmtEnqueuedTime() { this->gmtEnqueuedTime_ = nullptr;};
    inline string getGmtEnqueuedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEnqueuedTime_, "") };
    inline QueueMeta& setGmtEnqueuedTime(string gmtEnqueuedTime) { DARABONBA_PTR_SET_VALUE(gmtEnqueuedTime_, gmtEnqueuedTime) };


    // gmtPositionModifiedTime Field Functions 
    bool hasGmtPositionModifiedTime() const { return this->gmtPositionModifiedTime_ != nullptr;};
    void deleteGmtPositionModifiedTime() { this->gmtPositionModifiedTime_ = nullptr;};
    inline string getGmtPositionModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtPositionModifiedTime_, "") };
    inline QueueMeta& setGmtPositionModifiedTime(string gmtPositionModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtPositionModifiedTime_, gmtPositionModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueueMeta& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline QueueMeta& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // queueStrategy Field Functions 
    bool hasQueueStrategy() const { return this->queueStrategy_ != nullptr;};
    void deleteQueueStrategy() { this->queueStrategy_ = nullptr;};
    inline string getQueueStrategy() const { DARABONBA_PTR_GET_DEFAULT(queueStrategy_, "") };
    inline QueueMeta& setQueueStrategy(string queueStrategy) { DARABONBA_PTR_SET_VALUE(queueStrategy_, queueStrategy) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline QueueMeta& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const ResourceAmount & getResource() const { DARABONBA_PTR_GET_CONST(resource_, ResourceAmount) };
    inline ResourceAmount getResource() { DARABONBA_PTR_GET(resource_, ResourceAmount) };
    inline QueueMeta& setResource(const ResourceAmount & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline QueueMeta& setResource(ResourceAmount && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // scheduledResource Field Functions 
    bool hasScheduledResource() const { return this->scheduledResource_ != nullptr;};
    void deleteScheduledResource() { this->scheduledResource_ = nullptr;};
    inline string getScheduledResource() const { DARABONBA_PTR_GET_DEFAULT(scheduledResource_, "") };
    inline QueueMeta& setScheduledResource(string scheduledResource) { DARABONBA_PTR_SET_VALUE(scheduledResource_, scheduledResource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueueMeta& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // useOversoldResource Field Functions 
    bool hasUseOversoldResource() const { return this->useOversoldResource_ != nullptr;};
    void deleteUseOversoldResource() { this->useOversoldResource_ = nullptr;};
    inline bool getUseOversoldResource() const { DARABONBA_PTR_GET_DEFAULT(useOversoldResource_, false) };
    inline QueueMeta& setUseOversoldResource(bool useOversoldResource) { DARABONBA_PTR_SET_VALUE(useOversoldResource_, useOversoldResource) };


  protected:
    shared_ptr<string> gmtDequeuedTime_ {};
    shared_ptr<string> gmtEnqueuedTime_ {};
    shared_ptr<string> gmtPositionModifiedTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> position_ {};
    shared_ptr<string> queueStrategy_ {};
    shared_ptr<string> quotaId_ {};
    shared_ptr<ResourceAmount> resource_ {};
    shared_ptr<string> scheduledResource_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> useOversoldResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
