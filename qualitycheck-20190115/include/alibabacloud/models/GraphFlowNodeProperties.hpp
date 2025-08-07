// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAPHFLOWNODEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GRAPHFLOWNODEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GraphFlowNodeProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GraphFlowNodeProperties& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GraphFlowNodeProperties& obj) { 
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
    GraphFlowNodeProperties() = default ;
    GraphFlowNodeProperties(const GraphFlowNodeProperties &) = default ;
    GraphFlowNodeProperties(GraphFlowNodeProperties &&) = default ;
    GraphFlowNodeProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GraphFlowNodeProperties() = default ;
    GraphFlowNodeProperties& operator=(const GraphFlowNodeProperties &) = default ;
    GraphFlowNodeProperties& operator=(GraphFlowNodeProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoReview_ != nullptr
        && this->branchJudge_ != nullptr && this->checkMoreSize_ != nullptr && this->checkType_ != nullptr && this->lambda_ != nullptr && this->role_ != nullptr
        && this->ruleScoreType_ != nullptr && this->sayType_ != nullptr && this->scoreNum_ != nullptr && this->scoreNumType_ != nullptr && this->scoreRuleHitType_ != nullptr
        && this->scoreType_ != nullptr && this->triggers_ != nullptr && this->type_ != nullptr; };
    // autoReview Field Functions 
    bool hasAutoReview() const { return this->autoReview_ != nullptr;};
    void deleteAutoReview() { this->autoReview_ = nullptr;};
    inline int32_t autoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
    inline GraphFlowNodeProperties& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


    // branchJudge Field Functions 
    bool hasBranchJudge() const { return this->branchJudge_ != nullptr;};
    void deleteBranchJudge() { this->branchJudge_ = nullptr;};
    inline bool branchJudge() const { DARABONBA_PTR_GET_DEFAULT(branchJudge_, false) };
    inline GraphFlowNodeProperties& setBranchJudge(bool branchJudge) { DARABONBA_PTR_SET_VALUE(branchJudge_, branchJudge) };


    // checkMoreSize Field Functions 
    bool hasCheckMoreSize() const { return this->checkMoreSize_ != nullptr;};
    void deleteCheckMoreSize() { this->checkMoreSize_ = nullptr;};
    inline int32_t checkMoreSize() const { DARABONBA_PTR_GET_DEFAULT(checkMoreSize_, 0) };
    inline GraphFlowNodeProperties& setCheckMoreSize(int32_t checkMoreSize) { DARABONBA_PTR_SET_VALUE(checkMoreSize_, checkMoreSize) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline GraphFlowNodeProperties& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline GraphFlowNodeProperties& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GraphFlowNodeProperties& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // ruleScoreType Field Functions 
    bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
    void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
    inline int32_t ruleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
    inline GraphFlowNodeProperties& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


    // sayType Field Functions 
    bool hasSayType() const { return this->sayType_ != nullptr;};
    void deleteSayType() { this->sayType_ = nullptr;};
    inline string sayType() const { DARABONBA_PTR_GET_DEFAULT(sayType_, "") };
    inline GraphFlowNodeProperties& setSayType(string sayType) { DARABONBA_PTR_SET_VALUE(sayType_, sayType) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline GraphFlowNodeProperties& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreNumType Field Functions 
    bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
    void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
    inline int32_t scoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
    inline GraphFlowNodeProperties& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


    // scoreRuleHitType Field Functions 
    bool hasScoreRuleHitType() const { return this->scoreRuleHitType_ != nullptr;};
    void deleteScoreRuleHitType() { this->scoreRuleHitType_ = nullptr;};
    inline int32_t scoreRuleHitType() const { DARABONBA_PTR_GET_DEFAULT(scoreRuleHitType_, 0) };
    inline GraphFlowNodeProperties& setScoreRuleHitType(int32_t scoreRuleHitType) { DARABONBA_PTR_SET_VALUE(scoreRuleHitType_, scoreRuleHitType) };


    // scoreType Field Functions 
    bool hasScoreType() const { return this->scoreType_ != nullptr;};
    void deleteScoreType() { this->scoreType_ = nullptr;};
    inline int32_t scoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
    inline GraphFlowNodeProperties& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<string> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
    inline vector<string> triggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
    inline GraphFlowNodeProperties& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline GraphFlowNodeProperties& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GraphFlowNodeProperties& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> autoReview_ = nullptr;
    std::shared_ptr<bool> branchJudge_ = nullptr;
    std::shared_ptr<int32_t> checkMoreSize_ = nullptr;
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<string> lambda_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreType_ = nullptr;
    std::shared_ptr<string> sayType_ = nullptr;
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int32_t> scoreNumType_ = nullptr;
    std::shared_ptr<int32_t> scoreRuleHitType_ = nullptr;
    std::shared_ptr<int32_t> scoreType_ = nullptr;
    std::shared_ptr<vector<string>> triggers_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
