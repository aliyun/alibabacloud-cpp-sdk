// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODYWUYINGSERVERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWUYINGSERVERRESPONSEBODYWUYINGSERVERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWuyingServerResponseBodyWuyingServerListDataDisk.hpp>
#include <alibabacloud/models/ListWuyingServerResponseBodyWuyingServerListInstanceInfoList.hpp>
#include <alibabacloud/models/ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListWuyingServerResponseBodyWuyingServerList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWuyingServerResponseBodyWuyingServerList& obj) { 
      DARABONBA_PTR_TO_JSON(AddVirtualNodePoolStatus, addVirtualNodePoolStatus_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InstanceInfoList, instanceInfoList_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ServerInstanceTypeInfo, serverInstanceTypeInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(VirtualNodePoolId, virtualNodePoolId_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
      DARABONBA_PTR_TO_JSON(WuyingServerName, wuyingServerName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWuyingServerResponseBodyWuyingServerList& obj) { 
      DARABONBA_PTR_FROM_JSON(AddVirtualNodePoolStatus, addVirtualNodePoolStatus_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InstanceInfoList, instanceInfoList_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServerInstanceTypeInfo, serverInstanceTypeInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(VirtualNodePoolId, virtualNodePoolId_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
      DARABONBA_PTR_FROM_JSON(WuyingServerName, wuyingServerName_);
    };
    ListWuyingServerResponseBodyWuyingServerList() = default ;
    ListWuyingServerResponseBodyWuyingServerList(const ListWuyingServerResponseBodyWuyingServerList &) = default ;
    ListWuyingServerResponseBodyWuyingServerList(ListWuyingServerResponseBodyWuyingServerList &&) = default ;
    ListWuyingServerResponseBodyWuyingServerList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWuyingServerResponseBodyWuyingServerList() = default ;
    ListWuyingServerResponseBodyWuyingServerList& operator=(const ListWuyingServerResponseBodyWuyingServerList &) = default ;
    ListWuyingServerResponseBodyWuyingServerList& operator=(ListWuyingServerResponseBodyWuyingServerList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addVirtualNodePoolStatus_ == nullptr
        && return this->bizRegionId_ == nullptr && return this->chargeType_ == nullptr && return this->createTime_ == nullptr && return this->dataDisk_ == nullptr && return this->expiredTime_ == nullptr
        && return this->imageId_ == nullptr && return this->imageName_ == nullptr && return this->instanceInfoList_ == nullptr && return this->networkInterfaceIp_ == nullptr && return this->officeSiteId_ == nullptr
        && return this->officeSiteName_ == nullptr && return this->officeSiteType_ == nullptr && return this->osType_ == nullptr && return this->securityGroupIds_ == nullptr && return this->serverInstanceTypeInfo_ == nullptr
        && return this->status_ == nullptr && return this->systemDiskCategory_ == nullptr && return this->systemDiskPerformanceLevel_ == nullptr && return this->systemDiskSize_ == nullptr && return this->virtualNodePoolId_ == nullptr
        && return this->wuyingServerId_ == nullptr && return this->wuyingServerName_ == nullptr; };
    // addVirtualNodePoolStatus Field Functions 
    bool hasAddVirtualNodePoolStatus() const { return this->addVirtualNodePoolStatus_ != nullptr;};
    void deleteAddVirtualNodePoolStatus() { this->addVirtualNodePoolStatus_ = nullptr;};
    inline string addVirtualNodePoolStatus() const { DARABONBA_PTR_GET_DEFAULT(addVirtualNodePoolStatus_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setAddVirtualNodePoolStatus(string addVirtualNodePoolStatus) { DARABONBA_PTR_SET_VALUE(addVirtualNodePoolStatus_, addVirtualNodePoolStatus) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk>) };
    inline vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk>) };
    inline ListWuyingServerResponseBodyWuyingServerList& setDataDisk(const vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline ListWuyingServerResponseBodyWuyingServerList& setDataDisk(vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceInfoList Field Functions 
    bool hasInstanceInfoList() const { return this->instanceInfoList_ != nullptr;};
    void deleteInstanceInfoList() { this->instanceInfoList_ = nullptr;};
    inline const vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList> & instanceInfoList() const { DARABONBA_PTR_GET_CONST(instanceInfoList_, vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList>) };
    inline vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList> instanceInfoList() { DARABONBA_PTR_GET(instanceInfoList_, vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList>) };
    inline ListWuyingServerResponseBodyWuyingServerList& setInstanceInfoList(const vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList> & instanceInfoList) { DARABONBA_PTR_SET_VALUE(instanceInfoList_, instanceInfoList) };
    inline ListWuyingServerResponseBodyWuyingServerList& setInstanceInfoList(vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList> && instanceInfoList) { DARABONBA_PTR_SET_RVALUE(instanceInfoList_, instanceInfoList) };


    // networkInterfaceIp Field Functions 
    bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
    void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
    inline string networkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ListWuyingServerResponseBodyWuyingServerList& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ListWuyingServerResponseBodyWuyingServerList& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serverInstanceTypeInfo Field Functions 
    bool hasServerInstanceTypeInfo() const { return this->serverInstanceTypeInfo_ != nullptr;};
    void deleteServerInstanceTypeInfo() { this->serverInstanceTypeInfo_ = nullptr;};
    inline const Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo & serverInstanceTypeInfo() const { DARABONBA_PTR_GET_CONST(serverInstanceTypeInfo_, Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo) };
    inline Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo serverInstanceTypeInfo() { DARABONBA_PTR_GET(serverInstanceTypeInfo_, Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo) };
    inline ListWuyingServerResponseBodyWuyingServerList& setServerInstanceTypeInfo(const Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo & serverInstanceTypeInfo) { DARABONBA_PTR_SET_VALUE(serverInstanceTypeInfo_, serverInstanceTypeInfo) };
    inline ListWuyingServerResponseBodyWuyingServerList& setServerInstanceTypeInfo(Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo && serverInstanceTypeInfo) { DARABONBA_PTR_SET_RVALUE(serverInstanceTypeInfo_, serverInstanceTypeInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline ListWuyingServerResponseBodyWuyingServerList& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // virtualNodePoolId Field Functions 
    bool hasVirtualNodePoolId() const { return this->virtualNodePoolId_ != nullptr;};
    void deleteVirtualNodePoolId() { this->virtualNodePoolId_ = nullptr;};
    inline string virtualNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(virtualNodePoolId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setVirtualNodePoolId(string virtualNodePoolId) { DARABONBA_PTR_SET_VALUE(virtualNodePoolId_, virtualNodePoolId) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string wuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


    // wuyingServerName Field Functions 
    bool hasWuyingServerName() const { return this->wuyingServerName_ != nullptr;};
    void deleteWuyingServerName() { this->wuyingServerName_ = nullptr;};
    inline string wuyingServerName() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerName_, "") };
    inline ListWuyingServerResponseBodyWuyingServerList& setWuyingServerName(string wuyingServerName) { DARABONBA_PTR_SET_VALUE(wuyingServerName_, wuyingServerName) };


  protected:
    std::shared_ptr<string> addVirtualNodePoolStatus_ = nullptr;
    // Region.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the storage resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The data disks.
    std::shared_ptr<vector<Models::ListWuyingServerResponseBodyWuyingServerListDataDisk>> dataDisk_ = nullptr;
    // The time when the subscription instance expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The ID of the custom image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The list of information about the workstation instance.
    std::shared_ptr<vector<Models::ListWuyingServerResponseBodyWuyingServerListInstanceInfoList>> instanceInfoList_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> networkInterfaceIp_ = nullptr;
    // The ID of the office network.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The office network name.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The type of the office network.
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The OS type.
    std::shared_ptr<string> osType_ = nullptr;
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The specifications.
    std::shared_ptr<Models::ListWuyingServerResponseBodyWuyingServerListServerInstanceTypeInfo> serverInstanceTypeInfo_ = nullptr;
    // The status of the workstation.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the system disk.
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    // The performance level (PL) of the system disk.
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    std::shared_ptr<string> virtualNodePoolId_ = nullptr;
    // The ID of the workstation.
    std::shared_ptr<string> wuyingServerId_ = nullptr;
    // The name of the workstation.
    std::shared_ptr<string> wuyingServerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
