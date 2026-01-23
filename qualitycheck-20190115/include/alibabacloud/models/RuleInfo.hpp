// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULEINFO_HPP_
#define ALIBABACLOUD_MODELS_RULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RuleTestDialogue.hpp>
#include <alibabacloud/models/SchemeCheckType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class RuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(CreateEmpName, createEmpName_);
      DARABONBA_PTR_TO_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Deny, deny_);
      DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_TO_JSON(Effective, effective_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExternalProperty, externalProperty_);
      DARABONBA_PTR_TO_JSON(FullCycle, fullCycle_);
      DARABONBA_ANY_TO_JSON(GraphFlow, graphFlow_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(IsOnline, isOnline_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(LastUpdateEmpName, lastUpdateEmpName_);
      DARABONBA_PTR_TO_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Meet, meet_);
      DARABONBA_PTR_TO_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationMode, operationMode_);
      DARABONBA_PTR_TO_JSON(PreqRule, preqRule_);
      DARABONBA_PTR_TO_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleCategoryName, ruleCategoryName_);
      DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(SchemeCheckType, schemeCheckType_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_TO_JSON(SchemeRuleMappingId, schemeRuleMappingId_);
      DARABONBA_PTR_TO_JSON(ScoreDeleted, scoreDeleted_);
      DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_TO_JSON(ScoreRuleHitType, scoreRuleHitType_);
      DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
      DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_TO_JSON(SortIndex, sortIndex_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
      DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, RuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(CreateEmpName, createEmpName_);
      DARABONBA_PTR_FROM_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Deny, deny_);
      DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_FROM_JSON(Effective, effective_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExternalProperty, externalProperty_);
      DARABONBA_PTR_FROM_JSON(FullCycle, fullCycle_);
      DARABONBA_ANY_FROM_JSON(GraphFlow, graphFlow_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(IsOnline, isOnline_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(LastUpdateEmpName, lastUpdateEmpName_);
      DARABONBA_PTR_FROM_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Meet, meet_);
      DARABONBA_PTR_FROM_JSON(ModifyType, modifyType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationMode, operationMode_);
      DARABONBA_PTR_FROM_JSON(PreqRule, preqRule_);
      DARABONBA_PTR_FROM_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleCategoryName, ruleCategoryName_);
      DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(SchemeCheckType, schemeCheckType_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_FROM_JSON(SchemeRuleMappingId, schemeRuleMappingId_);
      DARABONBA_PTR_FROM_JSON(ScoreDeleted, scoreDeleted_);
      DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_FROM_JSON(ScoreRuleHitType, scoreRuleHitType_);
      DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
      DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_FROM_JSON(SortIndex, sortIndex_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
      DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    RuleInfo() = default ;
    RuleInfo(const RuleInfo &) = default ;
    RuleInfo(RuleInfo &&) = default ;
    RuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuleInfo() = default ;
    RuleInfo& operator=(const RuleInfo &) = default ;
    RuleInfo& operator=(RuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreqRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreqRule& obj) { 
        DARABONBA_PTR_TO_JSON(Rid, rid_);
      };
      friend void from_json(const Darabonba::Json& j, PreqRule& obj) { 
        DARABONBA_PTR_FROM_JSON(Rid, rid_);
      };
      PreqRule() = default ;
      PreqRule(const PreqRule &) = default ;
      PreqRule(PreqRule &&) = default ;
      PreqRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreqRule() = default ;
      PreqRule& operator=(const PreqRule &) = default ;
      PreqRule& operator=(PreqRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rid_ == nullptr; };
      // rid Field Functions 
      bool hasRid() const { return this->rid_ != nullptr;};
      void deleteRid() { this->rid_ = nullptr;};
      inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
      inline PreqRule& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    protected:
      shared_ptr<string> rid_ {};
    };

    virtual bool empty() const override { return this->autoReview_ == nullptr
        && this->businessCategoryNameList_ == nullptr && this->checkType_ == nullptr && this->comments_ == nullptr && this->configType_ == nullptr && this->createEmpName_ == nullptr
        && this->createEmpid_ == nullptr && this->createTime_ == nullptr && this->deny_ == nullptr && this->dialogues_ == nullptr && this->effective_ == nullptr
        && this->effectiveEndTime_ == nullptr && this->effectiveStartTime_ == nullptr && this->endTime_ == nullptr && this->externalProperty_ == nullptr && this->fullCycle_ == nullptr
        && this->graphFlow_ == nullptr && this->isDelete_ == nullptr && this->isOnline_ == nullptr && this->lambda_ == nullptr && this->lastUpdateEmpName_ == nullptr
        && this->lastUpdateEmpid_ == nullptr && this->lastUpdateTime_ == nullptr && this->level_ == nullptr && this->meet_ == nullptr && this->modifyType_ == nullptr
        && this->name_ == nullptr && this->operationMode_ == nullptr && this->preqRule_ == nullptr && this->qualityCheckType_ == nullptr && this->rid_ == nullptr
        && this->ruleCategoryName_ == nullptr && this->ruleScoreType_ == nullptr && this->ruleType_ == nullptr && this->schemeCheckType_ == nullptr && this->schemeId_ == nullptr
        && this->schemeName_ == nullptr && this->schemeRuleMappingId_ == nullptr && this->scoreDeleted_ == nullptr && this->scoreId_ == nullptr && this->scoreName_ == nullptr
        && this->scoreNum_ == nullptr && this->scoreNumType_ == nullptr && this->scoreRuleHitType_ == nullptr && this->scoreSubId_ == nullptr && this->scoreSubName_ == nullptr
        && this->scoreType_ == nullptr && this->sortIndex_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->targetType_ == nullptr
        && this->taskFlowId_ == nullptr && this->taskFlowType_ == nullptr && this->triggers_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
    // autoReview Field Functions 
    bool hasAutoReview() const { return this->autoReview_ != nullptr;};
    void deleteAutoReview() { this->autoReview_ = nullptr;};
    inline int32_t getAutoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
    inline RuleInfo& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


    // businessCategoryNameList Field Functions 
    bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
    void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
    inline const vector<string> & getBusinessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, vector<string>) };
    inline vector<string> getBusinessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, vector<string>) };
    inline RuleInfo& setBusinessCategoryNameList(const vector<string> & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
    inline RuleInfo& setBusinessCategoryNameList(vector<string> && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int64_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0L) };
    inline RuleInfo& setCheckType(int64_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline RuleInfo& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline int32_t getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, 0) };
    inline RuleInfo& setConfigType(int32_t configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // createEmpName Field Functions 
    bool hasCreateEmpName() const { return this->createEmpName_ != nullptr;};
    void deleteCreateEmpName() { this->createEmpName_ = nullptr;};
    inline string getCreateEmpName() const { DARABONBA_PTR_GET_DEFAULT(createEmpName_, "") };
    inline RuleInfo& setCreateEmpName(string createEmpName) { DARABONBA_PTR_SET_VALUE(createEmpName_, createEmpName) };


    // createEmpid Field Functions 
    bool hasCreateEmpid() const { return this->createEmpid_ != nullptr;};
    void deleteCreateEmpid() { this->createEmpid_ = nullptr;};
    inline string getCreateEmpid() const { DARABONBA_PTR_GET_DEFAULT(createEmpid_, "") };
    inline RuleInfo& setCreateEmpid(string createEmpid) { DARABONBA_PTR_SET_VALUE(createEmpid_, createEmpid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline RuleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline int32_t getDeny() const { DARABONBA_PTR_GET_DEFAULT(deny_, 0) };
    inline RuleInfo& setDeny(int32_t deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };


    // dialogues Field Functions 
    bool hasDialogues() const { return this->dialogues_ != nullptr;};
    void deleteDialogues() { this->dialogues_ = nullptr;};
    inline const vector<RuleTestDialogue> & getDialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, vector<RuleTestDialogue>) };
    inline vector<RuleTestDialogue> getDialogues() { DARABONBA_PTR_GET(dialogues_, vector<RuleTestDialogue>) };
    inline RuleInfo& setDialogues(const vector<RuleTestDialogue> & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
    inline RuleInfo& setDialogues(vector<RuleTestDialogue> && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline int32_t getEffective() const { DARABONBA_PTR_GET_DEFAULT(effective_, 0) };
    inline RuleInfo& setEffective(int32_t effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline string getEffectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
    inline RuleInfo& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string getEffectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline RuleInfo& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline RuleInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // externalProperty Field Functions 
    bool hasExternalProperty() const { return this->externalProperty_ != nullptr;};
    void deleteExternalProperty() { this->externalProperty_ = nullptr;};
    inline int32_t getExternalProperty() const { DARABONBA_PTR_GET_DEFAULT(externalProperty_, 0) };
    inline RuleInfo& setExternalProperty(int32_t externalProperty) { DARABONBA_PTR_SET_VALUE(externalProperty_, externalProperty) };


    // fullCycle Field Functions 
    bool hasFullCycle() const { return this->fullCycle_ != nullptr;};
    void deleteFullCycle() { this->fullCycle_ = nullptr;};
    inline int32_t getFullCycle() const { DARABONBA_PTR_GET_DEFAULT(fullCycle_, 0) };
    inline RuleInfo& setFullCycle(int32_t fullCycle) { DARABONBA_PTR_SET_VALUE(fullCycle_, fullCycle) };


    // graphFlow Field Functions 
    bool hasGraphFlow() const { return this->graphFlow_ != nullptr;};
    void deleteGraphFlow() { this->graphFlow_ = nullptr;};
    inline     const Darabonba::Json & getGraphFlow() const { DARABONBA_GET(graphFlow_) };
    Darabonba::Json & getGraphFlow() { DARABONBA_GET(graphFlow_) };
    inline RuleInfo& setGraphFlow(const Darabonba::Json & graphFlow) { DARABONBA_SET_VALUE(graphFlow_, graphFlow) };
    inline RuleInfo& setGraphFlow(Darabonba::Json && graphFlow) { DARABONBA_SET_RVALUE(graphFlow_, graphFlow) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline int32_t getIsDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
    inline RuleInfo& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // isOnline Field Functions 
    bool hasIsOnline() const { return this->isOnline_ != nullptr;};
    void deleteIsOnline() { this->isOnline_ = nullptr;};
    inline int32_t getIsOnline() const { DARABONBA_PTR_GET_DEFAULT(isOnline_, 0) };
    inline RuleInfo& setIsOnline(int32_t isOnline) { DARABONBA_PTR_SET_VALUE(isOnline_, isOnline) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline RuleInfo& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // lastUpdateEmpName Field Functions 
    bool hasLastUpdateEmpName() const { return this->lastUpdateEmpName_ != nullptr;};
    void deleteLastUpdateEmpName() { this->lastUpdateEmpName_ = nullptr;};
    inline string getLastUpdateEmpName() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpName_, "") };
    inline RuleInfo& setLastUpdateEmpName(string lastUpdateEmpName) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpName_, lastUpdateEmpName) };


    // lastUpdateEmpid Field Functions 
    bool hasLastUpdateEmpid() const { return this->lastUpdateEmpid_ != nullptr;};
    void deleteLastUpdateEmpid() { this->lastUpdateEmpid_ = nullptr;};
    inline string getLastUpdateEmpid() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpid_, "") };
    inline RuleInfo& setLastUpdateEmpid(string lastUpdateEmpid) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpid_, lastUpdateEmpid) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string getLastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline RuleInfo& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline RuleInfo& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // meet Field Functions 
    bool hasMeet() const { return this->meet_ != nullptr;};
    void deleteMeet() { this->meet_ = nullptr;};
    inline int32_t getMeet() const { DARABONBA_PTR_GET_DEFAULT(meet_, 0) };
    inline RuleInfo& setMeet(int32_t meet) { DARABONBA_PTR_SET_VALUE(meet_, meet) };


    // modifyType Field Functions 
    bool hasModifyType() const { return this->modifyType_ != nullptr;};
    void deleteModifyType() { this->modifyType_ = nullptr;};
    inline int32_t getModifyType() const { DARABONBA_PTR_GET_DEFAULT(modifyType_, 0) };
    inline RuleInfo& setModifyType(int32_t modifyType) { DARABONBA_PTR_SET_VALUE(modifyType_, modifyType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RuleInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationMode Field Functions 
    bool hasOperationMode() const { return this->operationMode_ != nullptr;};
    void deleteOperationMode() { this->operationMode_ = nullptr;};
    inline int32_t getOperationMode() const { DARABONBA_PTR_GET_DEFAULT(operationMode_, 0) };
    inline RuleInfo& setOperationMode(int32_t operationMode) { DARABONBA_PTR_SET_VALUE(operationMode_, operationMode) };


    // preqRule Field Functions 
    bool hasPreqRule() const { return this->preqRule_ != nullptr;};
    void deletePreqRule() { this->preqRule_ = nullptr;};
    inline const vector<RuleInfo::PreqRule> & getPreqRule() const { DARABONBA_PTR_GET_CONST(preqRule_, vector<RuleInfo::PreqRule>) };
    inline vector<RuleInfo::PreqRule> getPreqRule() { DARABONBA_PTR_GET(preqRule_, vector<RuleInfo::PreqRule>) };
    inline RuleInfo& setPreqRule(const vector<RuleInfo::PreqRule> & preqRule) { DARABONBA_PTR_SET_VALUE(preqRule_, preqRule) };
    inline RuleInfo& setPreqRule(vector<RuleInfo::PreqRule> && preqRule) { DARABONBA_PTR_SET_RVALUE(preqRule_, preqRule) };


    // qualityCheckType Field Functions 
    bool hasQualityCheckType() const { return this->qualityCheckType_ != nullptr;};
    void deleteQualityCheckType() { this->qualityCheckType_ = nullptr;};
    inline int32_t getQualityCheckType() const { DARABONBA_PTR_GET_DEFAULT(qualityCheckType_, 0) };
    inline RuleInfo& setQualityCheckType(int32_t qualityCheckType) { DARABONBA_PTR_SET_VALUE(qualityCheckType_, qualityCheckType) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline RuleInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleCategoryName Field Functions 
    bool hasRuleCategoryName() const { return this->ruleCategoryName_ != nullptr;};
    void deleteRuleCategoryName() { this->ruleCategoryName_ = nullptr;};
    inline string getRuleCategoryName() const { DARABONBA_PTR_GET_DEFAULT(ruleCategoryName_, "") };
    inline RuleInfo& setRuleCategoryName(string ruleCategoryName) { DARABONBA_PTR_SET_VALUE(ruleCategoryName_, ruleCategoryName) };


    // ruleScoreType Field Functions 
    bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
    void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
    inline int32_t getRuleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
    inline RuleInfo& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline RuleInfo& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // schemeCheckType Field Functions 
    bool hasSchemeCheckType() const { return this->schemeCheckType_ != nullptr;};
    void deleteSchemeCheckType() { this->schemeCheckType_ = nullptr;};
    inline const SchemeCheckType & getSchemeCheckType() const { DARABONBA_PTR_GET_CONST(schemeCheckType_, SchemeCheckType) };
    inline SchemeCheckType getSchemeCheckType() { DARABONBA_PTR_GET(schemeCheckType_, SchemeCheckType) };
    inline RuleInfo& setSchemeCheckType(const SchemeCheckType & schemeCheckType) { DARABONBA_PTR_SET_VALUE(schemeCheckType_, schemeCheckType) };
    inline RuleInfo& setSchemeCheckType(SchemeCheckType && schemeCheckType) { DARABONBA_PTR_SET_RVALUE(schemeCheckType_, schemeCheckType) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t getSchemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline RuleInfo& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string getSchemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline RuleInfo& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


    // schemeRuleMappingId Field Functions 
    bool hasSchemeRuleMappingId() const { return this->schemeRuleMappingId_ != nullptr;};
    void deleteSchemeRuleMappingId() { this->schemeRuleMappingId_ = nullptr;};
    inline int64_t getSchemeRuleMappingId() const { DARABONBA_PTR_GET_DEFAULT(schemeRuleMappingId_, 0L) };
    inline RuleInfo& setSchemeRuleMappingId(int64_t schemeRuleMappingId) { DARABONBA_PTR_SET_VALUE(schemeRuleMappingId_, schemeRuleMappingId) };


    // scoreDeleted Field Functions 
    bool hasScoreDeleted() const { return this->scoreDeleted_ != nullptr;};
    void deleteScoreDeleted() { this->scoreDeleted_ = nullptr;};
    inline bool getScoreDeleted() const { DARABONBA_PTR_GET_DEFAULT(scoreDeleted_, false) };
    inline RuleInfo& setScoreDeleted(bool scoreDeleted) { DARABONBA_PTR_SET_VALUE(scoreDeleted_, scoreDeleted) };


    // scoreId Field Functions 
    bool hasScoreId() const { return this->scoreId_ != nullptr;};
    void deleteScoreId() { this->scoreId_ = nullptr;};
    inline int64_t getScoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0L) };
    inline RuleInfo& setScoreId(int64_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


    // scoreName Field Functions 
    bool hasScoreName() const { return this->scoreName_ != nullptr;};
    void deleteScoreName() { this->scoreName_ = nullptr;};
    inline string getScoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
    inline RuleInfo& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t getScoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline RuleInfo& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreNumType Field Functions 
    bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
    void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
    inline int32_t getScoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
    inline RuleInfo& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


    // scoreRuleHitType Field Functions 
    bool hasScoreRuleHitType() const { return this->scoreRuleHitType_ != nullptr;};
    void deleteScoreRuleHitType() { this->scoreRuleHitType_ = nullptr;};
    inline int32_t getScoreRuleHitType() const { DARABONBA_PTR_GET_DEFAULT(scoreRuleHitType_, 0) };
    inline RuleInfo& setScoreRuleHitType(int32_t scoreRuleHitType) { DARABONBA_PTR_SET_VALUE(scoreRuleHitType_, scoreRuleHitType) };


    // scoreSubId Field Functions 
    bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
    void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
    inline int64_t getScoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0L) };
    inline RuleInfo& setScoreSubId(int64_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


    // scoreSubName Field Functions 
    bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
    void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
    inline string getScoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
    inline RuleInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


    // scoreType Field Functions 
    bool hasScoreType() const { return this->scoreType_ != nullptr;};
    void deleteScoreType() { this->scoreType_ = nullptr;};
    inline int32_t getScoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
    inline RuleInfo& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


    // sortIndex Field Functions 
    bool hasSortIndex() const { return this->sortIndex_ != nullptr;};
    void deleteSortIndex() { this->sortIndex_ = nullptr;};
    inline int32_t getSortIndex() const { DARABONBA_PTR_GET_DEFAULT(sortIndex_, 0) };
    inline RuleInfo& setSortIndex(int32_t sortIndex) { DARABONBA_PTR_SET_VALUE(sortIndex_, sortIndex) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline RuleInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RuleInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline RuleInfo& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskFlowId Field Functions 
    bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
    void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
    inline int64_t getTaskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
    inline RuleInfo& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


    // taskFlowType Field Functions 
    bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
    void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
    inline int32_t getTaskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
    inline RuleInfo& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<string> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<string>) };
    inline vector<string> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<string>) };
    inline RuleInfo& setTriggers(const vector<string> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline RuleInfo& setTriggers(vector<string> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline RuleInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline RuleInfo& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    shared_ptr<int32_t> autoReview_ {};
    shared_ptr<vector<string>> businessCategoryNameList_ {};
    shared_ptr<int64_t> checkType_ {};
    shared_ptr<string> comments_ {};
    shared_ptr<int32_t> configType_ {};
    shared_ptr<string> createEmpName_ {};
    shared_ptr<string> createEmpid_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<int32_t> deny_ {};
    shared_ptr<vector<RuleTestDialogue>> dialogues_ {};
    shared_ptr<int32_t> effective_ {};
    shared_ptr<string> effectiveEndTime_ {};
    shared_ptr<string> effectiveStartTime_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> externalProperty_ {};
    shared_ptr<int32_t> fullCycle_ {};
    Darabonba::Json graphFlow_ {};
    shared_ptr<int32_t> isDelete_ {};
    shared_ptr<int32_t> isOnline_ {};
    shared_ptr<string> lambda_ {};
    shared_ptr<string> lastUpdateEmpName_ {};
    shared_ptr<string> lastUpdateEmpid_ {};
    shared_ptr<string> lastUpdateTime_ {};
    shared_ptr<int32_t> level_ {};
    shared_ptr<int32_t> meet_ {};
    shared_ptr<int32_t> modifyType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> operationMode_ {};
    shared_ptr<vector<RuleInfo::PreqRule>> preqRule_ {};
    shared_ptr<int32_t> qualityCheckType_ {};
    shared_ptr<string> rid_ {};
    shared_ptr<string> ruleCategoryName_ {};
    shared_ptr<int32_t> ruleScoreType_ {};
    shared_ptr<int32_t> ruleType_ {};
    shared_ptr<SchemeCheckType> schemeCheckType_ {};
    shared_ptr<int64_t> schemeId_ {};
    shared_ptr<string> schemeName_ {};
    shared_ptr<int64_t> schemeRuleMappingId_ {};
    shared_ptr<bool> scoreDeleted_ {};
    shared_ptr<int64_t> scoreId_ {};
    shared_ptr<string> scoreName_ {};
    shared_ptr<int32_t> scoreNum_ {};
    shared_ptr<int32_t> scoreNumType_ {};
    shared_ptr<int32_t> scoreRuleHitType_ {};
    shared_ptr<int64_t> scoreSubId_ {};
    shared_ptr<string> scoreSubName_ {};
    shared_ptr<int32_t> scoreType_ {};
    shared_ptr<int32_t> sortIndex_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<int32_t> targetType_ {};
    shared_ptr<int64_t> taskFlowId_ {};
    shared_ptr<int32_t> taskFlowType_ {};
    shared_ptr<vector<string>> triggers_ {};
    shared_ptr<int32_t> type_ {};
    shared_ptr<string> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
