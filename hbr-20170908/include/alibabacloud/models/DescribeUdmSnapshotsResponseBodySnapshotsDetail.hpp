// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSEBODYSNAPSHOTSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSRESPONSEBODYSNAPSHOTSDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeUdmSnapshotsResponseBodySnapshotsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdmSnapshotsResponseBodySnapshotsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ConsistentLevel, consistentLevel_);
      DARABONBA_PTR_TO_JSON(ContainOsDisk, containOsDisk_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskDevName, diskDevName_);
      DARABONBA_ANY_TO_JSON(DiskHbrSnapshotIdWithDeviceMap, diskHbrSnapshotIdWithDeviceMap_);
      DARABONBA_PTR_TO_JSON(DiskIdList, diskIdList_);
      DARABONBA_PTR_TO_JSON(DowngradeReason, downgradeReason_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_ANY_TO_JSON(InstanceIdWithDiskIdListMap, instanceIdWithDiskIdListMap_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(NativeSnapshotIdList, nativeSnapshotIdList_);
      DARABONBA_PTR_TO_JSON(OsDiskId, osDiskId_);
      DARABONBA_PTR_TO_JSON(OsName, osName_);
      DARABONBA_PTR_TO_JSON(OsNameEn, osNameEn_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SnapshotGroupId, snapshotGroupId_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(VmName, vmName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdmSnapshotsResponseBodySnapshotsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsistentLevel, consistentLevel_);
      DARABONBA_PTR_FROM_JSON(ContainOsDisk, containOsDisk_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskDevName, diskDevName_);
      DARABONBA_ANY_FROM_JSON(DiskHbrSnapshotIdWithDeviceMap, diskHbrSnapshotIdWithDeviceMap_);
      DARABONBA_PTR_FROM_JSON(DiskIdList, diskIdList_);
      DARABONBA_PTR_FROM_JSON(DowngradeReason, downgradeReason_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_ANY_FROM_JSON(InstanceIdWithDiskIdListMap, instanceIdWithDiskIdListMap_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(NativeSnapshotIdList, nativeSnapshotIdList_);
      DARABONBA_PTR_FROM_JSON(OsDiskId, osDiskId_);
      DARABONBA_PTR_FROM_JSON(OsName, osName_);
      DARABONBA_PTR_FROM_JSON(OsNameEn, osNameEn_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SnapshotGroupId, snapshotGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(VmName, vmName_);
    };
    DescribeUdmSnapshotsResponseBodySnapshotsDetail() = default ;
    DescribeUdmSnapshotsResponseBodySnapshotsDetail(const DescribeUdmSnapshotsResponseBodySnapshotsDetail &) = default ;
    DescribeUdmSnapshotsResponseBodySnapshotsDetail(DescribeUdmSnapshotsResponseBodySnapshotsDetail &&) = default ;
    DescribeUdmSnapshotsResponseBodySnapshotsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdmSnapshotsResponseBodySnapshotsDetail() = default ;
    DescribeUdmSnapshotsResponseBodySnapshotsDetail& operator=(const DescribeUdmSnapshotsResponseBodySnapshotsDetail &) = default ;
    DescribeUdmSnapshotsResponseBodySnapshotsDetail& operator=(DescribeUdmSnapshotsResponseBodySnapshotsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consistentLevel_ != nullptr
        && this->containOsDisk_ != nullptr && this->diskCategory_ != nullptr && this->diskDevName_ != nullptr && this->diskHbrSnapshotIdWithDeviceMap_ != nullptr && this->diskIdList_ != nullptr
        && this->downgradeReason_ != nullptr && this->hostName_ != nullptr && this->instanceIdWithDiskIdListMap_ != nullptr && this->instanceName_ != nullptr && this->instanceType_ != nullptr
        && this->instantAccess_ != nullptr && this->nativeSnapshotIdList_ != nullptr && this->osDiskId_ != nullptr && this->osName_ != nullptr && this->osNameEn_ != nullptr
        && this->osType_ != nullptr && this->performanceLevel_ != nullptr && this->platform_ != nullptr && this->snapshotGroupId_ != nullptr && this->systemDisk_ != nullptr
        && this->vmName_ != nullptr; };
    // consistentLevel Field Functions 
    bool hasConsistentLevel() const { return this->consistentLevel_ != nullptr;};
    void deleteConsistentLevel() { this->consistentLevel_ = nullptr;};
    inline string consistentLevel() const { DARABONBA_PTR_GET_DEFAULT(consistentLevel_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setConsistentLevel(string consistentLevel) { DARABONBA_PTR_SET_VALUE(consistentLevel_, consistentLevel) };


    // containOsDisk Field Functions 
    bool hasContainOsDisk() const { return this->containOsDisk_ != nullptr;};
    void deleteContainOsDisk() { this->containOsDisk_ = nullptr;};
    inline bool containOsDisk() const { DARABONBA_PTR_GET_DEFAULT(containOsDisk_, false) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setContainOsDisk(bool containOsDisk) { DARABONBA_PTR_SET_VALUE(containOsDisk_, containOsDisk) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskDevName Field Functions 
    bool hasDiskDevName() const { return this->diskDevName_ != nullptr;};
    void deleteDiskDevName() { this->diskDevName_ = nullptr;};
    inline string diskDevName() const { DARABONBA_PTR_GET_DEFAULT(diskDevName_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDiskDevName(string diskDevName) { DARABONBA_PTR_SET_VALUE(diskDevName_, diskDevName) };


    // diskHbrSnapshotIdWithDeviceMap Field Functions 
    bool hasDiskHbrSnapshotIdWithDeviceMap() const { return this->diskHbrSnapshotIdWithDeviceMap_ != nullptr;};
    void deleteDiskHbrSnapshotIdWithDeviceMap() { this->diskHbrSnapshotIdWithDeviceMap_ = nullptr;};
    inline     const Darabonba::Json & diskHbrSnapshotIdWithDeviceMap() const { DARABONBA_GET(diskHbrSnapshotIdWithDeviceMap_) };
    Darabonba::Json & diskHbrSnapshotIdWithDeviceMap() { DARABONBA_GET(diskHbrSnapshotIdWithDeviceMap_) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDiskHbrSnapshotIdWithDeviceMap(const Darabonba::Json & diskHbrSnapshotIdWithDeviceMap) { DARABONBA_SET_VALUE(diskHbrSnapshotIdWithDeviceMap_, diskHbrSnapshotIdWithDeviceMap) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDiskHbrSnapshotIdWithDeviceMap(Darabonba::Json & diskHbrSnapshotIdWithDeviceMap) { DARABONBA_SET_RVALUE(diskHbrSnapshotIdWithDeviceMap_, diskHbrSnapshotIdWithDeviceMap) };


    // diskIdList Field Functions 
    bool hasDiskIdList() const { return this->diskIdList_ != nullptr;};
    void deleteDiskIdList() { this->diskIdList_ = nullptr;};
    inline const vector<string> & diskIdList() const { DARABONBA_PTR_GET_CONST(diskIdList_, vector<string>) };
    inline vector<string> diskIdList() { DARABONBA_PTR_GET(diskIdList_, vector<string>) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDiskIdList(const vector<string> & diskIdList) { DARABONBA_PTR_SET_VALUE(diskIdList_, diskIdList) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDiskIdList(vector<string> && diskIdList) { DARABONBA_PTR_SET_RVALUE(diskIdList_, diskIdList) };


    // downgradeReason Field Functions 
    bool hasDowngradeReason() const { return this->downgradeReason_ != nullptr;};
    void deleteDowngradeReason() { this->downgradeReason_ = nullptr;};
    inline string downgradeReason() const { DARABONBA_PTR_GET_DEFAULT(downgradeReason_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setDowngradeReason(string downgradeReason) { DARABONBA_PTR_SET_VALUE(downgradeReason_, downgradeReason) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceIdWithDiskIdListMap Field Functions 
    bool hasInstanceIdWithDiskIdListMap() const { return this->instanceIdWithDiskIdListMap_ != nullptr;};
    void deleteInstanceIdWithDiskIdListMap() { this->instanceIdWithDiskIdListMap_ = nullptr;};
    inline     const Darabonba::Json & instanceIdWithDiskIdListMap() const { DARABONBA_GET(instanceIdWithDiskIdListMap_) };
    Darabonba::Json & instanceIdWithDiskIdListMap() { DARABONBA_GET(instanceIdWithDiskIdListMap_) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setInstanceIdWithDiskIdListMap(const Darabonba::Json & instanceIdWithDiskIdListMap) { DARABONBA_SET_VALUE(instanceIdWithDiskIdListMap_, instanceIdWithDiskIdListMap) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setInstanceIdWithDiskIdListMap(Darabonba::Json & instanceIdWithDiskIdListMap) { DARABONBA_SET_RVALUE(instanceIdWithDiskIdListMap_, instanceIdWithDiskIdListMap) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool instantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // nativeSnapshotIdList Field Functions 
    bool hasNativeSnapshotIdList() const { return this->nativeSnapshotIdList_ != nullptr;};
    void deleteNativeSnapshotIdList() { this->nativeSnapshotIdList_ = nullptr;};
    inline const vector<string> & nativeSnapshotIdList() const { DARABONBA_PTR_GET_CONST(nativeSnapshotIdList_, vector<string>) };
    inline vector<string> nativeSnapshotIdList() { DARABONBA_PTR_GET(nativeSnapshotIdList_, vector<string>) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setNativeSnapshotIdList(const vector<string> & nativeSnapshotIdList) { DARABONBA_PTR_SET_VALUE(nativeSnapshotIdList_, nativeSnapshotIdList) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setNativeSnapshotIdList(vector<string> && nativeSnapshotIdList) { DARABONBA_PTR_SET_RVALUE(nativeSnapshotIdList_, nativeSnapshotIdList) };


    // osDiskId Field Functions 
    bool hasOsDiskId() const { return this->osDiskId_ != nullptr;};
    void deleteOsDiskId() { this->osDiskId_ = nullptr;};
    inline string osDiskId() const { DARABONBA_PTR_GET_DEFAULT(osDiskId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setOsDiskId(string osDiskId) { DARABONBA_PTR_SET_VALUE(osDiskId_, osDiskId) };


    // osName Field Functions 
    bool hasOsName() const { return this->osName_ != nullptr;};
    void deleteOsName() { this->osName_ = nullptr;};
    inline string osName() const { DARABONBA_PTR_GET_DEFAULT(osName_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setOsName(string osName) { DARABONBA_PTR_SET_VALUE(osName_, osName) };


    // osNameEn Field Functions 
    bool hasOsNameEn() const { return this->osNameEn_ != nullptr;};
    void deleteOsNameEn() { this->osNameEn_ = nullptr;};
    inline string osNameEn() const { DARABONBA_PTR_GET_DEFAULT(osNameEn_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setOsNameEn(string osNameEn) { DARABONBA_PTR_SET_VALUE(osNameEn_, osNameEn) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // snapshotGroupId Field Functions 
    bool hasSnapshotGroupId() const { return this->snapshotGroupId_ != nullptr;};
    void deleteSnapshotGroupId() { this->snapshotGroupId_ = nullptr;};
    inline string snapshotGroupId() const { DARABONBA_PTR_GET_DEFAULT(snapshotGroupId_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setSnapshotGroupId(string snapshotGroupId) { DARABONBA_PTR_SET_VALUE(snapshotGroupId_, snapshotGroupId) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline bool systemDisk() const { DARABONBA_PTR_GET_DEFAULT(systemDisk_, false) };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setSystemDisk(bool systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };


    // vmName Field Functions 
    bool hasVmName() const { return this->vmName_ != nullptr;};
    void deleteVmName() { this->vmName_ = nullptr;};
    inline string vmName() const { DARABONBA_PTR_GET_DEFAULT(vmName_, "") };
    inline DescribeUdmSnapshotsResponseBodySnapshotsDetail& setVmName(string vmName) { DARABONBA_PTR_SET_VALUE(vmName_, vmName) };


  protected:
    // The consistency level.
    std::shared_ptr<string> consistentLevel_ = nullptr;
    // Indicates whether the system disk is included.
    std::shared_ptr<bool> containOsDisk_ = nullptr;
    // The type of the source disk.
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The name of the disk.
    std::shared_ptr<string> diskDevName_ = nullptr;
    // The mapping between the device and the recovery point ID.
    Darabonba::Json diskHbrSnapshotIdWithDeviceMap_ = nullptr;
    // The IDs of the disks that are backed up at the recovery point.
    std::shared_ptr<vector<string>> diskIdList_ = nullptr;
    // The reason for the downgrade.
    std::shared_ptr<string> downgradeReason_ = nullptr;
    // The hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The mapping between the instance ID and the disk ID.
    Darabonba::Json instanceIdWithDiskIdListMap_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The specifications of the source instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Indicates whether the backup is created by the instant clone feature.
    std::shared_ptr<bool> instantAccess_ = nullptr;
    // The list of snapshot IDs, corresponding to DiskIdList.
    std::shared_ptr<vector<string>> nativeSnapshotIdList_ = nullptr;
    // The ID of the system disk.
    std::shared_ptr<string> osDiskId_ = nullptr;
    // The name of the operating system.
    std::shared_ptr<string> osName_ = nullptr;
    // The English name of the operating system.
    std::shared_ptr<string> osNameEn_ = nullptr;
    // The type of the operating system. Valid values: linux and windows.
    std::shared_ptr<string> osType_ = nullptr;
    // The performance level of the source disk.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The system platform.
    std::shared_ptr<string> platform_ = nullptr;
    // The ID of the snapshot group.
    std::shared_ptr<string> snapshotGroupId_ = nullptr;
    // Indicates whether the disk is a system disk.
    std::shared_ptr<bool> systemDisk_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> vmName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
