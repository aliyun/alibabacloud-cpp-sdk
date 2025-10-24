// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHYBRIDCLOUDCLUSTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHYBRIDCLOUDCLUSTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DeleteHybridCloudClusterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHybridCloudClusterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHybridCloudClusterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRuleResourceId, clusterRuleResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DeleteHybridCloudClusterRuleRequest() = default ;
    DeleteHybridCloudClusterRuleRequest(const DeleteHybridCloudClusterRuleRequest &) = default ;
    DeleteHybridCloudClusterRuleRequest(DeleteHybridCloudClusterRuleRequest &&) = default ;
    DeleteHybridCloudClusterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHybridCloudClusterRuleRequest() = default ;
    DeleteHybridCloudClusterRuleRequest& operator=(const DeleteHybridCloudClusterRuleRequest &) = default ;
    DeleteHybridCloudClusterRuleRequest& operator=(DeleteHybridCloudClusterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterRuleResourceId_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr; };
    // clusterRuleResourceId Field Functions 
    bool hasClusterRuleResourceId() const { return this->clusterRuleResourceId_ != nullptr;};
    void deleteClusterRuleResourceId() { this->clusterRuleResourceId_ = nullptr;};
    inline string clusterRuleResourceId() const { DARABONBA_PTR_GET_DEFAULT(clusterRuleResourceId_, "") };
    inline DeleteHybridCloudClusterRuleRequest& setClusterRuleResourceId(string clusterRuleResourceId) { DARABONBA_PTR_SET_VALUE(clusterRuleResourceId_, clusterRuleResourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteHybridCloudClusterRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteHybridCloudClusterRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DeleteHybridCloudClusterRuleRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterRuleResourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
