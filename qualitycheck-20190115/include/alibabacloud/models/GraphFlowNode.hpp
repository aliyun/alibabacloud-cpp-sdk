// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAPHFLOWNODE_HPP_
#define ALIBABACLOUD_MODELS_GRAPHFLOWNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConditionBasicInfo.hpp>
#include <alibabacloud/models/GraphFlowNodeNextNodes.hpp>
#include <alibabacloud/models/GraphFlowNodeProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GraphFlowNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GraphFlowNode& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextNodes, nextNodes_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(UseConditions, useConditions_);
    };
    friend void from_json(const Darabonba::Json& j, GraphFlowNode& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextNodes, nextNodes_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(UseConditions, useConditions_);
    };
    GraphFlowNode() = default ;
    GraphFlowNode(const GraphFlowNode &) = default ;
    GraphFlowNode(GraphFlowNode &&) = default ;
    GraphFlowNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GraphFlowNode() = default ;
    GraphFlowNode& operator=(const GraphFlowNode &) = default ;
    GraphFlowNode& operator=(GraphFlowNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->content_ == nullptr && return this->id_ == nullptr && return this->index_ == nullptr && return this->name_ == nullptr && return this->nextNodes_ == nullptr
        && return this->nodeType_ == nullptr && return this->properties_ == nullptr && return this->rid_ == nullptr && return this->useConditions_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<ConditionBasicInfo> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<ConditionBasicInfo>) };
    inline vector<ConditionBasicInfo> conditions() { DARABONBA_PTR_GET(conditions_, vector<ConditionBasicInfo>) };
    inline GraphFlowNode& setConditions(const vector<ConditionBasicInfo> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GraphFlowNode& setConditions(vector<ConditionBasicInfo> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GraphFlowNode& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GraphFlowNode& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GraphFlowNode& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GraphFlowNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextNodes Field Functions 
    bool hasNextNodes() const { return this->nextNodes_ != nullptr;};
    void deleteNextNodes() { this->nextNodes_ = nullptr;};
    inline const vector<GraphFlowNodeNextNodes> & nextNodes() const { DARABONBA_PTR_GET_CONST(nextNodes_, vector<GraphFlowNodeNextNodes>) };
    inline vector<GraphFlowNodeNextNodes> nextNodes() { DARABONBA_PTR_GET(nextNodes_, vector<GraphFlowNodeNextNodes>) };
    inline GraphFlowNode& setNextNodes(const vector<GraphFlowNodeNextNodes> & nextNodes) { DARABONBA_PTR_SET_VALUE(nextNodes_, nextNodes) };
    inline GraphFlowNode& setNextNodes(vector<GraphFlowNodeNextNodes> && nextNodes) { DARABONBA_PTR_SET_RVALUE(nextNodes_, nextNodes) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GraphFlowNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const GraphFlowNodeProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, GraphFlowNodeProperties) };
    inline GraphFlowNodeProperties properties() { DARABONBA_PTR_GET(properties_, GraphFlowNodeProperties) };
    inline GraphFlowNode& setProperties(const GraphFlowNodeProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GraphFlowNode& setProperties(GraphFlowNodeProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GraphFlowNode& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // useConditions Field Functions 
    bool hasUseConditions() const { return this->useConditions_ != nullptr;};
    void deleteUseConditions() { this->useConditions_ = nullptr;};
    inline bool useConditions() const { DARABONBA_PTR_GET_DEFAULT(useConditions_, false) };
    inline GraphFlowNode& setUseConditions(bool useConditions) { DARABONBA_PTR_SET_VALUE(useConditions_, useConditions) };


  protected:
    std::shared_ptr<vector<ConditionBasicInfo>> conditions_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<GraphFlowNodeNextNodes>> nextNodes_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<GraphFlowNodeProperties> properties_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<bool> useConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
