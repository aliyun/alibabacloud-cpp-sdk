// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPONENTLAYOUT_HPP_
#define ALIBABACLOUD_MODELS_COMPONENTLAYOUT_HPP_
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
  class ComponentLayout : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ComponentLayout& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(NodeSelector, nodeSelector_);
    };
    friend void from_json(const Darabonba::Json& j, ComponentLayout& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(NodeSelector, nodeSelector_);
    };
    ComponentLayout() = default ;
    ComponentLayout(const ComponentLayout &) = default ;
    ComponentLayout(ComponentLayout &&) = default ;
    ComponentLayout(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ComponentLayout() = default ;
    ComponentLayout& operator=(const ComponentLayout &) = default ;
    ComponentLayout& operator=(ComponentLayout &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeSelector : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeSelector& obj) { 
        DARABONBA_PTR_TO_JSON(NodeEndIndex, nodeEndIndex_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeGroupIndex, nodeGroupIndex_);
        DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_TO_JSON(NodeGroupTypes, nodeGroupTypes_);
        DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
        DARABONBA_PTR_TO_JSON(NodeSelectType, nodeSelectType_);
        DARABONBA_PTR_TO_JSON(NodeStartIndex, nodeStartIndex_);
      };
      friend void from_json(const Darabonba::Json& j, NodeSelector& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeEndIndex, nodeEndIndex_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeGroupIndex, nodeGroupIndex_);
        DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_FROM_JSON(NodeGroupTypes, nodeGroupTypes_);
        DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
        DARABONBA_PTR_FROM_JSON(NodeSelectType, nodeSelectType_);
        DARABONBA_PTR_FROM_JSON(NodeStartIndex, nodeStartIndex_);
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
      virtual bool empty() const override { return this->nodeEndIndex_ == nullptr
        && this->nodeGroupId_ == nullptr && this->nodeGroupIndex_ == nullptr && this->nodeGroupName_ == nullptr && this->nodeGroupTypes_ == nullptr && this->nodeNames_ == nullptr
        && this->nodeSelectType_ == nullptr && this->nodeStartIndex_ == nullptr; };
      // nodeEndIndex Field Functions 
      bool hasNodeEndIndex() const { return this->nodeEndIndex_ != nullptr;};
      void deleteNodeEndIndex() { this->nodeEndIndex_ = nullptr;};
      inline int32_t getNodeEndIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeEndIndex_, 0) };
      inline NodeSelector& setNodeEndIndex(int32_t nodeEndIndex) { DARABONBA_PTR_SET_VALUE(nodeEndIndex_, nodeEndIndex) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline NodeSelector& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupIndex Field Functions 
      bool hasNodeGroupIndex() const { return this->nodeGroupIndex_ != nullptr;};
      void deleteNodeGroupIndex() { this->nodeGroupIndex_ = nullptr;};
      inline int32_t getNodeGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupIndex_, 0) };
      inline NodeSelector& setNodeGroupIndex(int32_t nodeGroupIndex) { DARABONBA_PTR_SET_VALUE(nodeGroupIndex_, nodeGroupIndex) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline NodeSelector& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // nodeGroupTypes Field Functions 
      bool hasNodeGroupTypes() const { return this->nodeGroupTypes_ != nullptr;};
      void deleteNodeGroupTypes() { this->nodeGroupTypes_ = nullptr;};
      inline const vector<string> & getNodeGroupTypes() const { DARABONBA_PTR_GET_CONST(nodeGroupTypes_, vector<string>) };
      inline vector<string> getNodeGroupTypes() { DARABONBA_PTR_GET(nodeGroupTypes_, vector<string>) };
      inline NodeSelector& setNodeGroupTypes(const vector<string> & nodeGroupTypes) { DARABONBA_PTR_SET_VALUE(nodeGroupTypes_, nodeGroupTypes) };
      inline NodeSelector& setNodeGroupTypes(vector<string> && nodeGroupTypes) { DARABONBA_PTR_SET_RVALUE(nodeGroupTypes_, nodeGroupTypes) };


      // nodeNames Field Functions 
      bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
      void deleteNodeNames() { this->nodeNames_ = nullptr;};
      inline const vector<string> & getNodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
      inline vector<string> getNodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
      inline NodeSelector& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
      inline NodeSelector& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


      // nodeSelectType Field Functions 
      bool hasNodeSelectType() const { return this->nodeSelectType_ != nullptr;};
      void deleteNodeSelectType() { this->nodeSelectType_ = nullptr;};
      inline string getNodeSelectType() const { DARABONBA_PTR_GET_DEFAULT(nodeSelectType_, "") };
      inline NodeSelector& setNodeSelectType(string nodeSelectType) { DARABONBA_PTR_SET_VALUE(nodeSelectType_, nodeSelectType) };


      // nodeStartIndex Field Functions 
      bool hasNodeStartIndex() const { return this->nodeStartIndex_ != nullptr;};
      void deleteNodeStartIndex() { this->nodeStartIndex_ = nullptr;};
      inline int32_t getNodeStartIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeStartIndex_, 0) };
      inline NodeSelector& setNodeStartIndex(int32_t nodeStartIndex) { DARABONBA_PTR_SET_VALUE(nodeStartIndex_, nodeStartIndex) };


    protected:
      // 节点结束编号，包含结束编号。
      shared_ptr<int32_t> nodeEndIndex_ {};
      // 节点组ID。
      shared_ptr<string> nodeGroupId_ {};
      // 机器组下标编号。
      shared_ptr<int32_t> nodeGroupIndex_ {};
      // 机器组名。
      shared_ptr<string> nodeGroupName_ {};
      // SelectType = NODE_GROUP 且 nodeGroupId 不存在时使用
      shared_ptr<vector<string>> nodeGroupTypes_ {};
      // 节点名称列表。
      shared_ptr<vector<string>> nodeNames_ {};
      // 节点选择类型。
      // 
      // This parameter is required.
      shared_ptr<string> nodeSelectType_ {};
      // 节点开始编号，包含开始编号。
      shared_ptr<int32_t> nodeStartIndex_ {};
    };

    virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->componentName_ == nullptr && this->nodeSelector_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ComponentLayout& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ComponentLayout& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // nodeSelector Field Functions 
    bool hasNodeSelector() const { return this->nodeSelector_ != nullptr;};
    void deleteNodeSelector() { this->nodeSelector_ = nullptr;};
    inline const ComponentLayout::NodeSelector & getNodeSelector() const { DARABONBA_PTR_GET_CONST(nodeSelector_, ComponentLayout::NodeSelector) };
    inline ComponentLayout::NodeSelector getNodeSelector() { DARABONBA_PTR_GET(nodeSelector_, ComponentLayout::NodeSelector) };
    inline ComponentLayout& setNodeSelector(const ComponentLayout::NodeSelector & nodeSelector) { DARABONBA_PTR_SET_VALUE(nodeSelector_, nodeSelector) };
    inline ComponentLayout& setNodeSelector(ComponentLayout::NodeSelector && nodeSelector) { DARABONBA_PTR_SET_RVALUE(nodeSelector_, nodeSelector) };


  protected:
    // 应用名称。
    shared_ptr<string> applicationName_ {};
    // 组件名称。
    shared_ptr<string> componentName_ {};
    // 节点选择器。
    shared_ptr<ComponentLayout::NodeSelector> nodeSelector_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
