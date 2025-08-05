// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDedicatedClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OversoldRatio, oversoldRatio_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OversoldRatio, oversoldRatio_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyDedicatedClusterRequest() = default ;
    ModifyDedicatedClusterRequest(const ModifyDedicatedClusterRequest &) = default ;
    ModifyDedicatedClusterRequest(ModifyDedicatedClusterRequest &&) = default ;
    ModifyDedicatedClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedClusterRequest() = default ;
    ModifyDedicatedClusterRequest& operator=(const ModifyDedicatedClusterRequest &) = default ;
    ModifyDedicatedClusterRequest& operator=(ModifyDedicatedClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedClusterId_ != nullptr
        && this->dedicatedClusterName_ != nullptr && this->instanceId_ != nullptr && this->oversoldRatio_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline ModifyDedicatedClusterRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // dedicatedClusterName Field Functions 
    bool hasDedicatedClusterName() const { return this->dedicatedClusterName_ != nullptr;};
    void deleteDedicatedClusterName() { this->dedicatedClusterName_ = nullptr;};
    inline string dedicatedClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterName_, "") };
    inline ModifyDedicatedClusterRequest& setDedicatedClusterName(string dedicatedClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedClusterName_, dedicatedClusterName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDedicatedClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // oversoldRatio Field Functions 
    bool hasOversoldRatio() const { return this->oversoldRatio_ != nullptr;};
    void deleteOversoldRatio() { this->oversoldRatio_ = nullptr;};
    inline int32_t oversoldRatio() const { DARABONBA_PTR_GET_DEFAULT(oversoldRatio_, 0) };
    inline ModifyDedicatedClusterRequest& setOversoldRatio(int32_t oversoldRatio) { DARABONBA_PTR_SET_VALUE(oversoldRatio_, oversoldRatio) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyDedicatedClusterRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDedicatedClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDedicatedClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the cluster.
    // 
    // >  You must specify one of the **InstanceId** and **DedicatedClusterId** parameters.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> dedicatedClusterName_ = nullptr;
    // The ID of the instance.
    // 
    // >  You must specify one of the **InstanceId** and **DedicatedClusterId** parameters.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The overcommit ratio. Unit: %.
    std::shared_ptr<int32_t> oversoldRatio_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the region in which the Data Transmission Service (DTS) instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
