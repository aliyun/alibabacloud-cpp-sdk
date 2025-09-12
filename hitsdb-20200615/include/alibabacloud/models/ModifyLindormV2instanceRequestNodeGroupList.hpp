// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLINDORMV2INSTANCEREQUESTNODEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLINDORMV2INSTANCEREQUESTNODEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ModifyLindormV2InstanceRequestNodeGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLindormV2InstanceRequestNodeGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeDiskSize, nodeDiskSize_);
      DARABONBA_PTR_TO_JSON(NodeDiskType, nodeDiskType_);
      DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLindormV2InstanceRequestNodeGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeDiskSize, nodeDiskSize_);
      DARABONBA_PTR_FROM_JSON(NodeDiskType, nodeDiskType_);
      DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    ModifyLindormV2InstanceRequestNodeGroupList() = default ;
    ModifyLindormV2InstanceRequestNodeGroupList(const ModifyLindormV2InstanceRequestNodeGroupList &) = default ;
    ModifyLindormV2InstanceRequestNodeGroupList(ModifyLindormV2InstanceRequestNodeGroupList &&) = default ;
    ModifyLindormV2InstanceRequestNodeGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLindormV2InstanceRequestNodeGroupList() = default ;
    ModifyLindormV2InstanceRequestNodeGroupList& operator=(const ModifyLindormV2InstanceRequestNodeGroupList &) = default ;
    ModifyLindormV2InstanceRequestNodeGroupList& operator=(ModifyLindormV2InstanceRequestNodeGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->nodeCount_ != nullptr && this->nodeDiskSize_ != nullptr && this->nodeDiskType_ != nullptr && this->nodeSpec_ != nullptr && this->resourceGroupName_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLindormV2InstanceRequestNodeGroupList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline string nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, "") };
    inline ModifyLindormV2InstanceRequestNodeGroupList& setNodeCount(string nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeDiskSize Field Functions 
    bool hasNodeDiskSize() const { return this->nodeDiskSize_ != nullptr;};
    void deleteNodeDiskSize() { this->nodeDiskSize_ = nullptr;};
    inline int64_t nodeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskSize_, 0L) };
    inline ModifyLindormV2InstanceRequestNodeGroupList& setNodeDiskSize(int64_t nodeDiskSize) { DARABONBA_PTR_SET_VALUE(nodeDiskSize_, nodeDiskSize) };


    // nodeDiskType Field Functions 
    bool hasNodeDiskType() const { return this->nodeDiskType_ != nullptr;};
    void deleteNodeDiskType() { this->nodeDiskType_ = nullptr;};
    inline string nodeDiskType() const { DARABONBA_PTR_GET_DEFAULT(nodeDiskType_, "") };
    inline ModifyLindormV2InstanceRequestNodeGroupList& setNodeDiskType(string nodeDiskType) { DARABONBA_PTR_SET_VALUE(nodeDiskType_, nodeDiskType) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline string nodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
    inline ModifyLindormV2InstanceRequestNodeGroupList& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ModifyLindormV2InstanceRequestNodeGroupList& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> nodeCount_ = nullptr;
    std::shared_ptr<int64_t> nodeDiskSize_ = nullptr;
    std::shared_ptr<string> nodeDiskType_ = nullptr;
    std::shared_ptr<string> nodeSpec_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
