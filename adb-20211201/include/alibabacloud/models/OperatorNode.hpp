// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATORNODE_HPP_
#define ALIBABACLOUD_MODELS_OPERATORNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperatorNode.hpp>
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
    class Stats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Stats& obj) { 
        DARABONBA_PTR_TO_JSON(bytes, bytes_);
        DARABONBA_PTR_TO_JSON(outputRows, outputRows_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(peakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(timeCost, timeCost_);
      };
      friend void from_json(const Darabonba::Json& j, Stats& obj) { 
        DARABONBA_PTR_FROM_JSON(bytes, bytes_);
        DARABONBA_PTR_FROM_JSON(outputRows, outputRows_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(peakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(timeCost, timeCost_);
      };
      Stats() = default ;
      Stats(const Stats &) = default ;
      Stats(Stats &&) = default ;
      Stats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Stats() = default ;
      Stats& operator=(const Stats &) = default ;
      Stats& operator=(Stats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bytes_ == nullptr
        && this->outputRows_ == nullptr && this->parameters_ == nullptr && this->peakMemory_ == nullptr && this->timeCost_ == nullptr; };
      // bytes Field Functions 
      bool hasBytes() const { return this->bytes_ != nullptr;};
      void deleteBytes() { this->bytes_ = nullptr;};
      inline int64_t getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
      inline Stats& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


      // outputRows Field Functions 
      bool hasOutputRows() const { return this->outputRows_ != nullptr;};
      void deleteOutputRows() { this->outputRows_ = nullptr;};
      inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
      inline Stats& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline Stats& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline Stats& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // timeCost Field Functions 
      bool hasTimeCost() const { return this->timeCost_ != nullptr;};
      void deleteTimeCost() { this->timeCost_ = nullptr;};
      inline int64_t getTimeCost() const { DARABONBA_PTR_GET_DEFAULT(timeCost_, 0L) };
      inline Stats& setTimeCost(int64_t timeCost) { DARABONBA_PTR_SET_VALUE(timeCost_, timeCost) };


    protected:
      shared_ptr<int64_t> bytes_ {};
      shared_ptr<int64_t> outputRows_ {};
      shared_ptr<string> parameters_ {};
      shared_ptr<int64_t> peakMemory_ {};
      shared_ptr<int64_t> timeCost_ {};
    };

    virtual bool empty() const override { return this->children_ == nullptr
        && this->id_ == nullptr && this->levelWidth_ == nullptr && this->nodeDepth_ == nullptr && this->nodeName_ == nullptr && this->nodeWidth_ == nullptr
        && this->parentId_ == nullptr && this->stats_ == nullptr; };
    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline const vector<OperatorNode> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<OperatorNode>) };
    inline vector<OperatorNode> getChildren() { DARABONBA_PTR_GET(children_, vector<OperatorNode>) };
    inline OperatorNode& setChildren(const vector<OperatorNode> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
    inline OperatorNode& setChildren(vector<OperatorNode> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline OperatorNode& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // levelWidth Field Functions 
    bool hasLevelWidth() const { return this->levelWidth_ != nullptr;};
    void deleteLevelWidth() { this->levelWidth_ = nullptr;};
    inline int32_t getLevelWidth() const { DARABONBA_PTR_GET_DEFAULT(levelWidth_, 0) };
    inline OperatorNode& setLevelWidth(int32_t levelWidth) { DARABONBA_PTR_SET_VALUE(levelWidth_, levelWidth) };


    // nodeDepth Field Functions 
    bool hasNodeDepth() const { return this->nodeDepth_ != nullptr;};
    void deleteNodeDepth() { this->nodeDepth_ = nullptr;};
    inline int32_t getNodeDepth() const { DARABONBA_PTR_GET_DEFAULT(nodeDepth_, 0) };
    inline OperatorNode& setNodeDepth(int32_t nodeDepth) { DARABONBA_PTR_SET_VALUE(nodeDepth_, nodeDepth) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline OperatorNode& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeWidth Field Functions 
    bool hasNodeWidth() const { return this->nodeWidth_ != nullptr;};
    void deleteNodeWidth() { this->nodeWidth_ = nullptr;};
    inline int32_t getNodeWidth() const { DARABONBA_PTR_GET_DEFAULT(nodeWidth_, 0) };
    inline OperatorNode& setNodeWidth(int32_t nodeWidth) { DARABONBA_PTR_SET_VALUE(nodeWidth_, nodeWidth) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int32_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0) };
    inline OperatorNode& setParentId(int32_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // stats Field Functions 
    bool hasStats() const { return this->stats_ != nullptr;};
    void deleteStats() { this->stats_ = nullptr;};
    inline const OperatorNode::Stats & getStats() const { DARABONBA_PTR_GET_CONST(stats_, OperatorNode::Stats) };
    inline OperatorNode::Stats getStats() { DARABONBA_PTR_GET(stats_, OperatorNode::Stats) };
    inline OperatorNode& setStats(const OperatorNode::Stats & stats) { DARABONBA_PTR_SET_VALUE(stats_, stats) };
    inline OperatorNode& setStats(OperatorNode::Stats && stats) { DARABONBA_PTR_SET_RVALUE(stats_, stats) };


  protected:
    shared_ptr<vector<OperatorNode>> children_ {};
    shared_ptr<int32_t> id_ {};
    shared_ptr<int32_t> levelWidth_ {};
    shared_ptr<int32_t> nodeDepth_ {};
    shared_ptr<string> nodeName_ {};
    shared_ptr<int32_t> nodeWidth_ {};
    shared_ptr<int32_t> parentId_ {};
    shared_ptr<OperatorNode::Stats> stats_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
