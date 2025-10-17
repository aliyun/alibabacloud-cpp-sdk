// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPDEDICATEDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPDEDICATEDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class StopDedicatedClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, StopDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    StopDedicatedClusterRequest() = default ;
    StopDedicatedClusterRequest(const StopDedicatedClusterRequest &) = default ;
    StopDedicatedClusterRequest(StopDedicatedClusterRequest &&) = default ;
    StopDedicatedClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopDedicatedClusterRequest() = default ;
    StopDedicatedClusterRequest& operator=(const StopDedicatedClusterRequest &) = default ;
    StopDedicatedClusterRequest& operator=(StopDedicatedClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedClusterId_ == nullptr
        && return this->dedicatedClusterName_ == nullptr && return this->instanceId_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline StopDedicatedClusterRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // dedicatedClusterName Field Functions 
    bool hasDedicatedClusterName() const { return this->dedicatedClusterName_ != nullptr;};
    void deleteDedicatedClusterName() { this->dedicatedClusterName_ = nullptr;};
    inline string dedicatedClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterName_, "") };
    inline StopDedicatedClusterRequest& setDedicatedClusterName(string dedicatedClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedClusterName_, dedicatedClusterName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StopDedicatedClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline StopDedicatedClusterRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopDedicatedClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline StopDedicatedClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


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
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. This parameter is a global parameter and not required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
