// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(ClusterCreateTime, clusterCreateTime_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterModifyTime, clusterModifyTime_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_TO_JSON(EhpcVersion, ehpcVersion_);
      DARABONBA_PTR_TO_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_TO_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_TO_JSON(GrowInterval, growInterval_);
      DARABONBA_PTR_TO_JSON(IdleInterval, idleInterval_);
      DARABONBA_PTR_TO_JSON(Manager, manager_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(MonitorSpec, monitorSpec_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerSpec, schedulerSpec_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(ClusterCreateTime, clusterCreateTime_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterModifyTime, clusterModifyTime_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_FROM_JSON(EhpcVersion, ehpcVersion_);
      DARABONBA_PTR_FROM_JSON(EnableScaleIn, enableScaleIn_);
      DARABONBA_PTR_FROM_JSON(EnableScaleOut, enableScaleOut_);
      DARABONBA_PTR_FROM_JSON(GrowInterval, growInterval_);
      DARABONBA_PTR_FROM_JSON(IdleInterval, idleInterval_);
      DARABONBA_PTR_FROM_JSON(Manager, manager_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(MonitorSpec, monitorSpec_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerSpec, schedulerSpec_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    GetClusterResponseBody() = default ;
    GetClusterResponseBody(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody(GetClusterResponseBody &&) = default ;
    GetClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterResponseBody() = default ;
    GetClusterResponseBody& operator=(const GetClusterResponseBody &) = default ;
    GetClusterResponseBody& operator=(GetClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SchedulerSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulerSpec& obj) { 
        DARABONBA_PTR_TO_JSON(EnablePowerSaving, enablePowerSaving_);
        DARABONBA_PTR_TO_JSON(EnableTopologyAwareness, enableTopologyAwareness_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulerSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(EnablePowerSaving, enablePowerSaving_);
        DARABONBA_PTR_FROM_JSON(EnableTopologyAwareness, enableTopologyAwareness_);
      };
      SchedulerSpec() = default ;
      SchedulerSpec(const SchedulerSpec &) = default ;
      SchedulerSpec(SchedulerSpec &&) = default ;
      SchedulerSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchedulerSpec() = default ;
      SchedulerSpec& operator=(const SchedulerSpec &) = default ;
      SchedulerSpec& operator=(SchedulerSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enablePowerSaving_ == nullptr
        && this->enableTopologyAwareness_ == nullptr; };
      // enablePowerSaving Field Functions 
      bool hasEnablePowerSaving() const { return this->enablePowerSaving_ != nullptr;};
      void deleteEnablePowerSaving() { this->enablePowerSaving_ = nullptr;};
      inline bool getEnablePowerSaving() const { DARABONBA_PTR_GET_DEFAULT(enablePowerSaving_, false) };
      inline SchedulerSpec& setEnablePowerSaving(bool enablePowerSaving) { DARABONBA_PTR_SET_VALUE(enablePowerSaving_, enablePowerSaving) };


      // enableTopologyAwareness Field Functions 
      bool hasEnableTopologyAwareness() const { return this->enableTopologyAwareness_ != nullptr;};
      void deleteEnableTopologyAwareness() { this->enableTopologyAwareness_ = nullptr;};
      inline bool getEnableTopologyAwareness() const { DARABONBA_PTR_GET_DEFAULT(enableTopologyAwareness_, false) };
      inline SchedulerSpec& setEnableTopologyAwareness(bool enableTopologyAwareness) { DARABONBA_PTR_SET_VALUE(enableTopologyAwareness_, enableTopologyAwareness) };


    protected:
      shared_ptr<bool> enablePowerSaving_ {};
      // Indicates whether the topology awareness feature is enabled for the cluster. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableTopologyAwareness_ {};
    };

    class MonitorSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MonitorSpec& obj) { 
        DARABONBA_PTR_TO_JSON(EnableComputeLoadMonitor, enableComputeLoadMonitor_);
      };
      friend void from_json(const Darabonba::Json& j, MonitorSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableComputeLoadMonitor, enableComputeLoadMonitor_);
      };
      MonitorSpec() = default ;
      MonitorSpec(const MonitorSpec &) = default ;
      MonitorSpec(MonitorSpec &&) = default ;
      MonitorSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MonitorSpec() = default ;
      MonitorSpec& operator=(const MonitorSpec &) = default ;
      MonitorSpec& operator=(MonitorSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableComputeLoadMonitor_ == nullptr; };
      // enableComputeLoadMonitor Field Functions 
      bool hasEnableComputeLoadMonitor() const { return this->enableComputeLoadMonitor_ != nullptr;};
      void deleteEnableComputeLoadMonitor() { this->enableComputeLoadMonitor_ = nullptr;};
      inline bool getEnableComputeLoadMonitor() const { DARABONBA_PTR_GET_DEFAULT(enableComputeLoadMonitor_, false) };
      inline MonitorSpec& setEnableComputeLoadMonitor(bool enableComputeLoadMonitor) { DARABONBA_PTR_SET_VALUE(enableComputeLoadMonitor_, enableComputeLoadMonitor) };


    protected:
      // Indicates whether the monitoring component of compute nodes is enabled for the cluster. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> enableComputeLoadMonitor_ {};
    };

    class Manager : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Manager& obj) { 
        DARABONBA_PTR_TO_JSON(DNS, DNS_);
        DARABONBA_PTR_TO_JSON(DirectoryService, directoryService_);
        DARABONBA_PTR_TO_JSON(ManagerNode, managerNode_);
        DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      };
      friend void from_json(const Darabonba::Json& j, Manager& obj) { 
        DARABONBA_PTR_FROM_JSON(DNS, DNS_);
        DARABONBA_PTR_FROM_JSON(DirectoryService, directoryService_);
        DARABONBA_PTR_FROM_JSON(ManagerNode, managerNode_);
        DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      };
      Manager() = default ;
      Manager(const Manager &) = default ;
      Manager(Manager &&) = default ;
      Manager(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Manager() = default ;
      Manager& operator=(const Manager &) = default ;
      Manager& operator=(Manager &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scheduler : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scheduler& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Scheduler& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Scheduler() = default ;
        Scheduler(const Scheduler &) = default ;
        Scheduler(Scheduler &&) = default ;
        Scheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scheduler() = default ;
        Scheduler& operator=(const Scheduler &) = default ;
        Scheduler& operator=(Scheduler &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Scheduler& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Scheduler& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Scheduler& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The scheduler state. Valid values:
        // 
        // *   uninit: The scheduler is being installed.
        // *   initing: The scheduler is being initialized.
        // *   running: The scheduler is running.
        // *   exception: The scheduler has run into an exception.
        // *   releasing: The scheduler is being released.
        // *   stopped: The scheduler is stopped.
        // *   pending: The scheduler is waiting to be configured.
        shared_ptr<string> status_ {};
        // The scheduler type. Valid values:
        // 
        // *   SLURM
        // *   PBS
        // *   OPENGRIDSCHEDULER
        // *   LSF_PLUGIN
        // *   PBS_PLUGIN
        shared_ptr<string> type_ {};
        // The scheduler version.
        shared_ptr<string> version_ {};
      };

      class ManagerNode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagerNode& obj) { 
          DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
          DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(EnableHt, enableHt_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
        };
        friend void from_json(const Darabonba::Json& j, ManagerNode& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
          DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(EnableHt, enableHt_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
        };
        ManagerNode() = default ;
        ManagerNode(const ManagerNode &) = default ;
        ManagerNode(ManagerNode &&) = default ;
        ManagerNode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagerNode() = default ;
        ManagerNode& operator=(const ManagerNode &) = default ;
        ManagerNode& operator=(ManagerNode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SystemDisk : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(Size, size_);
          };
          friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
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
        && this->level_ == nullptr && this->size_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline SystemDisk& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
          inline SystemDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        protected:
          shared_ptr<string> category_ {};
          shared_ptr<string> level_ {};
          shared_ptr<int64_t> size_ {};
        };

        virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->duration_ == nullptr && this->enableHt_ == nullptr && this->expiredTime_ == nullptr && this->imageId_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr && this->systemDisk_ == nullptr; };
        // autoRenew Field Functions 
        bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
        void deleteAutoRenew() { this->autoRenew_ = nullptr;};
        inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
        inline ManagerNode& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


        // autoRenewPeriod Field Functions 
        bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
        void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
        inline int64_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0L) };
        inline ManagerNode& setAutoRenewPeriod(int64_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline ManagerNode& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // enableHt Field Functions 
        bool hasEnableHt() const { return this->enableHt_ != nullptr;};
        void deleteEnableHt() { this->enableHt_ = nullptr;};
        inline bool getEnableHt() const { DARABONBA_PTR_GET_DEFAULT(enableHt_, false) };
        inline ManagerNode& setEnableHt(bool enableHt) { DARABONBA_PTR_SET_VALUE(enableHt_, enableHt) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline ManagerNode& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline ManagerNode& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline ManagerNode& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ManagerNode& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ManagerNode& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
        inline ManagerNode& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline ManagerNode& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // spotPriceLimit Field Functions 
        bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
        void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
        inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
        inline ManagerNode& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline ManagerNode& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


        // systemDisk Field Functions 
        bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
        void deleteSystemDisk() { this->systemDisk_ = nullptr;};
        inline const ManagerNode::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, ManagerNode::SystemDisk) };
        inline ManagerNode::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, ManagerNode::SystemDisk) };
        inline ManagerNode& setSystemDisk(const ManagerNode::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
        inline ManagerNode& setSystemDisk(ManagerNode::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


      protected:
        shared_ptr<bool> autoRenew_ {};
        shared_ptr<int64_t> autoRenewPeriod_ {};
        shared_ptr<int64_t> duration_ {};
        shared_ptr<bool> enableHt_ {};
        // The expiration time of the management node.
        shared_ptr<string> expiredTime_ {};
        shared_ptr<string> imageId_ {};
        // The instance billing method of the management node. Valid values:
        // 
        // *   PostPaid: pay-as-you-go
        // *   PrePaid: subscription
        shared_ptr<string> instanceChargeType_ {};
        // The instance ID of the management node.
        shared_ptr<string> instanceId_ {};
        // The instance type of the management node.
        shared_ptr<string> instanceType_ {};
        shared_ptr<int64_t> period_ {};
        shared_ptr<string> periodUnit_ {};
        shared_ptr<float> spotPriceLimit_ {};
        shared_ptr<string> spotStrategy_ {};
        shared_ptr<ManagerNode::SystemDisk> systemDisk_ {};
      };

      class DirectoryService : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DirectoryService& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DirectoryService& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DirectoryService() = default ;
        DirectoryService(const DirectoryService &) = default ;
        DirectoryService(DirectoryService &&) = default ;
        DirectoryService(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DirectoryService() = default ;
        DirectoryService& operator=(const DirectoryService &) = default ;
        DirectoryService& operator=(DirectoryService &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DirectoryService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DirectoryService& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DirectoryService& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The state of the domain account service. Valid values:
        // 
        // *   uninit: The service is being installed.
        // *   initing: The service is being initialized.
        // *   running: The service is running.
        // *   exception: The service has run into an exception.
        // *   releasing: The service is being released.
        // *   stopped: The service is stopped.
        // *   pending: The service is waiting to be configured.
        shared_ptr<string> status_ {};
        // The type of the domain account.
        shared_ptr<string> type_ {};
        // The version of the domain account service.
        shared_ptr<string> version_ {};
      };

      class DNS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DNS& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DNS& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DNS() = default ;
        DNS(const DNS &) = default ;
        DNS(DNS &&) = default ;
        DNS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DNS() = default ;
        DNS& operator=(const DNS &) = default ;
        DNS& operator=(DNS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DNS& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DNS& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DNS& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The state of the domain name resolution service. Valid values:
        // 
        // *   uninit: The service is being installed.
        // *   initing: The service is being initialized.
        // *   running: The service is running.
        // *   exception: The service has run into an exception.
        // *   releasing: The service is being released.
        // *   stopped: The service is stopped.
        // *   pending: The service is waiting to be configured.
        shared_ptr<string> status_ {};
        // The resolution type.
        shared_ptr<string> type_ {};
        // The version of the resolution service.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->DNS_ == nullptr
        && this->directoryService_ == nullptr && this->managerNode_ == nullptr && this->scheduler_ == nullptr; };
      // DNS Field Functions 
      bool hasDNS() const { return this->DNS_ != nullptr;};
      void deleteDNS() { this->DNS_ = nullptr;};
      inline const Manager::DNS & getDNS() const { DARABONBA_PTR_GET_CONST(DNS_, Manager::DNS) };
      inline Manager::DNS getDNS() { DARABONBA_PTR_GET(DNS_, Manager::DNS) };
      inline Manager& setDNS(const Manager::DNS & dNS) { DARABONBA_PTR_SET_VALUE(DNS_, dNS) };
      inline Manager& setDNS(Manager::DNS && dNS) { DARABONBA_PTR_SET_RVALUE(DNS_, dNS) };


      // directoryService Field Functions 
      bool hasDirectoryService() const { return this->directoryService_ != nullptr;};
      void deleteDirectoryService() { this->directoryService_ = nullptr;};
      inline const Manager::DirectoryService & getDirectoryService() const { DARABONBA_PTR_GET_CONST(directoryService_, Manager::DirectoryService) };
      inline Manager::DirectoryService getDirectoryService() { DARABONBA_PTR_GET(directoryService_, Manager::DirectoryService) };
      inline Manager& setDirectoryService(const Manager::DirectoryService & directoryService) { DARABONBA_PTR_SET_VALUE(directoryService_, directoryService) };
      inline Manager& setDirectoryService(Manager::DirectoryService && directoryService) { DARABONBA_PTR_SET_RVALUE(directoryService_, directoryService) };


      // managerNode Field Functions 
      bool hasManagerNode() const { return this->managerNode_ != nullptr;};
      void deleteManagerNode() { this->managerNode_ = nullptr;};
      inline const Manager::ManagerNode & getManagerNode() const { DARABONBA_PTR_GET_CONST(managerNode_, Manager::ManagerNode) };
      inline Manager::ManagerNode getManagerNode() { DARABONBA_PTR_GET(managerNode_, Manager::ManagerNode) };
      inline Manager& setManagerNode(const Manager::ManagerNode & managerNode) { DARABONBA_PTR_SET_VALUE(managerNode_, managerNode) };
      inline Manager& setManagerNode(Manager::ManagerNode && managerNode) { DARABONBA_PTR_SET_RVALUE(managerNode_, managerNode) };


      // scheduler Field Functions 
      bool hasScheduler() const { return this->scheduler_ != nullptr;};
      void deleteScheduler() { this->scheduler_ = nullptr;};
      inline const Manager::Scheduler & getScheduler() const { DARABONBA_PTR_GET_CONST(scheduler_, Manager::Scheduler) };
      inline Manager::Scheduler getScheduler() { DARABONBA_PTR_GET(scheduler_, Manager::Scheduler) };
      inline Manager& setScheduler(const Manager::Scheduler & scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };
      inline Manager& setScheduler(Manager::Scheduler && scheduler) { DARABONBA_PTR_SET_RVALUE(scheduler_, scheduler) };


    protected:
      // The configurations of the domain name resolution service.
      shared_ptr<Manager::DNS> DNS_ {};
      // The information about the domain account service.
      shared_ptr<Manager::DirectoryService> directoryService_ {};
      // The configurations of the management node.
      shared_ptr<Manager::ManagerNode> managerNode_ {};
      // The information about the scheduler.
      shared_ptr<Manager::Scheduler> scheduler_ {};
    };

    class ClusterCustomConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterCustomConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Script, script_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterCustomConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Script, script_);
      };
      ClusterCustomConfiguration() = default ;
      ClusterCustomConfiguration(const ClusterCustomConfiguration &) = default ;
      ClusterCustomConfiguration(ClusterCustomConfiguration &&) = default ;
      ClusterCustomConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterCustomConfiguration() = default ;
      ClusterCustomConfiguration& operator=(const ClusterCustomConfiguration &) = default ;
      ClusterCustomConfiguration& operator=(ClusterCustomConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->args_ == nullptr
        && this->script_ == nullptr; };
      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
      inline ClusterCustomConfiguration& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


      // script Field Functions 
      bool hasScript() const { return this->script_ != nullptr;};
      void deleteScript() { this->script_ = nullptr;};
      inline string getScript() const { DARABONBA_PTR_GET_DEFAULT(script_, "") };
      inline ClusterCustomConfiguration& setScript(string script) { DARABONBA_PTR_SET_VALUE(script_, script) };


    protected:
      // The arguments that are used to run the script after the scrip is installed.
      shared_ptr<string> args_ {};
      // The URL that is used to download the post-processing script.
      shared_ptr<string> script_ {};
    };

    virtual bool empty() const override { return this->clientVersion_ == nullptr
        && this->clusterCategory_ == nullptr && this->clusterCreateTime_ == nullptr && this->clusterCustomConfiguration_ == nullptr && this->clusterId_ == nullptr && this->clusterMode_ == nullptr
        && this->clusterModifyTime_ == nullptr && this->clusterName_ == nullptr && this->clusterStatus_ == nullptr && this->clusterVSwitchId_ == nullptr && this->clusterVpcId_ == nullptr
        && this->deleteProtection_ == nullptr && this->ehpcVersion_ == nullptr && this->enableScaleIn_ == nullptr && this->enableScaleOut_ == nullptr && this->growInterval_ == nullptr
        && this->idleInterval_ == nullptr && this->manager_ == nullptr && this->maxCoreCount_ == nullptr && this->maxCount_ == nullptr && this->monitorSpec_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->schedulerSpec_ == nullptr && this->securityGroupId_ == nullptr; };
    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetClusterResponseBody& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string getClusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline GetClusterResponseBody& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // clusterCreateTime Field Functions 
    bool hasClusterCreateTime() const { return this->clusterCreateTime_ != nullptr;};
    void deleteClusterCreateTime() { this->clusterCreateTime_ = nullptr;};
    inline string getClusterCreateTime() const { DARABONBA_PTR_GET_DEFAULT(clusterCreateTime_, "") };
    inline GetClusterResponseBody& setClusterCreateTime(string clusterCreateTime) { DARABONBA_PTR_SET_VALUE(clusterCreateTime_, clusterCreateTime) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const GetClusterResponseBody::ClusterCustomConfiguration & getClusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, GetClusterResponseBody::ClusterCustomConfiguration) };
    inline GetClusterResponseBody::ClusterCustomConfiguration getClusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, GetClusterResponseBody::ClusterCustomConfiguration) };
    inline GetClusterResponseBody& setClusterCustomConfiguration(const GetClusterResponseBody::ClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline GetClusterResponseBody& setClusterCustomConfiguration(GetClusterResponseBody::ClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string getClusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline GetClusterResponseBody& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterModifyTime Field Functions 
    bool hasClusterModifyTime() const { return this->clusterModifyTime_ != nullptr;};
    void deleteClusterModifyTime() { this->clusterModifyTime_ = nullptr;};
    inline string getClusterModifyTime() const { DARABONBA_PTR_GET_DEFAULT(clusterModifyTime_, "") };
    inline GetClusterResponseBody& setClusterModifyTime(string clusterModifyTime) { DARABONBA_PTR_SET_VALUE(clusterModifyTime_, clusterModifyTime) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetClusterResponseBody& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline GetClusterResponseBody& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // clusterVSwitchId Field Functions 
    bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
    void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
    inline string getClusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
    inline GetClusterResponseBody& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


    // clusterVpcId Field Functions 
    bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
    void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
    inline string getClusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
    inline GetClusterResponseBody& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


    // deleteProtection Field Functions 
    bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
    void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
    inline string getDeleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
    inline GetClusterResponseBody& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


    // ehpcVersion Field Functions 
    bool hasEhpcVersion() const { return this->ehpcVersion_ != nullptr;};
    void deleteEhpcVersion() { this->ehpcVersion_ = nullptr;};
    inline string getEhpcVersion() const { DARABONBA_PTR_GET_DEFAULT(ehpcVersion_, "") };
    inline GetClusterResponseBody& setEhpcVersion(string ehpcVersion) { DARABONBA_PTR_SET_VALUE(ehpcVersion_, ehpcVersion) };


    // enableScaleIn Field Functions 
    bool hasEnableScaleIn() const { return this->enableScaleIn_ != nullptr;};
    void deleteEnableScaleIn() { this->enableScaleIn_ = nullptr;};
    inline bool getEnableScaleIn() const { DARABONBA_PTR_GET_DEFAULT(enableScaleIn_, false) };
    inline GetClusterResponseBody& setEnableScaleIn(bool enableScaleIn) { DARABONBA_PTR_SET_VALUE(enableScaleIn_, enableScaleIn) };


    // enableScaleOut Field Functions 
    bool hasEnableScaleOut() const { return this->enableScaleOut_ != nullptr;};
    void deleteEnableScaleOut() { this->enableScaleOut_ = nullptr;};
    inline bool getEnableScaleOut() const { DARABONBA_PTR_GET_DEFAULT(enableScaleOut_, false) };
    inline GetClusterResponseBody& setEnableScaleOut(bool enableScaleOut) { DARABONBA_PTR_SET_VALUE(enableScaleOut_, enableScaleOut) };


    // growInterval Field Functions 
    bool hasGrowInterval() const { return this->growInterval_ != nullptr;};
    void deleteGrowInterval() { this->growInterval_ = nullptr;};
    inline int32_t getGrowInterval() const { DARABONBA_PTR_GET_DEFAULT(growInterval_, 0) };
    inline GetClusterResponseBody& setGrowInterval(int32_t growInterval) { DARABONBA_PTR_SET_VALUE(growInterval_, growInterval) };


    // idleInterval Field Functions 
    bool hasIdleInterval() const { return this->idleInterval_ != nullptr;};
    void deleteIdleInterval() { this->idleInterval_ = nullptr;};
    inline int32_t getIdleInterval() const { DARABONBA_PTR_GET_DEFAULT(idleInterval_, 0) };
    inline GetClusterResponseBody& setIdleInterval(int32_t idleInterval) { DARABONBA_PTR_SET_VALUE(idleInterval_, idleInterval) };


    // manager Field Functions 
    bool hasManager() const { return this->manager_ != nullptr;};
    void deleteManager() { this->manager_ = nullptr;};
    inline const GetClusterResponseBody::Manager & getManager() const { DARABONBA_PTR_GET_CONST(manager_, GetClusterResponseBody::Manager) };
    inline GetClusterResponseBody::Manager getManager() { DARABONBA_PTR_GET(manager_, GetClusterResponseBody::Manager) };
    inline GetClusterResponseBody& setManager(const GetClusterResponseBody::Manager & manager) { DARABONBA_PTR_SET_VALUE(manager_, manager) };
    inline GetClusterResponseBody& setManager(GetClusterResponseBody::Manager && manager) { DARABONBA_PTR_SET_RVALUE(manager_, manager) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline string getMaxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, "") };
    inline GetClusterResponseBody& setMaxCoreCount(string maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline string getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, "") };
    inline GetClusterResponseBody& setMaxCount(string maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // monitorSpec Field Functions 
    bool hasMonitorSpec() const { return this->monitorSpec_ != nullptr;};
    void deleteMonitorSpec() { this->monitorSpec_ = nullptr;};
    inline const GetClusterResponseBody::MonitorSpec & getMonitorSpec() const { DARABONBA_PTR_GET_CONST(monitorSpec_, GetClusterResponseBody::MonitorSpec) };
    inline GetClusterResponseBody::MonitorSpec getMonitorSpec() { DARABONBA_PTR_GET(monitorSpec_, GetClusterResponseBody::MonitorSpec) };
    inline GetClusterResponseBody& setMonitorSpec(const GetClusterResponseBody::MonitorSpec & monitorSpec) { DARABONBA_PTR_SET_VALUE(monitorSpec_, monitorSpec) };
    inline GetClusterResponseBody& setMonitorSpec(GetClusterResponseBody::MonitorSpec && monitorSpec) { DARABONBA_PTR_SET_RVALUE(monitorSpec_, monitorSpec) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetClusterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // schedulerSpec Field Functions 
    bool hasSchedulerSpec() const { return this->schedulerSpec_ != nullptr;};
    void deleteSchedulerSpec() { this->schedulerSpec_ = nullptr;};
    inline const GetClusterResponseBody::SchedulerSpec & getSchedulerSpec() const { DARABONBA_PTR_GET_CONST(schedulerSpec_, GetClusterResponseBody::SchedulerSpec) };
    inline GetClusterResponseBody::SchedulerSpec getSchedulerSpec() { DARABONBA_PTR_GET(schedulerSpec_, GetClusterResponseBody::SchedulerSpec) };
    inline GetClusterResponseBody& setSchedulerSpec(const GetClusterResponseBody::SchedulerSpec & schedulerSpec) { DARABONBA_PTR_SET_VALUE(schedulerSpec_, schedulerSpec) };
    inline GetClusterResponseBody& setSchedulerSpec(GetClusterResponseBody::SchedulerSpec && schedulerSpec) { DARABONBA_PTR_SET_RVALUE(schedulerSpec_, schedulerSpec) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetClusterResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The E-HPC Util version.
    shared_ptr<string> clientVersion_ {};
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    shared_ptr<string> clusterCategory_ {};
    // The time when the cluster was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    shared_ptr<string> clusterCreateTime_ {};
    // The post-processing script of the cluster.
    shared_ptr<GetClusterResponseBody::ClusterCustomConfiguration> clusterCustomConfiguration_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The deployment type of the cluster. Valid values:
    // 
    // *   Integrated: The cluster is deployed on a public cloud.
    // *   Hybrid: The cluster is deployed on a hybrid cloud.
    // *   Custom: The cluster is a custom cluster.
    shared_ptr<string> clusterMode_ {};
    // The time when the cluster was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mmZ format. The time is displayed in UTC. For more information, see [ISO 8601](https://help.aliyun.com/document_detail/25696.html).
    shared_ptr<string> clusterModifyTime_ {};
    // The cluster name.
    shared_ptr<string> clusterName_ {};
    // The cluster state. Valid values:
    // 
    // *   uninit: The cluster is being installed.
    // *   creating: The cluster is being created.
    // *   initing: The cluster is being initialized.
    // *   running: The cluster is running.
    // *   exception: The cluster has run into an exception.
    // *   raleasing: The cluster is being released.
    // *   stopping: The cluster is being stopped.
    // *   stopped: The cluster is stopped.
    // *   pending: The cluster is waiting to be configured.
    shared_ptr<string> clusterStatus_ {};
    // The ID of the vSwitch used by the cluster.
    shared_ptr<string> clusterVSwitchId_ {};
    // The ID of the virtual private cloud (VPC) used by the cluster.
    shared_ptr<string> clusterVpcId_ {};
    // Indicates whether deletion protection is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> deleteProtection_ {};
    // The E-HPC version.
    shared_ptr<string> ehpcVersion_ {};
    // Indicates whether automatic scale-in is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableScaleIn_ {};
    // Indicates whether automatic scale-out is enabled for the cluster. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableScaleOut_ {};
    // The interval at which the cluster is automatically scaled out.
    shared_ptr<int32_t> growInterval_ {};
    // The idle duration of the compute nodes allowed by the cluster.
    shared_ptr<int32_t> idleInterval_ {};
    // The management node configurations.
    shared_ptr<GetClusterResponseBody::Manager> manager_ {};
    // The maximum total number of vCPUs that can be used by all compute nodes managed by the cluster.
    shared_ptr<string> maxCoreCount_ {};
    // The maximum number of compute nodes that the cluster can manage.
    shared_ptr<string> maxCount_ {};
    // The monitoring details of the cluster.
    shared_ptr<GetClusterResponseBody::MonitorSpec> monitorSpec_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The scheduler specifications of the cluster.
    shared_ptr<GetClusterResponseBody::SchedulerSpec> schedulerSpec_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
