// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeGlobalDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Desktops, desktops_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Desktops, desktops_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGlobalDesktopsResponseBody() = default ;
    DescribeGlobalDesktopsResponseBody(const DescribeGlobalDesktopsResponseBody &) = default ;
    DescribeGlobalDesktopsResponseBody(DescribeGlobalDesktopsResponseBody &&) = default ;
    DescribeGlobalDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopsResponseBody() = default ;
    DescribeGlobalDesktopsResponseBody& operator=(const DescribeGlobalDesktopsResponseBody &) = default ;
    DescribeGlobalDesktopsResponseBody& operator=(DescribeGlobalDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Desktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Desktops& obj) { 
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(Clients, clients_);
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(DesktopTimers, desktopTimers_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(Disks, disks_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(FotaUpdate, fotaUpdate_);
        DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
        DARABONBA_PTR_TO_JSON(HibernationBeta, hibernationBeta_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(OsDescription, osDescription_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(RealDesktopId, realDesktopId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RegionLocation, regionLocation_);
        DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
        DARABONBA_PTR_TO_JSON(Sessions, sessions_);
        DARABONBA_PTR_TO_JSON(SupportHibernation, supportHibernation_);
        DARABONBA_PTR_TO_JSON(UserCustomName, userCustomName_);
      };
      friend void from_json(const Darabonba::Json& j, Desktops& obj) { 
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(Clients, clients_);
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(DesktopTimers, desktopTimers_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(Disks, disks_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(FotaUpdate, fotaUpdate_);
        DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
        DARABONBA_PTR_FROM_JSON(HibernationBeta, hibernationBeta_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(OsDescription, osDescription_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(RealDesktopId, realDesktopId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RegionLocation, regionLocation_);
        DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
        DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
        DARABONBA_PTR_FROM_JSON(SupportHibernation, supportHibernation_);
        DARABONBA_PTR_FROM_JSON(UserCustomName, userCustomName_);
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
      class Sessions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(EstablishmentTime, establishmentTime_);
        };
        friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(EstablishmentTime, establishmentTime_);
        };
        Sessions() = default ;
        Sessions(const Sessions &) = default ;
        Sessions(Sessions &&) = default ;
        Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sessions() = default ;
        Sessions& operator=(const Sessions &) = default ;
        Sessions& operator=(Sessions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->establishmentTime_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // establishmentTime Field Functions 
        bool hasEstablishmentTime() const { return this->establishmentTime_ != nullptr;};
        void deleteEstablishmentTime() { this->establishmentTime_ = nullptr;};
        inline string getEstablishmentTime() const { DARABONBA_PTR_GET_DEFAULT(establishmentTime_, "") };
        inline Sessions& setEstablishmentTime(string establishmentTime) { DARABONBA_PTR_SET_VALUE(establishmentTime_, establishmentTime) };


      protected:
        // End user information.
        shared_ptr<string> endUserId_ {};
        // The time when the session was created.
        shared_ptr<string> establishmentTime_ {};
      };

      class FotaUpdate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FotaUpdate& obj) { 
          DARABONBA_PTR_TO_JSON(Channel, channel_);
          DARABONBA_PTR_TO_JSON(CurrentAppVersion, currentAppVersion_);
          DARABONBA_PTR_TO_JSON(Force, force_);
          DARABONBA_PTR_TO_JSON(NewAppVersion, newAppVersion_);
          DARABONBA_PTR_TO_JSON(NewDcdVersion, newDcdVersion_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
          DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
          DARABONBA_PTR_TO_JSON(ReleaseNoteJp, releaseNoteJp_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, FotaUpdate& obj) { 
          DARABONBA_PTR_FROM_JSON(Channel, channel_);
          DARABONBA_PTR_FROM_JSON(CurrentAppVersion, currentAppVersion_);
          DARABONBA_PTR_FROM_JSON(Force, force_);
          DARABONBA_PTR_FROM_JSON(NewAppVersion, newAppVersion_);
          DARABONBA_PTR_FROM_JSON(NewDcdVersion, newDcdVersion_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
          DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
          DARABONBA_PTR_FROM_JSON(ReleaseNoteJp, releaseNoteJp_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        FotaUpdate() = default ;
        FotaUpdate(const FotaUpdate &) = default ;
        FotaUpdate(FotaUpdate &&) = default ;
        FotaUpdate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FotaUpdate() = default ;
        FotaUpdate& operator=(const FotaUpdate &) = default ;
        FotaUpdate& operator=(FotaUpdate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channel_ == nullptr
        && this->currentAppVersion_ == nullptr && this->force_ == nullptr && this->newAppVersion_ == nullptr && this->newDcdVersion_ == nullptr && this->project_ == nullptr
        && this->releaseNote_ == nullptr && this->releaseNoteEn_ == nullptr && this->releaseNoteJp_ == nullptr && this->size_ == nullptr; };
        // channel Field Functions 
        bool hasChannel() const { return this->channel_ != nullptr;};
        void deleteChannel() { this->channel_ = nullptr;};
        inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
        inline FotaUpdate& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


        // currentAppVersion Field Functions 
        bool hasCurrentAppVersion() const { return this->currentAppVersion_ != nullptr;};
        void deleteCurrentAppVersion() { this->currentAppVersion_ = nullptr;};
        inline string getCurrentAppVersion() const { DARABONBA_PTR_GET_DEFAULT(currentAppVersion_, "") };
        inline FotaUpdate& setCurrentAppVersion(string currentAppVersion) { DARABONBA_PTR_SET_VALUE(currentAppVersion_, currentAppVersion) };


        // force Field Functions 
        bool hasForce() const { return this->force_ != nullptr;};
        void deleteForce() { this->force_ = nullptr;};
        inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
        inline FotaUpdate& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


        // newAppVersion Field Functions 
        bool hasNewAppVersion() const { return this->newAppVersion_ != nullptr;};
        void deleteNewAppVersion() { this->newAppVersion_ = nullptr;};
        inline string getNewAppVersion() const { DARABONBA_PTR_GET_DEFAULT(newAppVersion_, "") };
        inline FotaUpdate& setNewAppVersion(string newAppVersion) { DARABONBA_PTR_SET_VALUE(newAppVersion_, newAppVersion) };


        // newDcdVersion Field Functions 
        bool hasNewDcdVersion() const { return this->newDcdVersion_ != nullptr;};
        void deleteNewDcdVersion() { this->newDcdVersion_ = nullptr;};
        inline string getNewDcdVersion() const { DARABONBA_PTR_GET_DEFAULT(newDcdVersion_, "") };
        inline FotaUpdate& setNewDcdVersion(string newDcdVersion) { DARABONBA_PTR_SET_VALUE(newDcdVersion_, newDcdVersion) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline FotaUpdate& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // releaseNote Field Functions 
        bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
        void deleteReleaseNote() { this->releaseNote_ = nullptr;};
        inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
        inline FotaUpdate& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


        // releaseNoteEn Field Functions 
        bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
        void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
        inline string getReleaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
        inline FotaUpdate& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


        // releaseNoteJp Field Functions 
        bool hasReleaseNoteJp() const { return this->releaseNoteJp_ != nullptr;};
        void deleteReleaseNoteJp() { this->releaseNoteJp_ = nullptr;};
        inline string getReleaseNoteJp() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteJp_, "") };
        inline FotaUpdate& setReleaseNoteJp(string releaseNoteJp) { DARABONBA_PTR_SET_VALUE(releaseNoteJp_, releaseNoteJp) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
        inline FotaUpdate& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // Subscription Channel
        shared_ptr<string> channel_ {};
        // The current version number of the cloud computer.
        shared_ptr<string> currentAppVersion_ {};
        // Whether to force upgrade.
        shared_ptr<bool> force_ {};
        // The version number of the application after the update.
        shared_ptr<string> newAppVersion_ {};
        shared_ptr<string> newDcdVersion_ {};
        // The name of the project.
        shared_ptr<string> project_ {};
        // The description of the version that can be upgraded.
        shared_ptr<string> releaseNote_ {};
        // The English release note for the new image version.
        shared_ptr<string> releaseNoteEn_ {};
        // The Japanese release note for the new image version.
        shared_ptr<string> releaseNoteJp_ {};
        // The size of the update package for the cloud computer image. Unit: MiB.
        shared_ptr<string> size_ {};
      };

      class Disks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Disks& obj) { 
          DARABONBA_PTR_TO_JSON(DiskId, diskId_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        };
        friend void from_json(const Darabonba::Json& j, Disks& obj) { 
          DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        };
        Disks() = default ;
        Disks(const Disks &) = default ;
        Disks(Disks &&) = default ;
        Disks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Disks() = default ;
        Disks& operator=(const Disks &) = default ;
        Disks& operator=(Disks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskId_ == nullptr
        && this->diskSize_ == nullptr && this->diskType_ == nullptr; };
        // diskId Field Functions 
        bool hasDiskId() const { return this->diskId_ != nullptr;};
        void deleteDiskId() { this->diskId_ = nullptr;};
        inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
        inline Disks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline Disks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline Disks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      protected:
        // The disk ID.
        shared_ptr<string> diskId_ {};
        // The disk size. Unit: GiB.
        shared_ptr<int32_t> diskSize_ {};
        // The disk type.
        // 
        // Valid value:
        // 
        // *   SYSTEM: a system disk.
        // *   DATA: a data disk.
        shared_ptr<string> diskType_ {};
      };

      class DesktopTimers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DesktopTimers& obj) { 
          DARABONBA_PTR_TO_JSON(AllowClientSetting, allowClientSetting_);
          DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_TO_JSON(Enforce, enforce_);
          DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(OperationType, operationType_);
          DARABONBA_PTR_TO_JSON(ResetType, resetType_);
          DARABONBA_PTR_TO_JSON(TimerType, timerType_);
        };
        friend void from_json(const Darabonba::Json& j, DesktopTimers& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowClientSetting, allowClientSetting_);
          DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
          DARABONBA_PTR_FROM_JSON(Enforce, enforce_);
          DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
          DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
          DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
        };
        DesktopTimers() = default ;
        DesktopTimers(const DesktopTimers &) = default ;
        DesktopTimers(DesktopTimers &&) = default ;
        DesktopTimers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DesktopTimers() = default ;
        DesktopTimers& operator=(const DesktopTimers &) = default ;
        DesktopTimers& operator=(DesktopTimers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowClientSetting_ == nullptr
        && this->cronExpression_ == nullptr && this->enforce_ == nullptr && this->executionTime_ == nullptr && this->interval_ == nullptr && this->operationType_ == nullptr
        && this->resetType_ == nullptr && this->timerType_ == nullptr; };
        // allowClientSetting Field Functions 
        bool hasAllowClientSetting() const { return this->allowClientSetting_ != nullptr;};
        void deleteAllowClientSetting() { this->allowClientSetting_ = nullptr;};
        inline bool getAllowClientSetting() const { DARABONBA_PTR_GET_DEFAULT(allowClientSetting_, false) };
        inline DesktopTimers& setAllowClientSetting(bool allowClientSetting) { DARABONBA_PTR_SET_VALUE(allowClientSetting_, allowClientSetting) };


        // cronExpression Field Functions 
        bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
        void deleteCronExpression() { this->cronExpression_ = nullptr;};
        inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
        inline DesktopTimers& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


        // enforce Field Functions 
        bool hasEnforce() const { return this->enforce_ != nullptr;};
        void deleteEnforce() { this->enforce_ = nullptr;};
        inline bool getEnforce() const { DARABONBA_PTR_GET_DEFAULT(enforce_, false) };
        inline DesktopTimers& setEnforce(bool enforce) { DARABONBA_PTR_SET_VALUE(enforce_, enforce) };


        // executionTime Field Functions 
        bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
        void deleteExecutionTime() { this->executionTime_ = nullptr;};
        inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
        inline DesktopTimers& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline DesktopTimers& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // operationType Field Functions 
        bool hasOperationType() const { return this->operationType_ != nullptr;};
        void deleteOperationType() { this->operationType_ = nullptr;};
        inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
        inline DesktopTimers& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


        // resetType Field Functions 
        bool hasResetType() const { return this->resetType_ != nullptr;};
        void deleteResetType() { this->resetType_ = nullptr;};
        inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
        inline DesktopTimers& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


        // timerType Field Functions 
        bool hasTimerType() const { return this->timerType_ != nullptr;};
        void deleteTimerType() { this->timerType_ = nullptr;};
        inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
        inline DesktopTimers& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


      protected:
        // Whether to allow clients to set policies.
        shared_ptr<bool> allowClientSetting_ {};
        // The CRON expression for the scheduled task.
        // 
        // For example, a `0 0 4 1/1 * ?` indicates that the operation is executed every day from 4:00 a.m. on the first day of each month.
        shared_ptr<string> cronExpression_ {};
        // Indicates whether to forcibly execute the scheduled task. To `true` indicates that cloud computer and connection status detection are ignored, and scheduled tasks are forcibly executed.
        shared_ptr<bool> enforce_ {};
        // The task duration.
        shared_ptr<string> executionTime_ {};
        // The interval at which the monitoring data was queried. Unit: seconds.
        shared_ptr<int32_t> interval_ {};
        // The type of the scheduled task.
        // 
        // Valid values:
        // 
        // *   HIBERNATE
        // *   SHUTDOWN
        shared_ptr<string> operationType_ {};
        // For a reset task, you must set the reset type.
        // 
        // Valid values:
        // 
        // *   RESET_TYPE_SYSTEM: resets the system disk.
        // *   RESET_TYPE_USER_DISK: resets the data disk.
        // *   RESET_TYPE_BOTH: resets the system disk and data disk.
        shared_ptr<string> resetType_ {};
        // The type of the scheduled task.
        // 
        // Valid values:
        // 
        // *   NoOperationDisconnect: scheduled disconnection upon inactivity.
        // *   NoConnectShutdown: connectionless shutdown.
        // *   TimerBoot: scheduled start.
        // *   TimerReset: scheduled reset.
        // *   NoOperationShutdown: scheduled shutdown upon inactivity.
        // *   TimerShutdown: Stops the cloud computers on schedule.
        // *   NoOperationReboot: scheduled restart upon inactivity.
        // *   TimerReboot: scheduled restart.
        shared_ptr<string> timerType_ {};
      };

      class Clients : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clients& obj) { 
          DARABONBA_PTR_TO_JSON(ClientType, clientType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Clients& obj) { 
          DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Clients() = default ;
        Clients(const Clients &) = default ;
        Clients(Clients &&) = default ;
        Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clients() = default ;
        Clients& operator=(const Clients &) = default ;
        Clients& operator=(Clients &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clientType_ == nullptr
        && this->status_ == nullptr; };
        // clientType Field Functions 
        bool hasClientType() const { return this->clientType_ != nullptr;};
        void deleteClientType() { this->clientType_ = nullptr;};
        inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
        inline Clients& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Clients& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The client type.
        // 
        // Valid values:
        // 
        // *   html5: the web client.
        // *   android: the Android client.
        // *   linux: Linux client.
        // *   ios: the iOS client.
        // *   windows: the Windows client.
        // *   macos: the macOS client.
        shared_ptr<string> clientType_ {};
        // The status of the client.
        // 
        // Valid values:
        // 
        // *   OFF: does not allow logon.
        // *   ON: allows logon.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->clients_ == nullptr && this->connectionStatus_ == nullptr && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->desktopGroupId_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->desktopTimers_ == nullptr && this->desktopType_ == nullptr
        && this->directoryId_ == nullptr && this->disks_ == nullptr && this->endUserId_ == nullptr && this->endUserIds_ == nullptr && this->expiredTime_ == nullptr
        && this->fotaUpdate_ == nullptr && this->gpuMemory_ == nullptr && this->hibernationBeta_ == nullptr && this->hostName_ == nullptr && this->imageId_ == nullptr
        && this->lastStartTime_ == nullptr && this->localName_ == nullptr && this->managementFlags_ == nullptr && this->memory_ == nullptr && this->networkInterfaceIp_ == nullptr
        && this->officeSiteId_ == nullptr && this->os_ == nullptr && this->osDescription_ == nullptr && this->osType_ == nullptr && this->platform_ == nullptr
        && this->policyGroupId_ == nullptr && this->protocolType_ == nullptr && this->realDesktopId_ == nullptr && this->regionId_ == nullptr && this->regionLocation_ == nullptr
        && this->sessionType_ == nullptr && this->sessions_ == nullptr && this->supportHibernation_ == nullptr && this->userCustomName_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Desktops& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // clients Field Functions 
      bool hasClients() const { return this->clients_ != nullptr;};
      void deleteClients() { this->clients_ = nullptr;};
      inline const vector<Desktops::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Desktops::Clients>) };
      inline vector<Desktops::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<Desktops::Clients>) };
      inline Desktops& setClients(const vector<Desktops::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
      inline Desktops& setClients(vector<Desktops::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Desktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


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


      // desktopGroupId Field Functions 
      bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
      void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
      inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
      inline Desktops& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Desktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Desktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline Desktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // desktopTimers Field Functions 
      bool hasDesktopTimers() const { return this->desktopTimers_ != nullptr;};
      void deleteDesktopTimers() { this->desktopTimers_ = nullptr;};
      inline const vector<Desktops::DesktopTimers> & getDesktopTimers() const { DARABONBA_PTR_GET_CONST(desktopTimers_, vector<Desktops::DesktopTimers>) };
      inline vector<Desktops::DesktopTimers> getDesktopTimers() { DARABONBA_PTR_GET(desktopTimers_, vector<Desktops::DesktopTimers>) };
      inline Desktops& setDesktopTimers(const vector<Desktops::DesktopTimers> & desktopTimers) { DARABONBA_PTR_SET_VALUE(desktopTimers_, desktopTimers) };
      inline Desktops& setDesktopTimers(vector<Desktops::DesktopTimers> && desktopTimers) { DARABONBA_PTR_SET_RVALUE(desktopTimers_, desktopTimers) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline Desktops& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Desktops& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // disks Field Functions 
      bool hasDisks() const { return this->disks_ != nullptr;};
      void deleteDisks() { this->disks_ = nullptr;};
      inline const vector<Desktops::Disks> & getDisks() const { DARABONBA_PTR_GET_CONST(disks_, vector<Desktops::Disks>) };
      inline vector<Desktops::Disks> getDisks() { DARABONBA_PTR_GET(disks_, vector<Desktops::Disks>) };
      inline Desktops& setDisks(const vector<Desktops::Disks> & disks) { DARABONBA_PTR_SET_VALUE(disks_, disks) };
      inline Desktops& setDisks(vector<Desktops::Disks> && disks) { DARABONBA_PTR_SET_RVALUE(disks_, disks) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Desktops& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline Desktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline Desktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Desktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // fotaUpdate Field Functions 
      bool hasFotaUpdate() const { return this->fotaUpdate_ != nullptr;};
      void deleteFotaUpdate() { this->fotaUpdate_ = nullptr;};
      inline const Desktops::FotaUpdate & getFotaUpdate() const { DARABONBA_PTR_GET_CONST(fotaUpdate_, Desktops::FotaUpdate) };
      inline Desktops::FotaUpdate getFotaUpdate() { DARABONBA_PTR_GET(fotaUpdate_, Desktops::FotaUpdate) };
      inline Desktops& setFotaUpdate(const Desktops::FotaUpdate & fotaUpdate) { DARABONBA_PTR_SET_VALUE(fotaUpdate_, fotaUpdate) };
      inline Desktops& setFotaUpdate(Desktops::FotaUpdate && fotaUpdate) { DARABONBA_PTR_SET_RVALUE(fotaUpdate_, fotaUpdate) };


      // gpuMemory Field Functions 
      bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
      void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
      inline int32_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0) };
      inline Desktops& setGpuMemory(int32_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


      // hibernationBeta Field Functions 
      bool hasHibernationBeta() const { return this->hibernationBeta_ != nullptr;};
      void deleteHibernationBeta() { this->hibernationBeta_ = nullptr;};
      inline bool getHibernationBeta() const { DARABONBA_PTR_GET_DEFAULT(hibernationBeta_, false) };
      inline Desktops& setHibernationBeta(bool hibernationBeta) { DARABONBA_PTR_SET_VALUE(hibernationBeta_, hibernationBeta) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Desktops& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Desktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // lastStartTime Field Functions 
      bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
      void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
      inline string getLastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, "") };
      inline Desktops& setLastStartTime(string lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Desktops& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // managementFlags Field Functions 
      bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
      void deleteManagementFlags() { this->managementFlags_ = nullptr;};
      inline const vector<string> & getManagementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
      inline vector<string> getManagementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
      inline Desktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
      inline Desktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Desktops& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // networkInterfaceIp Field Functions 
      bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
      void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
      inline string getNetworkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
      inline Desktops& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Desktops& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Desktops& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osDescription Field Functions 
      bool hasOsDescription() const { return this->osDescription_ != nullptr;};
      void deleteOsDescription() { this->osDescription_ = nullptr;};
      inline string getOsDescription() const { DARABONBA_PTR_GET_DEFAULT(osDescription_, "") };
      inline Desktops& setOsDescription(string osDescription) { DARABONBA_PTR_SET_VALUE(osDescription_, osDescription) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Desktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Desktops& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline Desktops& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline Desktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // realDesktopId Field Functions 
      bool hasRealDesktopId() const { return this->realDesktopId_ != nullptr;};
      void deleteRealDesktopId() { this->realDesktopId_ = nullptr;};
      inline string getRealDesktopId() const { DARABONBA_PTR_GET_DEFAULT(realDesktopId_, "") };
      inline Desktops& setRealDesktopId(string realDesktopId) { DARABONBA_PTR_SET_VALUE(realDesktopId_, realDesktopId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Desktops& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // regionLocation Field Functions 
      bool hasRegionLocation() const { return this->regionLocation_ != nullptr;};
      void deleteRegionLocation() { this->regionLocation_ = nullptr;};
      inline string getRegionLocation() const { DARABONBA_PTR_GET_DEFAULT(regionLocation_, "") };
      inline Desktops& setRegionLocation(string regionLocation) { DARABONBA_PTR_SET_VALUE(regionLocation_, regionLocation) };


      // sessionType Field Functions 
      bool hasSessionType() const { return this->sessionType_ != nullptr;};
      void deleteSessionType() { this->sessionType_ = nullptr;};
      inline string getSessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
      inline Desktops& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


      // sessions Field Functions 
      bool hasSessions() const { return this->sessions_ != nullptr;};
      void deleteSessions() { this->sessions_ = nullptr;};
      inline const vector<Desktops::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Desktops::Sessions>) };
      inline vector<Desktops::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Desktops::Sessions>) };
      inline Desktops& setSessions(const vector<Desktops::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
      inline Desktops& setSessions(vector<Desktops::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


      // supportHibernation Field Functions 
      bool hasSupportHibernation() const { return this->supportHibernation_ != nullptr;};
      void deleteSupportHibernation() { this->supportHibernation_ = nullptr;};
      inline bool getSupportHibernation() const { DARABONBA_PTR_GET_DEFAULT(supportHibernation_, false) };
      inline Desktops& setSupportHibernation(bool supportHibernation) { DARABONBA_PTR_SET_VALUE(supportHibernation_, supportHibernation) };


      // userCustomName Field Functions 
      bool hasUserCustomName() const { return this->userCustomName_ != nullptr;};
      void deleteUserCustomName() { this->userCustomName_ = nullptr;};
      inline string getUserCustomName() const { DARABONBA_PTR_GET_DEFAULT(userCustomName_, "") };
      inline Desktops& setUserCustomName(string userCustomName) { DARABONBA_PTR_SET_VALUE(userCustomName_, userCustomName) };


    protected:
      // The billing method of the cloud computer pool.
      // 
      // Valid value:
      // 
      // *   PostPaid: pay-as-you-go
      // *   PrePaid: subscription
      shared_ptr<string> chargeType_ {};
      // The information about the supported clients.
      shared_ptr<vector<Desktops::Clients>> clients_ {};
      // The state of the endpoint connection.
      // 
      // Valid values:
      // 
      // *   Connected
      // *   Disconnecting
      // *   Pending.
      // *   Connecting.
      // *   Disconnected.
      // *   Deleting
      shared_ptr<string> connectionStatus_ {};
      // The number of vCPUs.
      shared_ptr<int32_t> cpu_ {};
      // The time when the cloud computer was created.
      shared_ptr<string> creationTime_ {};
      // The ID of the cloud computer share.
      shared_ptr<string> desktopGroupId_ {};
      // The cloud compute ID.
      shared_ptr<string> desktopId_ {};
      // The cloud computer name.
      shared_ptr<string> desktopName_ {};
      // The cloud computer status.
      shared_ptr<string> desktopStatus_ {};
      // The cloud computer timer object.
      shared_ptr<vector<Desktops::DesktopTimers>> desktopTimers_ {};
      // The cloud computer type.
      shared_ptr<string> desktopType_ {};
      // The network ID of the office. Same as `OfficeSiteId`.
      shared_ptr<string> directoryId_ {};
      // The disks.
      shared_ptr<vector<Desktops::Disks>> disks_ {};
      // The names of end users.
      shared_ptr<string> endUserId_ {};
      // The list of end user.
      shared_ptr<vector<string>> endUserIds_ {};
      // The expiration time of the cloud computer.
      // 
      // *   For a cloud computer that is a package year or month, the return value is meaningful.
      // *   For pay-as-you-go cloud computers, the `2099-12-31T15:59Z` is returned.
      shared_ptr<string> expiredTime_ {};
      // The information about image update.
      shared_ptr<Desktops::FotaUpdate> fotaUpdate_ {};
      // The GPU memory size. For GPU-accelerated cloud computers, this return value is significant. Unit: MB.
      shared_ptr<int32_t> gpuMemory_ {};
      // Indicates whether this is a beta version of the hibernation feature.
      shared_ptr<bool> hibernationBeta_ {};
      // The hostname of the cloud desktop.
      shared_ptr<string> hostName_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The time when the cloud desktop was last started.
      shared_ptr<string> lastStartTime_ {};
      // The region name.
      shared_ptr<string> localName_ {};
      // The list of cloud computer status.
      shared_ptr<vector<string>> managementFlags_ {};
      // The memory of the cloud computer. Unit: MiB.
      shared_ptr<int64_t> memory_ {};
      // The IP address of the ENI.
      shared_ptr<string> networkInterfaceIp_ {};
      // The IDs of the office networks.
      shared_ptr<string> officeSiteId_ {};
      // OS Type
      shared_ptr<string> os_ {};
      shared_ptr<string> osDescription_ {};
      // The operating system.
      // 
      // Valid value:
      // 
      // *   Linux
      // *   Windows
      shared_ptr<string> osType_ {};
      // The OS platform.
      // 
      // Valid value:
      // 
      // *   Ubuntu
      // *   UOS
      // *   CentOS
      // *   Windows Server 2019
      // *   Windows Server 2016
      shared_ptr<string> platform_ {};
      // The cloud computer policy ID.
      shared_ptr<string> policyGroupId_ {};
      // The type of the protocol.
      // 
      // Valid value:
      // 
      // *   High-definition Experience (HDX)
      // *   ASP
      shared_ptr<string> protocolType_ {};
      // If a shared cloud computer is assigned a real cloud computer, the ID of the cloud computer is displayed.
      shared_ptr<string> realDesktopId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> regionLocation_ {};
      // The type of the session.
      // 
      // Valid value:
      // 
      // *   SINGLE_SESSION
      // *   MULTIPLE_SESSION
      shared_ptr<string> sessionType_ {};
      // The list of session information.
      shared_ptr<vector<Desktops::Sessions>> sessions_ {};
      // Indicates whether hibernation is supported.
      // 
      // Valid values:
      // 
      // *   true: supported
      // *   false: not supported
      shared_ptr<bool> supportHibernation_ {};
      // The custom cloud computer name.
      shared_ptr<string> userCustomName_ {};
    };

    virtual bool empty() const override { return this->desktops_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // desktops Field Functions 
    bool hasDesktops() const { return this->desktops_ != nullptr;};
    void deleteDesktops() { this->desktops_ = nullptr;};
    inline const vector<DescribeGlobalDesktopsResponseBody::Desktops> & getDesktops() const { DARABONBA_PTR_GET_CONST(desktops_, vector<DescribeGlobalDesktopsResponseBody::Desktops>) };
    inline vector<DescribeGlobalDesktopsResponseBody::Desktops> getDesktops() { DARABONBA_PTR_GET(desktops_, vector<DescribeGlobalDesktopsResponseBody::Desktops>) };
    inline DescribeGlobalDesktopsResponseBody& setDesktops(const vector<DescribeGlobalDesktopsResponseBody::Desktops> & desktops) { DARABONBA_PTR_SET_VALUE(desktops_, desktops) };
    inline DescribeGlobalDesktopsResponseBody& setDesktops(vector<DescribeGlobalDesktopsResponseBody::Desktops> && desktops) { DARABONBA_PTR_SET_RVALUE(desktops_, desktops) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalDesktopsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the cloud computer.
    shared_ptr<vector<DescribeGlobalDesktopsResponseBody::Desktops>> desktops_ {};
    // The token used to start the next query. If NextToken is empty, it indicates that there is no next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
