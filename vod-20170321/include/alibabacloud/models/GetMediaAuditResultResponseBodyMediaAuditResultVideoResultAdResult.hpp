// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTVIDEORESULTADRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODYMEDIAAUDITRESULTVIDEORESULTADRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList.hpp>
#include <alibabacloud/models/GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& obj) { 
      DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_TO_JSON(CounterList, counterList_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TopList, topList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
      DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TopList, topList_);
    };
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult(const GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult(GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult &&) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult() = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& operator=(const GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult &) = default ;
    GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& operator=(GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult &&) = default ;
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
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


    // counterList Field Functions 
    bool hasCounterList() const { return this->counterList_ != nullptr;};
    void deleteCounterList() { this->counterList_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList> & counterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList>) };
    inline vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList> counterList() { DARABONBA_PTR_GET(counterList_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList>) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setCounterList(const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setCounterList(vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // maxScore Field Functions 
    bool hasMaxScore() const { return this->maxScore_ != nullptr;};
    void deleteMaxScore() { this->maxScore_ = nullptr;};
    inline string maxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // topList Field Functions 
    bool hasTopList() const { return this->topList_ != nullptr;};
    void deleteTopList() { this->topList_ = nullptr;};
    inline const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList> & topList() const { DARABONBA_PTR_GET_CONST(topList_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList>) };
    inline vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList> topList() { DARABONBA_PTR_GET(topList_, vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList>) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setTopList(const vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
    inline GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResult& setTopList(vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


  protected:
    // The average score of the review results.
    std::shared_ptr<string> averageScore_ = nullptr;
    // The statistics about tag frames.
    std::shared_ptr<vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultCounterList>> counterList_ = nullptr;
    // The category of the review result. Valid values:
    // 
    // - **ad**
    // - **normal**
    std::shared_ptr<string> label_ = nullptr;
    // The highest review score.
    std::shared_ptr<string> maxScore_ = nullptr;
    // The recommendation for review results. Valid values:
    // 
    // - **block**
    // - **review**
    // - **pass**
    std::shared_ptr<string> suggestion_ = nullptr;
    // The information about the image with the highest score of the category that is indicated by Label.
    std::shared_ptr<vector<Models::GetMediaAuditResultResponseBodyMediaAuditResultVideoResultAdResultTopList>> topList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
