// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGACTIVITY_HPP_
#define ALIBABACLOUD_MODELS_SCALINGACTIVITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingActivity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingActivity& obj) { 
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EssScalingRuleId, essScalingRuleId_);
      DARABONBA_PTR_TO_JSON(ExpectNum, expectNum_);
      DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(Transition, transition_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingActivity& obj) { 
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EssScalingRuleId, essScalingRuleId_);
      DARABONBA_PTR_FROM_JSON(ExpectNum, expectNum_);
      DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(Transition, transition_);
    };
    ScalingActivity() = default ;
    ScalingActivity(const ScalingActivity &) = default ;
    ScalingActivity(ScalingActivity &&) = default ;
    ScalingActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingActivity() = default ;
    ScalingActivity& operator=(const ScalingActivity &) = default ;
    ScalingActivity& operator=(ScalingActivity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cause_ == nullptr
        && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->essScalingRuleId_ == nullptr && return this->expectNum_ == nullptr && return this->hostGroupName_ == nullptr
        && return this->id_ == nullptr && return this->instanceIds_ == nullptr && return this->scalingGroupId_ == nullptr && return this->scalingRuleName_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->totalCapacity_ == nullptr && return this->transition_ == nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline ScalingActivity& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ScalingActivity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ScalingActivity& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // essScalingRuleId Field Functions 
    bool hasEssScalingRuleId() const { return this->essScalingRuleId_ != nullptr;};
    void deleteEssScalingRuleId() { this->essScalingRuleId_ = nullptr;};
    inline string essScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(essScalingRuleId_, "") };
    inline ScalingActivity& setEssScalingRuleId(string essScalingRuleId) { DARABONBA_PTR_SET_VALUE(essScalingRuleId_, essScalingRuleId) };


    // expectNum Field Functions 
    bool hasExpectNum() const { return this->expectNum_ != nullptr;};
    void deleteExpectNum() { this->expectNum_ = nullptr;};
    inline int32_t expectNum() const { DARABONBA_PTR_GET_DEFAULT(expectNum_, 0) };
    inline ScalingActivity& setExpectNum(int32_t expectNum) { DARABONBA_PTR_SET_VALUE(expectNum_, expectNum) };


    // hostGroupName Field Functions 
    bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
    void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
    inline string hostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
    inline ScalingActivity& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ScalingActivity& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ScalingActivity& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ScalingActivity& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ScalingActivity& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ScalingActivity& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ScalingActivity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline int32_t totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0) };
    inline ScalingActivity& setTotalCapacity(int32_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // transition Field Functions 
    bool hasTransition() const { return this->transition_ != nullptr;};
    void deleteTransition() { this->transition_ = nullptr;};
    inline string transition() const { DARABONBA_PTR_GET_DEFAULT(transition_, "") };
    inline ScalingActivity& setTransition(string transition) { DARABONBA_PTR_SET_VALUE(transition_, transition) };


  protected:
    std::shared_ptr<string> cause_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> essScalingRuleId_ = nullptr;
    std::shared_ptr<int32_t> expectNum_ = nullptr;
    std::shared_ptr<string> hostGroupName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instanceIds_ = nullptr;
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalCapacity_ = nullptr;
    std::shared_ptr<string> transition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
