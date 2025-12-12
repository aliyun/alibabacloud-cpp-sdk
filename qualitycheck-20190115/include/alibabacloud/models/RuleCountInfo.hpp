// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULECOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_RULECOUNTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BusinessCategoryBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class RuleCountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuleCountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_TO_JSON(BusinessCategoryBasicInfoList, businessCategoryBasicInfoList_);
      DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_TO_JSON(BusinessRange, businessRange_);
      DARABONBA_PTR_TO_JSON(CheckNumber, checkNumber_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateEmpName, createEmpName_);
      DARABONBA_PTR_TO_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Deny, deny_);
      DARABONBA_PTR_TO_JSON(Effective, effective_);
      DARABONBA_PTR_TO_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FullCycle, fullCycle_);
      DARABONBA_ANY_TO_JSON(GraphFlow, graphFlow_);
      DARABONBA_PTR_TO_JSON(HitNumber, hitNumber_);
      DARABONBA_PTR_TO_JSON(HitRate, hitRate_);
      DARABONBA_PTR_TO_JSON(HitRealViolationRate, hitRealViolationRate_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(IsSelect, isSelect_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(LastUpdateEmpName, lastUpdateEmpName_);
      DARABONBA_PTR_TO_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationMode, operationMode_);
      DARABONBA_PTR_TO_JSON(PreReviewNumber, preReviewNumber_);
      DARABONBA_PTR_TO_JSON(ProblemNumber, problemNumber_);
      DARABONBA_PTR_TO_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_TO_JSON(RealViolationNumber, realViolationNumber_);
      DARABONBA_PTR_TO_JSON(ReviewAccuracyRate, reviewAccuracyRate_);
      DARABONBA_PTR_TO_JSON(ReviewNumber, reviewNumber_);
      DARABONBA_PTR_TO_JSON(ReviewRate, reviewRate_);
      DARABONBA_PTR_TO_JSON(ReviewStatusName, reviewStatusName_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleScoreSingleType, ruleScoreSingleType_);
      DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(UnReviewNumber, unReviewNumber_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, RuleCountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_FROM_JSON(BusinessCategoryBasicInfoList, businessCategoryBasicInfoList_);
      DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_FROM_JSON(BusinessRange, businessRange_);
      DARABONBA_PTR_FROM_JSON(CheckNumber, checkNumber_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateEmpName, createEmpName_);
      DARABONBA_PTR_FROM_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Deny, deny_);
      DARABONBA_PTR_FROM_JSON(Effective, effective_);
      DARABONBA_PTR_FROM_JSON(EffectiveEndTime, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(EffectiveStartTime, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FullCycle, fullCycle_);
      DARABONBA_ANY_FROM_JSON(GraphFlow, graphFlow_);
      DARABONBA_PTR_FROM_JSON(HitNumber, hitNumber_);
      DARABONBA_PTR_FROM_JSON(HitRate, hitRate_);
      DARABONBA_PTR_FROM_JSON(HitRealViolationRate, hitRealViolationRate_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(IsSelect, isSelect_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(LastUpdateEmpName, lastUpdateEmpName_);
      DARABONBA_PTR_FROM_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationMode, operationMode_);
      DARABONBA_PTR_FROM_JSON(PreReviewNumber, preReviewNumber_);
      DARABONBA_PTR_FROM_JSON(ProblemNumber, problemNumber_);
      DARABONBA_PTR_FROM_JSON(QualityCheckType, qualityCheckType_);
      DARABONBA_PTR_FROM_JSON(RealViolationNumber, realViolationNumber_);
      DARABONBA_PTR_FROM_JSON(ReviewAccuracyRate, reviewAccuracyRate_);
      DARABONBA_PTR_FROM_JSON(ReviewNumber, reviewNumber_);
      DARABONBA_PTR_FROM_JSON(ReviewRate, reviewRate_);
      DARABONBA_PTR_FROM_JSON(ReviewStatusName, reviewStatusName_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleScoreSingleType, ruleScoreSingleType_);
      DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(UnReviewNumber, unReviewNumber_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    RuleCountInfo() = default ;
    RuleCountInfo(const RuleCountInfo &) = default ;
    RuleCountInfo(RuleCountInfo &&) = default ;
    RuleCountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuleCountInfo() = default ;
    RuleCountInfo& operator=(const RuleCountInfo &) = default ;
    RuleCountInfo& operator=(RuleCountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoReview_ == nullptr
        && return this->businessCategoryBasicInfoList_ == nullptr && return this->businessCategoryNameList_ == nullptr && return this->businessRange_ == nullptr && return this->checkNumber_ == nullptr && return this->comments_ == nullptr
        && return this->createEmpName_ == nullptr && return this->createEmpid_ == nullptr && return this->createTime_ == nullptr && return this->deny_ == nullptr && return this->effective_ == nullptr
        && return this->effectiveEndTime_ == nullptr && return this->effectiveStartTime_ == nullptr && return this->endTime_ == nullptr && return this->fullCycle_ == nullptr && return this->graphFlow_ == nullptr
        && return this->hitNumber_ == nullptr && return this->hitRate_ == nullptr && return this->hitRealViolationRate_ == nullptr && return this->isDelete_ == nullptr && return this->isSelect_ == nullptr
        && return this->jobName_ == nullptr && return this->lastUpdateEmpName_ == nullptr && return this->lastUpdateEmpid_ == nullptr && return this->lastUpdateTime_ == nullptr && return this->name_ == nullptr
        && return this->operationMode_ == nullptr && return this->preReviewNumber_ == nullptr && return this->problemNumber_ == nullptr && return this->qualityCheckType_ == nullptr && return this->realViolationNumber_ == nullptr
        && return this->reviewAccuracyRate_ == nullptr && return this->reviewNumber_ == nullptr && return this->reviewRate_ == nullptr && return this->reviewStatusName_ == nullptr && return this->rid_ == nullptr
        && return this->ruleScoreSingleType_ == nullptr && return this->ruleScoreType_ == nullptr && return this->ruleType_ == nullptr && return this->scoreSubId_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->targetType_ == nullptr && return this->type_ == nullptr && return this->typeName_ == nullptr && return this->unReviewNumber_ == nullptr
        && return this->userGroup_ == nullptr; };
    // autoReview Field Functions 
    bool hasAutoReview() const { return this->autoReview_ != nullptr;};
    void deleteAutoReview() { this->autoReview_ = nullptr;};
    inline int32_t autoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
    inline RuleCountInfo& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


    // businessCategoryBasicInfoList Field Functions 
    bool hasBusinessCategoryBasicInfoList() const { return this->businessCategoryBasicInfoList_ != nullptr;};
    void deleteBusinessCategoryBasicInfoList() { this->businessCategoryBasicInfoList_ = nullptr;};
    inline const vector<BusinessCategoryBasicInfo> & businessCategoryBasicInfoList() const { DARABONBA_PTR_GET_CONST(businessCategoryBasicInfoList_, vector<BusinessCategoryBasicInfo>) };
    inline vector<BusinessCategoryBasicInfo> businessCategoryBasicInfoList() { DARABONBA_PTR_GET(businessCategoryBasicInfoList_, vector<BusinessCategoryBasicInfo>) };
    inline RuleCountInfo& setBusinessCategoryBasicInfoList(const vector<BusinessCategoryBasicInfo> & businessCategoryBasicInfoList) { DARABONBA_PTR_SET_VALUE(businessCategoryBasicInfoList_, businessCategoryBasicInfoList) };
    inline RuleCountInfo& setBusinessCategoryBasicInfoList(vector<BusinessCategoryBasicInfo> && businessCategoryBasicInfoList) { DARABONBA_PTR_SET_RVALUE(businessCategoryBasicInfoList_, businessCategoryBasicInfoList) };


    // businessCategoryNameList Field Functions 
    bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
    void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
    inline const vector<string> & businessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, vector<string>) };
    inline vector<string> businessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, vector<string>) };
    inline RuleCountInfo& setBusinessCategoryNameList(const vector<string> & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
    inline RuleCountInfo& setBusinessCategoryNameList(vector<string> && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


    // businessRange Field Functions 
    bool hasBusinessRange() const { return this->businessRange_ != nullptr;};
    void deleteBusinessRange() { this->businessRange_ = nullptr;};
    inline const vector<int32_t> & businessRange() const { DARABONBA_PTR_GET_CONST(businessRange_, vector<int32_t>) };
    inline vector<int32_t> businessRange() { DARABONBA_PTR_GET(businessRange_, vector<int32_t>) };
    inline RuleCountInfo& setBusinessRange(const vector<int32_t> & businessRange) { DARABONBA_PTR_SET_VALUE(businessRange_, businessRange) };
    inline RuleCountInfo& setBusinessRange(vector<int32_t> && businessRange) { DARABONBA_PTR_SET_RVALUE(businessRange_, businessRange) };


    // checkNumber Field Functions 
    bool hasCheckNumber() const { return this->checkNumber_ != nullptr;};
    void deleteCheckNumber() { this->checkNumber_ = nullptr;};
    inline int64_t checkNumber() const { DARABONBA_PTR_GET_DEFAULT(checkNumber_, 0L) };
    inline RuleCountInfo& setCheckNumber(int64_t checkNumber) { DARABONBA_PTR_SET_VALUE(checkNumber_, checkNumber) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline RuleCountInfo& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createEmpName Field Functions 
    bool hasCreateEmpName() const { return this->createEmpName_ != nullptr;};
    void deleteCreateEmpName() { this->createEmpName_ = nullptr;};
    inline string createEmpName() const { DARABONBA_PTR_GET_DEFAULT(createEmpName_, "") };
    inline RuleCountInfo& setCreateEmpName(string createEmpName) { DARABONBA_PTR_SET_VALUE(createEmpName_, createEmpName) };


    // createEmpid Field Functions 
    bool hasCreateEmpid() const { return this->createEmpid_ != nullptr;};
    void deleteCreateEmpid() { this->createEmpid_ = nullptr;};
    inline string createEmpid() const { DARABONBA_PTR_GET_DEFAULT(createEmpid_, "") };
    inline RuleCountInfo& setCreateEmpid(string createEmpid) { DARABONBA_PTR_SET_VALUE(createEmpid_, createEmpid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline RuleCountInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // deny Field Functions 
    bool hasDeny() const { return this->deny_ != nullptr;};
    void deleteDeny() { this->deny_ = nullptr;};
    inline int32_t deny() const { DARABONBA_PTR_GET_DEFAULT(deny_, 0) };
    inline RuleCountInfo& setDeny(int32_t deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };


    // effective Field Functions 
    bool hasEffective() const { return this->effective_ != nullptr;};
    void deleteEffective() { this->effective_ = nullptr;};
    inline int32_t effective() const { DARABONBA_PTR_GET_DEFAULT(effective_, 0) };
    inline RuleCountInfo& setEffective(int32_t effective) { DARABONBA_PTR_SET_VALUE(effective_, effective) };


    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline string effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
    inline RuleCountInfo& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline RuleCountInfo& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline RuleCountInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fullCycle Field Functions 
    bool hasFullCycle() const { return this->fullCycle_ != nullptr;};
    void deleteFullCycle() { this->fullCycle_ = nullptr;};
    inline int32_t fullCycle() const { DARABONBA_PTR_GET_DEFAULT(fullCycle_, 0) };
    inline RuleCountInfo& setFullCycle(int32_t fullCycle) { DARABONBA_PTR_SET_VALUE(fullCycle_, fullCycle) };


    // graphFlow Field Functions 
    bool hasGraphFlow() const { return this->graphFlow_ != nullptr;};
    void deleteGraphFlow() { this->graphFlow_ = nullptr;};
    inline     const Darabonba::Json & graphFlow() const { DARABONBA_GET(graphFlow_) };
    Darabonba::Json & graphFlow() { DARABONBA_GET(graphFlow_) };
    inline RuleCountInfo& setGraphFlow(const Darabonba::Json & graphFlow) { DARABONBA_SET_VALUE(graphFlow_, graphFlow) };
    inline RuleCountInfo& setGraphFlow(Darabonba::Json & graphFlow) { DARABONBA_SET_RVALUE(graphFlow_, graphFlow) };


    // hitNumber Field Functions 
    bool hasHitNumber() const { return this->hitNumber_ != nullptr;};
    void deleteHitNumber() { this->hitNumber_ = nullptr;};
    inline int64_t hitNumber() const { DARABONBA_PTR_GET_DEFAULT(hitNumber_, 0L) };
    inline RuleCountInfo& setHitNumber(int64_t hitNumber) { DARABONBA_PTR_SET_VALUE(hitNumber_, hitNumber) };


    // hitRate Field Functions 
    bool hasHitRate() const { return this->hitRate_ != nullptr;};
    void deleteHitRate() { this->hitRate_ = nullptr;};
    inline float hitRate() const { DARABONBA_PTR_GET_DEFAULT(hitRate_, 0.0) };
    inline RuleCountInfo& setHitRate(float hitRate) { DARABONBA_PTR_SET_VALUE(hitRate_, hitRate) };


    // hitRealViolationRate Field Functions 
    bool hasHitRealViolationRate() const { return this->hitRealViolationRate_ != nullptr;};
    void deleteHitRealViolationRate() { this->hitRealViolationRate_ = nullptr;};
    inline float hitRealViolationRate() const { DARABONBA_PTR_GET_DEFAULT(hitRealViolationRate_, 0.0) };
    inline RuleCountInfo& setHitRealViolationRate(float hitRealViolationRate) { DARABONBA_PTR_SET_VALUE(hitRealViolationRate_, hitRealViolationRate) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline int32_t isDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
    inline RuleCountInfo& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // isSelect Field Functions 
    bool hasIsSelect() const { return this->isSelect_ != nullptr;};
    void deleteIsSelect() { this->isSelect_ = nullptr;};
    inline bool isSelect() const { DARABONBA_PTR_GET_DEFAULT(isSelect_, false) };
    inline RuleCountInfo& setIsSelect(bool isSelect) { DARABONBA_PTR_SET_VALUE(isSelect_, isSelect) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline RuleCountInfo& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // lastUpdateEmpName Field Functions 
    bool hasLastUpdateEmpName() const { return this->lastUpdateEmpName_ != nullptr;};
    void deleteLastUpdateEmpName() { this->lastUpdateEmpName_ = nullptr;};
    inline string lastUpdateEmpName() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpName_, "") };
    inline RuleCountInfo& setLastUpdateEmpName(string lastUpdateEmpName) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpName_, lastUpdateEmpName) };


    // lastUpdateEmpid Field Functions 
    bool hasLastUpdateEmpid() const { return this->lastUpdateEmpid_ != nullptr;};
    void deleteLastUpdateEmpid() { this->lastUpdateEmpid_ = nullptr;};
    inline string lastUpdateEmpid() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpid_, "") };
    inline RuleCountInfo& setLastUpdateEmpid(string lastUpdateEmpid) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpid_, lastUpdateEmpid) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline RuleCountInfo& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RuleCountInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationMode Field Functions 
    bool hasOperationMode() const { return this->operationMode_ != nullptr;};
    void deleteOperationMode() { this->operationMode_ = nullptr;};
    inline int32_t operationMode() const { DARABONBA_PTR_GET_DEFAULT(operationMode_, 0) };
    inline RuleCountInfo& setOperationMode(int32_t operationMode) { DARABONBA_PTR_SET_VALUE(operationMode_, operationMode) };


    // preReviewNumber Field Functions 
    bool hasPreReviewNumber() const { return this->preReviewNumber_ != nullptr;};
    void deletePreReviewNumber() { this->preReviewNumber_ = nullptr;};
    inline int64_t preReviewNumber() const { DARABONBA_PTR_GET_DEFAULT(preReviewNumber_, 0L) };
    inline RuleCountInfo& setPreReviewNumber(int64_t preReviewNumber) { DARABONBA_PTR_SET_VALUE(preReviewNumber_, preReviewNumber) };


    // problemNumber Field Functions 
    bool hasProblemNumber() const { return this->problemNumber_ != nullptr;};
    void deleteProblemNumber() { this->problemNumber_ = nullptr;};
    inline int64_t problemNumber() const { DARABONBA_PTR_GET_DEFAULT(problemNumber_, 0L) };
    inline RuleCountInfo& setProblemNumber(int64_t problemNumber) { DARABONBA_PTR_SET_VALUE(problemNumber_, problemNumber) };


    // qualityCheckType Field Functions 
    bool hasQualityCheckType() const { return this->qualityCheckType_ != nullptr;};
    void deleteQualityCheckType() { this->qualityCheckType_ = nullptr;};
    inline int32_t qualityCheckType() const { DARABONBA_PTR_GET_DEFAULT(qualityCheckType_, 0) };
    inline RuleCountInfo& setQualityCheckType(int32_t qualityCheckType) { DARABONBA_PTR_SET_VALUE(qualityCheckType_, qualityCheckType) };


    // realViolationNumber Field Functions 
    bool hasRealViolationNumber() const { return this->realViolationNumber_ != nullptr;};
    void deleteRealViolationNumber() { this->realViolationNumber_ = nullptr;};
    inline int32_t realViolationNumber() const { DARABONBA_PTR_GET_DEFAULT(realViolationNumber_, 0) };
    inline RuleCountInfo& setRealViolationNumber(int32_t realViolationNumber) { DARABONBA_PTR_SET_VALUE(realViolationNumber_, realViolationNumber) };


    // reviewAccuracyRate Field Functions 
    bool hasReviewAccuracyRate() const { return this->reviewAccuracyRate_ != nullptr;};
    void deleteReviewAccuracyRate() { this->reviewAccuracyRate_ = nullptr;};
    inline float reviewAccuracyRate() const { DARABONBA_PTR_GET_DEFAULT(reviewAccuracyRate_, 0.0) };
    inline RuleCountInfo& setReviewAccuracyRate(float reviewAccuracyRate) { DARABONBA_PTR_SET_VALUE(reviewAccuracyRate_, reviewAccuracyRate) };


    // reviewNumber Field Functions 
    bool hasReviewNumber() const { return this->reviewNumber_ != nullptr;};
    void deleteReviewNumber() { this->reviewNumber_ = nullptr;};
    inline int64_t reviewNumber() const { DARABONBA_PTR_GET_DEFAULT(reviewNumber_, 0L) };
    inline RuleCountInfo& setReviewNumber(int64_t reviewNumber) { DARABONBA_PTR_SET_VALUE(reviewNumber_, reviewNumber) };


    // reviewRate Field Functions 
    bool hasReviewRate() const { return this->reviewRate_ != nullptr;};
    void deleteReviewRate() { this->reviewRate_ = nullptr;};
    inline float reviewRate() const { DARABONBA_PTR_GET_DEFAULT(reviewRate_, 0.0) };
    inline RuleCountInfo& setReviewRate(float reviewRate) { DARABONBA_PTR_SET_VALUE(reviewRate_, reviewRate) };


    // reviewStatusName Field Functions 
    bool hasReviewStatusName() const { return this->reviewStatusName_ != nullptr;};
    void deleteReviewStatusName() { this->reviewStatusName_ = nullptr;};
    inline string reviewStatusName() const { DARABONBA_PTR_GET_DEFAULT(reviewStatusName_, "") };
    inline RuleCountInfo& setReviewStatusName(string reviewStatusName) { DARABONBA_PTR_SET_VALUE(reviewStatusName_, reviewStatusName) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline RuleCountInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleScoreSingleType Field Functions 
    bool hasRuleScoreSingleType() const { return this->ruleScoreSingleType_ != nullptr;};
    void deleteRuleScoreSingleType() { this->ruleScoreSingleType_ = nullptr;};
    inline int32_t ruleScoreSingleType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreSingleType_, 0) };
    inline RuleCountInfo& setRuleScoreSingleType(int32_t ruleScoreSingleType) { DARABONBA_PTR_SET_VALUE(ruleScoreSingleType_, ruleScoreSingleType) };


    // ruleScoreType Field Functions 
    bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
    void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
    inline int32_t ruleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
    inline RuleCountInfo& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline RuleCountInfo& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scoreSubId Field Functions 
    bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
    void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
    inline int64_t scoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0L) };
    inline RuleCountInfo& setScoreSubId(int64_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline RuleCountInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RuleCountInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline RuleCountInfo& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline RuleCountInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline RuleCountInfo& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // unReviewNumber Field Functions 
    bool hasUnReviewNumber() const { return this->unReviewNumber_ != nullptr;};
    void deleteUnReviewNumber() { this->unReviewNumber_ = nullptr;};
    inline int64_t unReviewNumber() const { DARABONBA_PTR_GET_DEFAULT(unReviewNumber_, 0L) };
    inline RuleCountInfo& setUnReviewNumber(int64_t unReviewNumber) { DARABONBA_PTR_SET_VALUE(unReviewNumber_, unReviewNumber) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string userGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline RuleCountInfo& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    std::shared_ptr<int32_t> autoReview_ = nullptr;
    std::shared_ptr<vector<BusinessCategoryBasicInfo>> businessCategoryBasicInfoList_ = nullptr;
    std::shared_ptr<vector<string>> businessCategoryNameList_ = nullptr;
    std::shared_ptr<vector<int32_t>> businessRange_ = nullptr;
    std::shared_ptr<int64_t> checkNumber_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> createEmpName_ = nullptr;
    std::shared_ptr<string> createEmpid_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> deny_ = nullptr;
    std::shared_ptr<int32_t> effective_ = nullptr;
    std::shared_ptr<string> effectiveEndTime_ = nullptr;
    std::shared_ptr<string> effectiveStartTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> fullCycle_ = nullptr;
    Darabonba::Json graphFlow_ = nullptr;
    std::shared_ptr<int64_t> hitNumber_ = nullptr;
    std::shared_ptr<float> hitRate_ = nullptr;
    std::shared_ptr<float> hitRealViolationRate_ = nullptr;
    std::shared_ptr<int32_t> isDelete_ = nullptr;
    std::shared_ptr<bool> isSelect_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> lastUpdateEmpName_ = nullptr;
    std::shared_ptr<string> lastUpdateEmpid_ = nullptr;
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> operationMode_ = nullptr;
    std::shared_ptr<int64_t> preReviewNumber_ = nullptr;
    std::shared_ptr<int64_t> problemNumber_ = nullptr;
    std::shared_ptr<int32_t> qualityCheckType_ = nullptr;
    std::shared_ptr<int32_t> realViolationNumber_ = nullptr;
    std::shared_ptr<float> reviewAccuracyRate_ = nullptr;
    std::shared_ptr<int64_t> reviewNumber_ = nullptr;
    std::shared_ptr<float> reviewRate_ = nullptr;
    std::shared_ptr<string> reviewStatusName_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreSingleType_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreType_ = nullptr;
    std::shared_ptr<int32_t> ruleType_ = nullptr;
    std::shared_ptr<int64_t> scoreSubId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> targetType_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> typeName_ = nullptr;
    std::shared_ptr<int64_t> unReviewNumber_ = nullptr;
    std::shared_ptr<string> userGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
