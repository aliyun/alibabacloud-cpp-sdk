// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDCLOUDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDCLOUDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateHybridCloudGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridCloudGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackSourceMark, backSourceMark_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LoadBalanceIp, loadBalanceIp_);
      DARABONBA_PTR_TO_JSON(LocationCode, locationCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridCloudGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackSourceMark, backSourceMark_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LoadBalanceIp, loadBalanceIp_);
      DARABONBA_PTR_FROM_JSON(LocationCode, locationCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    CreateHybridCloudGroupRequest() = default ;
    CreateHybridCloudGroupRequest(const CreateHybridCloudGroupRequest &) = default ;
    CreateHybridCloudGroupRequest(CreateHybridCloudGroupRequest &&) = default ;
    CreateHybridCloudGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridCloudGroupRequest() = default ;
    CreateHybridCloudGroupRequest& operator=(const CreateHybridCloudGroupRequest &) = default ;
    CreateHybridCloudGroupRequest& operator=(CreateHybridCloudGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backSourceMark_ == nullptr
        && this->clusterId_ == nullptr && this->groupName_ == nullptr && this->groupType_ == nullptr && this->instanceId_ == nullptr && this->loadBalanceIp_ == nullptr
        && this->locationCode_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // backSourceMark Field Functions 
    bool hasBackSourceMark() const { return this->backSourceMark_ != nullptr;};
    void deleteBackSourceMark() { this->backSourceMark_ = nullptr;};
    inline string getBackSourceMark() const { DARABONBA_PTR_GET_DEFAULT(backSourceMark_, "") };
    inline CreateHybridCloudGroupRequest& setBackSourceMark(string backSourceMark) { DARABONBA_PTR_SET_VALUE(backSourceMark_, backSourceMark) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline CreateHybridCloudGroupRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateHybridCloudGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateHybridCloudGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHybridCloudGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // loadBalanceIp Field Functions 
    bool hasLoadBalanceIp() const { return this->loadBalanceIp_ != nullptr;};
    void deleteLoadBalanceIp() { this->loadBalanceIp_ = nullptr;};
    inline string getLoadBalanceIp() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceIp_, "") };
    inline CreateHybridCloudGroupRequest& setLoadBalanceIp(string loadBalanceIp) { DARABONBA_PTR_SET_VALUE(loadBalanceIp_, loadBalanceIp) };


    // locationCode Field Functions 
    bool hasLocationCode() const { return this->locationCode_ != nullptr;};
    void deleteLocationCode() { this->locationCode_ = nullptr;};
    inline string getLocationCode() const { DARABONBA_PTR_GET_DEFAULT(locationCode_, "") };
    inline CreateHybridCloudGroupRequest& setLocationCode(string locationCode) { DARABONBA_PTR_SET_VALUE(locationCode_, locationCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHybridCloudGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateHybridCloudGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline CreateHybridCloudGroupRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The region in which the node resides. Specify the parameter in the Carrier code-Continent code-City code format.
    shared_ptr<string> backSourceMark_ {};
    // The ID of the hybrid cloud cluster.
    // 
    // This parameter is required.
    shared_ptr<int64_t> clusterId_ {};
    // The name of the node group.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the node group. Valid values:
    // 
    // *   **protect**
    // *   **control**
    // *   **storage**
    // *   **controlStorage**
    // 
    // This parameter is required.
    shared_ptr<string> groupType_ {};
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IP address of the server used for load balancing.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalanceIp_ {};
    // The region in which the node resides. Specify the parameter in the Carrier code-Continent code-City code format.
    shared_ptr<string> locationCode_ {};
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The remarks.
    shared_ptr<string> remark_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
