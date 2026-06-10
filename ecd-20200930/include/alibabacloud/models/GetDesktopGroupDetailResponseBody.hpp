// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetDesktopGroupDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDesktopGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDesktopGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDesktopGroupDetailResponseBody() = default ;
    GetDesktopGroupDetailResponseBody(const GetDesktopGroupDetailResponseBody &) = default ;
    GetDesktopGroupDetailResponseBody(GetDesktopGroupDetailResponseBody &&) = default ;
    GetDesktopGroupDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDesktopGroupDetailResponseBody() = default ;
    GetDesktopGroupDetailResponseBody& operator=(const GetDesktopGroupDetailResponseBody &) = default ;
    GetDesktopGroupDetailResponseBody& operator=(GetDesktopGroupDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Desktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Desktops& obj) { 
        DARABONBA_PTR_TO_JSON(AllowAutoSetup, allowAutoSetup_);
        DARABONBA_PTR_TO_JSON(AllowBufferCount, allowBufferCount_);
        DARABONBA_PTR_TO_JSON(BindAmount, bindAmount_);
        DARABONBA_PTR_TO_JSON(BuyDesktopsCount, buyDesktopsCount_);
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(EnvId, envId_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ExpiredTimes, expiredTimes_);
        DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
        DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
        DARABONBA_PTR_TO_JSON(MaxDesktopsCount, maxDesktopsCount_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(MinDesktopsCount, minDesktopsCount_);
        DARABONBA_PTR_TO_JSON(NasFileSystemID, nasFileSystemID_);
        DARABONBA_PTR_TO_JSON(NasFileSystemName, nasFileSystemName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(OwnBundleId, ownBundleId_);
        DARABONBA_PTR_TO_JSON(OwnBundleName, ownBundleName_);
        DARABONBA_PTR_TO_JSON(OwnType, ownType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(PolicyGroupIds, policyGroupIds_);
        DARABONBA_PTR_TO_JSON(PolicyGroupName, policyGroupName_);
        DARABONBA_PTR_TO_JSON(PolicyGroupNames, policyGroupNames_);
        DARABONBA_PTR_TO_JSON(ProfileFollowSwitch, profileFollowSwitch_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
        DARABONBA_PTR_TO_JSON(ResType, resType_);
        DARABONBA_PTR_TO_JSON(ResetType, resetType_);
        DARABONBA_PTR_TO_JSON(ScaleTimerInfos, scaleTimerInfos_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(TimerInfos, timerInfos_);
        DARABONBA_PTR_TO_JSON(TimingStrategyInfo, timingStrategyInfo_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Desktops& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowAutoSetup, allowAutoSetup_);
        DARABONBA_PTR_FROM_JSON(AllowBufferCount, allowBufferCount_);
        DARABONBA_PTR_FROM_JSON(BindAmount, bindAmount_);
        DARABONBA_PTR_FROM_JSON(BuyDesktopsCount, buyDesktopsCount_);
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(ConnectDuration, connectDuration_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DirectoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(EnvId, envId_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ExpiredTimes, expiredTimes_);
        DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
        DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
        DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
        DARABONBA_PTR_FROM_JSON(MaxDesktopsCount, maxDesktopsCount_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(MinDesktopsCount, minDesktopsCount_);
        DARABONBA_PTR_FROM_JSON(NasFileSystemID, nasFileSystemID_);
        DARABONBA_PTR_FROM_JSON(NasFileSystemName, nasFileSystemName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(OwnBundleId, ownBundleId_);
        DARABONBA_PTR_FROM_JSON(OwnBundleName, ownBundleName_);
        DARABONBA_PTR_FROM_JSON(OwnType, ownType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupIds, policyGroupIds_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupName, policyGroupName_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupNames, policyGroupNames_);
        DARABONBA_PTR_FROM_JSON(ProfileFollowSwitch, profileFollowSwitch_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
        DARABONBA_PTR_FROM_JSON(ResType, resType_);
        DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
        DARABONBA_PTR_FROM_JSON(ScaleTimerInfos, scaleTimerInfos_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(TimerInfos, timerInfos_);
        DARABONBA_PTR_FROM_JSON(TimingStrategyInfo, timingStrategyInfo_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Desktops() = default ;
      Desktops(const Desktops &) = default ;
      Desktops(Desktops &&) = default ;
      Desktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Desktops() = default ;
      Desktops& operator=(const Desktops &) = default ;
      Desktops& operator=(Desktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TimerInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimerInfos& obj) { 
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(Forced, forced_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimerType, timerType_);
        };
        friend void from_json(const Darabonba::Json& j, TimerInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(Forced, forced_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
        };
        TimerInfos() = default ;
        TimerInfos(const TimerInfos &) = default ;
        TimerInfos(TimerInfos &&) = default ;
        TimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimerInfos() = default ;
        TimerInfos& operator=(const TimerInfos &) = default ;
        TimerInfos& operator=(TimerInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->forced_ == nullptr && this->status_ == nullptr && this->timerType_ == nullptr; };
        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline TimerInfos& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // forced Field Functions 
        bool hasForced() const { return this->forced_ != nullptr;};
        void deleteForced() { this->forced_ = nullptr;};
        inline bool getForced() const { DARABONBA_PTR_GET_DEFAULT(forced_, false) };
        inline TimerInfos& setForced(bool forced) { DARABONBA_PTR_SET_VALUE(forced_, forced) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline TimerInfos& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timerType Field Functions 
        bool hasTimerType() const { return this->timerType_ != nullptr;};
        void deleteTimerType() { this->timerType_ = nullptr;};
        inline int32_t getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, 0) };
        inline TimerInfos& setTimerType(int32_t timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


      protected:
        // Cron expression.
        shared_ptr<string> cronExpression_ {};
        // Whether to force execute this scheduled task.
        shared_ptr<bool> forced_ {};
        // Status.
        shared_ptr<int32_t> status_ {};
        // Scheduled task type.
        shared_ptr<int32_t> timerType_ {};
      };

      class ScaleTimerInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScaleTimerInfos& obj) { 
          DARABONBA_PTR_TO_JSON(BuyResAmount, buyResAmount_);
          DARABONBA_PTR_TO_JSON(Cron, cron_);
          DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
          DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
          DARABONBA_PTR_TO_JSON(MaxResAmount, maxResAmount_);
          DARABONBA_PTR_TO_JSON(MinResAmount, minResAmount_);
          DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ScaleTimerInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(BuyResAmount, buyResAmount_);
          DARABONBA_PTR_FROM_JSON(Cron, cron_);
          DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
          DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
          DARABONBA_PTR_FROM_JSON(MaxResAmount, maxResAmount_);
          DARABONBA_PTR_FROM_JSON(MinResAmount, minResAmount_);
          DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ScaleTimerInfos() = default ;
        ScaleTimerInfos(const ScaleTimerInfos &) = default ;
        ScaleTimerInfos(ScaleTimerInfos &&) = default ;
        ScaleTimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScaleTimerInfos() = default ;
        ScaleTimerInfos& operator=(const ScaleTimerInfos &) = default ;
        ScaleTimerInfos& operator=(ScaleTimerInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->buyResAmount_ == nullptr
        && this->cron_ == nullptr && this->keepDuration_ == nullptr && this->loadPolicy_ == nullptr && this->maxResAmount_ == nullptr && this->minResAmount_ == nullptr
        && this->ratioThreshold_ == nullptr && this->type_ == nullptr; };
        // buyResAmount Field Functions 
        bool hasBuyResAmount() const { return this->buyResAmount_ != nullptr;};
        void deleteBuyResAmount() { this->buyResAmount_ = nullptr;};
        inline int32_t getBuyResAmount() const { DARABONBA_PTR_GET_DEFAULT(buyResAmount_, 0) };
        inline ScaleTimerInfos& setBuyResAmount(int32_t buyResAmount) { DARABONBA_PTR_SET_VALUE(buyResAmount_, buyResAmount) };


        // cron Field Functions 
        bool hasCron() const { return this->cron_ != nullptr;};
        void deleteCron() { this->cron_ = nullptr;};
        inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
        inline ScaleTimerInfos& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


        // keepDuration Field Functions 
        bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
        void deleteKeepDuration() { this->keepDuration_ = nullptr;};
        inline int64_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
        inline ScaleTimerInfos& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


        // loadPolicy Field Functions 
        bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
        void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
        inline int32_t getLoadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0) };
        inline ScaleTimerInfos& setLoadPolicy(int32_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


        // maxResAmount Field Functions 
        bool hasMaxResAmount() const { return this->maxResAmount_ != nullptr;};
        void deleteMaxResAmount() { this->maxResAmount_ = nullptr;};
        inline int32_t getMaxResAmount() const { DARABONBA_PTR_GET_DEFAULT(maxResAmount_, 0) };
        inline ScaleTimerInfos& setMaxResAmount(int32_t maxResAmount) { DARABONBA_PTR_SET_VALUE(maxResAmount_, maxResAmount) };


        // minResAmount Field Functions 
        bool hasMinResAmount() const { return this->minResAmount_ != nullptr;};
        void deleteMinResAmount() { this->minResAmount_ = nullptr;};
        inline int32_t getMinResAmount() const { DARABONBA_PTR_GET_DEFAULT(minResAmount_, 0) };
        inline ScaleTimerInfos& setMinResAmount(int32_t minResAmount) { DARABONBA_PTR_SET_VALUE(minResAmount_, minResAmount) };


        // ratioThreshold Field Functions 
        bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
        void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
        inline float getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
        inline ScaleTimerInfos& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ScaleTimerInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Scaling parameter: Number of cloud computers to buy. Valid values: 0 to 200.
        shared_ptr<int32_t> buyResAmount_ {};
        // Cron expression for the scheduled scaling task.
        shared_ptr<string> cron_ {};
        // Time to keep a disconnected session active. Unit: milliseconds. Valid range: 180000 (3 minutes) to 345600000 (4 days). A value of 0 means keep indefinitely.
        // 
        // If a session disconnects due to user action or other reasons, the timer starts at disconnection. If no reconnection occurs within this duration, the session logs off and unsaved data is destroyed. If the user reconnects successfully within this duration, they resume the original session and access all previously saved data.
        shared_ptr<int64_t> keepDuration_ {};
        // Traffic steering policy for multi-session, multi-cloud computer deployments.
        shared_ptr<int32_t> loadPolicy_ {};
        // Scaling parameter: Maximum number of cloud computers. Valid values: 0 to 200.
        shared_ptr<int32_t> maxResAmount_ {};
        // Scaling parameter: Minimum number of cloud computers. Valid values: 0 to 200.
        shared_ptr<int32_t> minResAmount_ {};
        // Session occupancy threshold used to trigger auto scaling for multi-session, multi-cloud computer deployments. Session occupancy is calculated as:
        // 
        // `Session occupancy = (Bound sessions / (Total cloud computers × Max sessions per cloud computer)) × 100%`
        // 
        // When occupancy reaches this threshold, new cloud computers are created. When occupancy falls below this threshold, excess cloud computers are deleted.
        shared_ptr<float> ratioThreshold_ {};
        // Scheduled scaling task type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->allowAutoSetup_ == nullptr
        && this->allowBufferCount_ == nullptr && this->bindAmount_ == nullptr && this->buyDesktopsCount_ == nullptr && this->comments_ == nullptr && this->connectDuration_ == nullptr
        && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->creator_ == nullptr && this->dataDiskCategory_ == nullptr && this->dataDiskSize_ == nullptr
        && this->desktopGroupId_ == nullptr && this->desktopGroupName_ == nullptr && this->directoryId_ == nullptr && this->directoryType_ == nullptr && this->envId_ == nullptr
        && this->envType_ == nullptr && this->expiredTime_ == nullptr && this->expiredTimes_ == nullptr && this->gpuCount_ == nullptr && this->gpuSpec_ == nullptr
        && this->idleDisconnectDuration_ == nullptr && this->imageId_ == nullptr && this->keepDuration_ == nullptr && this->loadPolicy_ == nullptr && this->maxDesktopsCount_ == nullptr
        && this->memory_ == nullptr && this->minDesktopsCount_ == nullptr && this->nasFileSystemID_ == nullptr && this->nasFileSystemName_ == nullptr && this->officeSiteId_ == nullptr
        && this->officeSiteName_ == nullptr && this->officeSiteType_ == nullptr && this->osType_ == nullptr && this->ownBundleId_ == nullptr && this->ownBundleName_ == nullptr
        && this->ownType_ == nullptr && this->payType_ == nullptr && this->policyGroupId_ == nullptr && this->policyGroupIds_ == nullptr && this->policyGroupName_ == nullptr
        && this->policyGroupNames_ == nullptr && this->profileFollowSwitch_ == nullptr && this->protocolType_ == nullptr && this->ratioThreshold_ == nullptr && this->resType_ == nullptr
        && this->resetType_ == nullptr && this->scaleTimerInfos_ == nullptr && this->status_ == nullptr && this->stopDuration_ == nullptr && this->systemDiskCategory_ == nullptr
        && this->systemDiskSize_ == nullptr && this->timerInfos_ == nullptr && this->timingStrategyInfo_ == nullptr && this->version_ == nullptr; };
      // allowAutoSetup Field Functions 
      bool hasAllowAutoSetup() const { return this->allowAutoSetup_ != nullptr;};
      void deleteAllowAutoSetup() { this->allowAutoSetup_ = nullptr;};
      inline int32_t getAllowAutoSetup() const { DARABONBA_PTR_GET_DEFAULT(allowAutoSetup_, 0) };
      inline Desktops& setAllowAutoSetup(int32_t allowAutoSetup) { DARABONBA_PTR_SET_VALUE(allowAutoSetup_, allowAutoSetup) };


      // allowBufferCount Field Functions 
      bool hasAllowBufferCount() const { return this->allowBufferCount_ != nullptr;};
      void deleteAllowBufferCount() { this->allowBufferCount_ = nullptr;};
      inline int32_t getAllowBufferCount() const { DARABONBA_PTR_GET_DEFAULT(allowBufferCount_, 0) };
      inline Desktops& setAllowBufferCount(int32_t allowBufferCount) { DARABONBA_PTR_SET_VALUE(allowBufferCount_, allowBufferCount) };


      // bindAmount Field Functions 
      bool hasBindAmount() const { return this->bindAmount_ != nullptr;};
      void deleteBindAmount() { this->bindAmount_ = nullptr;};
      inline int32_t getBindAmount() const { DARABONBA_PTR_GET_DEFAULT(bindAmount_, 0) };
      inline Desktops& setBindAmount(int32_t bindAmount) { DARABONBA_PTR_SET_VALUE(bindAmount_, bindAmount) };


      // buyDesktopsCount Field Functions 
      bool hasBuyDesktopsCount() const { return this->buyDesktopsCount_ != nullptr;};
      void deleteBuyDesktopsCount() { this->buyDesktopsCount_ = nullptr;};
      inline int32_t getBuyDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(buyDesktopsCount_, 0) };
      inline Desktops& setBuyDesktopsCount(int32_t buyDesktopsCount) { DARABONBA_PTR_SET_VALUE(buyDesktopsCount_, buyDesktopsCount) };


      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline Desktops& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // connectDuration Field Functions 
      bool hasConnectDuration() const { return this->connectDuration_ != nullptr;};
      void deleteConnectDuration() { this->connectDuration_ = nullptr;};
      inline int64_t getConnectDuration() const { DARABONBA_PTR_GET_DEFAULT(connectDuration_, 0L) };
      inline Desktops& setConnectDuration(int64_t connectDuration) { DARABONBA_PTR_SET_VALUE(connectDuration_, connectDuration) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline Desktops& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Desktops& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Desktops& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // dataDiskCategory Field Functions 
      bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
      void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
      inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
      inline Desktops& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline string getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, "") };
      inline Desktops& setDataDiskSize(string dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Desktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopGroupName Field Functions 
      bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
      void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
      inline string getDesktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
      inline Desktops& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Desktops& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Desktops& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // envId Field Functions 
      bool hasEnvId() const { return this->envId_ != nullptr;};
      void deleteEnvId() { this->envId_ = nullptr;};
      inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
      inline Desktops& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Desktops& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Desktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // expiredTimes Field Functions 
      bool hasExpiredTimes() const { return this->expiredTimes_ != nullptr;};
      void deleteExpiredTimes() { this->expiredTimes_ = nullptr;};
      inline const vector<string> & getExpiredTimes() const { DARABONBA_PTR_GET_CONST(expiredTimes_, vector<string>) };
      inline vector<string> getExpiredTimes() { DARABONBA_PTR_GET(expiredTimes_, vector<string>) };
      inline Desktops& setExpiredTimes(const vector<string> & expiredTimes) { DARABONBA_PTR_SET_VALUE(expiredTimes_, expiredTimes) };
      inline Desktops& setExpiredTimes(vector<string> && expiredTimes) { DARABONBA_PTR_SET_RVALUE(expiredTimes_, expiredTimes) };


      // gpuCount Field Functions 
      bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
      void deleteGpuCount() { this->gpuCount_ = nullptr;};
      inline float getGpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
      inline Desktops& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


      // gpuSpec Field Functions 
      bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
      void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
      inline string getGpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
      inline Desktops& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


      // idleDisconnectDuration Field Functions 
      bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
      void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
      inline int64_t getIdleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, 0L) };
      inline Desktops& setIdleDisconnectDuration(int64_t idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Desktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // keepDuration Field Functions 
      bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
      void deleteKeepDuration() { this->keepDuration_ = nullptr;};
      inline int64_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
      inline Desktops& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


      // loadPolicy Field Functions 
      bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
      void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
      inline int32_t getLoadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0) };
      inline Desktops& setLoadPolicy(int32_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


      // maxDesktopsCount Field Functions 
      bool hasMaxDesktopsCount() const { return this->maxDesktopsCount_ != nullptr;};
      void deleteMaxDesktopsCount() { this->maxDesktopsCount_ = nullptr;};
      inline int32_t getMaxDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopsCount_, 0) };
      inline Desktops& setMaxDesktopsCount(int32_t maxDesktopsCount) { DARABONBA_PTR_SET_VALUE(maxDesktopsCount_, maxDesktopsCount) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Desktops& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // minDesktopsCount Field Functions 
      bool hasMinDesktopsCount() const { return this->minDesktopsCount_ != nullptr;};
      void deleteMinDesktopsCount() { this->minDesktopsCount_ = nullptr;};
      inline int32_t getMinDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(minDesktopsCount_, 0) };
      inline Desktops& setMinDesktopsCount(int32_t minDesktopsCount) { DARABONBA_PTR_SET_VALUE(minDesktopsCount_, minDesktopsCount) };


      // nasFileSystemID Field Functions 
      bool hasNasFileSystemID() const { return this->nasFileSystemID_ != nullptr;};
      void deleteNasFileSystemID() { this->nasFileSystemID_ = nullptr;};
      inline string getNasFileSystemID() const { DARABONBA_PTR_GET_DEFAULT(nasFileSystemID_, "") };
      inline Desktops& setNasFileSystemID(string nasFileSystemID) { DARABONBA_PTR_SET_VALUE(nasFileSystemID_, nasFileSystemID) };


      // nasFileSystemName Field Functions 
      bool hasNasFileSystemName() const { return this->nasFileSystemName_ != nullptr;};
      void deleteNasFileSystemName() { this->nasFileSystemName_ = nullptr;};
      inline string getNasFileSystemName() const { DARABONBA_PTR_GET_DEFAULT(nasFileSystemName_, "") };
      inline Desktops& setNasFileSystemName(string nasFileSystemName) { DARABONBA_PTR_SET_VALUE(nasFileSystemName_, nasFileSystemName) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Desktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Desktops& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline Desktops& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Desktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // ownBundleId Field Functions 
      bool hasOwnBundleId() const { return this->ownBundleId_ != nullptr;};
      void deleteOwnBundleId() { this->ownBundleId_ = nullptr;};
      inline string getOwnBundleId() const { DARABONBA_PTR_GET_DEFAULT(ownBundleId_, "") };
      inline Desktops& setOwnBundleId(string ownBundleId) { DARABONBA_PTR_SET_VALUE(ownBundleId_, ownBundleId) };


      // ownBundleName Field Functions 
      bool hasOwnBundleName() const { return this->ownBundleName_ != nullptr;};
      void deleteOwnBundleName() { this->ownBundleName_ = nullptr;};
      inline string getOwnBundleName() const { DARABONBA_PTR_GET_DEFAULT(ownBundleName_, "") };
      inline Desktops& setOwnBundleName(string ownBundleName) { DARABONBA_PTR_SET_VALUE(ownBundleName_, ownBundleName) };


      // ownType Field Functions 
      bool hasOwnType() const { return this->ownType_ != nullptr;};
      void deleteOwnType() { this->ownType_ = nullptr;};
      inline int32_t getOwnType() const { DARABONBA_PTR_GET_DEFAULT(ownType_, 0) };
      inline Desktops& setOwnType(int32_t ownType) { DARABONBA_PTR_SET_VALUE(ownType_, ownType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Desktops& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline Desktops& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // policyGroupIds Field Functions 
      bool hasPolicyGroupIds() const { return this->policyGroupIds_ != nullptr;};
      void deletePolicyGroupIds() { this->policyGroupIds_ = nullptr;};
      inline const vector<string> & getPolicyGroupIds() const { DARABONBA_PTR_GET_CONST(policyGroupIds_, vector<string>) };
      inline vector<string> getPolicyGroupIds() { DARABONBA_PTR_GET(policyGroupIds_, vector<string>) };
      inline Desktops& setPolicyGroupIds(const vector<string> & policyGroupIds) { DARABONBA_PTR_SET_VALUE(policyGroupIds_, policyGroupIds) };
      inline Desktops& setPolicyGroupIds(vector<string> && policyGroupIds) { DARABONBA_PTR_SET_RVALUE(policyGroupIds_, policyGroupIds) };


      // policyGroupName Field Functions 
      bool hasPolicyGroupName() const { return this->policyGroupName_ != nullptr;};
      void deletePolicyGroupName() { this->policyGroupName_ = nullptr;};
      inline string getPolicyGroupName() const { DARABONBA_PTR_GET_DEFAULT(policyGroupName_, "") };
      inline Desktops& setPolicyGroupName(string policyGroupName) { DARABONBA_PTR_SET_VALUE(policyGroupName_, policyGroupName) };


      // policyGroupNames Field Functions 
      bool hasPolicyGroupNames() const { return this->policyGroupNames_ != nullptr;};
      void deletePolicyGroupNames() { this->policyGroupNames_ = nullptr;};
      inline const vector<string> & getPolicyGroupNames() const { DARABONBA_PTR_GET_CONST(policyGroupNames_, vector<string>) };
      inline vector<string> getPolicyGroupNames() { DARABONBA_PTR_GET(policyGroupNames_, vector<string>) };
      inline Desktops& setPolicyGroupNames(const vector<string> & policyGroupNames) { DARABONBA_PTR_SET_VALUE(policyGroupNames_, policyGroupNames) };
      inline Desktops& setPolicyGroupNames(vector<string> && policyGroupNames) { DARABONBA_PTR_SET_RVALUE(policyGroupNames_, policyGroupNames) };


      // profileFollowSwitch Field Functions 
      bool hasProfileFollowSwitch() const { return this->profileFollowSwitch_ != nullptr;};
      void deleteProfileFollowSwitch() { this->profileFollowSwitch_ = nullptr;};
      inline bool getProfileFollowSwitch() const { DARABONBA_PTR_GET_DEFAULT(profileFollowSwitch_, false) };
      inline Desktops& setProfileFollowSwitch(bool profileFollowSwitch) { DARABONBA_PTR_SET_VALUE(profileFollowSwitch_, profileFollowSwitch) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Desktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // ratioThreshold Field Functions 
      bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
      void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
      inline float getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
      inline Desktops& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


      // resType Field Functions 
      bool hasResType() const { return this->resType_ != nullptr;};
      void deleteResType() { this->resType_ = nullptr;};
      inline int32_t getResType() const { DARABONBA_PTR_GET_DEFAULT(resType_, 0) };
      inline Desktops& setResType(int32_t resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


      // resetType Field Functions 
      bool hasResetType() const { return this->resetType_ != nullptr;};
      void deleteResetType() { this->resetType_ = nullptr;};
      inline int32_t getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, 0) };
      inline Desktops& setResetType(int32_t resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


      // scaleTimerInfos Field Functions 
      bool hasScaleTimerInfos() const { return this->scaleTimerInfos_ != nullptr;};
      void deleteScaleTimerInfos() { this->scaleTimerInfos_ = nullptr;};
      inline const vector<Desktops::ScaleTimerInfos> & getScaleTimerInfos() const { DARABONBA_PTR_GET_CONST(scaleTimerInfos_, vector<Desktops::ScaleTimerInfos>) };
      inline vector<Desktops::ScaleTimerInfos> getScaleTimerInfos() { DARABONBA_PTR_GET(scaleTimerInfos_, vector<Desktops::ScaleTimerInfos>) };
      inline Desktops& setScaleTimerInfos(const vector<Desktops::ScaleTimerInfos> & scaleTimerInfos) { DARABONBA_PTR_SET_VALUE(scaleTimerInfos_, scaleTimerInfos) };
      inline Desktops& setScaleTimerInfos(vector<Desktops::ScaleTimerInfos> && scaleTimerInfos) { DARABONBA_PTR_SET_RVALUE(scaleTimerInfos_, scaleTimerInfos) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Desktops& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopDuration Field Functions 
      bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
      void deleteStopDuration() { this->stopDuration_ = nullptr;};
      inline int64_t getStopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
      inline Desktops& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline Desktops& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Desktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // timerInfos Field Functions 
      bool hasTimerInfos() const { return this->timerInfos_ != nullptr;};
      void deleteTimerInfos() { this->timerInfos_ = nullptr;};
      inline const vector<Desktops::TimerInfos> & getTimerInfos() const { DARABONBA_PTR_GET_CONST(timerInfos_, vector<Desktops::TimerInfos>) };
      inline vector<Desktops::TimerInfos> getTimerInfos() { DARABONBA_PTR_GET(timerInfos_, vector<Desktops::TimerInfos>) };
      inline Desktops& setTimerInfos(const vector<Desktops::TimerInfos> & timerInfos) { DARABONBA_PTR_SET_VALUE(timerInfos_, timerInfos) };
      inline Desktops& setTimerInfos(vector<Desktops::TimerInfos> && timerInfos) { DARABONBA_PTR_SET_RVALUE(timerInfos_, timerInfos) };


      // timingStrategyInfo Field Functions 
      bool hasTimingStrategyInfo() const { return this->timingStrategyInfo_ != nullptr;};
      void deleteTimingStrategyInfo() { this->timingStrategyInfo_ = nullptr;};
      inline string getTimingStrategyInfo() const { DARABONBA_PTR_GET_DEFAULT(timingStrategyInfo_, "") };
      inline Desktops& setTimingStrategyInfo(string timingStrategyInfo) { DARABONBA_PTR_SET_VALUE(timingStrategyInfo_, timingStrategyInfo) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Desktops& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Whether to allow automatic creation of subscription cloud computers.
      shared_ptr<int32_t> allowAutoSetup_ {};
      // Number of pre-started, idle cloud computers reserved for immediate connection. Applies only to pay-as-you-go cloud computers. Valid values:
      // 
      // - 0: No reservation
      // 
      // - N: Reserve N cloud computer(s) (1 ≤ N ≤ 100)
      shared_ptr<int32_t> allowBufferCount_ {};
      // Maximum concurrent sessions per cloud computer in multi-session, multi-cloud computer deployments.
      shared_ptr<int32_t> bindAmount_ {};
      // Initial purchase count for subscription cloud computers. Valid values: 0 to 200.
      shared_ptr<int32_t> buyDesktopsCount_ {};
      // Remarks.
      shared_ptr<string> comments_ {};
      // Maximum time a session remains connected. The session disconnects automatically when this duration is reached. Unit: milliseconds.
      shared_ptr<int64_t> connectDuration_ {};
      // vCPU count.
      shared_ptr<int32_t> cpu_ {};
      // Creation time.
      shared_ptr<string> creationTime_ {};
      // Alibaba Cloud account ID of the creator.
      shared_ptr<string> creator_ {};
      // User disk type.
      shared_ptr<string> dataDiskCategory_ {};
      // User disk capacity in GiB.
      shared_ptr<string> dataDiskSize_ {};
      // Cloud computer share ID.
      shared_ptr<string> desktopGroupId_ {};
      // The name of the cloud computer share that you want to query.
      shared_ptr<string> desktopGroupName_ {};
      // Directory ID (office network ID).
      shared_ptr<string> directoryId_ {};
      // Directory type.
      shared_ptr<string> directoryType_ {};
      shared_ptr<string> envId_ {};
      shared_ptr<string> envType_ {};
      // Expiration time for subscription cloud computers.
      shared_ptr<string> expiredTime_ {};
      shared_ptr<vector<string>> expiredTimes_ {};
      // Number of GPU cores.
      shared_ptr<float> gpuCount_ {};
      // GPU specification.
      shared_ptr<string> gpuSpec_ {};
      // Time after which an idle session disconnects. If no keyboard or mouse activity occurs during this period, the session disconnects. Unit: milliseconds.
      shared_ptr<int64_t> idleDisconnectDuration_ {};
      // Image ID.
      shared_ptr<string> imageId_ {};
      // Time to keep a disconnected session active. Unit: milliseconds. Valid range: 180000 (3 minutes) to 345600000 (4 days). A value of 0 means keep indefinitely.
      // 
      // If a session disconnects due to user action or other reasons, the timer starts at disconnection. If no reconnection occurs within this duration, the session logs off and unsaved data is destroyed. If the user reconnects successfully within this duration, they resume the original session and access all previously saved data.
      shared_ptr<int64_t> keepDuration_ {};
      // Traffic steering policy for multi-session, multi-cloud computer deployments.
      shared_ptr<int32_t> loadPolicy_ {};
      // - For pay-as-you-go cloud computers, this is the maximum number of cloud computers that can be created.
      // 
      // - For subscription cloud computers, this is the sum of the initial purchase count (`BuyDesktopsCount`) and the number of cloud computers allowed for automatic creation.
      shared_ptr<int32_t> maxDesktopsCount_ {};
      // Memory size in MiB.
      shared_ptr<int64_t> memory_ {};
      // - For pay-as-you-go cloud computers, this is the minimum number of cloud computers to create.
      // 
      // - For subscription cloud computers, this equals `BuyDesktopsCount`, the initial purchase count.
      shared_ptr<int32_t> minDesktopsCount_ {};
      // NAS file system ID used for user profile roaming.
      shared_ptr<string> nasFileSystemID_ {};
      // NAS file system name used for user profile roaming.
      shared_ptr<string> nasFileSystemName_ {};
      // Office network ID.
      shared_ptr<string> officeSiteId_ {};
      // Name of the office network where the cloud computer share resides.
      shared_ptr<string> officeSiteName_ {};
      // Account system type of the office network.
      shared_ptr<string> officeSiteType_ {};
      shared_ptr<string> osType_ {};
      // Cloud computer template ID.
      shared_ptr<string> ownBundleId_ {};
      // Cloud computer template name.
      shared_ptr<string> ownBundleName_ {};
      // Cloud computer share type.
      shared_ptr<int32_t> ownType_ {};
      // Billing method.
      shared_ptr<string> payType_ {};
      // ID of the policy associated with the cloud computer share.
      shared_ptr<string> policyGroupId_ {};
      // The IDs of the policies that are associated with the cloud computer share.
      shared_ptr<vector<string>> policyGroupIds_ {};
      // The name of the policy that is associated with the cloud computer share.
      shared_ptr<string> policyGroupName_ {};
      // A list of policy names associated with cloud computer share.
      shared_ptr<vector<string>> policyGroupNames_ {};
      // Whether to enable user profile roaming.
      shared_ptr<bool> profileFollowSwitch_ {};
      shared_ptr<string> protocolType_ {};
      // Session occupancy threshold used to trigger auto scaling for multi-session, multi-cloud computer deployments. Session occupancy is calculated as:
      // 
      // `Session occupancy = (Bound sessions / (Total cloud computers × Max sessions per cloud computer)) × 100%`
      // 
      // When occupancy reaches this threshold, new cloud computers are created. When occupancy falls below this threshold, excess cloud computers are deleted.
      shared_ptr<float> ratioThreshold_ {};
      // Resource type. Only Elastic Compute Service (ECS) is supported.
      shared_ptr<int32_t> resType_ {};
      // Cloud computer reset type.
      shared_ptr<int32_t> resetType_ {};
      // Scheduled scaling task information.
      shared_ptr<vector<Desktops::ScaleTimerInfos>> scaleTimerInfos_ {};
      // Cloud computer share status.
      shared_ptr<int32_t> status_ {};
      // Idle shutdown time. The cloud computer shuts down automatically after being idle for this duration. If a user connects after shutdown, the cloud computer starts automatically. Unit: milliseconds.
      shared_ptr<int64_t> stopDuration_ {};
      // System disk type.
      shared_ptr<string> systemDiskCategory_ {};
      // System disk capacity in GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      // List of scheduled tasks.
      shared_ptr<vector<Desktops::TimerInfos>> timerInfos_ {};
      // Scheduled application information.
      shared_ptr<string> timingStrategyInfo_ {};
      // The version number of the cloud computer share.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->desktops_ == nullptr
        && this->requestId_ == nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const GetDesktopGroupDetailResponseBody::Desktops & getDesktops() const { DARABONBA_PTR_GET_CONST(desktops_, GetDesktopGroupDetailResponseBody::Desktops) };
    inline GetDesktopGroupDetailResponseBody::Desktops getDesktops() { DARABONBA_PTR_GET(desktops_, GetDesktopGroupDetailResponseBody::Desktops) };
    inline GetDesktopGroupDetailResponseBody& setDesktops(const GetDesktopGroupDetailResponseBody::Desktops & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline GetDesktopGroupDetailResponseBody& setDesktops(GetDesktopGroupDetailResponseBody::Desktops && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDesktopGroupDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information about the cloud computer share.
    shared_ptr<GetDesktopGroupDetailResponseBody::Desktops> desktops_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
