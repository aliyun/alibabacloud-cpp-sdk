// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGCLUSTERSUBNETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGCLUSTERSUBNETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigClusterSubnetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigClusterSubnetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigClusterSubnetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ConfigClusterSubnetShrinkRequest() = default ;
    ConfigClusterSubnetShrinkRequest(const ConfigClusterSubnetShrinkRequest &) = default ;
    ConfigClusterSubnetShrinkRequest(ConfigClusterSubnetShrinkRequest &&) = default ;
    ConfigClusterSubnetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigClusterSubnetShrinkRequest() = default ;
    ConfigClusterSubnetShrinkRequest& operator=(const ConfigClusterSubnetShrinkRequest &) = default ;
    ConfigClusterSubnetShrinkRequest& operator=(ConfigClusterSubnetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->vSwitchIdsShrink_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ConfigClusterSubnetShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigClusterSubnetShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchIdsShrink Field Functions 
    bool hasVSwitchIdsShrink() const { return this->vSwitchIdsShrink_ != nullptr;};
    void deleteVSwitchIdsShrink() { this->vSwitchIdsShrink_ = nullptr;};
    inline string vSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIdsShrink_, "") };
    inline ConfigClusterSubnetShrinkRequest& setVSwitchIdsShrink(string vSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vSwitchIdsShrink_, vSwitchIdsShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ConfigClusterSubnetShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the cluster. You can call the ListCluster operation to obtain cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // A list of vSwitches that are associated with the cluster. Note: You must include all vSwitches that you want to associate with the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchIdsShrink_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
