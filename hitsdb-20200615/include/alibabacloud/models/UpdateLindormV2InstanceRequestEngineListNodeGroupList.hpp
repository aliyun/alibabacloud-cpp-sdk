// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUESTENGINELISTNODEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUESTENGINELISTNODEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class UpdateLindormV2InstanceRequestEngineListNodeGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLindormV2InstanceRequestEngineListNodeGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeDiskSize, nodeDiskSize_);
      DARABONBA_PTR_TO_JSON(NodeDiskType, nodeDiskType_);
      DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLindormV2InstanceRequestEngineListNodeGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeDiskSize, nodeDiskSize_);
      DARABONBA_PTR_FROM_JSON(NodeDiskType, nodeDiskType_);
      DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    UpdateLindormV2InstanceRequestEngineListNodeGroupList() = default ;
    UpdateLindormV2InstanceRequestEngineListNodeGroupList(const UpdateLindormV2InstanceRequestEngineListNodeGroupList &) = default ;
    UpdateLindormV2InstanceRequestEngineListNodeGroupList(UpdateLindormV2InstanceRequestEngineListNodeGroupList &&) = default ;
    UpdateLindormV2InstanceRequestEngineListNodeGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLindormV2InstanceRequestEngineListNodeGroupList() = default ;
    UpdateLindormV2InstanceRequestEngineListNodeGroupList& operator=(const UpdateLindormV2InstanceRequestEngineListNodeGroupList &) = default ;
    UpdateLindormV2InstanceRequestEngineListNodeGroupList& operator=(UpdateLindormV2InstanceRequestEngineListNodeGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->nodeCount_ == nullptr && return this->nodeDiskSize_ == nullptr && return this->nodeDiskType_ == nullptr && return this->nodeSpec_ == nullptr && return this->resourceGroupName_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateLindormV2InstanceRequestEngineListNodeGroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline UpdateLindormV2InstanceRequestEngineListNodeGroupList& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeDiskSize Field Functions 
    bool hasNodeDiskSize() const { return this->nodeDiskSize_ != nullptr;};
    void deleteNodeDiskSize() { this->nodeDiskSize_ = nullptr;};
    inline int32_t nodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskSize_, 0) };
    inline UpdateLindormV2InstanceRequestEngineListNodeGroupList& setNodeDiskSize(int32_t nodeDiskSize) { DARABONBA_PTR_SET_VALUE(nodeDiskSize_, nodeDiskSize) };


    // nodeDiskType Field Functions 
    bool hasNodeDiskType() const { return this->nodeDiskType_ != nullptr;};
    void deleteNodeDiskType() { this->nodeDiskType_ = nullptr;};
    inline string nodeDiskType() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskType_, "") };
    inline UpdateLindormV2InstanceRequestEngineListNodeGroupList& setNodeDiskType(string nodeDiskType) { DARABONBA_PTR_SET_VALUE(nodeDiskType_, nodeDiskType) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline string nodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
    inline UpdateLindormV2InstanceRequestEngineListNodeGroupList& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline UpdateLindormV2InstanceRequestEngineListNodeGroupList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    std::shared_ptr<int32_t> nodeDiskSize_ = nullptr;
    std::shared_ptr<string> nodeDiskType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeSpec_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
