// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATAANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORAPPLICATIONRESPONSEBODYDATAANALYSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorApplicationResponseBodyDataAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorApplicationResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorApplicationResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
    };
    GetDoctorApplicationResponseBodyDataAnalysis() = default ;
    GetDoctorApplicationResponseBodyDataAnalysis(const GetDoctorApplicationResponseBodyDataAnalysis &) = default ;
    GetDoctorApplicationResponseBodyDataAnalysis(GetDoctorApplicationResponseBodyDataAnalysis &&) = default ;
    GetDoctorApplicationResponseBodyDataAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorApplicationResponseBodyDataAnalysis() = default ;
    GetDoctorApplicationResponseBodyDataAnalysis& operator=(const GetDoctorApplicationResponseBodyDataAnalysis &) = default ;
    GetDoctorApplicationResponseBodyDataAnalysis& operator=(GetDoctorApplicationResponseBodyDataAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->score_ != nullptr
        && this->suggestion_ != nullptr; };
    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetDoctorApplicationResponseBodyDataAnalysis& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetDoctorApplicationResponseBodyDataAnalysis& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // The score of the job.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The suggestion for running the job.
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
