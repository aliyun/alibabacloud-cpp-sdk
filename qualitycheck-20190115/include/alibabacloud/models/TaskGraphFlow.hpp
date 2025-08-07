// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKGRAPHFLOW_HPP_
#define ALIBABACLOUD_MODELS_TASKGRAPHFLOW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Qualitycheck20190115.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TaskGraphFlow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskGraphFlow& obj) { 
      DARABONBA_PTR_TO_JSON(FlowRuleScoreType, flowRuleScoreType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ShowProperties, showProperties_);
      DARABONBA_PTR_TO_JSON(SkipWhenFirstSessionNodeMiss, skipWhenFirstSessionNodeMiss_);
    };
    friend void from_json(const Darabonba::Json& j, TaskGraphFlow& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowRuleScoreType, flowRuleScoreType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ShowProperties, showProperties_);
      DARABONBA_PTR_FROM_JSON(SkipWhenFirstSessionNodeMiss, skipWhenFirstSessionNodeMiss_);
    };
    TaskGraphFlow() = default ;
    TaskGraphFlow(const TaskGraphFlow &) = default ;
    TaskGraphFlow(TaskGraphFlow &&) = default ;
    TaskGraphFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskGraphFlow() = default ;
    TaskGraphFlow& operator=(const TaskGraphFlow &) = default ;
    TaskGraphFlow& operator=(TaskGraphFlow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowRuleScoreType_ != nullptr
        && this->id_ != nullptr && this->nodes_ != nullptr && this->rid_ != nullptr && this->ruleName_ != nullptr && this->showProperties_ != nullptr
        && this->skipWhenFirstSessionNodeMiss_ != nullptr; };
    // flowRuleScoreType Field Functions 
    bool hasFlowRuleScoreType() const { return this->flowRuleScoreType_ != nullptr;};
    void deleteFlowRuleScoreType() { this->flowRuleScoreType_ = nullptr;};
    inline int32_t flowRuleScoreType() const { DARABONBA_PTR_GET_DEFAULT(flowRuleScoreType_, 0) };
    inline TaskGraphFlow& setFlowRuleScoreType(int32_t flowRuleScoreType) { DARABONBA_PTR_SET_VALUE(flowRuleScoreType_, flowRuleScoreType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline TaskGraphFlow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<GraphFlowNode> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<GraphFlowNode>) };
    inline vector<GraphFlowNode> nodes() { DARABONBA_PTR_GET(nodes_, vector<GraphFlowNode>) };
    inline TaskGraphFlow& setNodes(const vector<GraphFlowNode> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline TaskGraphFlow& setNodes(vector<GraphFlowNode> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline TaskGraphFlow& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline TaskGraphFlow& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // showProperties Field Functions 
    bool hasShowProperties() const { return this->showProperties_ != nullptr;};
    void deleteShowProperties() { this->showProperties_ = nullptr;};
    inline string showProperties() const { DARABONBA_PTR_GET_DEFAULT(showProperties_, "") };
    inline TaskGraphFlow& setShowProperties(string showProperties) { DARABONBA_PTR_SET_VALUE(showProperties_, showProperties) };


    // skipWhenFirstSessionNodeMiss Field Functions 
    bool hasSkipWhenFirstSessionNodeMiss() const { return this->skipWhenFirstSessionNodeMiss_ != nullptr;};
    void deleteSkipWhenFirstSessionNodeMiss() { this->skipWhenFirstSessionNodeMiss_ = nullptr;};
    inline bool skipWhenFirstSessionNodeMiss() const { DARABONBA_PTR_GET_DEFAULT(skipWhenFirstSessionNodeMiss_, false) };
    inline TaskGraphFlow& setSkipWhenFirstSessionNodeMiss(bool skipWhenFirstSessionNodeMiss) { DARABONBA_PTR_SET_VALUE(skipWhenFirstSessionNodeMiss_, skipWhenFirstSessionNodeMiss) };


  protected:
    std::shared_ptr<int32_t> flowRuleScoreType_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<GraphFlowNode>> nodes_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> showProperties_ = nullptr;
    std::shared_ptr<bool> skipWhenFirstSessionNodeMiss_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
