// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAPHFLOWNODE_HPP_
#define ALIBABACLOUD_MODELS_GRAPHFLOWNODE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConditionBasicInfo.hpp>
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
    class Properties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Properties& obj) { 
        DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
        DARABONBA_PTR_TO_JSON(BranchJudge, branchJudge_);
        DARABONBA_PTR_TO_JSON(CheckMoreSize, checkMoreSize_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(Lambda, lambda_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
        DARABONBA_PTR_TO_JSON(SayType, sayType_);
        DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
        DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
        DARABONBA_PTR_TO_JSON(ScoreRuleHitType, scoreRuleHitType_);
        DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
        DARABONBA_PTR_TO_JSON(Triggers, triggers_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Properties& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
        DARABONBA_PTR_FROM_JSON(BranchJudge, branchJudge_);
        DARABONBA_PTR_FROM_JSON(CheckMoreSize, checkMoreSize_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
        DARABONBA_PTR_FROM_JSON(SayType, sayType_);
        DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
        DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
        DARABONBA_PTR_FROM_JSON(ScoreRuleHitType, scoreRuleHitType_);
        DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
        DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Properties() = default ;
      Properties(const Properties &) = default ;
      Properties(Properties &&) = default ;
      Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Properties() = default ;
      Properties& operator=(const Properties &) = default ;
      Properties& operator=(Properties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoReview_ == nullptr
        && this->branchJudge_ == nullptr && this->checkMoreSize_ == nullptr && this->checkType_ == nullptr && this->lambda_ == nullptr && this->role_ == nullptr
        && this->ruleScoreType_ == nullptr && this->sayType_ == nullptr && this->scoreNum_ == nullptr && this->scoreNumType_ == nullptr && this->scoreRuleHitType_ == nullptr
        && this->scoreType_ == nullptr && this->triggers_ == nullptr && this->type_ == nullptr; };
      // autoReview Field Functions 
      bool hasAutoReview() const { return this->autoReview_ != nullptr;};
      void deleteAutoReview() { this->autoReview_ = nullptr;};
      inline int32_t getAutoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
      inline Properties& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


      // branchJudge Field Functions 
      bool hasBranchJudge() const { return this->branchJudge_ != nullptr;};
      void deleteBranchJudge() { this->branchJudge_ = nullptr;};
      inline bool getBranchJudge() const { DARABONBA_PTR_GET_DEFAULT(branchJudge_, false) };
      inline Properties& setBranchJudge(bool branchJudge) { DARABONBA_PTR_SET_VALUE(branchJudge_, branchJudge) };


      // checkMoreSize Field Functions 
      bool hasCheckMoreSize() const { return this->checkMoreSize_ != nullptr;};
      void deleteCheckMoreSize() { this->checkMoreSize_ = nullptr;};
      inline int32_t getCheckMoreSize() const { DARABONBA_PTR_GET_DEFAULT(checkMoreSize_, 0) };
      inline Properties& setCheckMoreSize(int32_t checkMoreSize) { DARABONBA_PTR_SET_VALUE(checkMoreSize_, checkMoreSize) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline Properties& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // lambda Field Functions 
      bool hasLambda() const { return this->lambda_ != nullptr;};
      void deleteLambda() { this->lambda_ = nullptr;};
      inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
      inline Properties& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Properties& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // ruleScoreType Field Functions 
      bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
      void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
      inline int32_t getRuleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
      inline Properties& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


      // sayType Field Functions 
      bool hasSayType() const { return this->sayType_ != nullptr;};
      void deleteSayType() { this->sayType_ = nullptr;};
      inline string getSayType() const { DARABONBA_PTR_GET_DEFAULT(sayType_, "") };
      inline Properties& setSayType(string sayType) { DARABONBA_PTR_SET_VALUE(sayType_, sayType) };


      // scoreNum Field Functions 
      bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
      void deleteScoreNum() { this->scoreNum_ = nullptr;};
      inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
      inline Properties& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


      // scoreNumType Field Functions 
      bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
      void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
      inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
      inline Properties& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


      // scoreRuleHitType Field Functions 
      bool hasScoreRuleHitType() const { return this->scoreRuleHitType_ != nullptr;};
      void deleteScoreRuleHitType() { this->scoreRuleHitType_ = nullptr;};
      inline int32_t getScoreRuleHitType() const { DARABONBA_PTR_GET_DEFAULT(scoreRuleHitType_, 0) };
      inline Properties& setScoreRuleHitType(int32_t scoreRuleHitType) { DARABONBA_PTR_SET_VALUE(scoreRuleHitType_, scoreRuleHitType) };


      // scoreType Field Functions 
      bool hasScoreType() const { return this->scoreType_ != nullptr;};
      void deleteScoreType() { this->scoreType_ = nullptr;};
      inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
      inline Properties& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


      // triggers Field Functions 
      bool hasTriggers() const { return this->triggers_ != nullptr;};
      void deleteTriggers() { this->triggers_ = nullptr;};
      inline const vector<string> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
      inline vector<string> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
      inline Properties& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
      inline Properties& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Properties& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int32_t> autoReview_ {};
      shared_ptr<bool> branchJudge_ {};
      shared_ptr<int32_t> checkMoreSize_ {};
      shared_ptr<int32_t> checkType_ {};
      shared_ptr<string> lambda_ {};
      shared_ptr<string> role_ {};
      shared_ptr<int32_t> ruleScoreType_ {};
      shared_ptr<string> sayType_ {};
      shared_ptr<int32_t> scoreNum_ {};
      shared_ptr<int32_t> scoreNumType_ {};
      shared_ptr<int32_t> scoreRuleHitType_ {};
      shared_ptr<int32_t> scoreType_ {};
      shared_ptr<vector<string>> triggers_ {};
      shared_ptr<string> type_ {};
    };

    class NextNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NextNodes& obj) { 
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(Lambda, lambda_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NextNodeId, nextNodeId_);
        DARABONBA_PTR_TO_JSON(Triggers, triggers_);
      };
      friend void from_json(const Darabonba::Json& j, NextNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NextNodeId, nextNodeId_);
        DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
      };
      NextNodes() = default ;
      NextNodes(const NextNodes &) = default ;
      NextNodes(NextNodes &&) = default ;
      NextNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NextNodes() = default ;
      NextNodes& operator=(const NextNodes &) = default ;
      NextNodes& operator=(NextNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkType_ == nullptr
        && this->index_ == nullptr && this->lambda_ == nullptr && this->name_ == nullptr && this->nextNodeId_ == nullptr && this->triggers_ == nullptr; };
      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
      inline NextNodes& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline NextNodes& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // lambda Field Functions 
      bool hasLambda() const { return this->lambda_ != nullptr;};
      void deleteLambda() { this->lambda_ = nullptr;};
      inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
      inline NextNodes& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NextNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nextNodeId Field Functions 
      bool hasNextNodeId() const { return this->nextNodeId_ != nullptr;};
      void deleteNextNodeId() { this->nextNodeId_ = nullptr;};
      inline int64_t getNextNodeId() const { DARABONBA_PTR_GET_DEFAULT(nextNodeId_, 0L) };
      inline NextNodes& setNextNodeId(int64_t nextNodeId) { DARABONBA_PTR_SET_VALUE(nextNodeId_, nextNodeId) };


      // triggers Field Functions 
      bool hasTriggers() const { return this->triggers_ != nullptr;};
      void deleteTriggers() { this->triggers_ = nullptr;};
      inline const vector<string> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
      inline vector<string> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
      inline NextNodes& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
      inline NextNodes& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


    protected:
      shared_ptr<int32_t> checkType_ {};
      shared_ptr<int32_t> index_ {};
      shared_ptr<string> lambda_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> nextNodeId_ {};
      shared_ptr<vector<string>> triggers_ {};
    };

    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->content_ == nullptr && this->id_ == nullptr && this->index_ == nullptr && this->name_ == nullptr && this->nextNodes_ == nullptr
        && this->nodeType_ == nullptr && this->properties_ == nullptr && this->rid_ == nullptr && this->useConditions_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<ConditionBasicInfo> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<ConditionBasicInfo>) };
    inline vector<ConditionBasicInfo> getConditions() { DARABONBA_PTR_GET(conditions_, vector<ConditionBasicInfo>) };
    inline GraphFlowNode& setConditions(const vector<ConditionBasicInfo> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GraphFlowNode& setConditions(vector<ConditionBasicInfo> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GraphFlowNode& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GraphFlowNode& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GraphFlowNode& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GraphFlowNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextNodes Field Functions 
    bool hasNextNodes() const { return this->nextNodes_ != nullptr;};
    void deleteNextNodes() { this->nextNodes_ = nullptr;};
    inline const vector<GraphFlowNode::NextNodes> & getNextNodes() const { DARABONBA_PTR_GET_CONST(nextNodes_, vector<GraphFlowNode::NextNodes>) };
    inline vector<GraphFlowNode::NextNodes> getNextNodes() { DARABONBA_PTR_GET(nextNodes_, vector<GraphFlowNode::NextNodes>) };
    inline GraphFlowNode& setNextNodes(const vector<GraphFlowNode::NextNodes> & nextNodes) { DARABONBA_PTR_SET_VALUE(nextNodes_, nextNodes) };
    inline GraphFlowNode& setNextNodes(vector<GraphFlowNode::NextNodes> && nextNodes) { DARABONBA_PTR_SET_RVALUE(nextNodes_, nextNodes) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GraphFlowNode& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const GraphFlowNode::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, GraphFlowNode::Properties) };
    inline GraphFlowNode::Properties getProperties() { DARABONBA_PTR_GET(properties_, GraphFlowNode::Properties) };
    inline GraphFlowNode& setProperties(const GraphFlowNode::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GraphFlowNode& setProperties(GraphFlowNode::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GraphFlowNode& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // useConditions Field Functions 
    bool hasUseConditions() const { return this->useConditions_ != nullptr;};
    void deleteUseConditions() { this->useConditions_ = nullptr;};
    inline bool getUseConditions() const { DARABONBA_PTR_GET_DEFAULT(useConditions_, false) };
    inline GraphFlowNode& setUseConditions(bool useConditions) { DARABONBA_PTR_SET_VALUE(useConditions_, useConditions) };


  protected:
    shared_ptr<vector<ConditionBasicInfo>> conditions_ {};
    shared_ptr<string> content_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> index_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<GraphFlowNode::NextNodes>> nextNodes_ {};
    shared_ptr<string> nodeType_ {};
    shared_ptr<GraphFlowNode::Properties> properties_ {};
    shared_ptr<int64_t> rid_ {};
    shared_ptr<bool> useConditions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
