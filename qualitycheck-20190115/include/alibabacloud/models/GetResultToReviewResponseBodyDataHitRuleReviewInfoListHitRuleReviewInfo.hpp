// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
      DARABONBA_PTR_TO_JSON(Complainable, complainable_);
      DARABONBA_PTR_TO_JSON(ConditionHitInfoList, conditionHitInfoList_);
      DARABONBA_PTR_TO_JSON(MachineHitResult, machineHitResult_);
      DARABONBA_PTR_TO_JSON(ReviewHitResult, reviewHitResult_);
      DARABONBA_PTR_TO_JSON(ReviewInfo, reviewInfo_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoReview, autoReview_);
      DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
      DARABONBA_PTR_FROM_JSON(Complainable, complainable_);
      DARABONBA_PTR_FROM_JSON(ConditionHitInfoList, conditionHitInfoList_);
      DARABONBA_PTR_FROM_JSON(MachineHitResult, machineHitResult_);
      DARABONBA_PTR_FROM_JSON(ReviewHitResult, reviewHitResult_);
      DARABONBA_PTR_FROM_JSON(ReviewInfo, reviewInfo_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoReview_ == nullptr
        && return this->complainHistories_ == nullptr && return this->complainable_ == nullptr && return this->conditionHitInfoList_ == nullptr && return this->machineHitResult_ == nullptr && return this->reviewHitResult_ == nullptr
        && return this->reviewInfo_ == nullptr && return this->rid_ == nullptr && return this->ruleName_ == nullptr && return this->scoreId_ == nullptr && return this->scoreNum_ == nullptr
        && return this->scoreSubId_ == nullptr && return this->scoreSubName_ == nullptr; };
    // autoReview Field Functions 
    bool hasAutoReview() const { return this->autoReview_ != nullptr;};
    void deleteAutoReview() { this->autoReview_ = nullptr;};
    inline int32_t autoReview() const { DARABONBA_PTR_GET_DEFAULT(autoReview_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setAutoReview(int32_t autoReview) { DARABONBA_PTR_SET_VALUE(autoReview_, autoReview) };


    // complainHistories Field Functions 
    bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
    void deleteComplainHistories() { this->complainHistories_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories & complainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories complainHistories() { DARABONBA_PTR_GET(complainHistories_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setComplainHistories(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setComplainHistories(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


    // complainable Field Functions 
    bool hasComplainable() const { return this->complainable_ != nullptr;};
    void deleteComplainable() { this->complainable_ = nullptr;};
    inline bool complainable() const { DARABONBA_PTR_GET_DEFAULT(complainable_, false) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setComplainable(bool complainable) { DARABONBA_PTR_SET_VALUE(complainable_, complainable) };


    // conditionHitInfoList Field Functions 
    bool hasConditionHitInfoList() const { return this->conditionHitInfoList_ != nullptr;};
    void deleteConditionHitInfoList() { this->conditionHitInfoList_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList & conditionHitInfoList() const { DARABONBA_PTR_GET_CONST(conditionHitInfoList_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList conditionHitInfoList() { DARABONBA_PTR_GET(conditionHitInfoList_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setConditionHitInfoList(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList & conditionHitInfoList) { DARABONBA_PTR_SET_VALUE(conditionHitInfoList_, conditionHitInfoList) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setConditionHitInfoList(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList && conditionHitInfoList) { DARABONBA_PTR_SET_RVALUE(conditionHitInfoList_, conditionHitInfoList) };


    // machineHitResult Field Functions 
    bool hasMachineHitResult() const { return this->machineHitResult_ != nullptr;};
    void deleteMachineHitResult() { this->machineHitResult_ = nullptr;};
    inline int32_t machineHitResult() const { DARABONBA_PTR_GET_DEFAULT(machineHitResult_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setMachineHitResult(int32_t machineHitResult) { DARABONBA_PTR_SET_VALUE(machineHitResult_, machineHitResult) };


    // reviewHitResult Field Functions 
    bool hasReviewHitResult() const { return this->reviewHitResult_ != nullptr;};
    void deleteReviewHitResult() { this->reviewHitResult_ = nullptr;};
    inline int32_t reviewHitResult() const { DARABONBA_PTR_GET_DEFAULT(reviewHitResult_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setReviewHitResult(int32_t reviewHitResult) { DARABONBA_PTR_SET_VALUE(reviewHitResult_, reviewHitResult) };


    // reviewInfo Field Functions 
    bool hasReviewInfo() const { return this->reviewInfo_ != nullptr;};
    void deleteReviewInfo() { this->reviewInfo_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo & reviewInfo() const { DARABONBA_PTR_GET_CONST(reviewInfo_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo) };
    inline Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo reviewInfo() { DARABONBA_PTR_GET(reviewInfo_, Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setReviewInfo(const Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo & reviewInfo) { DARABONBA_PTR_SET_VALUE(reviewInfo_, reviewInfo) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setReviewInfo(Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo && reviewInfo) { DARABONBA_PTR_SET_RVALUE(reviewInfo_, reviewInfo) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scoreId Field Functions 
    bool hasScoreId() const { return this->scoreId_ != nullptr;};
    void deleteScoreId() { this->scoreId_ = nullptr;};
    inline int64_t scoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setScoreId(int64_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreSubId Field Functions 
    bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
    void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
    inline int64_t scoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setScoreSubId(int64_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


    // scoreSubName Field Functions 
    bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
    void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
    inline string scoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


  protected:
    std::shared_ptr<int32_t> autoReview_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistories> complainHistories_ = nullptr;
    std::shared_ptr<bool> complainable_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoConditionHitInfoList> conditionHitInfoList_ = nullptr;
    std::shared_ptr<int32_t> machineHitResult_ = nullptr;
    std::shared_ptr<int32_t> reviewHitResult_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoReviewInfo> reviewInfo_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int64_t> scoreId_ = nullptr;
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int64_t> scoreSubId_ = nullptr;
    std::shared_ptr<string> scoreSubName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
