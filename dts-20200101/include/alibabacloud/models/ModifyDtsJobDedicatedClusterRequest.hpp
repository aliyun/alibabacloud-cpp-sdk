// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTSJOBDEDICATEDCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTSJOBDEDICATEDCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDtsJobDedicatedClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDtsJobDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DtsJobIds, dtsJobIds_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDtsJobDedicatedClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DtsJobIds, dtsJobIds_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyDtsJobDedicatedClusterRequest() = default ;
    ModifyDtsJobDedicatedClusterRequest(const ModifyDtsJobDedicatedClusterRequest &) = default ;
    ModifyDtsJobDedicatedClusterRequest(ModifyDtsJobDedicatedClusterRequest &&) = default ;
    ModifyDtsJobDedicatedClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDtsJobDedicatedClusterRequest() = default ;
    ModifyDtsJobDedicatedClusterRequest& operator=(const ModifyDtsJobDedicatedClusterRequest &) = default ;
    ModifyDtsJobDedicatedClusterRequest& operator=(ModifyDtsJobDedicatedClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedClusterId_ == nullptr
        && return this->dtsJobIds_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline ModifyDtsJobDedicatedClusterRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // dtsJobIds Field Functions 
    bool hasDtsJobIds() const { return this->dtsJobIds_ != nullptr;};
    void deleteDtsJobIds() { this->dtsJobIds_ = nullptr;};
    inline string dtsJobIds() const { DARABONBA_PTR_GET_DEFAULT(dtsJobIds_, "") };
    inline ModifyDtsJobDedicatedClusterRequest& setDtsJobIds(string dtsJobIds) { DARABONBA_PTR_SET_VALUE(dtsJobIds_, dtsJobIds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyDtsJobDedicatedClusterRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDtsJobDedicatedClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDtsJobDedicatedClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The dedicated cluster ID.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The DTS task IDs. The value can be a JSON array that consists of multiple DTS task IDs. Separate the IDs with commas (,).
    std::shared_ptr<string> dtsJobIds_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The ID of the region where the DTS instance resides.
    // 
    // > For information about the regions that support dedicated clusters, see [DTS dedicated cluster](https://help.aliyun.com/document_detail/417481.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
