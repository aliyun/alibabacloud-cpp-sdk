// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClustersResponseBodyDataMaintenancePeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClustersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(CanUpdate, canUpdate_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InitStatus, initStatus_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetAddress, internetAddress_);
      DARABONBA_PTR_TO_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_TO_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_TO_JSON(MaintenancePeriod, maintenancePeriod_);
      DARABONBA_PTR_TO_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_TO_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(CanUpdate, canUpdate_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterAliasName, clusterAliasName_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InitStatus, initStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetAddress, internetAddress_);
      DARABONBA_PTR_FROM_JSON(InternetDomain, internetDomain_);
      DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetDomain, intranetDomain_);
      DARABONBA_PTR_FROM_JSON(MaintenancePeriod, maintenancePeriod_);
      DARABONBA_PTR_FROM_JSON(MseVersion, mseVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_FROM_JSON(VersionLifecycle, versionLifecycle_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListClustersResponseBodyData() = default ;
    ListClustersResponseBodyData(const ListClustersResponseBodyData &) = default ;
    ListClustersResponseBodyData(ListClustersResponseBodyData &&) = default ;
    ListClustersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyData() = default ;
    ListClustersResponseBodyData& operator=(const ListClustersResponseBodyData &) = default ;
    ListClustersResponseBodyData& operator=(ListClustersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersion_ == nullptr
        && return this->canUpdate_ == nullptr && return this->chargeType_ == nullptr && return this->clusterAliasName_ == nullptr && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr
        && return this->createTime_ == nullptr && return this->endDate_ == nullptr && return this->initStatus_ == nullptr && return this->instanceCount_ == nullptr && return this->instanceId_ == nullptr
        && return this->internetAddress_ == nullptr && return this->internetDomain_ == nullptr && return this->intranetAddress_ == nullptr && return this->intranetDomain_ == nullptr && return this->maintenancePeriod_ == nullptr
        && return this->mseVersion_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->versionCode_ == nullptr && return this->versionLifecycle_ == nullptr
        && return this->vpcId_ == nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListClustersResponseBodyData& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // canUpdate Field Functions 
    bool hasCanUpdate() const { return this->canUpdate_ != nullptr;};
    void deleteCanUpdate() { this->canUpdate_ = nullptr;};
    inline bool canUpdate() const { DARABONBA_PTR_GET_DEFAULT(canUpdate_, false) };
    inline ListClustersResponseBodyData& setCanUpdate(bool canUpdate) { DARABONBA_PTR_SET_VALUE(canUpdate_, canUpdate) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListClustersResponseBodyData& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterAliasName Field Functions 
    bool hasClusterAliasName() const { return this->clusterAliasName_ != nullptr;};
    void deleteClusterAliasName() { this->clusterAliasName_ = nullptr;};
    inline string clusterAliasName() const { DARABONBA_PTR_GET_DEFAULT(clusterAliasName_, "") };
    inline ListClustersResponseBodyData& setClusterAliasName(string clusterAliasName) { DARABONBA_PTR_SET_VALUE(clusterAliasName_, clusterAliasName) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClustersResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListClustersResponseBodyData& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListClustersResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListClustersResponseBodyData& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // initStatus Field Functions 
    bool hasInitStatus() const { return this->initStatus_ != nullptr;};
    void deleteInitStatus() { this->initStatus_ = nullptr;};
    inline string initStatus() const { DARABONBA_PTR_GET_DEFAULT(initStatus_, "") };
    inline ListClustersResponseBodyData& setInitStatus(string initStatus) { DARABONBA_PTR_SET_VALUE(initStatus_, initStatus) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline ListClustersResponseBodyData& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListClustersResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetAddress Field Functions 
    bool hasInternetAddress() const { return this->internetAddress_ != nullptr;};
    void deleteInternetAddress() { this->internetAddress_ = nullptr;};
    inline string internetAddress() const { DARABONBA_PTR_GET_DEFAULT(internetAddress_, "") };
    inline ListClustersResponseBodyData& setInternetAddress(string internetAddress) { DARABONBA_PTR_SET_VALUE(internetAddress_, internetAddress) };


    // internetDomain Field Functions 
    bool hasInternetDomain() const { return this->internetDomain_ != nullptr;};
    void deleteInternetDomain() { this->internetDomain_ = nullptr;};
    inline string internetDomain() const { DARABONBA_PTR_GET_DEFAULT(internetDomain_, "") };
    inline ListClustersResponseBodyData& setInternetDomain(string internetDomain) { DARABONBA_PTR_SET_VALUE(internetDomain_, internetDomain) };


    // intranetAddress Field Functions 
    bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
    void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
    inline string intranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
    inline ListClustersResponseBodyData& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


    // intranetDomain Field Functions 
    bool hasIntranetDomain() const { return this->intranetDomain_ != nullptr;};
    void deleteIntranetDomain() { this->intranetDomain_ = nullptr;};
    inline string intranetDomain() const { DARABONBA_PTR_GET_DEFAULT(intranetDomain_, "") };
    inline ListClustersResponseBodyData& setIntranetDomain(string intranetDomain) { DARABONBA_PTR_SET_VALUE(intranetDomain_, intranetDomain) };


    // maintenancePeriod Field Functions 
    bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
    void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
    inline const Models::ListClustersResponseBodyDataMaintenancePeriod & maintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Models::ListClustersResponseBodyDataMaintenancePeriod) };
    inline Models::ListClustersResponseBodyDataMaintenancePeriod maintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Models::ListClustersResponseBodyDataMaintenancePeriod) };
    inline ListClustersResponseBodyData& setMaintenancePeriod(const Models::ListClustersResponseBodyDataMaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
    inline ListClustersResponseBodyData& setMaintenancePeriod(Models::ListClustersResponseBodyDataMaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


    // mseVersion Field Functions 
    bool hasMseVersion() const { return this->mseVersion_ != nullptr;};
    void deleteMseVersion() { this->mseVersion_ = nullptr;};
    inline string mseVersion() const { DARABONBA_PTR_GET_DEFAULT(mseVersion_, "") };
    inline ListClustersResponseBodyData& setMseVersion(string mseVersion) { DARABONBA_PTR_SET_VALUE(mseVersion_, mseVersion) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClustersResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline ListClustersResponseBodyData& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListClustersResponseBodyData& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline ListClustersResponseBodyData& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionLifecycle Field Functions 
    bool hasVersionLifecycle() const { return this->versionLifecycle_ != nullptr;};
    void deleteVersionLifecycle() { this->versionLifecycle_ = nullptr;};
    inline string versionLifecycle() const { DARABONBA_PTR_GET_DEFAULT(versionLifecycle_, "") };
    inline ListClustersResponseBodyData& setVersionLifecycle(string versionLifecycle) { DARABONBA_PTR_SET_VALUE(versionLifecycle_, versionLifecycle) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListClustersResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The application version.
    std::shared_ptr<string> appVersion_ = nullptr;
    // Indicates whether the instance can be upgraded.
    std::shared_ptr<bool> canUpdate_ = nullptr;
    // The billing method, such as subscription or pay-as-you-go.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The alias of the cluster.
    std::shared_ptr<string> clusterAliasName_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The type of the cluster. Valid values: ZooKeeper, Nacos-Ans, and Eureka.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the cluster expires.
    std::shared_ptr<string> endDate_ = nullptr;
    // The initialization status of the instance.
    std::shared_ptr<string> initStatus_ = nullptr;
    // The number of clusters.
    std::shared_ptr<int64_t> instanceCount_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> internetAddress_ = nullptr;
    // The public endpoint.
    std::shared_ptr<string> internetDomain_ = nullptr;
    // The internal IP address.
    std::shared_ptr<string> intranetAddress_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> intranetDomain_ = nullptr;
    std::shared_ptr<Models::ListClustersResponseBodyDataMaintenancePeriod> maintenancePeriod_ = nullptr;
    // The edition of the cluster.
    std::shared_ptr<string> mseVersion_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags that are attached to the instance.
    Darabonba::Json tags_ = nullptr;
    // The version information.
    std::shared_ptr<string> versionCode_ = nullptr;
    std::shared_ptr<string> versionLifecycle_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
