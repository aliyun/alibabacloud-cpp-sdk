// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODYEXPOSEDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCELISTRESPONSEBODYEXPOSEDINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceListResponseBodyExposedInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceListResponseBodyExposedInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AsapVulCount, asapVulCount_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CloudAssetInfo, cloudAssetInfo_);
      DARABONBA_PTR_TO_JSON(CspmAlarmCount, cspmAlarmCount_);
      DARABONBA_PTR_TO_JSON(ExploitHealthCount, exploitHealthCount_);
      DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_TO_JSON(ExposureComponentList, exposureComponentList_);
      DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_TO_JSON(ExposureType, exposureType_);
      DARABONBA_PTR_TO_JSON(ExposureTypeId, exposureTypeId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(LaterVulCount, laterVulCount_);
      DARABONBA_PTR_TO_JSON(NntfVulCount, nntfVulCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TotalVulCount, totalVulCount_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceListResponseBodyExposedInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AsapVulCount, asapVulCount_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CloudAssetInfo, cloudAssetInfo_);
      DARABONBA_PTR_FROM_JSON(CspmAlarmCount, cspmAlarmCount_);
      DARABONBA_PTR_FROM_JSON(ExploitHealthCount, exploitHealthCount_);
      DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
      DARABONBA_PTR_FROM_JSON(ExposureComponentList, exposureComponentList_);
      DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
      DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
      DARABONBA_PTR_FROM_JSON(ExposureType, exposureType_);
      DARABONBA_PTR_FROM_JSON(ExposureTypeId, exposureTypeId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(LaterVulCount, laterVulCount_);
      DARABONBA_PTR_FROM_JSON(NntfVulCount, nntfVulCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TotalVulCount, totalVulCount_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExposedInstanceListResponseBodyExposedInstances() = default ;
    DescribeExposedInstanceListResponseBodyExposedInstances(const DescribeExposedInstanceListResponseBodyExposedInstances &) = default ;
    DescribeExposedInstanceListResponseBodyExposedInstances(DescribeExposedInstanceListResponseBodyExposedInstances &&) = default ;
    DescribeExposedInstanceListResponseBodyExposedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceListResponseBodyExposedInstances() = default ;
    DescribeExposedInstanceListResponseBodyExposedInstances& operator=(const DescribeExposedInstanceListResponseBodyExposedInstances &) = default ;
    DescribeExposedInstanceListResponseBodyExposedInstances& operator=(DescribeExposedInstanceListResponseBodyExposedInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asapVulCount_ == nullptr
        && return this->assetType_ == nullptr && return this->cloudAssetInfo_ == nullptr && return this->cspmAlarmCount_ == nullptr && return this->exploitHealthCount_ == nullptr && return this->exposureComponent_ == nullptr
        && return this->exposureComponentList_ == nullptr && return this->exposureIp_ == nullptr && return this->exposurePort_ == nullptr && return this->exposureType_ == nullptr && return this->exposureTypeId_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr
        && return this->intranetIp_ == nullptr && return this->laterVulCount_ == nullptr && return this->nntfVulCount_ == nullptr && return this->regionId_ == nullptr && return this->totalVulCount_ == nullptr
        && return this->uuid_ == nullptr; };
    // asapVulCount Field Functions 
    bool hasAsapVulCount() const { return this->asapVulCount_ != nullptr;};
    void deleteAsapVulCount() { this->asapVulCount_ = nullptr;};
    inline int32_t asapVulCount() const { DARABONBA_PTR_GET_DEFAULT(asapVulCount_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setAsapVulCount(int32_t asapVulCount) { DARABONBA_PTR_SET_VALUE(asapVulCount_, asapVulCount) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline int32_t assetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // cloudAssetInfo Field Functions 
    bool hasCloudAssetInfo() const { return this->cloudAssetInfo_ != nullptr;};
    void deleteCloudAssetInfo() { this->cloudAssetInfo_ = nullptr;};
    inline string cloudAssetInfo() const { DARABONBA_PTR_GET_DEFAULT(cloudAssetInfo_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setCloudAssetInfo(string cloudAssetInfo) { DARABONBA_PTR_SET_VALUE(cloudAssetInfo_, cloudAssetInfo) };


    // cspmAlarmCount Field Functions 
    bool hasCspmAlarmCount() const { return this->cspmAlarmCount_ != nullptr;};
    void deleteCspmAlarmCount() { this->cspmAlarmCount_ = nullptr;};
    inline int32_t cspmAlarmCount() const { DARABONBA_PTR_GET_DEFAULT(cspmAlarmCount_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setCspmAlarmCount(int32_t cspmAlarmCount) { DARABONBA_PTR_SET_VALUE(cspmAlarmCount_, cspmAlarmCount) };


    // exploitHealthCount Field Functions 
    bool hasExploitHealthCount() const { return this->exploitHealthCount_ != nullptr;};
    void deleteExploitHealthCount() { this->exploitHealthCount_ = nullptr;};
    inline int32_t exploitHealthCount() const { DARABONBA_PTR_GET_DEFAULT(exploitHealthCount_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExploitHealthCount(int32_t exploitHealthCount) { DARABONBA_PTR_SET_VALUE(exploitHealthCount_, exploitHealthCount) };


    // exposureComponent Field Functions 
    bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
    void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
    inline string exposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


    // exposureComponentList Field Functions 
    bool hasExposureComponentList() const { return this->exposureComponentList_ != nullptr;};
    void deleteExposureComponentList() { this->exposureComponentList_ = nullptr;};
    inline const vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList> & exposureComponentList() const { DARABONBA_PTR_GET_CONST(exposureComponentList_, vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList>) };
    inline vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList> exposureComponentList() { DARABONBA_PTR_GET(exposureComponentList_, vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList>) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposureComponentList(const vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList> & exposureComponentList) { DARABONBA_PTR_SET_VALUE(exposureComponentList_, exposureComponentList) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposureComponentList(vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList> && exposureComponentList) { DARABONBA_PTR_SET_RVALUE(exposureComponentList_, exposureComponentList) };


    // exposureIp Field Functions 
    bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
    void deleteExposureIp() { this->exposureIp_ = nullptr;};
    inline string exposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


    // exposurePort Field Functions 
    bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
    void deleteExposurePort() { this->exposurePort_ = nullptr;};
    inline string exposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


    // exposureType Field Functions 
    bool hasExposureType() const { return this->exposureType_ != nullptr;};
    void deleteExposureType() { this->exposureType_ = nullptr;};
    inline string exposureType() const { DARABONBA_PTR_GET_DEFAULT(exposureType_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposureType(string exposureType) { DARABONBA_PTR_SET_VALUE(exposureType_, exposureType) };


    // exposureTypeId Field Functions 
    bool hasExposureTypeId() const { return this->exposureTypeId_ != nullptr;};
    void deleteExposureTypeId() { this->exposureTypeId_ = nullptr;};
    inline string exposureTypeId() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeId_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setExposureTypeId(string exposureTypeId) { DARABONBA_PTR_SET_VALUE(exposureTypeId_, exposureTypeId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // laterVulCount Field Functions 
    bool hasLaterVulCount() const { return this->laterVulCount_ != nullptr;};
    void deleteLaterVulCount() { this->laterVulCount_ = nullptr;};
    inline int32_t laterVulCount() const { DARABONBA_PTR_GET_DEFAULT(laterVulCount_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setLaterVulCount(int32_t laterVulCount) { DARABONBA_PTR_SET_VALUE(laterVulCount_, laterVulCount) };


    // nntfVulCount Field Functions 
    bool hasNntfVulCount() const { return this->nntfVulCount_ != nullptr;};
    void deleteNntfVulCount() { this->nntfVulCount_ = nullptr;};
    inline int32_t nntfVulCount() const { DARABONBA_PTR_GET_DEFAULT(nntfVulCount_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setNntfVulCount(int32_t nntfVulCount) { DARABONBA_PTR_SET_VALUE(nntfVulCount_, nntfVulCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // totalVulCount Field Functions 
    bool hasTotalVulCount() const { return this->totalVulCount_ != nullptr;};
    void deleteTotalVulCount() { this->totalVulCount_ = nullptr;};
    inline int32_t totalVulCount() const { DARABONBA_PTR_GET_DEFAULT(totalVulCount_, 0) };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setTotalVulCount(int32_t totalVulCount) { DARABONBA_PTR_SET_VALUE(totalVulCount_, totalVulCount) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExposedInstanceListResponseBodyExposedInstances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of high-severity vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> asapVulCount_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **0**: an ECS instance.
    // *   **1**: a SLB instance.
    // *   **2**: a NAT gateway.
    // *   **3**: an ApsaraDB RDS instance.
    // *   **4**: an ApsaraDB for MongoDB instance.
    // *   **5**: an ApsaraDB for Redis instance.
    // *   **6**: a container image.
    // *   **7**: a container.
    std::shared_ptr<int32_t> assetType_ = nullptr;
    // The JSON string that specifies the information about a database asset, which contains the following fields.
    // 
    // *   assetSubType: the asset subtype.
    // *   assetSubTypeName: the name of the asset subtype.
    // *   assetType: the type of the asset.
    // *   assetTypeName: the name of the asset type.
    // *   vendor: the service provider of the asset.
    std::shared_ptr<string> cloudAssetInfo_ = nullptr;
    // The number of CSPM risks.
    std::shared_ptr<int32_t> cspmAlarmCount_ = nullptr;
    // The number of weak password risks.
    std::shared_ptr<int32_t> exploitHealthCount_ = nullptr;
    // The server component that is exposed on the Internet.
    std::shared_ptr<string> exposureComponent_ = nullptr;
    // Expose component information list.
    std::shared_ptr<vector<Models::DescribeExposedInstanceListResponseBodyExposedInstancesExposureComponentList>> exposureComponentList_ = nullptr;
    // The public IP address that is exposed on the Internet.
    std::shared_ptr<string> exposureIp_ = nullptr;
    // The port that is exposed on the Internet.
    std::shared_ptr<string> exposurePort_ = nullptr;
    // The resource from which the asset is exposed. Valid values:
    // 
    // *   **INTERNET_IP**: the public IP address of an ECS instance.
    // *   **SLB**: the public IP address of a Server Load Balancer (SLB) instance.
    // *   **EIP**: an elastic IP address (EIP).
    // *   **DNAT**: the NAT gateway that connects to the Internet by using the Destination Network Address Translation (DNAT) feature.
    // *   **DB_CONNECTION**: the public endpoint of a database.
    std::shared_ptr<string> exposureType_ = nullptr;
    // The ID of the instance to which the resource belongs. The valid values of this parameter vary based on the value of the ExposureType parameter.
    // 
    // *   If the value of the ExposureType parameter is **INTERNET_IP**, this parameter is empty.
    // *   If the value of the ExposureType parameter is **SLB**, the value of this parameter is the ID of the SLB instance.
    // *   If the value of the ExposureType parameter is **EIP**, the value of this parameter is the ID of the EIP.
    // *   If the value of the ExposureType parameter is **DNAT**, the value of this parameter is the ID of the NAT gateway.
    // *   If the value of the ExposureType parameter is **DB_CONNECTION**, the value of this parameter is the ID of the database.
    std::shared_ptr<string> exposureTypeId_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the server group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The number of medium-severity vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> laterVulCount_ = nullptr;
    // The number of low-severity vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> nntfVulCount_ = nullptr;
    // The ID of the region in which the asset resides.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The total number of vulnerabilities that are exposed on the Internet and can be exploited by attackers.
    std::shared_ptr<int32_t> totalVulCount_ = nullptr;
    // The UUID of the server or the instance ID of the cloud service.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
