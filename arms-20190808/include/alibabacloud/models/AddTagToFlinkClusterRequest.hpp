// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTAGTOFLINKCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTAGTOFLINKCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddTagToFlinkClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTagToFlinkClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(FlinkWorkSpaceId, flinkWorkSpaceId_);
      DARABONBA_PTR_TO_JSON(FlinkWorkSpaceName, flinkWorkSpaceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTagToFlinkClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(FlinkWorkSpaceId, flinkWorkSpaceId_);
      DARABONBA_PTR_FROM_JSON(FlinkWorkSpaceName, flinkWorkSpaceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    AddTagToFlinkClusterRequest() = default ;
    AddTagToFlinkClusterRequest(const AddTagToFlinkClusterRequest &) = default ;
    AddTagToFlinkClusterRequest(AddTagToFlinkClusterRequest &&) = default ;
    AddTagToFlinkClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTagToFlinkClusterRequest() = default ;
    AddTagToFlinkClusterRequest& operator=(const AddTagToFlinkClusterRequest &) = default ;
    AddTagToFlinkClusterRequest& operator=(AddTagToFlinkClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->flinkWorkSpaceId_ != nullptr && this->flinkWorkSpaceName_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->targetUserId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AddTagToFlinkClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // flinkWorkSpaceId Field Functions 
    bool hasFlinkWorkSpaceId() const { return this->flinkWorkSpaceId_ != nullptr;};
    void deleteFlinkWorkSpaceId() { this->flinkWorkSpaceId_ = nullptr;};
    inline string flinkWorkSpaceId() const { DARABONBA_PTR_GET_DEFAULT(flinkWorkSpaceId_, "") };
    inline AddTagToFlinkClusterRequest& setFlinkWorkSpaceId(string flinkWorkSpaceId) { DARABONBA_PTR_SET_VALUE(flinkWorkSpaceId_, flinkWorkSpaceId) };


    // flinkWorkSpaceName Field Functions 
    bool hasFlinkWorkSpaceName() const { return this->flinkWorkSpaceName_ != nullptr;};
    void deleteFlinkWorkSpaceName() { this->flinkWorkSpaceName_ = nullptr;};
    inline string flinkWorkSpaceName() const { DARABONBA_PTR_GET_DEFAULT(flinkWorkSpaceName_, "") };
    inline AddTagToFlinkClusterRequest& setFlinkWorkSpaceName(string flinkWorkSpaceName) { DARABONBA_PTR_SET_VALUE(flinkWorkSpaceName_, flinkWorkSpaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddTagToFlinkClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddTagToFlinkClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline AddTagToFlinkClusterRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The ID of the Prometheus instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the Flink workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> flinkWorkSpaceId_ = nullptr;
    // The name of the Flink workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> flinkWorkSpaceName_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the Flink workspace belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
