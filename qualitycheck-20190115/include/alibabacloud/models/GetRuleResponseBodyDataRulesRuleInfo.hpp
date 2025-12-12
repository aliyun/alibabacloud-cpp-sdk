// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATARULESRULEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYDATARULESRULEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleResponseBodyDataRulesRuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyDataRulesRuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_TO_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(IsOnline, isOnline_);
      DARABONBA_PTR_TO_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleLambda, ruleLambda_);
      DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
      DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyDataRulesRuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_FROM_JSON(BusinessCategoryNameList, businessCategoryNameList_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateEmpid, createEmpid_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(IsOnline, isOnline_);
      DARABONBA_PTR_FROM_JSON(LastUpdateEmpid, lastUpdateEmpid_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleLambda, ruleLambda_);
      DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
      DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    GetRuleResponseBodyDataRulesRuleInfo() = default ;
    GetRuleResponseBodyDataRulesRuleInfo(const GetRuleResponseBodyDataRulesRuleInfo &) = default ;
    GetRuleResponseBodyDataRulesRuleInfo(GetRuleResponseBodyDataRulesRuleInfo &&) = default ;
    GetRuleResponseBodyDataRulesRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyDataRulesRuleInfo() = default ;
    GetRuleResponseBodyDataRulesRuleInfo& operator=(const GetRuleResponseBodyDataRulesRuleInfo &) = default ;
    GetRuleResponseBodyDataRulesRuleInfo& operator=(GetRuleResponseBodyDataRulesRuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoReview_ == nullptr
        && return this->businessCategoryNameList_ == nullptr && return this->comments_ == nullptr && return this->createEmpid_ == nullptr && return this->createTime_ == nullptr && return this->endTime_ == nullptr
        && return this->isDelete_ == nullptr && return this->isOnline_ == nullptr && return this->lastUpdateEmpid_ == nullptr && return this->lastUpdateTime_ == nullptr && return this->name_ == nullptr
        && return this->rid_ == nullptr && return this->ruleLambda_ == nullptr && return this->ruleScoreType_ == nullptr && return this->scoreId_ == nullptr && return this->scoreName_ == nullptr
        && return this->scoreSubId_ == nullptr && return this->scoreSubName_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr
        && return this->weight_ == nullptr; };
    // autoReview Field Functions 
    bool hasAutoReview() const { return this->autoReview_ != nullptr;};
    void deleteAutoReview() { this->autoReview_ = nullptr;};
    inline int32_t autoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


    // businessCategoryNameList Field Functions 
    bool hasBusinessCategoryNameList() const { return this->businessCategoryNameList_ != nullptr;};
    void deleteBusinessCategoryNameList() { this->businessCategoryNameList_ = nullptr;};
    inline const Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList & businessCategoryNameList() const { DARABONBA_PTR_GET_CONST(businessCategoryNameList_, Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList) };
    inline Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList businessCategoryNameList() { DARABONBA_PTR_GET(businessCategoryNameList_, Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setBusinessCategoryNameList(const Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList & businessCategoryNameList) { DARABONBA_PTR_SET_VALUE(businessCategoryNameList_, businessCategoryNameList) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setBusinessCategoryNameList(Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList && businessCategoryNameList) { DARABONBA_PTR_SET_RVALUE(businessCategoryNameList_, businessCategoryNameList) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createEmpid Field Functions 
    bool hasCreateEmpid() const { return this->createEmpid_ != nullptr;};
    void deleteCreateEmpid() { this->createEmpid_ = nullptr;};
    inline string createEmpid() const { DARABONBA_PTR_GET_DEFAULT(createEmpid_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setCreateEmpid(string createEmpid) { DARABONBA_PTR_SET_VALUE(createEmpid_, createEmpid) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline int32_t isDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // isOnline Field Functions 
    bool hasIsOnline() const { return this->isOnline_ != nullptr;};
    void deleteIsOnline() { this->isOnline_ = nullptr;};
    inline int32_t isOnline() const { DARABONBA_PTR_GET_DEFAULT(isOnline_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setIsOnline(int32_t isOnline) { DARABONBA_PTR_SET_VALUE(isOnline_, isOnline) };


    // lastUpdateEmpid Field Functions 
    bool hasLastUpdateEmpid() const { return this->lastUpdateEmpid_ != nullptr;};
    void deleteLastUpdateEmpid() { this->lastUpdateEmpid_ = nullptr;};
    inline string lastUpdateEmpid() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateEmpid_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setLastUpdateEmpid(string lastUpdateEmpid) { DARABONBA_PTR_SET_VALUE(lastUpdateEmpid_, lastUpdateEmpid) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline string lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setLastUpdateTime(string lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleLambda Field Functions 
    bool hasRuleLambda() const { return this->ruleLambda_ != nullptr;};
    void deleteRuleLambda() { this->ruleLambda_ = nullptr;};
    inline string ruleLambda() const { DARABONBA_PTR_GET_DEFAULT(ruleLambda_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setRuleLambda(string ruleLambda) { DARABONBA_PTR_SET_VALUE(ruleLambda_, ruleLambda) };


    // ruleScoreType Field Functions 
    bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
    void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
    inline int32_t ruleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


    // scoreId Field Functions 
    bool hasScoreId() const { return this->scoreId_ != nullptr;};
    void deleteScoreId() { this->scoreId_ = nullptr;};
    inline int32_t scoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setScoreId(int32_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


    // scoreName Field Functions 
    bool hasScoreName() const { return this->scoreName_ != nullptr;};
    void deleteScoreName() { this->scoreName_ = nullptr;};
    inline string scoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


    // scoreSubId Field Functions 
    bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
    void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
    inline int32_t scoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setScoreSubId(int32_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


    // scoreSubName Field Functions 
    bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
    void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
    inline string scoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetRuleResponseBodyDataRulesRuleInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline GetRuleResponseBodyDataRulesRuleInfo& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<int32_t> autoReview_ = nullptr;
    std::shared_ptr<Models::GetRuleResponseBodyDataRulesRuleInfoBusinessCategoryNameList> businessCategoryNameList_ = nullptr;
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> createEmpid_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> isDelete_ = nullptr;
    std::shared_ptr<int32_t> isOnline_ = nullptr;
    std::shared_ptr<string> lastUpdateEmpid_ = nullptr;
    std::shared_ptr<string> lastUpdateTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<string> ruleLambda_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreType_ = nullptr;
    std::shared_ptr<int32_t> scoreId_ = nullptr;
    std::shared_ptr<string> scoreName_ = nullptr;
    std::shared_ptr<int32_t> scoreSubId_ = nullptr;
    std::shared_ptr<string> scoreSubName_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
