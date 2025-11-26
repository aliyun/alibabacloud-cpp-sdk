// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODYDATAANALYSIS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSEBODYDATAANALYSIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryResponseBodyDataAnalysis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_TO_JSON(HealthyJobCount, healthyJobCount_);
      DARABONBA_PTR_TO_JSON(NeedAttentionJobCount, needAttentionJobCount_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ScoreDayGrowthRatio, scoreDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(SubHealthyJobCount, subHealthyJobCount_);
      DARABONBA_PTR_TO_JSON(UnhealthyJobCount, unhealthyJobCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryResponseBodyDataAnalysis& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthyJobCount, healthyJobCount_);
      DARABONBA_PTR_FROM_JSON(NeedAttentionJobCount, needAttentionJobCount_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ScoreDayGrowthRatio, scoreDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(SubHealthyJobCount, subHealthyJobCount_);
      DARABONBA_PTR_FROM_JSON(UnhealthyJobCount, unhealthyJobCount_);
    };
    GetDoctorComputeSummaryResponseBodyDataAnalysis() = default ;
    GetDoctorComputeSummaryResponseBodyDataAnalysis(const GetDoctorComputeSummaryResponseBodyDataAnalysis &) = default ;
    GetDoctorComputeSummaryResponseBodyDataAnalysis(GetDoctorComputeSummaryResponseBodyDataAnalysis &&) = default ;
    GetDoctorComputeSummaryResponseBodyDataAnalysis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryResponseBodyDataAnalysis() = default ;
    GetDoctorComputeSummaryResponseBodyDataAnalysis& operator=(const GetDoctorComputeSummaryResponseBodyDataAnalysis &) = default ;
    GetDoctorComputeSummaryResponseBodyDataAnalysis& operator=(GetDoctorComputeSummaryResponseBodyDataAnalysis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->healthyJobCount_ == nullptr
        && return this->needAttentionJobCount_ == nullptr && return this->score_ == nullptr && return this->scoreDayGrowthRatio_ == nullptr && return this->subHealthyJobCount_ == nullptr && return this->unhealthyJobCount_ == nullptr; };
    // healthyJobCount Field Functions 
    bool hasHealthyJobCount() const { return this->healthyJobCount_ != nullptr;};
    void deleteHealthyJobCount() { this->healthyJobCount_ = nullptr;};
    inline int64_t healthyJobCount() const { DARABONBA_PTR_GET_DEFAULT(healthyJobCount_, 0L) };
    inline GetDoctorComputeSummaryResponseBodyDataAnalysis& setHealthyJobCount(int64_t healthyJobCount) { DARABONBA_PTR_SET_VALUE(healthyJobCount_, healthyJobCount) };


    // needAttentionJobCount Field Functions 
    bool hasNeedAttentionJobCount() const { return this->needAttentionJobCount_ != nullptr;};
    void deleteNeedAttentionJobCount() { this->needAttentionJobCount_ = nullptr;};
    inline int64_t needAttentionJobCount() const { DARABONBA_PTR_GET_DEFAULT(needAttentionJobCount_, 0L) };
    inline GetDoctorComputeSummaryResponseBodyDataAnalysis& setNeedAttentionJobCount(int64_t needAttentionJobCount) { DARABONBA_PTR_SET_VALUE(needAttentionJobCount_, needAttentionJobCount) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetDoctorComputeSummaryResponseBodyDataAnalysis& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // scoreDayGrowthRatio Field Functions 
    bool hasScoreDayGrowthRatio() const { return this->scoreDayGrowthRatio_ != nullptr;};
    void deleteScoreDayGrowthRatio() { this->scoreDayGrowthRatio_ = nullptr;};
    inline float scoreDayGrowthRatio() const { DARABONBA_PTR_GET_DEFAULT(scoreDayGrowthRatio_, 0.0) };
    inline GetDoctorComputeSummaryResponseBodyDataAnalysis& setScoreDayGrowthRatio(float scoreDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(scoreDayGrowthRatio_, scoreDayGrowthRatio) };


    // subHealthyJobCount Field Functions 
    bool hasSubHealthyJobCount() const { return this->subHealthyJobCount_ != nullptr;};
    void deleteSubHealthyJobCount() { this->subHealthyJobCount_ = nullptr;};
    inline int64_t subHealthyJobCount() const { DARABONBA_PTR_GET_DEFAULT(subHealthyJobCount_, 0L) };
    inline GetDoctorComputeSummaryResponseBodyDataAnalysis& setSubHealthyJobCount(int64_t subHealthyJobCount) { DARABONBA_PTR_SET_VALUE(subHealthyJobCount_, subHealthyJobCount) };


    // unhealthyJobCount Field Functions 
    bool hasUnhealthyJobCount() const { return this->unhealthyJobCount_ != nullptr;};
    void deleteUnhealthyJobCount() { this->unhealthyJobCount_ = nullptr;};
    inline int64_t unhealthyJobCount() const { DARABONBA_PTR_GET_DEFAULT(unhealthyJobCount_, 0L) };
    inline GetDoctorComputeSummaryResponseBodyDataAnalysis& setUnhealthyJobCount(int64_t unhealthyJobCount) { DARABONBA_PTR_SET_VALUE(unhealthyJobCount_, unhealthyJobCount) };


  protected:
    // The total number of healthy jobs.
    std::shared_ptr<int64_t> healthyJobCount_ = nullptr;
    // The total number of jobs that require attention.
    std::shared_ptr<int64_t> needAttentionJobCount_ = nullptr;
    // The score for jobs.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The day-to-day growth rate of the score for jobs.
    std::shared_ptr<float> scoreDayGrowthRatio_ = nullptr;
    // The total number of sub-healthy jobs.
    std::shared_ptr<int64_t> subHealthyJobCount_ = nullptr;
    // The total number of unhealthy jobs.
    std::shared_ptr<int64_t> unhealthyJobCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
