// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4RESPONSEBODYDATAHITRULEREVIEWINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList.hpp>
#include <alibabacloud/models/TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList.hpp>
#include <alibabacloud/models/ConditionBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4ResponseBodyDataHitRuleReviewInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4ResponseBodyDataHitRuleReviewInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(BranchHitId, branchHitId_);
      DARABONBA_PTR_TO_JSON(BranchInfoList, branchInfoList_);
      DARABONBA_PTR_TO_JSON(ConditionHitInfoList, conditionHitInfoList_);
      DARABONBA_PTR_TO_JSON(ConditionInfoList, conditionInfoList_);
      DARABONBA_PTR_TO_JSON(JudgeNodeName, judgeNodeName_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Matched, matched_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4ResponseBodyDataHitRuleReviewInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(BranchHitId, branchHitId_);
      DARABONBA_PTR_FROM_JSON(BranchInfoList, branchInfoList_);
      DARABONBA_PTR_FROM_JSON(ConditionHitInfoList, conditionHitInfoList_);
      DARABONBA_PTR_FROM_JSON(ConditionInfoList, conditionInfoList_);
      DARABONBA_PTR_FROM_JSON(JudgeNodeName, judgeNodeName_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Matched, matched_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
    };
    TestRuleV4ResponseBodyDataHitRuleReviewInfoList() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoList(const TestRuleV4ResponseBodyDataHitRuleReviewInfoList &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoList(TestRuleV4ResponseBodyDataHitRuleReviewInfoList &&) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4ResponseBodyDataHitRuleReviewInfoList() = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoList& operator=(const TestRuleV4ResponseBodyDataHitRuleReviewInfoList &) = default ;
    TestRuleV4ResponseBodyDataHitRuleReviewInfoList& operator=(TestRuleV4ResponseBodyDataHitRuleReviewInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->branchHitId_ == nullptr
        && return this->branchInfoList_ == nullptr && return this->conditionHitInfoList_ == nullptr && return this->conditionInfoList_ == nullptr && return this->judgeNodeName_ == nullptr && return this->lambda_ == nullptr
        && return this->matched_ == nullptr && return this->nodeType_ == nullptr && return this->rid_ == nullptr && return this->ruleName_ == nullptr && return this->ruleScoreType_ == nullptr
        && return this->scoreNumType_ == nullptr && return this->taskFlowId_ == nullptr; };
    // branchHitId Field Functions 
    bool hasBranchHitId() const { return this->branchHitId_ != nullptr;};
    void deleteBranchHitId() { this->branchHitId_ = nullptr;};
    inline int64_t branchHitId() const { DARABONBA_PTR_GET_DEFAULT(branchHitId_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setBranchHitId(int64_t branchHitId) { DARABONBA_PTR_SET_VALUE(branchHitId_, branchHitId) };


    // branchInfoList Field Functions 
    bool hasBranchInfoList() const { return this->branchInfoList_ != nullptr;};
    void deleteBranchInfoList() { this->branchInfoList_ = nullptr;};
    inline const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList> & branchInfoList() const { DARABONBA_PTR_GET_CONST(branchInfoList_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList>) };
    inline vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList> branchInfoList() { DARABONBA_PTR_GET(branchInfoList_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList>) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setBranchInfoList(const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList> & branchInfoList) { DARABONBA_PTR_SET_VALUE(branchInfoList_, branchInfoList) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setBranchInfoList(vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList> && branchInfoList) { DARABONBA_PTR_SET_RVALUE(branchInfoList_, branchInfoList) };


    // conditionHitInfoList Field Functions 
    bool hasConditionHitInfoList() const { return this->conditionHitInfoList_ != nullptr;};
    void deleteConditionHitInfoList() { this->conditionHitInfoList_ = nullptr;};
    inline const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList> & conditionHitInfoList() const { DARABONBA_PTR_GET_CONST(conditionHitInfoList_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList>) };
    inline vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList> conditionHitInfoList() { DARABONBA_PTR_GET(conditionHitInfoList_, vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList>) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setConditionHitInfoList(const vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList> & conditionHitInfoList) { DARABONBA_PTR_SET_VALUE(conditionHitInfoList_, conditionHitInfoList) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setConditionHitInfoList(vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList> && conditionHitInfoList) { DARABONBA_PTR_SET_RVALUE(conditionHitInfoList_, conditionHitInfoList) };


    // conditionInfoList Field Functions 
    bool hasConditionInfoList() const { return this->conditionInfoList_ != nullptr;};
    void deleteConditionInfoList() { this->conditionInfoList_ = nullptr;};
    inline const vector<Models::ConditionBasicInfo> & conditionInfoList() const { DARABONBA_PTR_GET_CONST(conditionInfoList_, vector<Models::ConditionBasicInfo>) };
    inline vector<Models::ConditionBasicInfo> conditionInfoList() { DARABONBA_PTR_GET(conditionInfoList_, vector<Models::ConditionBasicInfo>) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setConditionInfoList(const vector<Models::ConditionBasicInfo> & conditionInfoList) { DARABONBA_PTR_SET_VALUE(conditionInfoList_, conditionInfoList) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setConditionInfoList(vector<Models::ConditionBasicInfo> && conditionInfoList) { DARABONBA_PTR_SET_RVALUE(conditionInfoList_, conditionInfoList) };


    // judgeNodeName Field Functions 
    bool hasJudgeNodeName() const { return this->judgeNodeName_ != nullptr;};
    void deleteJudgeNodeName() { this->judgeNodeName_ = nullptr;};
    inline string judgeNodeName() const { DARABONBA_PTR_GET_DEFAULT(judgeNodeName_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setJudgeNodeName(string judgeNodeName) { DARABONBA_PTR_SET_VALUE(judgeNodeName_, judgeNodeName) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // matched Field Functions 
    bool hasMatched() const { return this->matched_ != nullptr;};
    void deleteMatched() { this->matched_ = nullptr;};
    inline bool matched() const { DARABONBA_PTR_GET_DEFAULT(matched_, false) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setMatched(bool matched) { DARABONBA_PTR_SET_VALUE(matched_, matched) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleScoreType Field Functions 
    bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
    void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
    inline int32_t ruleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


    // scoreNumType Field Functions 
    bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
    void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
    inline int32_t scoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


    // taskFlowId Field Functions 
    bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
    void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
    inline int64_t taskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
    inline TestRuleV4ResponseBodyDataHitRuleReviewInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


  protected:
    std::shared_ptr<int64_t> branchHitId_ = nullptr;
    std::shared_ptr<vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListBranchInfoList>> branchInfoList_ = nullptr;
    std::shared_ptr<vector<Models::TestRuleV4ResponseBodyDataHitRuleReviewInfoListConditionHitInfoList>> conditionHitInfoList_ = nullptr;
    std::shared_ptr<vector<Models::ConditionBasicInfo>> conditionInfoList_ = nullptr;
    std::shared_ptr<string> judgeNodeName_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<bool> matched_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreType_ = nullptr;
    std::shared_ptr<int32_t> scoreNumType_ = nullptr;
    std::shared_ptr<int64_t> taskFlowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
