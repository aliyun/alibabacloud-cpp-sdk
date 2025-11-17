// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSRESPONSEBODYDEDUCTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSRESPONSEBODYDEDUCTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribePackageDeductionsResponseBodyDeductions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageDeductionsResponseBodyDeductions& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GroupResourceType, groupResourceType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceState, instanceState_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StaTime, staTime_);
      DARABONBA_PTR_TO_JSON(UsedCoreTime, usedCoreTime_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(UsedTimeWithScale, usedTimeWithScale_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageDeductionsResponseBodyDeductions& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GroupResourceType, groupResourceType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceState, instanceState_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StaTime, staTime_);
      DARABONBA_PTR_FROM_JSON(UsedCoreTime, usedCoreTime_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(UsedTimeWithScale, usedTimeWithScale_);
    };
    DescribePackageDeductionsResponseBodyDeductions() = default ;
    DescribePackageDeductionsResponseBodyDeductions(const DescribePackageDeductionsResponseBodyDeductions &) = default ;
    DescribePackageDeductionsResponseBodyDeductions(DescribePackageDeductionsResponseBodyDeductions &&) = default ;
    DescribePackageDeductionsResponseBodyDeductions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageDeductionsResponseBodyDeductions() = default ;
    DescribePackageDeductionsResponseBodyDeductions& operator=(const DescribePackageDeductionsResponseBodyDeductions &) = default ;
    DescribePackageDeductionsResponseBodyDeductions& operator=(DescribePackageDeductionsResponseBodyDeductions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->desktopId_ == nullptr && return this->desktopName_ == nullptr && return this->desktopType_ == nullptr && return this->endTime_ == nullptr && return this->groupResourceType_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceState_ == nullptr && return this->instanceType_ == nullptr && return this->memory_ == nullptr && return this->osType_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->sessionId_ == nullptr && return this->staTime_ == nullptr && return this->usedCoreTime_ == nullptr
        && return this->usedTime_ == nullptr && return this->usedTimeWithScale_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribePackageDeductionsResponseBodyDeductions& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string desktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupResourceType Field Functions 
    bool hasGroupResourceType() const { return this->groupResourceType_ != nullptr;};
    void deleteGroupResourceType() { this->groupResourceType_ = nullptr;};
    inline string groupResourceType() const { DARABONBA_PTR_GET_DEFAULT(groupResourceType_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setGroupResourceType(string groupResourceType) { DARABONBA_PTR_SET_VALUE(groupResourceType_, groupResourceType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceState Field Functions 
    bool hasInstanceState() const { return this->instanceState_ != nullptr;};
    void deleteInstanceState() { this->instanceState_ = nullptr;};
    inline string instanceState() const { DARABONBA_PTR_GET_DEFAULT(instanceState_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setInstanceState(string instanceState) { DARABONBA_PTR_SET_VALUE(instanceState_, instanceState) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribePackageDeductionsResponseBodyDeductions& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // staTime Field Functions 
    bool hasStaTime() const { return this->staTime_ != nullptr;};
    void deleteStaTime() { this->staTime_ = nullptr;};
    inline string staTime() const { DARABONBA_PTR_GET_DEFAULT(staTime_, "") };
    inline DescribePackageDeductionsResponseBodyDeductions& setStaTime(string staTime) { DARABONBA_PTR_SET_VALUE(staTime_, staTime) };


    // usedCoreTime Field Functions 
    bool hasUsedCoreTime() const { return this->usedCoreTime_ != nullptr;};
    void deleteUsedCoreTime() { this->usedCoreTime_ = nullptr;};
    inline float usedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(usedCoreTime_, 0.0) };
    inline DescribePackageDeductionsResponseBodyDeductions& setUsedCoreTime(float usedCoreTime) { DARABONBA_PTR_SET_VALUE(usedCoreTime_, usedCoreTime) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int64_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
    inline DescribePackageDeductionsResponseBodyDeductions& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // usedTimeWithScale Field Functions 
    bool hasUsedTimeWithScale() const { return this->usedTimeWithScale_ != nullptr;};
    void deleteUsedTimeWithScale() { this->usedTimeWithScale_ = nullptr;};
    inline int64_t usedTimeWithScale() const { DARABONBA_PTR_GET_DEFAULT(usedTimeWithScale_, 0L) };
    inline DescribePackageDeductionsResponseBodyDeductions& setUsedTimeWithScale(int64_t usedTimeWithScale) { DARABONBA_PTR_SET_VALUE(usedTimeWithScale_, usedTimeWithScale) };


  protected:
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<string> desktopName_ = nullptr;
    std::shared_ptr<string> desktopType_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> groupResourceType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceState_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int64_t> memory_ = nullptr;
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> staTime_ = nullptr;
    std::shared_ptr<float> usedCoreTime_ = nullptr;
    std::shared_ptr<int64_t> usedTime_ = nullptr;
    std::shared_ptr<int64_t> usedTimeWithScale_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
