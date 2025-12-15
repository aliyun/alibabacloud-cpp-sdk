// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackagesShrink_);
      DARABONBA_PTR_TO_JSON(Addons, addonsShrink_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(ClusterCredentials, clusterCredentialsShrink_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfigurationShrink_);
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(IsEnterpriseSecurityGroup, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_TO_JSON(Manager, managerShrink_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(Queues, queuesShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStoragesShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackagesShrink_);
      DARABONBA_PTR_FROM_JSON(Addons, addonsShrink_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(ClusterCredentials, clusterCredentialsShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfigurationShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(IsEnterpriseSecurityGroup, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_FROM_JSON(Manager, managerShrink_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(Queues, queuesShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStoragesShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    CreateClusterShrinkRequest() = default ;
    CreateClusterShrinkRequest(const CreateClusterShrinkRequest &) = default ;
    CreateClusterShrinkRequest(CreateClusterShrinkRequest &&) = default ;
    CreateClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterShrinkRequest() = default ;
    CreateClusterShrinkRequest& operator=(const CreateClusterShrinkRequest &) = default ;
    CreateClusterShrinkRequest& operator=(CreateClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackagesShrink_ == nullptr
        && return this->addonsShrink_ == nullptr && return this->clientVersion_ == nullptr && return this->clusterCategory_ == nullptr && return this->clusterCredentialsShrink_ == nullptr && return this->clusterCustomConfigurationShrink_ == nullptr
        && return this->clusterDescription_ == nullptr && return this->clusterMode_ == nullptr && return this->clusterName_ == nullptr && return this->clusterVSwitchId_ == nullptr && return this->clusterVpcId_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->isEnterpriseSecurityGroup_ == nullptr && return this->managerShrink_ == nullptr && return this->maxCoreCount_ == nullptr && return this->maxCount_ == nullptr
        && return this->queuesShrink_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr && return this->sharedStoragesShrink_ == nullptr && return this->tagsShrink_ == nullptr; };
    // additionalPackagesShrink Field Functions 
    bool hasAdditionalPackagesShrink() const { return this->additionalPackagesShrink_ != nullptr;};
    void deleteAdditionalPackagesShrink() { this->additionalPackagesShrink_ = nullptr;};
    inline string additionalPackagesShrink() const { DARABONBA_PTR_GET_DEFAULT(additionalPackagesShrink_, "") };
    inline CreateClusterShrinkRequest& setAdditionalPackagesShrink(string additionalPackagesShrink) { DARABONBA_PTR_SET_VALUE(additionalPackagesShrink_, additionalPackagesShrink) };


    // addonsShrink Field Functions 
    bool hasAddonsShrink() const { return this->addonsShrink_ != nullptr;};
    void deleteAddonsShrink() { this->addonsShrink_ = nullptr;};
    inline string addonsShrink() const { DARABONBA_PTR_GET_DEFAULT(addonsShrink_, "") };
    inline CreateClusterShrinkRequest& setAddonsShrink(string addonsShrink) { DARABONBA_PTR_SET_VALUE(addonsShrink_, addonsShrink) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline CreateClusterShrinkRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string clusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline CreateClusterShrinkRequest& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // clusterCredentialsShrink Field Functions 
    bool hasClusterCredentialsShrink() const { return this->clusterCredentialsShrink_ != nullptr;};
    void deleteClusterCredentialsShrink() { this->clusterCredentialsShrink_ = nullptr;};
    inline string clusterCredentialsShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterCredentialsShrink_, "") };
    inline CreateClusterShrinkRequest& setClusterCredentialsShrink(string clusterCredentialsShrink) { DARABONBA_PTR_SET_VALUE(clusterCredentialsShrink_, clusterCredentialsShrink) };


    // clusterCustomConfigurationShrink Field Functions 
    bool hasClusterCustomConfigurationShrink() const { return this->clusterCustomConfigurationShrink_ != nullptr;};
    void deleteClusterCustomConfigurationShrink() { this->clusterCustomConfigurationShrink_ = nullptr;};
    inline string clusterCustomConfigurationShrink() const { DARABONBA_PTR_GET_DEFAULT(clusterCustomConfigurationShrink_, "") };
    inline CreateClusterShrinkRequest& setClusterCustomConfigurationShrink(string clusterCustomConfigurationShrink) { DARABONBA_PTR_SET_VALUE(clusterCustomConfigurationShrink_, clusterCustomConfigurationShrink) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline CreateClusterShrinkRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline CreateClusterShrinkRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterVSwitchId Field Functions 
    bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
    void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
    inline string clusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
    inline CreateClusterShrinkRequest& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


    // clusterVpcId Field Functions 
    bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
    void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
    inline string clusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
    inline CreateClusterShrinkRequest& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateClusterShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // isEnterpriseSecurityGroup Field Functions 
    bool hasIsEnterpriseSecurityGroup() const { return this->isEnterpriseSecurityGroup_ != nullptr;};
    void deleteIsEnterpriseSecurityGroup() { this->isEnterpriseSecurityGroup_ = nullptr;};
    inline bool isEnterpriseSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseSecurityGroup_, false) };
    inline CreateClusterShrinkRequest& setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup) { DARABONBA_PTR_SET_VALUE(isEnterpriseSecurityGroup_, isEnterpriseSecurityGroup) };


    // managerShrink Field Functions 
    bool hasManagerShrink() const { return this->managerShrink_ != nullptr;};
    void deleteManagerShrink() { this->managerShrink_ = nullptr;};
    inline string managerShrink() const { DARABONBA_PTR_GET_DEFAULT(managerShrink_, "") };
    inline CreateClusterShrinkRequest& setManagerShrink(string managerShrink) { DARABONBA_PTR_SET_VALUE(managerShrink_, managerShrink) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int32_t maxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
    inline CreateClusterShrinkRequest& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline CreateClusterShrinkRequest& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // queuesShrink Field Functions 
    bool hasQueuesShrink() const { return this->queuesShrink_ != nullptr;};
    void deleteQueuesShrink() { this->queuesShrink_ = nullptr;};
    inline string queuesShrink() const { DARABONBA_PTR_GET_DEFAULT(queuesShrink_, "") };
    inline CreateClusterShrinkRequest& setQueuesShrink(string queuesShrink) { DARABONBA_PTR_SET_VALUE(queuesShrink_, queuesShrink) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // sharedStoragesShrink Field Functions 
    bool hasSharedStoragesShrink() const { return this->sharedStoragesShrink_ != nullptr;};
    void deleteSharedStoragesShrink() { this->sharedStoragesShrink_ = nullptr;};
    inline string sharedStoragesShrink() const { DARABONBA_PTR_GET_DEFAULT(sharedStoragesShrink_, "") };
    inline CreateClusterShrinkRequest& setSharedStoragesShrink(string sharedStoragesShrink) { DARABONBA_PTR_SET_VALUE(sharedStoragesShrink_, sharedStoragesShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateClusterShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The list of software that you want to install in the cluster. Valid values of N: 0 to 10.
    std::shared_ptr<string> additionalPackagesShrink_ = nullptr;
    // The configurations of the custom addons in the cluster. Only one addon is supported.
    std::shared_ptr<string> addonsShrink_ = nullptr;
    // The client version. By default, the latest version is used.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    std::shared_ptr<string> clusterCategory_ = nullptr;
    // The access credentials of the cluster.
    std::shared_ptr<string> clusterCredentialsShrink_ = nullptr;
    // The post-processing script of the cluster.
    std::shared_ptr<string> clusterCustomConfigurationShrink_ = nullptr;
    // The cluster description. The description must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // The deployment mode of the cluster. Valid values:
    // 
    // *   Integrated
    // *   Hybrid
    // *   Custom
    std::shared_ptr<string> clusterMode_ = nullptr;
    // The cluster name. The name must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> clusterName_ = nullptr;
    // The ID of the vSwitch that you want the cluster to use. The vSwitch must reside in the VPC that is specified by the `ClusterVpcId` parameter.
    // 
    // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/448581.html) operation to query information about the created VPCs and vSwitches.
    std::shared_ptr<string> clusterVSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) in which the cluster resides.
    std::shared_ptr<string> clusterVpcId_ = nullptr;
    // Specifies whether to enable deletion protection for the cluster. Deletion protection decides whether the cluster can be deleted in the console or by calling the [DeleteCluster](https://help.aliyun.com/document_detail/424406.html) operation. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // Specifies whether to use an advanced security group. Valid values:
    // 
    // *   true: automatically creates and uses an advanced security group.
    // *   false: automatically creates and uses a basic security group.
    // 
    // For more information, see [Basic security groups and advanced security groups](https://help.aliyun.com/document_detail/605897.html).
    std::shared_ptr<bool> isEnterpriseSecurityGroup_ = nullptr;
    // The configurations of the cluster management node.
    std::shared_ptr<string> managerShrink_ = nullptr;
    // The maximum number of vCPUs that can be used by compute nodes in the cluster. Valid values: 0 to 100,000.
    std::shared_ptr<int32_t> maxCoreCount_ = nullptr;
    // The maximum number of compute nodes that the cluster can manage. Valid values: 0 to 5,000.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
    // The queues in the cluster. The number of queues can be 0 to 8.
    std::shared_ptr<string> queuesShrink_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to obtain the IDs of the resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group to which the cluster belongs.
    // 
    // You can call the [DescribeSecurityGroups](https://help.aliyun.com/document_detail/25556.html) operation to query available security groups in the current region.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The shared storage resources of the cluster.
    std::shared_ptr<string> sharedStoragesShrink_ = nullptr;
    // The tags of the cluster.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
