// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTADRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETAIMEDIAAUDITJOBRESPONSEBODYMEDIAAUDITJOBDATAVIDEORESULTADRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList.hpp>
#include <alibabacloud/models/GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& obj) { 
      DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_TO_JSON(CounterList, counterList_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TopList, topList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TopList, topList_);
    };
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult &&) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult() = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& operator=(const GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult &) = default ;
    GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& operator=(GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->averageScore_ != nullptr
        && this->counterList_ != nullptr && this->label_ != nullptr && this->maxScore_ != nullptr && this->suggestion_ != nullptr && this->topList_ != nullptr; };
    // averageScore Field Functions 
    bool hasAverageScore() const { return this->averageScore_ != nullptr;};
    void deleteAverageScore() { this->averageScore_ = nullptr;};
    inline string averageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


    // counterList Field Functions 
    bool hasCounterList() const { return this->counterList_ != nullptr;};
    void deleteCounterList() { this->counterList_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList> & counterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList> counterList() { DARABONBA_PTR_GET(counterList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setCounterList(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setCounterList(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // maxScore Field Functions 
    bool hasMaxScore() const { return this->maxScore_ != nullptr;};
    void deleteMaxScore() { this->maxScore_ = nullptr;};
    inline string maxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // topList Field Functions 
    bool hasTopList() const { return this->topList_ != nullptr;};
    void deleteTopList() { this->topList_ = nullptr;};
    inline const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList> & topList() const { DARABONBA_PTR_GET_CONST(topList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList>) };
    inline vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList> topList() { DARABONBA_PTR_GET(topList_, vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList>) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setTopList(const vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
    inline GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResult& setTopList(vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


  protected:
    // The average score of the review results.
    std::shared_ptr<string> averageScore_ = nullptr;
    // The number of snapshots of each category in the review result.
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultCounterList>> counterList_ = nullptr;
    // The categories of the ad review results. Valid values:
    // 
    // *   **normal**: normal content
    // *   **ad**: other ads
    // *   **politics**: political content
    // *   **porn**: pornographic content
    // *   **abuse**: abuse
    // *   **terrorism**: terrorist content
    // *   **contraband**: prohibited content
    // *   **spam**: spam content
    // *   **npx**: illegal ad
    // *   **qrcode**: QR code
    // *   **programCode**: mini program code
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
    std::shared_ptr<vector<Models::GetAIMediaAuditJobResponseBodyMediaAuditJobDataVideoResultAdResultTopList>> topList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
