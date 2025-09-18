// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORREPORTCOMPONENTSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORREPORTCOMPONENTSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorReportComponentSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorReportComponentSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorReportComponentSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    GetDoctorReportComponentSummaryResponseBodyData() = default ;
    GetDoctorReportComponentSummaryResponseBodyData(const GetDoctorReportComponentSummaryResponseBodyData &) = default ;
    GetDoctorReportComponentSummaryResponseBodyData(GetDoctorReportComponentSummaryResponseBodyData &&) = default ;
    GetDoctorReportComponentSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorReportComponentSummaryResponseBodyData() = default ;
    GetDoctorReportComponentSummaryResponseBodyData& operator=(const GetDoctorReportComponentSummaryResponseBodyData &) = default ;
    GetDoctorReportComponentSummaryResponseBodyData& operator=(GetDoctorReportComponentSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->score_ != nullptr
        && this->suggestion_ != nullptr && this->summary_ != nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetDoctorReportComponentSummaryResponseBodyData& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetDoctorReportComponentSummaryResponseBodyData& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetDoctorReportComponentSummaryResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    // Score.
    std::shared_ptr<int32_t> score_ = nullptr;
    // Optimization suggestions.
    std::shared_ptr<string> suggestion_ = nullptr;
    // The summary of the report.
    std::shared_ptr<string> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
