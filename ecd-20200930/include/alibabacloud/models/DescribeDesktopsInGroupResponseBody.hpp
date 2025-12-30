// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPRESPONSEBODY_HPP_
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
  class DescribeDesktopsInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OnlinePrePaidDesktopsCount, onlinePrePaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(PaidDesktops, paidDesktops_);
      DARABONBA_PTR_TO_JSON(PaidDesktopsCount, paidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(PostPaidDesktops, postPaidDesktops_);
      DARABONBA_PTR_TO_JSON(PostPaidDesktopsCount, postPaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(PostPaidDesktopsTotalAmount, postPaidDesktopsTotalAmount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningPrePaidDesktopsCount, runningPrePaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(StopedPrePaidDesktopsCount, stopedPrePaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(StoppedPrePaidDesktopsCount, stoppedPrePaidDesktopsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OnlinePrePaidDesktopsCount, onlinePrePaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(PaidDesktops, paidDesktops_);
      DARABONBA_PTR_FROM_JSON(PaidDesktopsCount, paidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidDesktops, postPaidDesktops_);
      DARABONBA_PTR_FROM_JSON(PostPaidDesktopsCount, postPaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidDesktopsTotalAmount, postPaidDesktopsTotalAmount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningPrePaidDesktopsCount, runningPrePaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(StopedPrePaidDesktopsCount, stopedPrePaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(StoppedPrePaidDesktopsCount, stoppedPrePaidDesktopsCount_);
    };
    DescribeDesktopsInGroupResponseBody() = default ;
    DescribeDesktopsInGroupResponseBody(const DescribeDesktopsInGroupResponseBody &) = default ;
    DescribeDesktopsInGroupResponseBody(DescribeDesktopsInGroupResponseBody &&) = default ;
    DescribeDesktopsInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsInGroupResponseBody() = default ;
    DescribeDesktopsInGroupResponseBody& operator=(const DescribeDesktopsInGroupResponseBody &) = default ;
    DescribeDesktopsInGroupResponseBody& operator=(DescribeDesktopsInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PostPaidDesktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PostPaidDesktops& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(CreateDuration, createDuration_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_TO_JSON(EndUserName, endUserName_);
        DARABONBA_PTR_TO_JSON(EndUserNames, endUserNames_);
        DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_TO_JSON(MemberEniIp, memberEniIp_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(PrimaryEniIp, primaryEniIp_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_TO_JSON(ResetTime, resetTime_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, PostPaidDesktops& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(CreateDuration, createDuration_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_FROM_JSON(EndUserName, endUserName_);
        DARABONBA_PTR_FROM_JSON(EndUserNames, endUserNames_);
        DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_FROM_JSON(MemberEniIp, memberEniIp_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(PrimaryEniIp, primaryEniIp_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
        DARABONBA_PTR_FROM_JSON(ResetTime, resetTime_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      PostPaidDesktops() = default ;
      PostPaidDesktops(const PostPaidDesktops &) = default ;
      PostPaidDesktops(PostPaidDesktops &&) = default ;
      PostPaidDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PostPaidDesktops() = default ;
      PostPaidDesktops& operator=(const PostPaidDesktops &) = default ;
      PostPaidDesktops& operator=(PostPaidDesktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->createDuration_ == nullptr && this->createTime_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr
        && this->diskType_ == nullptr && this->endUserId_ == nullptr && this->endUserIds_ == nullptr && this->endUserName_ == nullptr && this->endUserNames_ == nullptr
        && this->fotaVersion_ == nullptr && this->gpuDriverVersion_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->managementFlag_ == nullptr
        && this->managementFlags_ == nullptr && this->memberEniIp_ == nullptr && this->osType_ == nullptr && this->primaryEniIp_ == nullptr && this->protocolType_ == nullptr
        && this->releaseTime_ == nullptr && this->resetTime_ == nullptr && this->systemDiskSize_ == nullptr; };
      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline PostPaidDesktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // createDuration Field Functions 
      bool hasCreateDuration() const { return this->createDuration_ != nullptr;};
      void deleteCreateDuration() { this->createDuration_ = nullptr;};
      inline string getCreateDuration() const { DARABONBA_PTR_GET_DEFAULT(createDuration_, "") };
      inline PostPaidDesktops& setCreateDuration(string createDuration) { DARABONBA_PTR_SET_VALUE(createDuration_, createDuration) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PostPaidDesktops& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline PostPaidDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline PostPaidDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline PostPaidDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline PostPaidDesktops& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline PostPaidDesktops& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline PostPaidDesktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline PostPaidDesktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // endUserName Field Functions 
      bool hasEndUserName() const { return this->endUserName_ != nullptr;};
      void deleteEndUserName() { this->endUserName_ = nullptr;};
      inline string getEndUserName() const { DARABONBA_PTR_GET_DEFAULT(endUserName_, "") };
      inline PostPaidDesktops& setEndUserName(string endUserName) { DARABONBA_PTR_SET_VALUE(endUserName_, endUserName) };


      // endUserNames Field Functions 
      bool hasEndUserNames() const { return this->endUserNames_ != nullptr;};
      void deleteEndUserNames() { this->endUserNames_ = nullptr;};
      inline const vector<string> & getEndUserNames() const { DARABONBA_PTR_GET_CONST(endUserNames_, vector<string>) };
      inline vector<string> getEndUserNames() { DARABONBA_PTR_GET(endUserNames_, vector<string>) };
      inline PostPaidDesktops& setEndUserNames(const vector<string> & endUserNames) { DARABONBA_PTR_SET_VALUE(endUserNames_, endUserNames) };
      inline PostPaidDesktops& setEndUserNames(vector<string> && endUserNames) { DARABONBA_PTR_SET_RVALUE(endUserNames_, endUserNames) };


      // fotaVersion Field Functions 
      bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
      void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
      inline string getFotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
      inline PostPaidDesktops& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


      // gpuDriverVersion Field Functions 
      bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
      void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
      inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
      inline PostPaidDesktops& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline PostPaidDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline PostPaidDesktops& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // managementFlag Field Functions 
      bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
      void deleteManagementFlag() { this->managementFlag_ = nullptr;};
      inline string getManagementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
      inline PostPaidDesktops& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


      // managementFlags Field Functions 
      bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
      void deleteManagementFlags() { this->managementFlags_ = nullptr;};
      inline const vector<string> & getManagementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
      inline vector<string> getManagementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
      inline PostPaidDesktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
      inline PostPaidDesktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


      // memberEniIp Field Functions 
      bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
      void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
      inline string getMemberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
      inline PostPaidDesktops& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline PostPaidDesktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // primaryEniIp Field Functions 
      bool hasPrimaryEniIp() const { return this->primaryEniIp_ != nullptr;};
      void deletePrimaryEniIp() { this->primaryEniIp_ = nullptr;};
      inline string getPrimaryEniIp() const { DARABONBA_PTR_GET_DEFAULT(primaryEniIp_, "") };
      inline PostPaidDesktops& setPrimaryEniIp(string primaryEniIp) { DARABONBA_PTR_SET_VALUE(primaryEniIp_, primaryEniIp) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline PostPaidDesktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
      inline PostPaidDesktops& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // resetTime Field Functions 
      bool hasResetTime() const { return this->resetTime_ != nullptr;};
      void deleteResetTime() { this->resetTime_ = nullptr;};
      inline string getResetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, "") };
      inline PostPaidDesktops& setResetTime(string resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline PostPaidDesktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The connection status of the cloud computer.
      // 
      // Valid values:
      // 
      // *   Unknown
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Connected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Disconnected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> connectionStatus_ {};
      // The retention period. Unit: milliseconds.
      shared_ptr<string> createDuration_ {};
      // The time when the cloud computer was created.
      shared_ptr<string> createTime_ {};
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
      // The status of the cloud computer.
      // 
      // Valid values:
      // 
      // *   Stopped
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Starting
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Rebuilding
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Running
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Stopping
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Expired
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Deleted
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Pending
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> desktopStatus_ {};
      // The type of the disk.
      // 
      // Valid values:
      // 
      // *   SYSTEM: system disk
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   DATA: data disk
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> diskType_ {};
      // The ID of the authorized user.
      shared_ptr<string> endUserId_ {};
      // The IDs of the end users who are connected to the cloud computers in the cloud computer pool. If no end users are connected, no values are returned for this parameter.
      shared_ptr<vector<string>> endUserIds_ {};
      // The username of the authorized user.
      shared_ptr<string> endUserName_ {};
      // The usernames of the end users who are connected to the cloud computers in the cloud computer pool. If no end users are connected, no values are returned for this parameter.
      shared_ptr<vector<string>> endUserNames_ {};
      // The image version.
      shared_ptr<string> fotaVersion_ {};
      // The version of the GPU driver.
      shared_ptr<string> gpuDriverVersion_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The flag that is used to manage the cloud computer.
      // 
      // Valid values:
      // 
      // *   Updating: The configurations of the cloud computer are being updated.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NoFlag: No flags are attached to the cloud computer.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> managementFlag_ {};
      // The flags that are used to manage the cloud computers.
      shared_ptr<vector<string>> managementFlags_ {};
      // The IP address of the member NIC of the instance.
      shared_ptr<string> memberEniIp_ {};
      // The OS.
      // 
      // Valid values:
      // 
      // *   Linux
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Windows
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> osType_ {};
      // The IP address of the primary NIC of the instance.
      shared_ptr<string> primaryEniIp_ {};
      // The protocol.
      // 
      // Valid values:
      // 
      // *   HDX: HDX protocol
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   ASP: ASP protocol provided by Alibaba Cloud
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> protocolType_ {};
      // The time when the cloud computer was released.
      shared_ptr<string> releaseTime_ {};
      // The time when the cloud computer was reset.
      shared_ptr<string> resetTime_ {};
      // The system disk size. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
    };

    class PaidDesktops : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PaidDesktops& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_TO_JSON(EndUserName, endUserName_);
        DARABONBA_PTR_TO_JSON(EndUserNames, endUserNames_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_TO_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_TO_JSON(MemberEniIp, memberEniIp_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(PrimaryEniIp, primaryEniIp_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(ResetTime, resetTime_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, PaidDesktops& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DesktopStatus, desktopStatus_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
        DARABONBA_PTR_FROM_JSON(EndUserName, endUserName_);
        DARABONBA_PTR_FROM_JSON(EndUserNames, endUserNames_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
        DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ManagementFlag, managementFlag_);
        DARABONBA_PTR_FROM_JSON(ManagementFlags, managementFlags_);
        DARABONBA_PTR_FROM_JSON(MemberEniIp, memberEniIp_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(PrimaryEniIp, primaryEniIp_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(ResetTime, resetTime_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      PaidDesktops() = default ;
      PaidDesktops(const PaidDesktops &) = default ;
      PaidDesktops(PaidDesktops &&) = default ;
      PaidDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PaidDesktops() = default ;
      PaidDesktops& operator=(const PaidDesktops &) = default ;
      PaidDesktops& operator=(PaidDesktops &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->desktopId_ == nullptr && this->desktopName_ == nullptr && this->desktopStatus_ == nullptr && this->diskType_ == nullptr && this->endUserId_ == nullptr
        && this->endUserIds_ == nullptr && this->endUserName_ == nullptr && this->endUserNames_ == nullptr && this->expiredTime_ == nullptr && this->fotaVersion_ == nullptr
        && this->gpuDriverVersion_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->managementFlag_ == nullptr && this->managementFlags_ == nullptr
        && this->memberEniIp_ == nullptr && this->osType_ == nullptr && this->primaryEniIp_ == nullptr && this->protocolType_ == nullptr && this->resetTime_ == nullptr
        && this->systemDiskSize_ == nullptr; };
      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline PaidDesktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline PaidDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline PaidDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // desktopStatus Field Functions 
      bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
      void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
      inline string getDesktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
      inline PaidDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline PaidDesktops& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline PaidDesktops& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // endUserIds Field Functions 
      bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
      void deleteEndUserIds() { this->endUserIds_ = nullptr;};
      inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
      inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
      inline PaidDesktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
      inline PaidDesktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


      // endUserName Field Functions 
      bool hasEndUserName() const { return this->endUserName_ != nullptr;};
      void deleteEndUserName() { this->endUserName_ = nullptr;};
      inline string getEndUserName() const { DARABONBA_PTR_GET_DEFAULT(endUserName_, "") };
      inline PaidDesktops& setEndUserName(string endUserName) { DARABONBA_PTR_SET_VALUE(endUserName_, endUserName) };


      // endUserNames Field Functions 
      bool hasEndUserNames() const { return this->endUserNames_ != nullptr;};
      void deleteEndUserNames() { this->endUserNames_ = nullptr;};
      inline const vector<string> & getEndUserNames() const { DARABONBA_PTR_GET_CONST(endUserNames_, vector<string>) };
      inline vector<string> getEndUserNames() { DARABONBA_PTR_GET(endUserNames_, vector<string>) };
      inline PaidDesktops& setEndUserNames(const vector<string> & endUserNames) { DARABONBA_PTR_SET_VALUE(endUserNames_, endUserNames) };
      inline PaidDesktops& setEndUserNames(vector<string> && endUserNames) { DARABONBA_PTR_SET_RVALUE(endUserNames_, endUserNames) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline PaidDesktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // fotaVersion Field Functions 
      bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
      void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
      inline string getFotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
      inline PaidDesktops& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


      // gpuDriverVersion Field Functions 
      bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
      void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
      inline string getGpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
      inline PaidDesktops& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline PaidDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline PaidDesktops& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // managementFlag Field Functions 
      bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
      void deleteManagementFlag() { this->managementFlag_ = nullptr;};
      inline string getManagementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
      inline PaidDesktops& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


      // managementFlags Field Functions 
      bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
      void deleteManagementFlags() { this->managementFlags_ = nullptr;};
      inline const vector<string> & getManagementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
      inline vector<string> getManagementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
      inline PaidDesktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
      inline PaidDesktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


      // memberEniIp Field Functions 
      bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
      void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
      inline string getMemberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
      inline PaidDesktops& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline PaidDesktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // primaryEniIp Field Functions 
      bool hasPrimaryEniIp() const { return this->primaryEniIp_ != nullptr;};
      void deletePrimaryEniIp() { this->primaryEniIp_ = nullptr;};
      inline string getPrimaryEniIp() const { DARABONBA_PTR_GET_DEFAULT(primaryEniIp_, "") };
      inline PaidDesktops& setPrimaryEniIp(string primaryEniIp) { DARABONBA_PTR_SET_VALUE(primaryEniIp_, primaryEniIp) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline PaidDesktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // resetTime Field Functions 
      bool hasResetTime() const { return this->resetTime_ != nullptr;};
      void deleteResetTime() { this->resetTime_ = nullptr;};
      inline string getResetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, "") };
      inline PaidDesktops& setResetTime(string resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline PaidDesktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      // The connection status of the cloud computer.
      // 
      // Valid values:
      // 
      // *   Unknown
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Connected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Disconnected
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> connectionStatus_ {};
      // The ID of the cloud computer.
      shared_ptr<string> desktopId_ {};
      // The name of the cloud computer.
      shared_ptr<string> desktopName_ {};
      // The status of the cloud computer.
      // 
      // Valid values:
      // 
      // *   Stopped
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Starting
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Rebuilding
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Running
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Stopping
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Expired
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Deleted
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Pending
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> desktopStatus_ {};
      // The type of the disk.
      // 
      // Valid values:
      // 
      // *   SYSTEM: system disk
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   DATA: data disk
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> diskType_ {};
      // The ID of the authorized user.
      shared_ptr<string> endUserId_ {};
      // The IDs of the end users who are connected to the cloud computers in the cloud computer share. If no end users are connected, no values are returned for this parameter.
      shared_ptr<vector<string>> endUserIds_ {};
      // The username of the authorized user.
      shared_ptr<string> endUserName_ {};
      // The usernames of the end users who are connected to the cloud computers in the cloud computer share. If no end users are connected, no values are returned for this parameter.
      shared_ptr<vector<string>> endUserNames_ {};
      shared_ptr<string> expiredTime_ {};
      // The image version.
      shared_ptr<string> fotaVersion_ {};
      // The version of the GPU driver.
      shared_ptr<string> gpuDriverVersion_ {};
      // The image ID.
      shared_ptr<string> imageId_ {};
      // The image name.
      shared_ptr<string> imageName_ {};
      // The flag that is used to manage the cloud computer.
      // 
      // Valid values:
      // 
      // *   Updating: The configurations of the cloud computer are being updated.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   NoFlag: No flags are attached to the cloud computer.
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> managementFlag_ {};
      // The flags that are used to manage the cloud computers.
      shared_ptr<vector<string>> managementFlags_ {};
      // The IP address of the member network interface controller (NIC) of the instance.
      shared_ptr<string> memberEniIp_ {};
      // The OS.
      // 
      // Valid values:
      // 
      // *   Linux
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   Windows
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> osType_ {};
      // The IP address of the primary NIC of the instance.
      shared_ptr<string> primaryEniIp_ {};
      // The protocol.
      // 
      // Valid values:
      // 
      // *   HDX: High-definition Experience (HDX) protocol
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   ASP: Adaptive Streaming Protocol (ASP) protocol provided by Alibaba Cloud
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> protocolType_ {};
      // The time when the cloud computer was reset.
      shared_ptr<string> resetTime_ {};
      // The system disk size. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->onlinePrePaidDesktopsCount_ == nullptr && this->paidDesktops_ == nullptr && this->paidDesktopsCount_ == nullptr && this->postPaidDesktops_ == nullptr && this->postPaidDesktopsCount_ == nullptr
        && this->postPaidDesktopsTotalAmount_ == nullptr && this->requestId_ == nullptr && this->runningPrePaidDesktopsCount_ == nullptr && this->stopedPrePaidDesktopsCount_ == nullptr && this->stoppedPrePaidDesktopsCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopsInGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // onlinePrePaidDesktopsCount Field Functions 
    bool hasOnlinePrePaidDesktopsCount() const { return this->onlinePrePaidDesktopsCount_ != nullptr;};
    void deleteOnlinePrePaidDesktopsCount() { this->onlinePrePaidDesktopsCount_ = nullptr;};
    inline int32_t getOnlinePrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(onlinePrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setOnlinePrePaidDesktopsCount(int32_t onlinePrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(onlinePrePaidDesktopsCount_, onlinePrePaidDesktopsCount) };


    // paidDesktops Field Functions 
    bool hasPaidDesktops() const { return this->paidDesktops_ != nullptr;};
    void deletePaidDesktops() { this->paidDesktops_ = nullptr;};
    inline const vector<DescribeDesktopsInGroupResponseBody::PaidDesktops> & getPaidDesktops() const { DARABONBA_PTR_GET_CONST(paidDesktops_, vector<DescribeDesktopsInGroupResponseBody::PaidDesktops>) };
    inline vector<DescribeDesktopsInGroupResponseBody::PaidDesktops> getPaidDesktops() { DARABONBA_PTR_GET(paidDesktops_, vector<DescribeDesktopsInGroupResponseBody::PaidDesktops>) };
    inline DescribeDesktopsInGroupResponseBody& setPaidDesktops(const vector<DescribeDesktopsInGroupResponseBody::PaidDesktops> & paidDesktops) { DARABONBA_PTR_SET_VALUE(paidDesktops_, paidDesktops) };
    inline DescribeDesktopsInGroupResponseBody& setPaidDesktops(vector<DescribeDesktopsInGroupResponseBody::PaidDesktops> && paidDesktops) { DARABONBA_PTR_SET_RVALUE(paidDesktops_, paidDesktops) };


    // paidDesktopsCount Field Functions 
    bool hasPaidDesktopsCount() const { return this->paidDesktopsCount_ != nullptr;};
    void deletePaidDesktopsCount() { this->paidDesktopsCount_ = nullptr;};
    inline int32_t getPaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(paidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setPaidDesktopsCount(int32_t paidDesktopsCount) { DARABONBA_PTR_SET_VALUE(paidDesktopsCount_, paidDesktopsCount) };


    // postPaidDesktops Field Functions 
    bool hasPostPaidDesktops() const { return this->postPaidDesktops_ != nullptr;};
    void deletePostPaidDesktops() { this->postPaidDesktops_ = nullptr;};
    inline const vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops> & getPostPaidDesktops() const { DARABONBA_PTR_GET_CONST(postPaidDesktops_, vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops>) };
    inline vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops> getPostPaidDesktops() { DARABONBA_PTR_GET(postPaidDesktops_, vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops>) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktops(const vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops> & postPaidDesktops) { DARABONBA_PTR_SET_VALUE(postPaidDesktops_, postPaidDesktops) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktops(vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops> && postPaidDesktops) { DARABONBA_PTR_SET_RVALUE(postPaidDesktops_, postPaidDesktops) };


    // postPaidDesktopsCount Field Functions 
    bool hasPostPaidDesktopsCount() const { return this->postPaidDesktopsCount_ != nullptr;};
    void deletePostPaidDesktopsCount() { this->postPaidDesktopsCount_ = nullptr;};
    inline int32_t getPostPaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktopsCount(int32_t postPaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(postPaidDesktopsCount_, postPaidDesktopsCount) };


    // postPaidDesktopsTotalAmount Field Functions 
    bool hasPostPaidDesktopsTotalAmount() const { return this->postPaidDesktopsTotalAmount_ != nullptr;};
    void deletePostPaidDesktopsTotalAmount() { this->postPaidDesktopsTotalAmount_ = nullptr;};
    inline int32_t getPostPaidDesktopsTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(postPaidDesktopsTotalAmount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktopsTotalAmount(int32_t postPaidDesktopsTotalAmount) { DARABONBA_PTR_SET_VALUE(postPaidDesktopsTotalAmount_, postPaidDesktopsTotalAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopsInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningPrePaidDesktopsCount Field Functions 
    bool hasRunningPrePaidDesktopsCount() const { return this->runningPrePaidDesktopsCount_ != nullptr;};
    void deleteRunningPrePaidDesktopsCount() { this->runningPrePaidDesktopsCount_ = nullptr;};
    inline int32_t getRunningPrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(runningPrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setRunningPrePaidDesktopsCount(int32_t runningPrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(runningPrePaidDesktopsCount_, runningPrePaidDesktopsCount) };


    // stopedPrePaidDesktopsCount Field Functions 
    bool hasStopedPrePaidDesktopsCount() const { return this->stopedPrePaidDesktopsCount_ != nullptr;};
    void deleteStopedPrePaidDesktopsCount() { this->stopedPrePaidDesktopsCount_ = nullptr;};
    inline int32_t getStopedPrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(stopedPrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setStopedPrePaidDesktopsCount(int32_t stopedPrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(stopedPrePaidDesktopsCount_, stopedPrePaidDesktopsCount) };


    // stoppedPrePaidDesktopsCount Field Functions 
    bool hasStoppedPrePaidDesktopsCount() const { return this->stoppedPrePaidDesktopsCount_ != nullptr;};
    void deleteStoppedPrePaidDesktopsCount() { this->stoppedPrePaidDesktopsCount_ = nullptr;};
    inline int32_t getStoppedPrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(stoppedPrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setStoppedPrePaidDesktopsCount(int32_t stoppedPrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(stoppedPrePaidDesktopsCount_, stoppedPrePaidDesktopsCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The number of subscription cloud computers that are in the Connected state.
    shared_ptr<int32_t> onlinePrePaidDesktopsCount_ {};
    // The subscription cloud computers.
    shared_ptr<vector<DescribeDesktopsInGroupResponseBody::PaidDesktops>> paidDesktops_ {};
    // The total number of subscription cloud computers.
    shared_ptr<int32_t> paidDesktopsCount_ {};
    // The pay-as-you-go cloud computers.
    shared_ptr<vector<DescribeDesktopsInGroupResponseBody::PostPaidDesktops>> postPaidDesktops_ {};
    // The total number of pay-as-you-go cloud computers.
    shared_ptr<int32_t> postPaidDesktopsCount_ {};
    // The total amount of bills for pay-as-you-go cloud computers.
    shared_ptr<int32_t> postPaidDesktopsTotalAmount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of subscription cloud computers that are in the Running state.
    shared_ptr<int32_t> runningPrePaidDesktopsCount_ {};
    // The number of subscription cloud computers that are in the Stopped state.
    shared_ptr<int32_t> stopedPrePaidDesktopsCount_ {};
    // The number of subscription cloud computers that are in the Stopped state.
    shared_ptr<int32_t> stoppedPrePaidDesktopsCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
