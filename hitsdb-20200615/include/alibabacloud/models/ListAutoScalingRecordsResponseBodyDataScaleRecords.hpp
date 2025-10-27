// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGRECORDSRESPONSEBODYDATASCALERECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGRECORDSRESPONSEBODYDATASCALERECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListAutoScalingRecordsResponseBodyDataScaleRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingRecordsResponseBodyDataScaleRecords& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SpecGroupId, specGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingRecordsResponseBodyDataScaleRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SpecGroupId, specGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    ListAutoScalingRecordsResponseBodyDataScaleRecords() = default ;
    ListAutoScalingRecordsResponseBodyDataScaleRecords(const ListAutoScalingRecordsResponseBodyDataScaleRecords &) = default ;
    ListAutoScalingRecordsResponseBodyDataScaleRecords(ListAutoScalingRecordsResponseBodyDataScaleRecords &&) = default ;
    ListAutoScalingRecordsResponseBodyDataScaleRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingRecordsResponseBodyDataScaleRecords() = default ;
    ListAutoScalingRecordsResponseBodyDataScaleRecords& operator=(const ListAutoScalingRecordsResponseBodyDataScaleRecords &) = default ;
    ListAutoScalingRecordsResponseBodyDataScaleRecords& operator=(ListAutoScalingRecordsResponseBodyDataScaleRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->endTime_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->oldValue_ == nullptr && return this->resourceType_ == nullptr
        && return this->specGroupId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->strategy_ == nullptr && return this->targetValue_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // specGroupId Field Functions 
    bool hasSpecGroupId() const { return this->specGroupId_ != nullptr;};
    void deleteSpecGroupId() { this->specGroupId_ = nullptr;};
    inline string specGroupId() const { DARABONBA_PTR_GET_DEFAULT(specGroupId_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setSpecGroupId(string specGroupId) { DARABONBA_PTR_SET_VALUE(specGroupId_, specGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline ListAutoScalingRecordsResponseBodyDataScaleRecords& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> oldValue_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> specGroupId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
    std::shared_ptr<string> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
