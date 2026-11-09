// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGEDEDUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribePackageDeductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageDeductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Deductions, deductions_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalUsedCoreTime, totalUsedCoreTime_);
      DARABONBA_PTR_TO_JSON(TotalUsedTime, totalUsedTime_);
      DARABONBA_PTR_TO_JSON(TotalUsedTimeDecimal, totalUsedTimeDecimal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageDeductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Deductions, deductions_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalUsedCoreTime, totalUsedCoreTime_);
      DARABONBA_PTR_FROM_JSON(TotalUsedTime, totalUsedTime_);
      DARABONBA_PTR_FROM_JSON(TotalUsedTimeDecimal, totalUsedTimeDecimal_);
    };
    DescribePackageDeductionsResponseBody() = default ;
    DescribePackageDeductionsResponseBody(const DescribePackageDeductionsResponseBody &) = default ;
    DescribePackageDeductionsResponseBody(DescribePackageDeductionsResponseBody &&) = default ;
    DescribePackageDeductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageDeductionsResponseBody() = default ;
    DescribePackageDeductionsResponseBody& operator=(const DescribePackageDeductionsResponseBody &) = default ;
    DescribePackageDeductionsResponseBody& operator=(DescribePackageDeductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Deductions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Deductions& obj) { 
        DARABONBA_PTR_TO_JSON(AgentType, agentType_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(DeductionRequestId, deductionRequestId_);
        DARABONBA_PTR_TO_JSON(DeductionType, deductionType_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(GroupResourceType, groupResourceType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceState, instanceState_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(PackageId, packageId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StaTime, staTime_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(UsedCoreTime, usedCoreTime_);
        DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
        DARABONBA_PTR_TO_JSON(UsedTimeDecimal, usedTimeDecimal_);
        DARABONBA_PTR_TO_JSON(UsedTimeWithScale, usedTimeWithScale_);
      };
      friend void from_json(const Darabonba::Json& j, Deductions& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentType, agentType_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(DeductionRequestId, deductionRequestId_);
        DARABONBA_PTR_FROM_JSON(DeductionType, deductionType_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(GroupResourceType, groupResourceType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceState, instanceState_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(PackageId, packageId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StaTime, staTime_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(UsedCoreTime, usedCoreTime_);
        DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
        DARABONBA_PTR_FROM_JSON(UsedTimeDecimal, usedTimeDecimal_);
        DARABONBA_PTR_FROM_JSON(UsedTimeWithScale, usedTimeWithScale_);
      };
      Deductions() = default ;
      Deductions(const Deductions &) = default ;
      Deductions(Deductions &&) = default ;
      Deductions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Deductions() = default ;
      Deductions& operator=(const Deductions &) = default ;
      Deductions& operator=(Deductions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentType_ == nullptr
        && this->cpu_ == nullptr && this->deductionRequestId_ == nullptr && this->deductionType_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->desktopType_ == nullptr && this->endTime_ == nullptr && this->groupResourceType_ == nullptr && this->instanceId_ == nullptr && this->instanceState_ == nullptr
        && this->instanceType_ == nullptr && this->memory_ == nullptr && this->model_ == nullptr && this->osType_ == nullptr && this->packageId_ == nullptr
        && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr && this->sessionId_ == nullptr && this->staTime_ == nullptr
        && this->summary_ == nullptr && this->usedCoreTime_ == nullptr && this->usedTime_ == nullptr && this->usedTimeDecimal_ == nullptr && this->usedTimeWithScale_ == nullptr; };
      // agentType Field Functions 
      bool hasAgentType() const { return this->agentType_ != nullptr;};
      void deleteAgentType() { this->agentType_ = nullptr;};
      inline string getAgentType() const { DARABONBA_PTR_GET_DEFAULT(agentType_, "") };
      inline Deductions& setAgentType(string agentType) { DARABONBA_PTR_SET_VALUE(agentType_, agentType) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Deductions& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // deductionRequestId Field Functions 
      bool hasDeductionRequestId() const { return this->deductionRequestId_ != nullptr;};
      void deleteDeductionRequestId() { this->deductionRequestId_ = nullptr;};
      inline string getDeductionRequestId() const { DARABONBA_PTR_GET_DEFAULT(deductionRequestId_, "") };
      inline Deductions& setDeductionRequestId(string deductionRequestId) { DARABONBA_PTR_SET_VALUE(deductionRequestId_, deductionRequestId) };


      // deductionType Field Functions 
      bool hasDeductionType() const { return this->deductionType_ != nullptr;};
      void deleteDeductionType() { this->deductionType_ = nullptr;};
      inline string getDeductionType() const { DARABONBA_PTR_GET_DEFAULT(deductionType_, "") };
      inline Deductions& setDeductionType(string deductionType) { DARABONBA_PTR_SET_VALUE(deductionType_, deductionType) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Deductions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Deductions& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline Deductions& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Deductions& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // groupResourceType Field Functions 
      bool hasGroupResourceType() const { return this->groupResourceType_ != nullptr;};
      void deleteGroupResourceType() { this->groupResourceType_ = nullptr;};
      inline string getGroupResourceType() const { DARABONBA_PTR_GET_DEFAULT(groupResourceType_, "") };
      inline Deductions& setGroupResourceType(string groupResourceType) { DARABONBA_PTR_SET_VALUE(groupResourceType_, groupResourceType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Deductions& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceState Field Functions 
      bool hasInstanceState() const { return this->instanceState_ != nullptr;};
      void deleteInstanceState() { this->instanceState_ = nullptr;};
      inline string getInstanceState() const { DARABONBA_PTR_GET_DEFAULT(instanceState_, "") };
      inline Deductions& setInstanceState(string instanceState) { DARABONBA_PTR_SET_VALUE(instanceState_, instanceState) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Deductions& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Deductions& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Deductions& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Deductions& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // packageId Field Functions 
      bool hasPackageId() const { return this->packageId_ != nullptr;};
      void deletePackageId() { this->packageId_ = nullptr;};
      inline string getPackageId() const { DARABONBA_PTR_GET_DEFAULT(packageId_, "") };
      inline Deductions& setPackageId(string packageId) { DARABONBA_PTR_SET_VALUE(packageId_, packageId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Deductions& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Deductions& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Deductions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Deductions& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // staTime Field Functions 
      bool hasStaTime() const { return this->staTime_ != nullptr;};
      void deleteStaTime() { this->staTime_ = nullptr;};
      inline string getStaTime() const { DARABONBA_PTR_GET_DEFAULT(staTime_, "") };
      inline Deductions& setStaTime(string staTime) { DARABONBA_PTR_SET_VALUE(staTime_, staTime) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Deductions& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // usedCoreTime Field Functions 
      bool hasUsedCoreTime() const { return this->usedCoreTime_ != nullptr;};
      void deleteUsedCoreTime() { this->usedCoreTime_ = nullptr;};
      inline float getUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(usedCoreTime_, 0.0) };
      inline Deductions& setUsedCoreTime(float usedCoreTime) { DARABONBA_PTR_SET_VALUE(usedCoreTime_, usedCoreTime) };


      // usedTime Field Functions 
      bool hasUsedTime() const { return this->usedTime_ != nullptr;};
      void deleteUsedTime() { this->usedTime_ = nullptr;};
      inline int64_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0L) };
      inline Deductions& setUsedTime(int64_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


      // usedTimeDecimal Field Functions 
      bool hasUsedTimeDecimal() const { return this->usedTimeDecimal_ != nullptr;};
      void deleteUsedTimeDecimal() { this->usedTimeDecimal_ = nullptr;};
      inline string getUsedTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(usedTimeDecimal_, "") };
      inline Deductions& setUsedTimeDecimal(string usedTimeDecimal) { DARABONBA_PTR_SET_VALUE(usedTimeDecimal_, usedTimeDecimal) };


      // usedTimeWithScale Field Functions 
      bool hasUsedTimeWithScale() const { return this->usedTimeWithScale_ != nullptr;};
      void deleteUsedTimeWithScale() { this->usedTimeWithScale_ = nullptr;};
      inline int64_t getUsedTimeWithScale() const { DARABONBA_PTR_GET_DEFAULT(usedTimeWithScale_, 0L) };
      inline Deductions& setUsedTimeWithScale(int64_t usedTimeWithScale) { DARABONBA_PTR_SET_VALUE(usedTimeWithScale_, usedTimeWithScale) };


    protected:
      // The agent type.
      shared_ptr<string> agentType_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> cpu_ {};
      // The request ID.
      shared_ptr<string> deductionRequestId_ {};
      // The deduction types.
      shared_ptr<string> deductionType_ {};
      // The Cloud Desktop ID.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud desktop.
      shared_ptr<string> desktopName_ {};
      // The specifications of the cloud desktop.
      shared_ptr<string> desktopType_ {};
      // The end time of the deduction record in UTC. The format is yyyy-MM-ddTHH:mm:ssZ. For records aggregated by hour, the format can be yyyy-MM-ddTHH:mmZ with seconds omitted.
      shared_ptr<string> endTime_ {};
      // The group resource type to which the deduction record belongs.
      shared_ptr<string> groupResourceType_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The status of the core-hour package.
      shared_ptr<string> instanceState_ {};
      // The instance specifications for the deduction.
      shared_ptr<string> instanceType_ {};
      // The memory. Unit: MB.
      shared_ptr<int64_t> memory_ {};
      // The model.
      shared_ptr<string> model_ {};
      // The operating system type of the cloud desktop.
      shared_ptr<string> osType_ {};
      // The ID of the credit package.
      shared_ptr<string> packageId_ {};
      // The region ID of the cloud desktop.
      shared_ptr<string> regionId_ {};
      // The ID of the first resource in the deduction item.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The ID of the session associated with the deduction record.
      shared_ptr<string> sessionId_ {};
      // The start time of the deduction record in UTC. The format is yyyy-MM-ddTHH:mm:ssZ. For records aggregated by hour, the format can be yyyy-MM-ddTHH:mmZ with seconds omitted.
      shared_ptr<string> staTime_ {};
      // The summary.
      shared_ptr<string> summary_ {};
      // The number of cores deducted.
      shared_ptr<float> usedCoreTime_ {};
      // The usage duration. Unit: seconds.
      shared_ptr<int64_t> usedTime_ {};
      // The usage calculated from UsedTime by using a precision factor, rounded to four decimal places. This field is returned only for applicable resource types and must be read based on the metering criteria of the corresponding resource.
      shared_ptr<string> usedTimeDecimal_ {};
      // The usage that includes the deduction coefficient. In scenarios where deduction is based on duration, the value is measured in seconds and returned as an integer.
      shared_ptr<int64_t> usedTimeWithScale_ {};
    };

    virtual bool empty() const override { return this->deductions_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalUsedCoreTime_ == nullptr
        && this->totalUsedTime_ == nullptr && this->totalUsedTimeDecimal_ == nullptr; };
    // deductions Field Functions 
    bool hasDeductions() const { return this->deductions_ != nullptr;};
    void deleteDeductions() { this->deductions_ = nullptr;};
    inline const vector<DescribePackageDeductionsResponseBody::Deductions> & getDeductions() const { DARABONBA_PTR_GET_CONST(deductions_, vector<DescribePackageDeductionsResponseBody::Deductions>) };
    inline vector<DescribePackageDeductionsResponseBody::Deductions> getDeductions() { DARABONBA_PTR_GET(deductions_, vector<DescribePackageDeductionsResponseBody::Deductions>) };
    inline DescribePackageDeductionsResponseBody& setDeductions(const vector<DescribePackageDeductionsResponseBody::Deductions> & deductions) { DARABONBA_PTR_SET_VALUE(deductions_, deductions) };
    inline DescribePackageDeductionsResponseBody& setDeductions(vector<DescribePackageDeductionsResponseBody::Deductions> && deductions) { DARABONBA_PTR_SET_RVALUE(deductions_, deductions) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribePackageDeductionsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePackageDeductionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePackageDeductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePackageDeductionsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalUsedCoreTime Field Functions 
    bool hasTotalUsedCoreTime() const { return this->totalUsedCoreTime_ != nullptr;};
    void deleteTotalUsedCoreTime() { this->totalUsedCoreTime_ = nullptr;};
    inline float getTotalUsedCoreTime() const { DARABONBA_PTR_GET_DEFAULT(totalUsedCoreTime_, 0.0) };
    inline DescribePackageDeductionsResponseBody& setTotalUsedCoreTime(float totalUsedCoreTime) { DARABONBA_PTR_SET_VALUE(totalUsedCoreTime_, totalUsedCoreTime) };


    // totalUsedTime Field Functions 
    bool hasTotalUsedTime() const { return this->totalUsedTime_ != nullptr;};
    void deleteTotalUsedTime() { this->totalUsedTime_ = nullptr;};
    inline int64_t getTotalUsedTime() const { DARABONBA_PTR_GET_DEFAULT(totalUsedTime_, 0L) };
    inline DescribePackageDeductionsResponseBody& setTotalUsedTime(int64_t totalUsedTime) { DARABONBA_PTR_SET_VALUE(totalUsedTime_, totalUsedTime) };


    // totalUsedTimeDecimal Field Functions 
    bool hasTotalUsedTimeDecimal() const { return this->totalUsedTimeDecimal_ != nullptr;};
    void deleteTotalUsedTimeDecimal() { this->totalUsedTimeDecimal_ = nullptr;};
    inline string getTotalUsedTimeDecimal() const { DARABONBA_PTR_GET_DEFAULT(totalUsedTimeDecimal_, "") };
    inline DescribePackageDeductionsResponseBody& setTotalUsedTimeDecimal(string totalUsedTimeDecimal) { DARABONBA_PTR_SET_VALUE(totalUsedTimeDecimal_, totalUsedTimeDecimal) };


  protected:
    // The list of deduction details.
    shared_ptr<vector<DescribePackageDeductionsResponseBody::Deductions>> deductions_ {};
    // The current page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page in the Settings for paging during a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of core-hour package deduction details queried.
    shared_ptr<int64_t> totalCount_ {};
    // The total deducted core-hours.
    shared_ptr<float> totalUsedCoreTime_ {};
    // The total usage duration.
    shared_ptr<int64_t> totalUsedTime_ {};
    // The total usage calculated by using a precision factor, rounded to four decimal places. This field uses the same metering criteria as UsedTimeDecimal in the details.
    shared_ptr<string> totalUsedTimeDecimal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
