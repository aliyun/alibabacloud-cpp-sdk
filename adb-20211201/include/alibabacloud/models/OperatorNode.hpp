// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATORNODE_HPP_
#define ALIBABACLOUD_MODELS_OPERATORNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperatorNode.hpp>
#include <alibabacloud/models/OperatorNodeStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class OperatorNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperatorNode& obj) { 
      DARABONBA_PTR_TO_JSON(children, children_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(levelWidth, levelWidth_);
      DARABONBA_PTR_TO_JSON(nodeDepth, nodeDepth_);
      DARABONBA_PTR_TO_JSON(nodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(nodeWidth, nodeWidth_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(stats, stats_);
    };
    friend void from_json(const Darabonba::Json& j, OperatorNode& obj) { 
      DARABONBA_PTR_FROM_JSON(children, children_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(levelWidth, levelWidth_);
      DARABONBA_PTR_FROM_JSON(nodeDepth, nodeDepth_);
      DARABONBA_PTR_FROM_JSON(nodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(nodeWidth, nodeWidth_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(stats, stats_);
    };
    OperatorNode() = default ;
    OperatorNode(const OperatorNode &) = default ;
    OperatorNode(OperatorNode &&) = default ;
    OperatorNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperatorNode() = default ;
    OperatorNode& operator=(const OperatorNode &) = default ;
    OperatorNode& operator=(OperatorNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->children_ != nullptr
        && this->id_ != nullptr && this->levelWidth_ != nullptr && this->nodeDepth_ != nullptr && this->nodeName_ != nullptr && this->nodeWidth_ != nullptr
        && this->parentId_ != nullptr && this->stats_ != nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<OperatorNode> & children() const { DARABONBA_PTR_GET_CONST(children_, vector<OperatorNode>) };
    inline vector<OperatorNode> children() { DARABONBA_PTR_GET(children_, vector<OperatorNode>) };
    inline OperatorNode& setChildren(const vector<OperatorNode> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline OperatorNode& setChildren(vector<OperatorNode> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline OperatorNode& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // levelWidth Field Functions 
    bool hasLevelWidth() const { return this->levelWidth_ != nullptr;};
    void deleteLevelWidth() { this->levelWidth_ = nullptr;};
    inline int32_t levelWidth() const { DARABONBA_PTR_GET_DEFAULT(levelWidth_, 0) };
    inline OperatorNode& setLevelWidth(int32_t levelWidth) { DARABONBA_PTR_SET_VALUE(levelWidth_, levelWidth) };


    // nodeDepth Field Functions 
    bool hasNodeDepth() const { return this->nodeDepth_ != nullptr;};
    void deleteNodeDepth() { this->nodeDepth_ = nullptr;};
    inline int32_t nodeDepth() const { DARABONBA_PTR_GET_DEFAULT(nodeDepth_, 0) };
    inline OperatorNode& setNodeDepth(int32_t nodeDepth) { DARABONBA_PTR_SET_VALUE(nodeDepth_, nodeDepth) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline OperatorNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeWidth Field Functions 
    bool hasNodeWidth() const { return this->nodeWidth_ != nullptr;};
    void deleteNodeWidth() { this->nodeWidth_ = nullptr;};
    inline int32_t nodeWidth() const { DARABONBA_PTR_GET_DEFAULT(nodeWidth_, 0) };
    inline OperatorNode& setNodeWidth(int32_t nodeWidth) { DARABONBA_PTR_SET_VALUE(nodeWidth_, nodeWidth) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int32_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0) };
    inline OperatorNode& setParentId(int32_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // stats Field Functions 
    bool hasStats() const { return this->stats_ != nullptr;};
    void deleteStats() { this->stats_ = nullptr;};
    inline const OperatorNodeStats & stats() const { DARABONBA_PTR_GET_CONST(stats_, OperatorNodeStats) };
    inline OperatorNodeStats stats() { DARABONBA_PTR_GET(stats_, OperatorNodeStats) };
    inline OperatorNode& setStats(const OperatorNodeStats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
    inline OperatorNode& setStats(OperatorNodeStats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


  protected:
    std::shared_ptr<vector<OperatorNode>> children_ = nullptr;
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<int32_t> levelWidth_ = nullptr;
    std::shared_ptr<int32_t> nodeDepth_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<int32_t> nodeWidth_ = nullptr;
    std::shared_ptr<int32_t> parentId_ = nullptr;
    std::shared_ptr<OperatorNodeStats> stats_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
