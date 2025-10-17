// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Components, componentsShrink_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_TO_JSON(Networks, networksShrink_);
      DARABONBA_PTR_TO_JSON(NimizVSwitches, nimizVSwitchesShrink_);
      DARABONBA_PTR_TO_JSON(NodeGroups, nodeGroupsShrink_);
      DARABONBA_PTR_TO_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterDescription, clusterDescription_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Components, componentsShrink_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(IgnoreFailedNodeTasks, ignoreFailedNodeTasks_);
      DARABONBA_PTR_FROM_JSON(Networks, networksShrink_);
      DARABONBA_PTR_FROM_JSON(NimizVSwitches, nimizVSwitchesShrink_);
      DARABONBA_PTR_FROM_JSON(NodeGroups, nodeGroupsShrink_);
      DARABONBA_PTR_FROM_JSON(OpenEniJumboFrame, openEniJumboFrame_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
    virtual bool empty() const override { return this->clusterDescription_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterType_ == nullptr && return this->componentsShrink_ == nullptr && return this->hpnZone_ == nullptr && return this->ignoreFailedNodeTasks_ == nullptr
        && return this->networksShrink_ == nullptr && return this->nimizVSwitchesShrink_ == nullptr && return this->nodeGroupsShrink_ == nullptr && return this->openEniJumboFrame_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tag_ == nullptr; };
    // clusterDescription Field Functions 
    bool hasClusterDescription() const { return this->clusterDescription_ != nullptr;};
    void deleteClusterDescription() { this->clusterDescription_ = nullptr;};
    inline string clusterDescription() const { DARABONBA_PTR_GET_DEFAULT(clusterDescription_, "") };
    inline CreateClusterShrinkRequest& setClusterDescription(string clusterDescription) { DARABONBA_PTR_SET_VALUE(clusterDescription_, clusterDescription) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterShrinkRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // componentsShrink Field Functions 
    bool hasComponentsShrink() const { return this->componentsShrink_ != nullptr;};
    void deleteComponentsShrink() { this->componentsShrink_ = nullptr;};
    inline string componentsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentsShrink_, "") };
    inline CreateClusterShrinkRequest& setComponentsShrink(string componentsShrink) { DARABONBA_PTR_SET_VALUE(componentsShrink_, componentsShrink) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline CreateClusterShrinkRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // ignoreFailedNodeTasks Field Functions 
    bool hasIgnoreFailedNodeTasks() const { return this->ignoreFailedNodeTasks_ != nullptr;};
    void deleteIgnoreFailedNodeTasks() { this->ignoreFailedNodeTasks_ = nullptr;};
    inline bool ignoreFailedNodeTasks() const { DARABONBA_PTR_GET_DEFAULT(ignoreFailedNodeTasks_, false) };
    inline CreateClusterShrinkRequest& setIgnoreFailedNodeTasks(bool ignoreFailedNodeTasks) { DARABONBA_PTR_SET_VALUE(ignoreFailedNodeTasks_, ignoreFailedNodeTasks) };


    // networksShrink Field Functions 
    bool hasNetworksShrink() const { return this->networksShrink_ != nullptr;};
    void deleteNetworksShrink() { this->networksShrink_ = nullptr;};
    inline string networksShrink() const { DARABONBA_PTR_GET_DEFAULT(networksShrink_, "") };
    inline CreateClusterShrinkRequest& setNetworksShrink(string networksShrink) { DARABONBA_PTR_SET_VALUE(networksShrink_, networksShrink) };


    // nimizVSwitchesShrink Field Functions 
    bool hasNimizVSwitchesShrink() const { return this->nimizVSwitchesShrink_ != nullptr;};
    void deleteNimizVSwitchesShrink() { this->nimizVSwitchesShrink_ = nullptr;};
    inline string nimizVSwitchesShrink() const { DARABONBA_PTR_GET_DEFAULT(nimizVSwitchesShrink_, "") };
    inline CreateClusterShrinkRequest& setNimizVSwitchesShrink(string nimizVSwitchesShrink) { DARABONBA_PTR_SET_VALUE(nimizVSwitchesShrink_, nimizVSwitchesShrink) };


    // nodeGroupsShrink Field Functions 
    bool hasNodeGroupsShrink() const { return this->nodeGroupsShrink_ != nullptr;};
    void deleteNodeGroupsShrink() { this->nodeGroupsShrink_ = nullptr;};
    inline string nodeGroupsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupsShrink_, "") };
    inline CreateClusterShrinkRequest& setNodeGroupsShrink(string nodeGroupsShrink) { DARABONBA_PTR_SET_VALUE(nodeGroupsShrink_, nodeGroupsShrink) };


    // openEniJumboFrame Field Functions 
    bool hasOpenEniJumboFrame() const { return this->openEniJumboFrame_ != nullptr;};
    void deleteOpenEniJumboFrame() { this->openEniJumboFrame_ = nullptr;};
    inline bool openEniJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(openEniJumboFrame_, false) };
    inline CreateClusterShrinkRequest& setOpenEniJumboFrame(bool openEniJumboFrame) { DARABONBA_PTR_SET_VALUE(openEniJumboFrame_, openEniJumboFrame) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateClusterShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateClusterShrinkRequestTag>) };
    inline vector<CreateClusterShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateClusterShrinkRequestTag>) };
    inline CreateClusterShrinkRequest& setTag(const vector<CreateClusterShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateClusterShrinkRequest& setTag(vector<CreateClusterShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Cluster description
    std::shared_ptr<string> clusterDescription_ = nullptr;
    // Cluster name
    std::shared_ptr<string> clusterName_ = nullptr;
    // Cluster type
    std::shared_ptr<string> clusterType_ = nullptr;
    // Components (software instances)
    std::shared_ptr<string> componentsShrink_ = nullptr;
    // Cluster number
    std::shared_ptr<string> hpnZone_ = nullptr;
    // Whether to allow skipping failed nodes, the default value is False
    std::shared_ptr<bool> ignoreFailedNodeTasks_ = nullptr;
    // Network information
    std::shared_ptr<string> networksShrink_ = nullptr;
    // Node VSwitches
    std::shared_ptr<string> nimizVSwitchesShrink_ = nullptr;
    // Node group list
    std::shared_ptr<string> nodeGroupsShrink_ = nullptr;
    // Whether the network interface supports jumbo frames
    std::shared_ptr<bool> openEniJumboFrame_ = nullptr;
    // Resource group ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Resource tags
    std::shared_ptr<vector<CreateClusterShrinkRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
