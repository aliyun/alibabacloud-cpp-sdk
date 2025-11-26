// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTLAYOUTNODESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTLAYOUTNODESELECTOR_HPP_
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
  class ComponentLayoutNodeSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentLayoutNodeSelector& obj) { 
      DARABONBA_PTR_TO_JSON(NodeEndIndex, nodeEndIndex_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupIndex, nodeGroupIndex_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupTypes, nodeGroupTypes_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(NodeSelectType, nodeSelectType_);
      DARABONBA_PTR_TO_JSON(NodeStartIndex, nodeStartIndex_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentLayoutNodeSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeEndIndex, nodeEndIndex_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupIndex, nodeGroupIndex_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupTypes, nodeGroupTypes_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(NodeSelectType, nodeSelectType_);
      DARABONBA_PTR_FROM_JSON(NodeStartIndex, nodeStartIndex_);
    };
    ComponentLayoutNodeSelector() = default ;
    ComponentLayoutNodeSelector(const ComponentLayoutNodeSelector &) = default ;
    ComponentLayoutNodeSelector(ComponentLayoutNodeSelector &&) = default ;
    ComponentLayoutNodeSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentLayoutNodeSelector() = default ;
    ComponentLayoutNodeSelector& operator=(const ComponentLayoutNodeSelector &) = default ;
    ComponentLayoutNodeSelector& operator=(ComponentLayoutNodeSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeEndIndex_ == nullptr
        && return this->nodeGroupId_ == nullptr && return this->nodeGroupIndex_ == nullptr && return this->nodeGroupName_ == nullptr && return this->nodeGroupTypes_ == nullptr && return this->nodeNames_ == nullptr
        && return this->nodeSelectType_ == nullptr && return this->nodeStartIndex_ == nullptr; };
    // nodeEndIndex Field Functions 
    bool hasNodeEndIndex() const { return this->nodeEndIndex_ != nullptr;};
    void deleteNodeEndIndex() { this->nodeEndIndex_ = nullptr;};
    inline int32_t nodeEndIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeEndIndex_, 0) };
    inline ComponentLayoutNodeSelector& setNodeEndIndex(int32_t nodeEndIndex) { DARABONBA_PTR_SET_VALUE(nodeEndIndex_, nodeEndIndex) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ComponentLayoutNodeSelector& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupIndex Field Functions 
    bool hasNodeGroupIndex() const { return this->nodeGroupIndex_ != nullptr;};
    void deleteNodeGroupIndex() { this->nodeGroupIndex_ = nullptr;};
    inline int32_t nodeGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupIndex_, 0) };
    inline ComponentLayoutNodeSelector& setNodeGroupIndex(int32_t nodeGroupIndex) { DARABONBA_PTR_SET_VALUE(nodeGroupIndex_, nodeGroupIndex) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ComponentLayoutNodeSelector& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupTypes Field Functions 
    bool hasNodeGroupTypes() const { return this->nodeGroupTypes_ != nullptr;};
    void deleteNodeGroupTypes() { this->nodeGroupTypes_ = nullptr;};
    inline const vector<string> & nodeGroupTypes() const { DARABONBA_PTR_GET_CONST(nodeGroupTypes_, vector<string>) };
    inline vector<string> nodeGroupTypes() { DARABONBA_PTR_GET(nodeGroupTypes_, vector<string>) };
    inline ComponentLayoutNodeSelector& setNodeGroupTypes(const vector<string> & nodeGroupTypes) { DARABONBA_PTR_SET_VALUE(nodeGroupTypes_, nodeGroupTypes) };
    inline ComponentLayoutNodeSelector& setNodeGroupTypes(vector<string> && nodeGroupTypes) { DARABONBA_PTR_SET_RVALUE(nodeGroupTypes_, nodeGroupTypes) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline ComponentLayoutNodeSelector& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline ComponentLayoutNodeSelector& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // nodeSelectType Field Functions 
    bool hasNodeSelectType() const { return this->nodeSelectType_ != nullptr;};
    void deleteNodeSelectType() { this->nodeSelectType_ = nullptr;};
    inline string nodeSelectType() const { DARABONBA_PTR_GET_DEFAULT(nodeSelectType_, "") };
    inline ComponentLayoutNodeSelector& setNodeSelectType(string nodeSelectType) { DARABONBA_PTR_SET_VALUE(nodeSelectType_, nodeSelectType) };


    // nodeStartIndex Field Functions 
    bool hasNodeStartIndex() const { return this->nodeStartIndex_ != nullptr;};
    void deleteNodeStartIndex() { this->nodeStartIndex_ = nullptr;};
    inline int32_t nodeStartIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeStartIndex_, 0) };
    inline ComponentLayoutNodeSelector& setNodeStartIndex(int32_t nodeStartIndex) { DARABONBA_PTR_SET_VALUE(nodeStartIndex_, nodeStartIndex) };


  protected:
    // 节点结束编号，包含结束编号。
    std::shared_ptr<int32_t> nodeEndIndex_ = nullptr;
    // 节点组ID。
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // 机器组下标编号。
    std::shared_ptr<int32_t> nodeGroupIndex_ = nullptr;
    // 机器组名。
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    // SelectType = NODE_GROUP 且 nodeGroupId 不存在时使用
    std::shared_ptr<vector<string>> nodeGroupTypes_ = nullptr;
    // 节点名称列表。
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    // 节点选择类型。
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeSelectType_ = nullptr;
    // 节点开始编号，包含开始编号。
    std::shared_ptr<int32_t> nodeStartIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
