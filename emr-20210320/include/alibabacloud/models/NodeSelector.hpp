// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_NODESELECTOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class NodeSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeSelector& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupNames, nodeGroupNames_);
      DARABONBA_PTR_TO_JSON(NodeGroupTypes, nodeGroupTypes_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(NodeSelectType, nodeSelectType_);
    };
    friend void from_json(const Darabonba::Json& j, NodeSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupNames, nodeGroupNames_);
      DARABONBA_PTR_FROM_JSON(NodeGroupTypes, nodeGroupTypes_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(NodeSelectType, nodeSelectType_);
    };
    NodeSelector() = default ;
    NodeSelector(const NodeSelector &) = default ;
    NodeSelector(NodeSelector &&) = default ;
    NodeSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeSelector() = default ;
    NodeSelector& operator=(const NodeSelector &) = default ;
    NodeSelector& operator=(NodeSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupId_ == nullptr
        && return this->nodeGroupIds_ == nullptr && return this->nodeGroupName_ == nullptr && return this->nodeGroupNames_ == nullptr && return this->nodeGroupTypes_ == nullptr && return this->nodeNames_ == nullptr
        && return this->nodeSelectType_ == nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline NodeSelector& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupIds Field Functions 
    bool hasNodeGroupIds() const { return this->nodeGroupIds_ != nullptr;};
    void deleteNodeGroupIds() { this->nodeGroupIds_ = nullptr;};
    inline const vector<string> & nodeGroupIds() const { DARABONBA_PTR_GET_CONST(nodeGroupIds_, vector<string>) };
    inline vector<string> nodeGroupIds() { DARABONBA_PTR_GET(nodeGroupIds_, vector<string>) };
    inline NodeSelector& setNodeGroupIds(const vector<string> & nodeGroupIds) { DARABONBA_PTR_SET_VALUE(nodeGroupIds_, nodeGroupIds) };
    inline NodeSelector& setNodeGroupIds(vector<string> && nodeGroupIds) { DARABONBA_PTR_SET_RVALUE(nodeGroupIds_, nodeGroupIds) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline NodeSelector& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupNames Field Functions 
    bool hasNodeGroupNames() const { return this->nodeGroupNames_ != nullptr;};
    void deleteNodeGroupNames() { this->nodeGroupNames_ = nullptr;};
    inline const vector<string> & nodeGroupNames() const { DARABONBA_PTR_GET_CONST(nodeGroupNames_, vector<string>) };
    inline vector<string> nodeGroupNames() { DARABONBA_PTR_GET(nodeGroupNames_, vector<string>) };
    inline NodeSelector& setNodeGroupNames(const vector<string> & nodeGroupNames) { DARABONBA_PTR_SET_VALUE(nodeGroupNames_, nodeGroupNames) };
    inline NodeSelector& setNodeGroupNames(vector<string> && nodeGroupNames) { DARABONBA_PTR_SET_RVALUE(nodeGroupNames_, nodeGroupNames) };


    // nodeGroupTypes Field Functions 
    bool hasNodeGroupTypes() const { return this->nodeGroupTypes_ != nullptr;};
    void deleteNodeGroupTypes() { this->nodeGroupTypes_ = nullptr;};
    inline const vector<string> & nodeGroupTypes() const { DARABONBA_PTR_GET_CONST(nodeGroupTypes_, vector<string>) };
    inline vector<string> nodeGroupTypes() { DARABONBA_PTR_GET(nodeGroupTypes_, vector<string>) };
    inline NodeSelector& setNodeGroupTypes(const vector<string> & nodeGroupTypes) { DARABONBA_PTR_SET_VALUE(nodeGroupTypes_, nodeGroupTypes) };
    inline NodeSelector& setNodeGroupTypes(vector<string> && nodeGroupTypes) { DARABONBA_PTR_SET_RVALUE(nodeGroupTypes_, nodeGroupTypes) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline NodeSelector& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline NodeSelector& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // nodeSelectType Field Functions 
    bool hasNodeSelectType() const { return this->nodeSelectType_ != nullptr;};
    void deleteNodeSelectType() { this->nodeSelectType_ = nullptr;};
    inline string nodeSelectType() const { DARABONBA_PTR_GET_DEFAULT(nodeSelectType_, "") };
    inline NodeSelector& setNodeSelectType(string nodeSelectType) { DARABONBA_PTR_SET_VALUE(nodeSelectType_, nodeSelectType) };


  protected:
    // 节点组ID。当NodeSelectType取值NodeGroup时，该参数生效。
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<vector<string>> nodeGroupIds_ = nullptr;
    // 节点组名称。当NodeSelectType取值NodeGroup，且参数NodeGroupId为空时生效，该参数生效。
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    std::shared_ptr<vector<string>> nodeGroupNames_ = nullptr;
    // 节点组类型。当NodeSelectType取值NodeGroup，且参数NodeGroupId为空时生效。数组元数个数N取值范围：0~10。
    std::shared_ptr<vector<string>> nodeGroupTypes_ = nullptr;
    // 节点名称列表。当NodeSelectType取值Node时，该参数生效。
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    // 节点选择类型。取值范围：
    // - CLUSTER：集群。
    // - NODE_GROUP：节点组。
    // - NODE：节点。
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeSelectType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
