// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLIVERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTLIVERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& obj) { 
      DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_TO_JSON(CounterList, counterList_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TopList, topList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TopList, topList_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult &&) = default ;
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
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


    // counterList Field Functions 
    bool hasCounterList() const { return this->counterList_ != nullptr;};
    void deleteCounterList() { this->counterList_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList> & counterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList> counterList() { DARABONBA_PTR_GET(counterList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setCounterList(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setCounterList(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // maxScore Field Functions 
    bool hasMaxScore() const { return this->maxScore_ != nullptr;};
    void deleteMaxScore() { this->maxScore_ = nullptr;};
    inline string maxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // topList Field Functions 
    bool hasTopList() const { return this->topList_ != nullptr;};
    void deleteTopList() { this->topList_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList> & topList() const { DARABONBA_PTR_GET_CONST(topList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList> topList() { DARABONBA_PTR_GET(topList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setTopList(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResult& setTopList(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


  protected:
    // The average score of the review results.
    std::shared_ptr<string> averageScore_ = nullptr;
    // The categories of the review results and the number of video snapshots in each category.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultCounterList>> counterList_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // *   **normal**: normal content
    // *   **meaningless**: meaningless content, such as a black or white screen.
    // *   **PIP**: picture-in-picture
    // *   **smoking**: smoking
    // *   **drivelive**: live broadcasting in a running vehicle
    std::shared_ptr<string> label_ = nullptr;
    // The highest review score.
    std::shared_ptr<string> maxScore_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // *   **block**: The content violates the regulations.
    // *   **review**: The content may violate the regulations.
    // *   **pass**: The content passes the review.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The information about the snapshot that has the highest score in the category.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultLiveResultTopList>> topList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
