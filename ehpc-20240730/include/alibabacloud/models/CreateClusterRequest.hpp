// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestAdditionalPackages.hpp>
#include <alibabacloud/models/CreateClusterRequestAddons.hpp>
#include <alibabacloud/models/CreateClusterRequestClusterCredentials.hpp>
#include <alibabacloud/models/CreateClusterRequestClusterCustomConfiguration.hpp>
#include <alibabacloud/models/CreateClusterRequestManager.hpp>
#include <alibabacloud/models/QueueTemplate.hpp>
#include <alibabacloud/models/SharedStorageTemplate.hpp>
#include <alibabacloud/models/CreateClusterRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(Addons, addons_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_TO_JSON(ClusterCredentials, clusterCredentials_);
      DARABONBA_PTR_TO_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(IsEnterpriseSecurityGroup, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_TO_JSON(Manager, manager_);
      DARABONBA_PTR_TO_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_TO_JSON(Queues, queues_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(Addons, addons_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ClusterCategory, clusterCategory_);
      DARABONBA_PTR_FROM_JSON(ClusterCredentials, clusterCredentials_);
      DARABONBA_PTR_FROM_JSON(ClusterCustomConfiguration, clusterCustomConfiguration_);
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterMode, clusterMode_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterVSwitchId, clusterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ClusterVpcId, clusterVpcId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(IsEnterpriseSecurityGroup, isEnterpriseSecurityGroup_);
      DARABONBA_PTR_FROM_JSON(Manager, manager_);
      DARABONBA_PTR_FROM_JSON(MaxCoreCount, maxCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      DARABONBA_PTR_FROM_JSON(Queues, queues_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SharedStorages, sharedStorages_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && return this->addons_ == nullptr && return this->clientVersion_ == nullptr && return this->clusterCategory_ == nullptr && return this->clusterCredentials_ == nullptr && return this->clusterCustomConfiguration_ == nullptr
        && return this->clusterDescription_ == nullptr && return this->clusterMode_ == nullptr && return this->clusterName_ == nullptr && return this->clusterVSwitchId_ == nullptr && return this->clusterVpcId_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->isEnterpriseSecurityGroup_ == nullptr && return this->manager_ == nullptr && return this->maxCoreCount_ == nullptr && return this->maxCount_ == nullptr
        && return this->queues_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr && return this->sharedStorages_ == nullptr && return this->tags_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const vector<CreateClusterRequestAdditionalPackages> & additionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, vector<CreateClusterRequestAdditionalPackages>) };
    inline vector<CreateClusterRequestAdditionalPackages> additionalPackages() { DARABONBA_PTR_GET(additionalPackages_, vector<CreateClusterRequestAdditionalPackages>) };
    inline CreateClusterRequest& setAdditionalPackages(const vector<CreateClusterRequestAdditionalPackages> & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline CreateClusterRequest& setAdditionalPackages(vector<CreateClusterRequestAdditionalPackages> && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // addons Field Functions 
    bool hasAddons() const { return this->addons_ != nullptr;};
    void deleteAddons() { this->addons_ = nullptr;};
    inline const vector<CreateClusterRequestAddons> & addons() const { DARABONBA_PTR_GET_CONST(addons_, vector<CreateClusterRequestAddons>) };
    inline vector<CreateClusterRequestAddons> addons() { DARABONBA_PTR_GET(addons_, vector<CreateClusterRequestAddons>) };
    inline CreateClusterRequest& setAddons(const vector<CreateClusterRequestAddons> & addons) { DARABONBA_PTR_SET_VALUE(addons_, addons) };
    inline CreateClusterRequest& setAddons(vector<CreateClusterRequestAddons> && addons) { DARABONBA_PTR_SET_RVALUE(addons_, addons) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string clientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline CreateClusterRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // clusterCategory Field Functions 
    bool hasClusterCategory() const { return this->clusterCategory_ != nullptr;};
    void deleteClusterCategory() { this->clusterCategory_ = nullptr;};
    inline string clusterCategory() const { DARABONBA_PTR_GET_DEFAULT(clusterCategory_, "") };
    inline CreateClusterRequest& setClusterCategory(string clusterCategory) { DARABONBA_PTR_SET_VALUE(clusterCategory_, clusterCategory) };


    // clusterCredentials Field Functions 
    bool hasClusterCredentials() const { return this->clusterCredentials_ != nullptr;};
    void deleteClusterCredentials() { this->clusterCredentials_ = nullptr;};
    inline const CreateClusterRequestClusterCredentials & clusterCredentials() const { DARABONBA_PTR_GET_CONST(clusterCredentials_, CreateClusterRequestClusterCredentials) };
    inline CreateClusterRequestClusterCredentials clusterCredentials() { DARABONBA_PTR_GET(clusterCredentials_, CreateClusterRequestClusterCredentials) };
    inline CreateClusterRequest& setClusterCredentials(const CreateClusterRequestClusterCredentials & clusterCredentials) { DARABONBA_PTR_SET_VALUE(clusterCredentials_, clusterCredentials) };
    inline CreateClusterRequest& setClusterCredentials(CreateClusterRequestClusterCredentials && clusterCredentials) { DARABONBA_PTR_SET_RVALUE(clusterCredentials_, clusterCredentials) };


    // clusterCustomConfiguration Field Functions 
    bool hasClusterCustomConfiguration() const { return this->clusterCustomConfiguration_ != nullptr;};
    void deleteClusterCustomConfiguration() { this->clusterCustomConfiguration_ = nullptr;};
    inline const CreateClusterRequestClusterCustomConfiguration & clusterCustomConfiguration() const { DARABONBA_PTR_GET_CONST(clusterCustomConfiguration_, CreateClusterRequestClusterCustomConfiguration) };
    inline CreateClusterRequestClusterCustomConfiguration clusterCustomConfiguration() { DARABONBA_PTR_GET(clusterCustomConfiguration_, CreateClusterRequestClusterCustomConfiguration) };
    inline CreateClusterRequest& setClusterCustomConfiguration(const CreateClusterRequestClusterCustomConfiguration & clusterCustomConfiguration) { DARABONBA_PTR_SET_VALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };
    inline CreateClusterRequest& setClusterCustomConfiguration(CreateClusterRequestClusterCustomConfiguration && clusterCustomConfiguration) { DARABONBA_PTR_SET_RVALUE(clusterCustomConfiguration_, clusterCustomConfiguration) };


    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline CreateClusterRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterMode Field Functions 
    bool hasClusterMode() const { return this->clusterMode_ != nullptr;};
    void deleteClusterMode() { this->clusterMode_ = nullptr;};
    inline string clusterMode() const { DARABONBA_PTR_GET_DEFAULT(clusterMode_, "") };
    inline CreateClusterRequest& setClusterMode(string clusterMode) { DARABONBA_PTR_SET_VALUE(clusterMode_, clusterMode) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterVSwitchId Field Functions 
    bool hasClusterVSwitchId() const { return this->clusterVSwitchId_ != nullptr;};
    void deleteClusterVSwitchId() { this->clusterVSwitchId_ = nullptr;};
    inline string clusterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(clusterVSwitchId_, "") };
    inline CreateClusterRequest& setClusterVSwitchId(string clusterVSwitchId) { DARABONBA_PTR_SET_VALUE(clusterVSwitchId_, clusterVSwitchId) };


    // clusterVpcId Field Functions 
    bool hasClusterVpcId() const { return this->clusterVpcId_ != nullptr;};
    void deleteClusterVpcId() { this->clusterVpcId_ = nullptr;};
    inline string clusterVpcId() const { DARABONBA_PTR_GET_DEFAULT(clusterVpcId_, "") };
    inline CreateClusterRequest& setClusterVpcId(string clusterVpcId) { DARABONBA_PTR_SET_VALUE(clusterVpcId_, clusterVpcId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateClusterRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // isEnterpriseSecurityGroup Field Functions 
    bool hasIsEnterpriseSecurityGroup() const { return this->isEnterpriseSecurityGroup_ != nullptr;};
    void deleteIsEnterpriseSecurityGroup() { this->isEnterpriseSecurityGroup_ = nullptr;};
    inline bool isEnterpriseSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(isEnterpriseSecurityGroup_, false) };
    inline CreateClusterRequest& setIsEnterpriseSecurityGroup(bool isEnterpriseSecurityGroup) { DARABONBA_PTR_SET_VALUE(isEnterpriseSecurityGroup_, isEnterpriseSecurityGroup) };


    // manager Field Functions 
    bool hasManager() const { return this->manager_ != nullptr;};
    void deleteManager() { this->manager_ = nullptr;};
    inline const CreateClusterRequestManager & manager() const { DARABONBA_PTR_GET_CONST(manager_, CreateClusterRequestManager) };
    inline CreateClusterRequestManager manager() { DARABONBA_PTR_GET(manager_, CreateClusterRequestManager) };
    inline CreateClusterRequest& setManager(const CreateClusterRequestManager & manager) { DARABONBA_PTR_SET_VALUE(manager_, manager) };
    inline CreateClusterRequest& setManager(CreateClusterRequestManager && manager) { DARABONBA_PTR_SET_RVALUE(manager_, manager) };


    // maxCoreCount Field Functions 
    bool hasMaxCoreCount() const { return this->maxCoreCount_ != nullptr;};
    void deleteMaxCoreCount() { this->maxCoreCount_ = nullptr;};
    inline int32_t maxCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maxCoreCount_, 0) };
    inline CreateClusterRequest& setMaxCoreCount(int32_t maxCoreCount) { DARABONBA_PTR_SET_VALUE(maxCoreCount_, maxCoreCount) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline CreateClusterRequest& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<QueueTemplate> & queues() const { DARABONBA_PTR_GET_CONST(queues_, vector<QueueTemplate>) };
    inline vector<QueueTemplate> queues() { DARABONBA_PTR_GET(queues_, vector<QueueTemplate>) };
    inline CreateClusterRequest& setQueues(const vector<QueueTemplate> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline CreateClusterRequest& setQueues(vector<QueueTemplate> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateClusterRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // sharedStorages Field Functions 
    bool hasSharedStorages() const { return this->sharedStorages_ != nullptr;};
    void deleteSharedStorages() { this->sharedStorages_ = nullptr;};
    inline const vector<SharedStorageTemplate> & sharedStorages() const { DARABONBA_PTR_GET_CONST(sharedStorages_, vector<SharedStorageTemplate>) };
    inline vector<SharedStorageTemplate> sharedStorages() { DARABONBA_PTR_GET(sharedStorages_, vector<SharedStorageTemplate>) };
    inline CreateClusterRequest& setSharedStorages(const vector<SharedStorageTemplate> & sharedStorages) { DARABONBA_PTR_SET_VALUE(sharedStorages_, sharedStorages) };
    inline CreateClusterRequest& setSharedStorages(vector<SharedStorageTemplate> && sharedStorages) { DARABONBA_PTR_SET_RVALUE(sharedStorages_, sharedStorages) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateClusterRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateClusterRequestTags>) };
    inline vector<CreateClusterRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateClusterRequestTags>) };
    inline CreateClusterRequest& setTags(const vector<CreateClusterRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateClusterRequest& setTags(vector<CreateClusterRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The list of software that you want to install in the cluster. Valid values of N: 0 to 10.
    std::shared_ptr<vector<CreateClusterRequestAdditionalPackages>> additionalPackages_ = nullptr;
    // The configurations of the custom addons in the cluster. Only one addon is supported.
    std::shared_ptr<vector<CreateClusterRequestAddons>> addons_ = nullptr;
    // The client version. By default, the latest version is used.
    std::shared_ptr<string> clientVersion_ = nullptr;
    // The cluster type. Valid values:
    // 
    // *   Standard
    // *   Serverless
    std::shared_ptr<string> clusterCategory_ = nullptr;
    // The access credentials of the cluster.
    std::shared_ptr<CreateClusterRequestClusterCredentials> clusterCredentials_ = nullptr;
    // The post-processing script of the cluster.
    std::shared_ptr<CreateClusterRequestClusterCustomConfiguration> clusterCustomConfiguration_ = nullptr;
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
    std::shared_ptr<CreateClusterRequestManager> manager_ = nullptr;
    // The maximum number of vCPUs that can be used by compute nodes in the cluster. Valid values: 0 to 100,000.
    std::shared_ptr<int32_t> maxCoreCount_ = nullptr;
    // The maximum number of compute nodes that the cluster can manage. Valid values: 0 to 5,000.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
    // The queues in the cluster. The number of queues can be 0 to 8.
    std::shared_ptr<vector<QueueTemplate>> queues_ = nullptr;
    // The ID of the resource group to which the cluster belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to obtain the IDs of the resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group to which the cluster belongs.
    // 
    // You can call the [DescribeSecurityGroups](https://help.aliyun.com/document_detail/25556.html) operation to query available security groups in the current region.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The shared storage resources of the cluster.
    std::shared_ptr<vector<SharedStorageTemplate>> sharedStorages_ = nullptr;
    // The tags of the cluster.
    std::shared_ptr<vector<CreateClusterRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
