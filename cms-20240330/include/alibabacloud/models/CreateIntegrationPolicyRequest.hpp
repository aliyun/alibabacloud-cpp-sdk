// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTEGRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateIntegrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_TO_JSON(policyName, policyName_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entityGroup, entityGroup_);
      DARABONBA_PTR_FROM_JSON(policyName, policyName_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateIntegrationPolicyRequest() = default ;
    CreateIntegrationPolicyRequest(const CreateIntegrationPolicyRequest &) = default ;
    CreateIntegrationPolicyRequest(CreateIntegrationPolicyRequest &&) = default ;
    CreateIntegrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntegrationPolicyRequest() = default ;
    CreateIntegrationPolicyRequest& operator=(const CreateIntegrationPolicyRequest &) = default ;
    CreateIntegrationPolicyRequest& operator=(CreateIntegrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Tag `key` value.
      shared_ptr<string> key_ {};
      // Tag `value` value.
      shared_ptr<string> value_ {};
    };

    class EntityGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityGroup& obj) { 
        DARABONBA_PTR_TO_JSON(clusterEntityType, clusterEntityType_);
        DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(disablePolicyShare, disablePolicyShare_);
        DARABONBA_PTR_TO_JSON(entityGroupId, entityGroupId_);
        DARABONBA_PTR_TO_JSON(entityUserId, entityUserId_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, EntityGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(clusterEntityType, clusterEntityType_);
        DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(disablePolicyShare, disablePolicyShare_);
        DARABONBA_PTR_FROM_JSON(entityGroupId, entityGroupId_);
        DARABONBA_PTR_FROM_JSON(entityUserId, entityUserId_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      };
      EntityGroup() = default ;
      EntityGroup(const EntityGroup &) = default ;
      EntityGroup(EntityGroup &&) = default ;
      EntityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityGroup() = default ;
      EntityGroup& operator=(const EntityGroup &) = default ;
      EntityGroup& operator=(EntityGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterEntityType_ == nullptr
        && this->clusterId_ == nullptr && this->disablePolicyShare_ == nullptr && this->entityGroupId_ == nullptr && this->entityUserId_ == nullptr && this->vpcId_ == nullptr; };
      // clusterEntityType Field Functions 
      bool hasClusterEntityType() const { return this->clusterEntityType_ != nullptr;};
      void deleteClusterEntityType() { this->clusterEntityType_ = nullptr;};
      inline string getClusterEntityType() const { DARABONBA_PTR_GET_DEFAULT(clusterEntityType_, "") };
      inline EntityGroup& setClusterEntityType(string clusterEntityType) { DARABONBA_PTR_SET_VALUE(clusterEntityType_, clusterEntityType) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline EntityGroup& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // disablePolicyShare Field Functions 
      bool hasDisablePolicyShare() const { return this->disablePolicyShare_ != nullptr;};
      void deleteDisablePolicyShare() { this->disablePolicyShare_ = nullptr;};
      inline bool getDisablePolicyShare() const { DARABONBA_PTR_GET_DEFAULT(disablePolicyShare_, false) };
      inline EntityGroup& setDisablePolicyShare(bool disablePolicyShare) { DARABONBA_PTR_SET_VALUE(disablePolicyShare_, disablePolicyShare) };


      // entityGroupId Field Functions 
      bool hasEntityGroupId() const { return this->entityGroupId_ != nullptr;};
      void deleteEntityGroupId() { this->entityGroupId_ = nullptr;};
      inline string getEntityGroupId() const { DARABONBA_PTR_GET_DEFAULT(entityGroupId_, "") };
      inline EntityGroup& setEntityGroupId(string entityGroupId) { DARABONBA_PTR_SET_VALUE(entityGroupId_, entityGroupId) };


      // entityUserId Field Functions 
      bool hasEntityUserId() const { return this->entityUserId_ != nullptr;};
      void deleteEntityUserId() { this->entityUserId_ = nullptr;};
      inline string getEntityUserId() const { DARABONBA_PTR_GET_DEFAULT(entityUserId_, "") };
      inline EntityGroup& setEntityUserId(string entityUserId) { DARABONBA_PTR_SET_VALUE(entityUserId_, entityUserId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline EntityGroup& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // Cluster entity type, such as acs.ack.cluster/acs.one.cluster/acs.asi.cluster or others.
      shared_ptr<string> clusterEntityType_ {};
      // Cluster ID.
      shared_ptr<string> clusterId_ {};
      // Whether to disable the unique binding of the Policy. If enabled, multiple Policies can be created for a single container cluster.
      shared_ptr<bool> disablePolicyShare_ {};
      // Entity group ID.
      shared_ptr<string> entityGroupId_ {};
      // User ID to which the cluster belongs.
      shared_ptr<string> entityUserId_ {};
      // VPC ID.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->entityGroup_ == nullptr
        && this->policyName_ == nullptr && this->policyType_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->workspace_ == nullptr; };
    // entityGroup Field Functions 
    bool hasEntityGroup() const { return this->entityGroup_ != nullptr;};
    void deleteEntityGroup() { this->entityGroup_ = nullptr;};
    inline const CreateIntegrationPolicyRequest::EntityGroup & getEntityGroup() const { DARABONBA_PTR_GET_CONST(entityGroup_, CreateIntegrationPolicyRequest::EntityGroup) };
    inline CreateIntegrationPolicyRequest::EntityGroup getEntityGroup() { DARABONBA_PTR_GET(entityGroup_, CreateIntegrationPolicyRequest::EntityGroup) };
    inline CreateIntegrationPolicyRequest& setEntityGroup(const CreateIntegrationPolicyRequest::EntityGroup & entityGroup) { DARABONBA_PTR_SET_VALUE(entityGroup_, entityGroup) };
    inline CreateIntegrationPolicyRequest& setEntityGroup(CreateIntegrationPolicyRequest::EntityGroup && entityGroup) { DARABONBA_PTR_SET_RVALUE(entityGroup_, entityGroup) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreateIntegrationPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateIntegrationPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIntegrationPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateIntegrationPolicyRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateIntegrationPolicyRequest::Tags>) };
    inline vector<CreateIntegrationPolicyRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateIntegrationPolicyRequest::Tags>) };
    inline CreateIntegrationPolicyRequest& setTags(const vector<CreateIntegrationPolicyRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateIntegrationPolicyRequest& setTags(vector<CreateIntegrationPolicyRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateIntegrationPolicyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Entity group for creating the policy. Policies can be quickly created using the entity group, and `clusterId` and `vpcId` are independent of each other.
    shared_ptr<CreateIntegrationPolicyRequest::EntityGroup> entityGroup_ {};
    // Policy name
    shared_ptr<string> policyName_ {};
    // Policy type: CS/ECS/Cloud
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    // Resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Resource tags.
    shared_ptr<vector<CreateIntegrationPolicyRequest::Tags>> tags_ {};
    // Workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
