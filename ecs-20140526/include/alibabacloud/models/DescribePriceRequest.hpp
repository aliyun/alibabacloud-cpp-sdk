// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AssuranceTimes, assuranceTimes_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_TO_JSON(InstanceCpuCoreCount, instanceCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(RecurrenceRules, recurrenceRules_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AssuranceTimes, assuranceTimes_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
      DARABONBA_PTR_FROM_JSON(InstanceCpuCoreCount, instanceCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(RecurrenceRules, recurrenceRules_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePriceRequest() = default ;
    DescribePriceRequest(const DescribePriceRequest &) = default ;
    DescribePriceRequest(DescribePriceRequest &&) = default ;
    DescribePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequest() = default ;
    DescribePriceRequest& operator=(const DescribePriceRequest &) = default ;
    DescribePriceRequest& operator=(DescribePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecurrenceRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecurrenceRules& obj) { 
        DARABONBA_PTR_TO_JSON(EndHour, endHour_);
        DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
        DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      };
      friend void from_json(const Darabonba::Json& j, RecurrenceRules& obj) { 
        DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
        DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
        DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
        DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      };
      RecurrenceRules() = default ;
      RecurrenceRules(const RecurrenceRules &) = default ;
      RecurrenceRules(RecurrenceRules &&) = default ;
      RecurrenceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecurrenceRules() = default ;
      RecurrenceRules& operator=(const RecurrenceRules &) = default ;
      RecurrenceRules& operator=(RecurrenceRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endHour_ == nullptr
        && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr && this->startHour_ == nullptr; };
      // endHour Field Functions 
      bool hasEndHour() const { return this->endHour_ != nullptr;};
      void deleteEndHour() { this->endHour_ = nullptr;};
      inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
      inline RecurrenceRules& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


      // recurrenceType Field Functions 
      bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
      void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
      inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
      inline RecurrenceRules& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


      // recurrenceValue Field Functions 
      bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
      void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
      inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
      inline RecurrenceRules& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


      // startHour Field Functions 
      bool hasStartHour() const { return this->startHour_ != nullptr;};
      void deleteStartHour() { this->startHour_ = nullptr;};
      inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
      inline RecurrenceRules& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    protected:
      // The end time of the time-sharing assurance. The value must be on the hour.
      shared_ptr<int32_t> endHour_ {};
      // The type of the recurrence rule policy. Valid values:
      shared_ptr<string> recurrenceType_ {};
      // The value of the recurrence rule.
      shared_ptr<string> recurrenceValue_ {};
      // The effective period start time of the time-sharing assurance. The value must be on the hour.
      shared_ptr<int32_t> startHour_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The category of the system disk. You must specify `ImageId` when you query the price of a system disk. Valid values:
      shared_ptr<string> category_ {};
      // The performance level of the system disk when the system disk type is enterprise SSD. This parameter is valid only when `SystemDiskCategory=cloud_essd`. Valid values:
      // 
      // PL0.
      // PL1 (default).
      // PL2.
      // PL3.
      shared_ptr<string> performanceLevel_ {};
      // The size of the system disk. Unit: GiB. Valid values:
      shared_ptr<int32_t> size_ {};
    };

    class SchedulerOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulerOptions& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
        DARABONBA_PTR_TO_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulerOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
        DARABONBA_PTR_FROM_JSON(DeploymentSetStrategy, deploymentSetStrategy_);
      };
      SchedulerOptions() = default ;
      SchedulerOptions(const SchedulerOptions &) = default ;
      SchedulerOptions(SchedulerOptions &&) = default ;
      SchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchedulerOptions() = default ;
      SchedulerOptions& operator=(const SchedulerOptions &) = default ;
      SchedulerOptions& operator=(SchedulerOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dedicatedHostId_ == nullptr
        && this->deploymentSetStrategy_ == nullptr; };
      // dedicatedHostId Field Functions 
      bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
      void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
      inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
      inline SchedulerOptions& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


      // deploymentSetStrategy Field Functions 
      bool hasDeploymentSetStrategy() const { return this->deploymentSetStrategy_ != nullptr;};
      void deleteDeploymentSetStrategy() { this->deploymentSetStrategy_ = nullptr;};
      inline string getDeploymentSetStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetStrategy_, "") };
      inline SchedulerOptions& setDeploymentSetStrategy(string deploymentSetStrategy) { DARABONBA_PTR_SET_VALUE(deploymentSetStrategy_, deploymentSetStrategy) };


    protected:
      // This parameter takes effect only when ResourceType is set to instance.
      shared_ptr<string> dedicatedHostId_ {};
      // The deployment set strategy. Valid values:
      // - Availability: high availability.
      // - AvailabilityGroup: high availability for deployment set groups.
      // - LowLatency: low network latency.
      // - ProximityLooseDispersion: proximity loose dispersion.
      // 
      // >Only when the strategy is set to ProximityLooseDispersion, the API response includes the price details for "Resource": "deploymentSet". Other deployment set strategies are free of charge, so the API response does not include the price information for "Resource": "deploymentSet".
      shared_ptr<string> deploymentSetStrategy_ {};
    };

    class DataDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      };
      DataDisk() = default ;
      DataDisk(const DataDisk &) = default ;
      DataDisk(DataDisk &&) = default ;
      DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisk() = default ;
      DataDisk& operator=(const DataDisk &) = default ;
      DataDisk& operator=(DataDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->performanceLevel_ == nullptr && this->size_ == nullptr && this->provisionedIops_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline DataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // provisionedIops Field Functions 
      bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
      void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
      inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
      inline DataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    protected:
      // The category of data disk N. Valid values:
      shared_ptr<string> category_ {};
      // The performance level of the Nth data disk when the disk type is enterprise SSD. This parameter is valid only when `DataDisk.N.Category=cloud_essd`. Valid values:
      // 
      // - PL0
      // - PL1 (default)
      // - PL2
      // - PL3
      // 
      // Valid values of N: 1 to 16.
      shared_ptr<string> performanceLevel_ {};
      // The size of data disk N. Unit: GiB. Valid values:
      shared_ptr<int64_t> size_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × Capacity - Baseline Performance}.
      shared_ptr<int64_t> provisionedIops_ {};
    };

    virtual bool empty() const override { return this->dataDisk_ == nullptr
        && this->schedulerOptions_ == nullptr && this->systemDisk_ == nullptr && this->amount_ == nullptr && this->assuranceTimes_ == nullptr && this->capacity_ == nullptr
        && this->dedicatedHostType_ == nullptr && this->imageId_ == nullptr && this->instanceAmount_ == nullptr && this->instanceCpuCoreCount_ == nullptr && this->instanceNetworkType_ == nullptr
        && this->instanceType_ == nullptr && this->instanceTypeList_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr
        && this->isp_ == nullptr && this->offeringType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr
        && this->platform_ == nullptr && this->priceUnit_ == nullptr && this->recurrenceRules_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->scope_ == nullptr && this->spotDuration_ == nullptr && this->spotStrategy_ == nullptr
        && this->startTime_ == nullptr && this->zoneId_ == nullptr; };
    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<DescribePriceRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<DescribePriceRequest::DataDisk>) };
    inline vector<DescribePriceRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<DescribePriceRequest::DataDisk>) };
    inline DescribePriceRequest& setDataDisk(const vector<DescribePriceRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline DescribePriceRequest& setDataDisk(vector<DescribePriceRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline const DescribePriceRequest::SchedulerOptions & getSchedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, DescribePriceRequest::SchedulerOptions) };
    inline DescribePriceRequest::SchedulerOptions getSchedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, DescribePriceRequest::SchedulerOptions) };
    inline DescribePriceRequest& setSchedulerOptions(const DescribePriceRequest::SchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline DescribePriceRequest& setSchedulerOptions(DescribePriceRequest::SchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const DescribePriceRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, DescribePriceRequest::SystemDisk) };
    inline DescribePriceRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, DescribePriceRequest::SystemDisk) };
    inline DescribePriceRequest& setSystemDisk(const DescribePriceRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline DescribePriceRequest& setSystemDisk(DescribePriceRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribePriceRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // assuranceTimes Field Functions 
    bool hasAssuranceTimes() const { return this->assuranceTimes_ != nullptr;};
    void deleteAssuranceTimes() { this->assuranceTimes_ = nullptr;};
    inline string getAssuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(assuranceTimes_, "") };
    inline DescribePriceRequest& setAssuranceTimes(string assuranceTimes) { DARABONBA_PTR_SET_VALUE(assuranceTimes_, assuranceTimes) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int32_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
    inline DescribePriceRequest& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline string getDedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
    inline DescribePriceRequest& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribePriceRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceAmount Field Functions 
    bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
    void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
    inline int32_t getInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
    inline DescribePriceRequest& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


    // instanceCpuCoreCount Field Functions 
    bool hasInstanceCpuCoreCount() const { return this->instanceCpuCoreCount_ != nullptr;};
    void deleteInstanceCpuCoreCount() { this->instanceCpuCoreCount_ = nullptr;};
    inline int32_t getInstanceCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCpuCoreCount_, 0) };
    inline DescribePriceRequest& setInstanceCpuCoreCount(int32_t instanceCpuCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCpuCoreCount_, instanceCpuCoreCount) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string getInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribePriceRequest& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePriceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeList Field Functions 
    bool hasInstanceTypeList() const { return this->instanceTypeList_ != nullptr;};
    void deleteInstanceTypeList() { this->instanceTypeList_ = nullptr;};
    inline const vector<string> & getInstanceTypeList() const { DARABONBA_PTR_GET_CONST(instanceTypeList_, vector<string>) };
    inline vector<string> getInstanceTypeList() { DARABONBA_PTR_GET(instanceTypeList_, vector<string>) };
    inline DescribePriceRequest& setInstanceTypeList(const vector<string> & instanceTypeList) { DARABONBA_PTR_SET_VALUE(instanceTypeList_, instanceTypeList) };
    inline DescribePriceRequest& setInstanceTypeList(vector<string> && instanceTypeList) { DARABONBA_PTR_SET_RVALUE(instanceTypeList_, instanceTypeList) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribePriceRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribePriceRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribePriceRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribePriceRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // offeringType Field Functions 
    bool hasOfferingType() const { return this->offeringType_ != nullptr;};
    void deleteOfferingType() { this->offeringType_ = nullptr;};
    inline string getOfferingType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
    inline DescribePriceRequest& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribePriceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribePriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribePriceRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline DescribePriceRequest& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // recurrenceRules Field Functions 
    bool hasRecurrenceRules() const { return this->recurrenceRules_ != nullptr;};
    void deleteRecurrenceRules() { this->recurrenceRules_ = nullptr;};
    inline const vector<DescribePriceRequest::RecurrenceRules> & getRecurrenceRules() const { DARABONBA_PTR_GET_CONST(recurrenceRules_, vector<DescribePriceRequest::RecurrenceRules>) };
    inline vector<DescribePriceRequest::RecurrenceRules> getRecurrenceRules() { DARABONBA_PTR_GET(recurrenceRules_, vector<DescribePriceRequest::RecurrenceRules>) };
    inline DescribePriceRequest& setRecurrenceRules(const vector<DescribePriceRequest::RecurrenceRules> & recurrenceRules) { DARABONBA_PTR_SET_VALUE(recurrenceRules_, recurrenceRules) };
    inline DescribePriceRequest& setRecurrenceRules(vector<DescribePriceRequest::RecurrenceRules> && recurrenceRules) { DARABONBA_PTR_SET_RVALUE(recurrenceRules_, recurrenceRules) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePriceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePriceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribePriceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribePriceRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline DescribePriceRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribePriceRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribePriceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePriceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<vector<DescribePriceRequest::DataDisk>> dataDisk_ {};
    shared_ptr<DescribePriceRequest::SchedulerOptions> schedulerOptions_ {};
    shared_ptr<DescribePriceRequest::SystemDisk> systemDisk_ {};
    // The number of Elastic Computing Service (ECS) servers that you want to purchase in a batch. Valid values: 1 to 1000.
    shared_ptr<int32_t> amount_ {};
    // The total number of times that the elasticity assurance can take effect. Set the value to Unlimited. Only the unlimited mode is supported within the effective period.
    shared_ptr<string> assuranceTimes_ {};
    // The capacity. Unit: GiB.
    shared_ptr<int32_t> capacity_ {};
    // The dedicated host type. You can call [DescribeDedicatedHostTypes](https://help.aliyun.com/document_detail/134240.html) to query the most recent list of dedicated host types.
    shared_ptr<string> dedicatedHostType_ {};
    // This parameter takes effect only when ResourceType is set to instance.
    shared_ptr<string> imageId_ {};
    // The total number of instances that you want to reserve within an instance type.
    shared_ptr<int32_t> instanceAmount_ {};
    // The total number of vCPUs supported by the elasticity assurance. When you call this operation, the system calculates the number of instances that the elasticity assurance needs to support based on the specified InstanceType (rounded up).
    shared_ptr<int32_t> instanceCpuCoreCount_ {};
    // The network type of the instance. Valid values:
    shared_ptr<string> instanceNetworkType_ {};
    // The instance type. You must specify this parameter when ResourceType is set to `instance`. For more details, see [Instance family](https://help.aliyun.com/document_detail/25378.html). You can also invoke [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the most recent instance type list.
    shared_ptr<string> instanceType_ {};
    // The instance type. Only a single instance type is supported for the unlimited elasticity assurance.
    shared_ptr<vector<string>> instanceTypeList_ {};
    // The billing method for network bandwidth. Valid values:
    shared_ptr<string> internetChargeType_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the queried instance is an I/O optimized instance. Valid values:
    // 
    // - none: non-I/O optimized.
    // - optimized: I/O optimized.
    // 
    // If InstanceType is set to an instance type in [Series I](https://help.aliyun.com/document_detail/55263.html), the default value is none.
    // 
    // If InstanceType is set to an instance type not in [Series I](https://help.aliyun.com/document_detail/55263.html), the default value is optimized.
    shared_ptr<string> ioOptimized_ {};
    // The Internet service operation provider. Valid values:
    shared_ptr<string> isp_ {};
    // The payment option of the reserved instance. Valid values:
    shared_ptr<string> offeringType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing duration of the ECS instance. Valid values:
    // 
    // <props="china">
    // - If PriceUnit is set to Month: 1 to 9.
    // - If PriceUnit is set to Year: 1 to 5.
    // - If PriceUnit is set to Hour: 1.
    // - If PriceUnit is set to Week: 1 to 4.
    // 
    // 
    // 
    // <props="intl">
    // - If PriceUnit is set to Month: 1 to 9.
    // - If PriceUnit is set to Year: 1 to 5.
    // - If PriceUnit is set to Hour: 1.
    // 
    // 
    // 
    // Default value: 1.
    shared_ptr<int32_t> period_ {};
    // The operating system of the image used by the instance. Valid values:
    shared_ptr<string> platform_ {};
    // Queries the price of an ECS instance for different billing cycles. Valid values:
    // 
    // <props="china">
    // - Month: monthly pricing unit.
    // - Year: yearly pricing unit.
    // - Hour (default): hourly pricing unit.
    // - Week: weekly pricing unit.
    // 
    // 
    // 
    // <props="intl">
    // - Month: monthly pricing unit.
    // - Year: yearly pricing unit.
    // - Hour (default): hourly pricing unit.
    shared_ptr<string> priceUnit_ {};
    // The list of recurrence rules for the time-sharing elasticity assurance.
    shared_ptr<vector<DescribePriceRequest::RecurrenceRules>> recurrenceRules_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the resource. Valid values:
    shared_ptr<string> resourceType_ {};
    // The scope of the reserved instance. Valid values:
    shared_ptr<string> scope_ {};
    // The protection period of the spot instance. Unit: hours. Default value: 1. Valid values:
    shared_ptr<int32_t> spotDuration_ {};
    // The bidding policy for pay-as-you-go instances. Valid values:
    // - NoSpot: a regular pay-as-you-go instance.
    // - SpotWithPriceLimit: a spot instance with a maximum hourly price.
    // - SpotAsPriceGo: a spot instance for which the system automatically bids at up to the pay-as-you-go price.
    // 
    // Default value: NoSpot.
    // 
    // > This parameter takes effect only when `PriceUnit=Hour` and `Period=1`. Because the default value of `PriceUnit` is `Hour` and the default value of `Period` is `1`, you do not need to set the `PriceUnit` and `Period` parameters when you specify this parameter.
    shared_ptr<string> spotStrategy_ {};
    // The effective period of the time-sharing elasticity assurance. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    shared_ptr<string> startTime_ {};
    // The zone ID.
    // 
    // > Spot instance prices may vary across zones. When you query spot instance prices, specify ZoneId to query the price in a specific zone.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
