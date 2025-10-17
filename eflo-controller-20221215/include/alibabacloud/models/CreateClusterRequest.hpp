// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterRequestComponents.hpp>
#include <alibabacloud/models/CreateClusterRequestNetworks.hpp>
#include <alibabacloud/models/CreateClusterRequestNodeGroups.hpp>
#include <alibabacloud/models/CreateClusterRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Networks, networks_);
      DARABONBA_PTR_TO_JSON(NimizVSwitches, nimizVSwitches_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_TO_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Networks, networks_);
      DARABONBA_PTR_FROM_JSON(NimizVSwitches, nimizVSwitches_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroups_);
      DARABONBA_PTR_FROM_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
    virtual bool empty() const override { return this->clusterDescription_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->components_ == nullptr && return this->hpnZone_ == nullptr && return this->ignoreFailedNodeTasks_ == nullptr
        && return this->networks_ == nullptr && return this->nimizVSwitches_ == nullptr && return this->nodeGroups_ == nullptr && return this->openEniJumboFrame_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tag_ == nullptr; };
    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline CreateClusterRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<CreateClusterRequestComponents> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<CreateClusterRequestComponents>) };
    inline vector<CreateClusterRequestComponents> components() { DARABONBA_PTR_GET(components_, vector<CreateClusterRequestComponents>) };
    inline CreateClusterRequest& setComponents(const vector<CreateClusterRequestComponents> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline CreateClusterRequest& setComponents(vector<CreateClusterRequestComponents> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline CreateClusterRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline CreateClusterRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // networks Field Functions 
    bool hasNetworks() const { return this->networks_ != nullptr;};
    void deleteNetworks() { this->networks_ = nullptr;};
    inline const CreateClusterRequestNetworks & networks() const { DARABONBA_PTR_GET_CONST(networks_, CreateClusterRequestNetworks) };
    inline CreateClusterRequestNetworks networks() { DARABONBA_PTR_GET(networks_, CreateClusterRequestNetworks) };
    inline CreateClusterRequest& setNetworks(const CreateClusterRequestNetworks & networks) { DARABONBA_PTR_SET_VALUE(networks_, networks) };
    inline CreateClusterRequest& setNetworks(CreateClusterRequestNetworks && networks) { DARABONBA_PTR_SET_RVALUE(networks_, networks) };


    // nimizVSwitches Field Functions 
    bool hasNimizVSwitches() const { return this->nimizVSwitches_ != nullptr;};
    void deleteNimizVSwitches() { this->nimizVSwitches_ = nullptr;};
    inline const vector<string> & nimizVSwitches() const { DARABONBA_PTR_GET_CONST(nimizVSwitches_, vector<string>) };
    inline vector<string> nimizVSwitches() { DARABONBA_PTR_GET(nimizVSwitches_, vector<string>) };
    inline CreateClusterRequest& setNimizVSwitches(const vector<string> & nimizVSwitches) { DARABONBA_PTR_SET_VALUE(nimizVSwitches_, nimizVSwitches) };
    inline CreateClusterRequest& setNimizVSwitches(vector<string> && nimizVSwitches) { DARABONBA_PTR_SET_RVALUE(nimizVSwitches_, nimizVSwitches) };


    // nodeGroups Field Functions 
    bool hasNodeGroups() const { return this->nodeGroups_ != nullptr;};
    void deleteNodeGroups() { this->nodeGroups_ = nullptr;};
    inline const vector<CreateClusterRequestNodeGroups> & nodeGroups() const { DARABONBA_PTR_GET_CONST(nodeGroups_, vector<CreateClusterRequestNodeGroups>) };
    inline vector<CreateClusterRequestNodeGroups> nodeGroups() { DARABONBA_PTR_GET(nodeGroups_, vector<CreateClusterRequestNodeGroups>) };
    inline CreateClusterRequest& setNodeGroups(const vector<CreateClusterRequestNodeGroups> & nodeGroups) { DARABONBA_PTR_SET_VALUE(nodeGroups_, nodeGroups) };
    inline CreateClusterRequest& setNodeGroups(vector<CreateClusterRequestNodeGroups> && nodeGroups) { DARABONBA_PTR_SET_RVALUE(nodeGroups_, nodeGroups) };


    // openEniJumboFrame Field Functions 
    bool hasOpenEniJumboFrame() const { return this->openEniJumboFrame_ != nullptr;};
    void deleteOpenEniJumboFrame() { this->openEniJumboFrame_ = nullptr;};
    inline bool openEniJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(openEniJumboFrame_, false) };
    inline CreateClusterRequest& setOpenEniJumboFrame(bool openEniJumboFrame) { DARABONBA_PTR_SET_VALUE(openEniJumboFrame_, openEniJumboFrame) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateClusterRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateClusterRequestTag>) };
    inline vector<CreateClusterRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateClusterRequestTag>) };
    inline CreateClusterRequest& setTag(const vector<CreateClusterRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateClusterRequest& setTag(vector<CreateClusterRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Cluster description
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // Cluster name
    std::shared_ptr<string> clusterName_ = nullptr;
    // Cluster type
    std::shared_ptr<string> clusterType_ = nullptr;
    // Components (software instances)
    std::shared_ptr<vector<CreateClusterRequestComponents>> components_ = nullptr;
    // Cluster number
    std::shared_ptr<string> hpnZone_ = nullptr;
    // Whether to allow skipping failed nodes, the default value is False
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // Network information
    std::shared_ptr<CreateClusterRequestNetworks> networks_ = nullptr;
    // Node VSwitches
    std::shared_ptr<vector<string>> nimizVSwitches_ = nullptr;
    // Node group list
    std::shared_ptr<vector<CreateClusterRequestNodeGroups>> nodeGroups_ = nullptr;
    // Whether the network interface supports jumbo frames
    std::shared_ptr<bool> openEniJumboFrame_ = nullptr;
    // Resource group ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Resource tags
    std::shared_ptr<vector<CreateClusterRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
