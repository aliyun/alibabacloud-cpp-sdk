// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPRESPONSEBODYPAIDDESKTOPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPRESPONSEBODYPAIDDESKTOPS_HPP_
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
  class DescribeDesktopsInGroupResponseBodyPaidDesktops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsInGroupResponseBodyPaidDesktops& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsInGroupResponseBodyPaidDesktops& obj) { 
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
    DescribeDesktopsInGroupResponseBodyPaidDesktops() = default ;
    DescribeDesktopsInGroupResponseBodyPaidDesktops(const DescribeDesktopsInGroupResponseBodyPaidDesktops &) = default ;
    DescribeDesktopsInGroupResponseBodyPaidDesktops(DescribeDesktopsInGroupResponseBodyPaidDesktops &&) = default ;
    DescribeDesktopsInGroupResponseBodyPaidDesktops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsInGroupResponseBodyPaidDesktops() = default ;
    DescribeDesktopsInGroupResponseBodyPaidDesktops& operator=(const DescribeDesktopsInGroupResponseBodyPaidDesktops &) = default ;
    DescribeDesktopsInGroupResponseBodyPaidDesktops& operator=(DescribeDesktopsInGroupResponseBodyPaidDesktops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStatus_ != nullptr
        && this->desktopId_ != nullptr && this->desktopName_ != nullptr && this->desktopStatus_ != nullptr && this->diskType_ != nullptr && this->endUserId_ != nullptr
        && this->endUserIds_ != nullptr && this->endUserName_ != nullptr && this->endUserNames_ != nullptr && this->expiredTime_ != nullptr && this->fotaVersion_ != nullptr
        && this->gpuDriverVersion_ != nullptr && this->imageId_ != nullptr && this->imageName_ != nullptr && this->managementFlag_ != nullptr && this->managementFlags_ != nullptr
        && this->memberEniIp_ != nullptr && this->osType_ != nullptr && this->primaryEniIp_ != nullptr && this->protocolType_ != nullptr && this->resetTime_ != nullptr
        && this->systemDiskSize_ != nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // desktopStatus Field Functions 
    bool hasDesktopStatus() const { return this->desktopStatus_ != nullptr;};
    void deleteDesktopStatus() { this->desktopStatus_ = nullptr;};
    inline string desktopStatus() const { DARABONBA_PTR_GET_DEFAULT(desktopStatus_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setDesktopStatus(string desktopStatus) { DARABONBA_PTR_SET_VALUE(desktopStatus_, desktopStatus) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // endUserName Field Functions 
    bool hasEndUserName() const { return this->endUserName_ != nullptr;};
    void deleteEndUserName() { this->endUserName_ = nullptr;};
    inline string endUserName() const { DARABONBA_PTR_GET_DEFAULT(endUserName_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setEndUserName(string endUserName) { DARABONBA_PTR_SET_VALUE(endUserName_, endUserName) };


    // endUserNames Field Functions 
    bool hasEndUserNames() const { return this->endUserNames_ != nullptr;};
    void deleteEndUserNames() { this->endUserNames_ = nullptr;};
    inline const vector<string> & endUserNames() const { DARABONBA_PTR_GET_CONST(endUserNames_, vector<string>) };
    inline vector<string> endUserNames() { DARABONBA_PTR_GET(endUserNames_, vector<string>) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setEndUserNames(const vector<string> & endUserNames) { DARABONBA_PTR_SET_VALUE(endUserNames_, endUserNames) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setEndUserNames(vector<string> && endUserNames) { DARABONBA_PTR_SET_RVALUE(endUserNames_, endUserNames) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fotaVersion Field Functions 
    bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
    void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
    inline string fotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // managementFlag Field Functions 
    bool hasManagementFlag() const { return this->managementFlag_ != nullptr;};
    void deleteManagementFlag() { this->managementFlag_ = nullptr;};
    inline string managementFlag() const { DARABONBA_PTR_GET_DEFAULT(managementFlag_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setManagementFlag(string managementFlag) { DARABONBA_PTR_SET_VALUE(managementFlag_, managementFlag) };


    // managementFlags Field Functions 
    bool hasManagementFlags() const { return this->managementFlags_ != nullptr;};
    void deleteManagementFlags() { this->managementFlags_ = nullptr;};
    inline const vector<string> & managementFlags() const { DARABONBA_PTR_GET_CONST(managementFlags_, vector<string>) };
    inline vector<string> managementFlags() { DARABONBA_PTR_GET(managementFlags_, vector<string>) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setManagementFlags(const vector<string> & managementFlags) { DARABONBA_PTR_SET_VALUE(managementFlags_, managementFlags) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setManagementFlags(vector<string> && managementFlags) { DARABONBA_PTR_SET_RVALUE(managementFlags_, managementFlags) };


    // memberEniIp Field Functions 
    bool hasMemberEniIp() const { return this->memberEniIp_ != nullptr;};
    void deleteMemberEniIp() { this->memberEniIp_ = nullptr;};
    inline string memberEniIp() const { DARABONBA_PTR_GET_DEFAULT(memberEniIp_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setMemberEniIp(string memberEniIp) { DARABONBA_PTR_SET_VALUE(memberEniIp_, memberEniIp) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // primaryEniIp Field Functions 
    bool hasPrimaryEniIp() const { return this->primaryEniIp_ != nullptr;};
    void deletePrimaryEniIp() { this->primaryEniIp_ = nullptr;};
    inline string primaryEniIp() const { DARABONBA_PTR_GET_DEFAULT(primaryEniIp_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setPrimaryEniIp(string primaryEniIp) { DARABONBA_PTR_SET_VALUE(primaryEniIp_, primaryEniIp) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // resetTime Field Functions 
    bool hasResetTime() const { return this->resetTime_ != nullptr;};
    void deleteResetTime() { this->resetTime_ = nullptr;};
    inline string resetTime() const { DARABONBA_PTR_GET_DEFAULT(resetTime_, "") };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setResetTime(string resetTime) { DARABONBA_PTR_SET_VALUE(resetTime_, resetTime) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeDesktopsInGroupResponseBodyPaidDesktops& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


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
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The name of the cloud computer.
    std::shared_ptr<string> desktopName_ = nullptr;
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
    std::shared_ptr<string> desktopStatus_ = nullptr;
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
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the authorized user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The IDs of the end users who are connected to the cloud computers in the cloud computer share. If no end users are connected, no values are returned for this parameter.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The username of the authorized user.
    std::shared_ptr<string> endUserName_ = nullptr;
    // The usernames of the end users who are connected to the cloud computers in the cloud computer share. If no end users are connected, no values are returned for this parameter.
    std::shared_ptr<vector<string>> endUserNames_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The image version.
    std::shared_ptr<string> fotaVersion_ = nullptr;
    // The version of the GPU driver.
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
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
    std::shared_ptr<string> managementFlag_ = nullptr;
    // The flags that are used to manage the cloud computers.
    std::shared_ptr<vector<string>> managementFlags_ = nullptr;
    // The IP address of the member network interface controller (NIC) of the instance.
    std::shared_ptr<string> memberEniIp_ = nullptr;
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
    std::shared_ptr<string> osType_ = nullptr;
    // The IP address of the primary NIC of the instance.
    std::shared_ptr<string> primaryEniIp_ = nullptr;
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
    std::shared_ptr<string> protocolType_ = nullptr;
    // The time when the cloud computer was reset.
    std::shared_ptr<string> resetTime_ = nullptr;
    // The system disk size. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
