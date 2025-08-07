// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDGROUPSHRINKSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDCLOUDGROUPSHRINKSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyHybridCloudGroupShrinkServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridCloudGroupShrinkServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mids, mids_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridCloudGroupShrinkServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mids, mids_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    ModifyHybridCloudGroupShrinkServerRequest() = default ;
    ModifyHybridCloudGroupShrinkServerRequest(const ModifyHybridCloudGroupShrinkServerRequest &) = default ;
    ModifyHybridCloudGroupShrinkServerRequest(ModifyHybridCloudGroupShrinkServerRequest &&) = default ;
    ModifyHybridCloudGroupShrinkServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridCloudGroupShrinkServerRequest() = default ;
    ModifyHybridCloudGroupShrinkServerRequest& operator=(const ModifyHybridCloudGroupShrinkServerRequest &) = default ;
    ModifyHybridCloudGroupShrinkServerRequest& operator=(ModifyHybridCloudGroupShrinkServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->groupId_ != nullptr && this->instanceId_ != nullptr && this->mids_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline ModifyHybridCloudGroupShrinkServerRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ModifyHybridCloudGroupShrinkServerRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHybridCloudGroupShrinkServerRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mids Field Functions 
    bool hasMids() const { return this->mids_ != nullptr;};
    void deleteMids() { this->mids_ = nullptr;};
    inline string mids() const { DARABONBA_PTR_GET_DEFAULT(mids_, "") };
    inline ModifyHybridCloudGroupShrinkServerRequest& setMids(string mids) { DARABONBA_PTR_SET_VALUE(mids_, mids) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridCloudGroupShrinkServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ModifyHybridCloudGroupShrinkServerRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the hybrid cloud cluster.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> clusterId_ = nullptr;
    // The ID of the node group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the node.
    // 
    // This parameter is required.
    std::shared_ptr<string> mids_ = nullptr;
    // The region of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
