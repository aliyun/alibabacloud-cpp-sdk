// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListInstanceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsModification, isModification_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(DeployMode, deployMode_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsModification, isModification_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListInstanceTypesRequest() = default ;
    ListInstanceTypesRequest(const ListInstanceTypesRequest &) = default ;
    ListInstanceTypesRequest(ListInstanceTypesRequest &&) = default ;
    ListInstanceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceTypesRequest() = default ;
    ListInstanceTypesRequest& operator=(const ListInstanceTypesRequest &) = default ;
    ListInstanceTypesRequest& operator=(ListInstanceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->clusterType_ == nullptr && this->deployMode_ == nullptr && this->instanceType_ == nullptr && this->isModification_ == nullptr && this->nodeGroupId_ == nullptr
        && this->nodeGroupType_ == nullptr && this->paymentType_ == nullptr && this->regionId_ == nullptr && this->releaseVersion_ == nullptr && this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListInstanceTypesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListInstanceTypesRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // deployMode Field Functions 
    bool hasDeployMode() const { return this->deployMode_ != nullptr;};
    void deleteDeployMode() { this->deployMode_ = nullptr;};
    inline string getDeployMode() const { DARABONBA_PTR_GET_DEFAULT(deployMode_, "") };
    inline ListInstanceTypesRequest& setDeployMode(string deployMode) { DARABONBA_PTR_SET_VALUE(deployMode_, deployMode) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstanceTypesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isModification Field Functions 
    bool hasIsModification() const { return this->isModification_ != nullptr;};
    void deleteIsModification() { this->isModification_ = nullptr;};
    inline bool getIsModification() const { DARABONBA_PTR_GET_DEFAULT(isModification_, false) };
    inline ListInstanceTypesRequest& setIsModification(bool isModification) { DARABONBA_PTR_SET_VALUE(isModification_, isModification) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListInstanceTypesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string getNodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline ListInstanceTypesRequest& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstanceTypesRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ListInstanceTypesRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListInstanceTypesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The cluster type.
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // Specifies the deployment mode.
    shared_ptr<string> deployMode_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // Specifies whether the instance type is for an instance type change. A value of true indicates an instance type change.
    shared_ptr<bool> isModification_ {};
    // The node group ID.
    shared_ptr<string> nodeGroupId_ {};
    // The node group type.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupType_ {};
    // The billing method.
    // 
    // This parameter is required.
    shared_ptr<string> paymentType_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The EMR release version.
    shared_ptr<string> releaseVersion_ {};
    // The zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
