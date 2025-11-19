// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLOGORESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLOGORESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& obj) { 
      DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_TO_JSON(CounterList, counterList_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TopList, topList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TopList, topList_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->averageScore_ == nullptr
        && return this->counterList_ == nullptr && return this->label_ == nullptr && return this->maxScore_ == nullptr && return this->suggestion_ == nullptr && return this->topList_ == nullptr; };
    // averageScore Field Functions 
    bool hasAverageScore() const { return this->averageScore_ != nullptr;};
    void deleteAverageScore() { this->averageScore_ = nullptr;};
    inline string averageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


    // counterList Field Functions 
    bool hasCounterList() const { return this->counterList_ != nullptr;};
    void deleteCounterList() { this->counterList_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList> & counterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList> counterList() { DARABONBA_PTR_GET(counterList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setCounterList(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setCounterList(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // maxScore Field Functions 
    bool hasMaxScore() const { return this->maxScore_ != nullptr;};
    void deleteMaxScore() { this->maxScore_ = nullptr;};
    inline string maxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // topList Field Functions 
    bool hasTopList() const { return this->topList_ != nullptr;};
    void deleteTopList() { this->topList_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList> & topList() const { DARABONBA_PTR_GET_CONST(topList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList> topList() { DARABONBA_PTR_GET(topList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setTopList(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResult& setTopList(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


  protected:
    // The average score of the snapshots in the category indicated by Label.
    std::shared_ptr<string> averageScore_ = nullptr;
    // The categories of the review results and the number of video snapshots in each category.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultCounterList>> counterList_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content
    // *   **TV**: controlled TV station logo
    // *   **trademark**: trademark
    std::shared_ptr<string> label_ = nullptr;
    // The highest score of the snapshot of the category that is indicated by Label.
    std::shared_ptr<string> maxScore_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // *   **block**: The content violates the regulations.
    // *   **review**: The content may violate the regulations.
    // *   **pass**: The content passes the review.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The information about the snapshot that has the highest score in the category.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLogoResultTopList>> topList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
