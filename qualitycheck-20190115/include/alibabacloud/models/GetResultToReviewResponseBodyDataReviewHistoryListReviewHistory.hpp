// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLISTREVIEWHISTORY_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLISTREVIEWHISTORY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(ComplainResult, complainResult_);
      DARABONBA_PTR_TO_JSON(OldScore, oldScore_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_TO_JSON(ReviewManagerType, reviewManagerType_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_TO_JSON(ReviewRightRule, reviewRightRule_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TimeStr, timeStr_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(ComplainResult, complainResult_);
      DARABONBA_PTR_FROM_JSON(OldScore, oldScore_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      DARABONBA_PTR_FROM_JSON(ReviewManagerType, reviewManagerType_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_FROM_JSON(ReviewRightRule, reviewRightRule_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TimeStr, timeStr_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory(const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory(GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory &&) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& operator=(const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& operator=(GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comments_ == nullptr
        && return this->complainResult_ == nullptr && return this->oldScore_ == nullptr && return this->operator_ == nullptr && return this->operatorName_ == nullptr && return this->reviewManagerType_ == nullptr
        && return this->reviewResult_ == nullptr && return this->reviewRightRule_ == nullptr && return this->score_ == nullptr && return this->time_ == nullptr && return this->timeStr_ == nullptr
        && return this->type_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // complainResult Field Functions 
    bool hasComplainResult() const { return this->complainResult_ != nullptr;};
    void deleteComplainResult() { this->complainResult_ = nullptr;};
    inline int32_t complainResult() const { DARABONBA_PTR_GET_DEFAULT(complainResult_, 0) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setComplainResult(int32_t complainResult) { DARABONBA_PTR_SET_VALUE(complainResult_, complainResult) };


    // oldScore Field Functions 
    bool hasOldScore() const { return this->oldScore_ != nullptr;};
    void deleteOldScore() { this->oldScore_ = nullptr;};
    inline int32_t oldScore() const { DARABONBA_PTR_GET_DEFAULT(oldScore_, 0) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setOldScore(int32_t oldScore) { DARABONBA_PTR_SET_VALUE(oldScore_, oldScore) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline int64_t _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    // reviewManagerType Field Functions 
    bool hasReviewManagerType() const { return this->reviewManagerType_ != nullptr;};
    void deleteReviewManagerType() { this->reviewManagerType_ = nullptr;};
    inline string reviewManagerType() const { DARABONBA_PTR_GET_DEFAULT(reviewManagerType_, "") };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setReviewManagerType(string reviewManagerType) { DARABONBA_PTR_SET_VALUE(reviewManagerType_, reviewManagerType) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline int32_t reviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    // reviewRightRule Field Functions 
    bool hasReviewRightRule() const { return this->reviewRightRule_ != nullptr;};
    void deleteReviewRightRule() { this->reviewRightRule_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule & reviewRightRule() const { DARABONBA_PTR_GET_CONST(reviewRightRule_, Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule) };
    inline Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule reviewRightRule() { DARABONBA_PTR_GET(reviewRightRule_, Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setReviewRightRule(const Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule & reviewRightRule) { DARABONBA_PTR_SET_VALUE(reviewRightRule_, reviewRightRule) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setReviewRightRule(Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule && reviewRightRule) { DARABONBA_PTR_SET_RVALUE(reviewRightRule_, reviewRightRule) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timeStr Field Functions 
    bool hasTimeStr() const { return this->timeStr_ != nullptr;};
    void deleteTimeStr() { this->timeStr_ = nullptr;};
    inline string timeStr() const { DARABONBA_PTR_GET_DEFAULT(timeStr_, "") };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setTimeStr(string timeStr) { DARABONBA_PTR_SET_VALUE(timeStr_, timeStr) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistory& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<int32_t> complainResult_ = nullptr;
    std::shared_ptr<int32_t> oldScore_ = nullptr;
    std::shared_ptr<int64_t> operator_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
    std::shared_ptr<string> reviewManagerType_ = nullptr;
    std::shared_ptr<int32_t> reviewResult_ = nullptr;
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRule> reviewRightRule_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> timeStr_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
