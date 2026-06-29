// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_TASKSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TaskStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptItemCount, acceptItemCount_);
      DARABONBA_PTR_TO_JSON(CheckAbandon, checkAbandon_);
      DARABONBA_PTR_TO_JSON(CheckAccuracy, checkAccuracy_);
      DARABONBA_PTR_TO_JSON(CheckEfficiency, checkEfficiency_);
      DARABONBA_PTR_TO_JSON(CheckedAccuracy, checkedAccuracy_);
      DARABONBA_PTR_TO_JSON(CheckedError, checkedError_);
      DARABONBA_PTR_TO_JSON(CheckedRejectCount, checkedRejectCount_);
      DARABONBA_PTR_TO_JSON(FinalAbandonCount, finalAbandonCount_);
      DARABONBA_PTR_TO_JSON(FinishedItemCount, finishedItemCount_);
      DARABONBA_PTR_TO_JSON(FinishedSubtaskCount, finishedSubtaskCount_);
      DARABONBA_PTR_TO_JSON(MarkEfficiency, markEfficiency_);
      DARABONBA_PTR_TO_JSON(PreMarkFixedCount, preMarkFixedCount_);
      DARABONBA_PTR_TO_JSON(SampledAccuracy, sampledAccuracy_);
      DARABONBA_PTR_TO_JSON(SampledErrorCount, sampledErrorCount_);
      DARABONBA_PTR_TO_JSON(SampledRejectCount, sampledRejectCount_);
      DARABONBA_PTR_TO_JSON(SamplingAccuracy, samplingAccuracy_);
      DARABONBA_PTR_TO_JSON(TotalCheckCount, totalCheckCount_);
      DARABONBA_PTR_TO_JSON(TotalCheckTime, totalCheckTime_);
      DARABONBA_PTR_TO_JSON(TotalCheckedCount, totalCheckedCount_);
      DARABONBA_PTR_TO_JSON(TotalItemCount, totalItemCount_);
      DARABONBA_PTR_TO_JSON(TotalMarkTime, totalMarkTime_);
      DARABONBA_PTR_TO_JSON(TotalSampledCount, totalSampledCount_);
      DARABONBA_PTR_TO_JSON(TotalSamplingCount, totalSamplingCount_);
      DARABONBA_PTR_TO_JSON(TotalSubtaskCount, totalSubtaskCount_);
      DARABONBA_PTR_TO_JSON(TotalWorkTime, totalWorkTime_);
    };
    friend void from_json(const Darabonba::Json& j, TaskStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptItemCount, acceptItemCount_);
      DARABONBA_PTR_FROM_JSON(CheckAbandon, checkAbandon_);
      DARABONBA_PTR_FROM_JSON(CheckAccuracy, checkAccuracy_);
      DARABONBA_PTR_FROM_JSON(CheckEfficiency, checkEfficiency_);
      DARABONBA_PTR_FROM_JSON(CheckedAccuracy, checkedAccuracy_);
      DARABONBA_PTR_FROM_JSON(CheckedError, checkedError_);
      DARABONBA_PTR_FROM_JSON(CheckedRejectCount, checkedRejectCount_);
      DARABONBA_PTR_FROM_JSON(FinalAbandonCount, finalAbandonCount_);
      DARABONBA_PTR_FROM_JSON(FinishedItemCount, finishedItemCount_);
      DARABONBA_PTR_FROM_JSON(FinishedSubtaskCount, finishedSubtaskCount_);
      DARABONBA_PTR_FROM_JSON(MarkEfficiency, markEfficiency_);
      DARABONBA_PTR_FROM_JSON(PreMarkFixedCount, preMarkFixedCount_);
      DARABONBA_PTR_FROM_JSON(SampledAccuracy, sampledAccuracy_);
      DARABONBA_PTR_FROM_JSON(SampledErrorCount, sampledErrorCount_);
      DARABONBA_PTR_FROM_JSON(SampledRejectCount, sampledRejectCount_);
      DARABONBA_PTR_FROM_JSON(SamplingAccuracy, samplingAccuracy_);
      DARABONBA_PTR_FROM_JSON(TotalCheckCount, totalCheckCount_);
      DARABONBA_PTR_FROM_JSON(TotalCheckTime, totalCheckTime_);
      DARABONBA_PTR_FROM_JSON(TotalCheckedCount, totalCheckedCount_);
      DARABONBA_PTR_FROM_JSON(TotalItemCount, totalItemCount_);
      DARABONBA_PTR_FROM_JSON(TotalMarkTime, totalMarkTime_);
      DARABONBA_PTR_FROM_JSON(TotalSampledCount, totalSampledCount_);
      DARABONBA_PTR_FROM_JSON(TotalSamplingCount, totalSamplingCount_);
      DARABONBA_PTR_FROM_JSON(TotalSubtaskCount, totalSubtaskCount_);
      DARABONBA_PTR_FROM_JSON(TotalWorkTime, totalWorkTime_);
    };
    TaskStatistic() = default ;
    TaskStatistic(const TaskStatistic &) = default ;
    TaskStatistic(TaskStatistic &&) = default ;
    TaskStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskStatistic() = default ;
    TaskStatistic& operator=(const TaskStatistic &) = default ;
    TaskStatistic& operator=(TaskStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptItemCount_ == nullptr
        && this->checkAbandon_ == nullptr && this->checkAccuracy_ == nullptr && this->checkEfficiency_ == nullptr && this->checkedAccuracy_ == nullptr && this->checkedError_ == nullptr
        && this->checkedRejectCount_ == nullptr && this->finalAbandonCount_ == nullptr && this->finishedItemCount_ == nullptr && this->finishedSubtaskCount_ == nullptr && this->markEfficiency_ == nullptr
        && this->preMarkFixedCount_ == nullptr && this->sampledAccuracy_ == nullptr && this->sampledErrorCount_ == nullptr && this->sampledRejectCount_ == nullptr && this->samplingAccuracy_ == nullptr
        && this->totalCheckCount_ == nullptr && this->totalCheckTime_ == nullptr && this->totalCheckedCount_ == nullptr && this->totalItemCount_ == nullptr && this->totalMarkTime_ == nullptr
        && this->totalSampledCount_ == nullptr && this->totalSamplingCount_ == nullptr && this->totalSubtaskCount_ == nullptr && this->totalWorkTime_ == nullptr; };
    // acceptItemCount Field Functions 
    bool hasAcceptItemCount() const { return this->acceptItemCount_ != nullptr;};
    void deleteAcceptItemCount() { this->acceptItemCount_ = nullptr;};
    inline float getAcceptItemCount() const { DARABONBA_PTR_GET_DEFAULT(acceptItemCount_, 0.0) };
    inline TaskStatistic& setAcceptItemCount(float acceptItemCount) { DARABONBA_PTR_SET_VALUE(acceptItemCount_, acceptItemCount) };


    // checkAbandon Field Functions 
    bool hasCheckAbandon() const { return this->checkAbandon_ != nullptr;};
    void deleteCheckAbandon() { this->checkAbandon_ = nullptr;};
    inline float getCheckAbandon() const { DARABONBA_PTR_GET_DEFAULT(checkAbandon_, 0.0) };
    inline TaskStatistic& setCheckAbandon(float checkAbandon) { DARABONBA_PTR_SET_VALUE(checkAbandon_, checkAbandon) };


    // checkAccuracy Field Functions 
    bool hasCheckAccuracy() const { return this->checkAccuracy_ != nullptr;};
    void deleteCheckAccuracy() { this->checkAccuracy_ = nullptr;};
    inline float getCheckAccuracy() const { DARABONBA_PTR_GET_DEFAULT(checkAccuracy_, 0.0) };
    inline TaskStatistic& setCheckAccuracy(float checkAccuracy) { DARABONBA_PTR_SET_VALUE(checkAccuracy_, checkAccuracy) };


    // checkEfficiency Field Functions 
    bool hasCheckEfficiency() const { return this->checkEfficiency_ != nullptr;};
    void deleteCheckEfficiency() { this->checkEfficiency_ = nullptr;};
    inline float getCheckEfficiency() const { DARABONBA_PTR_GET_DEFAULT(checkEfficiency_, 0.0) };
    inline TaskStatistic& setCheckEfficiency(float checkEfficiency) { DARABONBA_PTR_SET_VALUE(checkEfficiency_, checkEfficiency) };


    // checkedAccuracy Field Functions 
    bool hasCheckedAccuracy() const { return this->checkedAccuracy_ != nullptr;};
    void deleteCheckedAccuracy() { this->checkedAccuracy_ = nullptr;};
    inline float getCheckedAccuracy() const { DARABONBA_PTR_GET_DEFAULT(checkedAccuracy_, 0.0) };
    inline TaskStatistic& setCheckedAccuracy(float checkedAccuracy) { DARABONBA_PTR_SET_VALUE(checkedAccuracy_, checkedAccuracy) };


    // checkedError Field Functions 
    bool hasCheckedError() const { return this->checkedError_ != nullptr;};
    void deleteCheckedError() { this->checkedError_ = nullptr;};
    inline float getCheckedError() const { DARABONBA_PTR_GET_DEFAULT(checkedError_, 0.0) };
    inline TaskStatistic& setCheckedError(float checkedError) { DARABONBA_PTR_SET_VALUE(checkedError_, checkedError) };


    // checkedRejectCount Field Functions 
    bool hasCheckedRejectCount() const { return this->checkedRejectCount_ != nullptr;};
    void deleteCheckedRejectCount() { this->checkedRejectCount_ = nullptr;};
    inline float getCheckedRejectCount() const { DARABONBA_PTR_GET_DEFAULT(checkedRejectCount_, 0.0) };
    inline TaskStatistic& setCheckedRejectCount(float checkedRejectCount) { DARABONBA_PTR_SET_VALUE(checkedRejectCount_, checkedRejectCount) };


    // finalAbandonCount Field Functions 
    bool hasFinalAbandonCount() const { return this->finalAbandonCount_ != nullptr;};
    void deleteFinalAbandonCount() { this->finalAbandonCount_ = nullptr;};
    inline float getFinalAbandonCount() const { DARABONBA_PTR_GET_DEFAULT(finalAbandonCount_, 0.0) };
    inline TaskStatistic& setFinalAbandonCount(float finalAbandonCount) { DARABONBA_PTR_SET_VALUE(finalAbandonCount_, finalAbandonCount) };


    // finishedItemCount Field Functions 
    bool hasFinishedItemCount() const { return this->finishedItemCount_ != nullptr;};
    void deleteFinishedItemCount() { this->finishedItemCount_ = nullptr;};
    inline int64_t getFinishedItemCount() const { DARABONBA_PTR_GET_DEFAULT(finishedItemCount_, 0L) };
    inline TaskStatistic& setFinishedItemCount(int64_t finishedItemCount) { DARABONBA_PTR_SET_VALUE(finishedItemCount_, finishedItemCount) };


    // finishedSubtaskCount Field Functions 
    bool hasFinishedSubtaskCount() const { return this->finishedSubtaskCount_ != nullptr;};
    void deleteFinishedSubtaskCount() { this->finishedSubtaskCount_ = nullptr;};
    inline int64_t getFinishedSubtaskCount() const { DARABONBA_PTR_GET_DEFAULT(finishedSubtaskCount_, 0L) };
    inline TaskStatistic& setFinishedSubtaskCount(int64_t finishedSubtaskCount) { DARABONBA_PTR_SET_VALUE(finishedSubtaskCount_, finishedSubtaskCount) };


    // markEfficiency Field Functions 
    bool hasMarkEfficiency() const { return this->markEfficiency_ != nullptr;};
    void deleteMarkEfficiency() { this->markEfficiency_ = nullptr;};
    inline float getMarkEfficiency() const { DARABONBA_PTR_GET_DEFAULT(markEfficiency_, 0.0) };
    inline TaskStatistic& setMarkEfficiency(float markEfficiency) { DARABONBA_PTR_SET_VALUE(markEfficiency_, markEfficiency) };


    // preMarkFixedCount Field Functions 
    bool hasPreMarkFixedCount() const { return this->preMarkFixedCount_ != nullptr;};
    void deletePreMarkFixedCount() { this->preMarkFixedCount_ = nullptr;};
    inline float getPreMarkFixedCount() const { DARABONBA_PTR_GET_DEFAULT(preMarkFixedCount_, 0.0) };
    inline TaskStatistic& setPreMarkFixedCount(float preMarkFixedCount) { DARABONBA_PTR_SET_VALUE(preMarkFixedCount_, preMarkFixedCount) };


    // sampledAccuracy Field Functions 
    bool hasSampledAccuracy() const { return this->sampledAccuracy_ != nullptr;};
    void deleteSampledAccuracy() { this->sampledAccuracy_ = nullptr;};
    inline float getSampledAccuracy() const { DARABONBA_PTR_GET_DEFAULT(sampledAccuracy_, 0.0) };
    inline TaskStatistic& setSampledAccuracy(float sampledAccuracy) { DARABONBA_PTR_SET_VALUE(sampledAccuracy_, sampledAccuracy) };


    // sampledErrorCount Field Functions 
    bool hasSampledErrorCount() const { return this->sampledErrorCount_ != nullptr;};
    void deleteSampledErrorCount() { this->sampledErrorCount_ = nullptr;};
    inline float getSampledErrorCount() const { DARABONBA_PTR_GET_DEFAULT(sampledErrorCount_, 0.0) };
    inline TaskStatistic& setSampledErrorCount(float sampledErrorCount) { DARABONBA_PTR_SET_VALUE(sampledErrorCount_, sampledErrorCount) };


    // sampledRejectCount Field Functions 
    bool hasSampledRejectCount() const { return this->sampledRejectCount_ != nullptr;};
    void deleteSampledRejectCount() { this->sampledRejectCount_ = nullptr;};
    inline float getSampledRejectCount() const { DARABONBA_PTR_GET_DEFAULT(sampledRejectCount_, 0.0) };
    inline TaskStatistic& setSampledRejectCount(float sampledRejectCount) { DARABONBA_PTR_SET_VALUE(sampledRejectCount_, sampledRejectCount) };


    // samplingAccuracy Field Functions 
    bool hasSamplingAccuracy() const { return this->samplingAccuracy_ != nullptr;};
    void deleteSamplingAccuracy() { this->samplingAccuracy_ = nullptr;};
    inline float getSamplingAccuracy() const { DARABONBA_PTR_GET_DEFAULT(samplingAccuracy_, 0.0) };
    inline TaskStatistic& setSamplingAccuracy(float samplingAccuracy) { DARABONBA_PTR_SET_VALUE(samplingAccuracy_, samplingAccuracy) };


    // totalCheckCount Field Functions 
    bool hasTotalCheckCount() const { return this->totalCheckCount_ != nullptr;};
    void deleteTotalCheckCount() { this->totalCheckCount_ = nullptr;};
    inline float getTotalCheckCount() const { DARABONBA_PTR_GET_DEFAULT(totalCheckCount_, 0.0) };
    inline TaskStatistic& setTotalCheckCount(float totalCheckCount) { DARABONBA_PTR_SET_VALUE(totalCheckCount_, totalCheckCount) };


    // totalCheckTime Field Functions 
    bool hasTotalCheckTime() const { return this->totalCheckTime_ != nullptr;};
    void deleteTotalCheckTime() { this->totalCheckTime_ = nullptr;};
    inline float getTotalCheckTime() const { DARABONBA_PTR_GET_DEFAULT(totalCheckTime_, 0.0) };
    inline TaskStatistic& setTotalCheckTime(float totalCheckTime) { DARABONBA_PTR_SET_VALUE(totalCheckTime_, totalCheckTime) };


    // totalCheckedCount Field Functions 
    bool hasTotalCheckedCount() const { return this->totalCheckedCount_ != nullptr;};
    void deleteTotalCheckedCount() { this->totalCheckedCount_ = nullptr;};
    inline float getTotalCheckedCount() const { DARABONBA_PTR_GET_DEFAULT(totalCheckedCount_, 0.0) };
    inline TaskStatistic& setTotalCheckedCount(float totalCheckedCount) { DARABONBA_PTR_SET_VALUE(totalCheckedCount_, totalCheckedCount) };


    // totalItemCount Field Functions 
    bool hasTotalItemCount() const { return this->totalItemCount_ != nullptr;};
    void deleteTotalItemCount() { this->totalItemCount_ = nullptr;};
    inline int64_t getTotalItemCount() const { DARABONBA_PTR_GET_DEFAULT(totalItemCount_, 0L) };
    inline TaskStatistic& setTotalItemCount(int64_t totalItemCount) { DARABONBA_PTR_SET_VALUE(totalItemCount_, totalItemCount) };


    // totalMarkTime Field Functions 
    bool hasTotalMarkTime() const { return this->totalMarkTime_ != nullptr;};
    void deleteTotalMarkTime() { this->totalMarkTime_ = nullptr;};
    inline float getTotalMarkTime() const { DARABONBA_PTR_GET_DEFAULT(totalMarkTime_, 0.0) };
    inline TaskStatistic& setTotalMarkTime(float totalMarkTime) { DARABONBA_PTR_SET_VALUE(totalMarkTime_, totalMarkTime) };


    // totalSampledCount Field Functions 
    bool hasTotalSampledCount() const { return this->totalSampledCount_ != nullptr;};
    void deleteTotalSampledCount() { this->totalSampledCount_ = nullptr;};
    inline float getTotalSampledCount() const { DARABONBA_PTR_GET_DEFAULT(totalSampledCount_, 0.0) };
    inline TaskStatistic& setTotalSampledCount(float totalSampledCount) { DARABONBA_PTR_SET_VALUE(totalSampledCount_, totalSampledCount) };


    // totalSamplingCount Field Functions 
    bool hasTotalSamplingCount() const { return this->totalSamplingCount_ != nullptr;};
    void deleteTotalSamplingCount() { this->totalSamplingCount_ = nullptr;};
    inline float getTotalSamplingCount() const { DARABONBA_PTR_GET_DEFAULT(totalSamplingCount_, 0.0) };
    inline TaskStatistic& setTotalSamplingCount(float totalSamplingCount) { DARABONBA_PTR_SET_VALUE(totalSamplingCount_, totalSamplingCount) };


    // totalSubtaskCount Field Functions 
    bool hasTotalSubtaskCount() const { return this->totalSubtaskCount_ != nullptr;};
    void deleteTotalSubtaskCount() { this->totalSubtaskCount_ = nullptr;};
    inline int64_t getTotalSubtaskCount() const { DARABONBA_PTR_GET_DEFAULT(totalSubtaskCount_, 0L) };
    inline TaskStatistic& setTotalSubtaskCount(int64_t totalSubtaskCount) { DARABONBA_PTR_SET_VALUE(totalSubtaskCount_, totalSubtaskCount) };


    // totalWorkTime Field Functions 
    bool hasTotalWorkTime() const { return this->totalWorkTime_ != nullptr;};
    void deleteTotalWorkTime() { this->totalWorkTime_ = nullptr;};
    inline float getTotalWorkTime() const { DARABONBA_PTR_GET_DEFAULT(totalWorkTime_, 0.0) };
    inline TaskStatistic& setTotalWorkTime(float totalWorkTime) { DARABONBA_PTR_SET_VALUE(totalWorkTime_, totalWorkTime) };


  protected:
    // Data items that passed
    shared_ptr<float> acceptItemCount_ {};
    // Quantity abandoned in the check flow
    shared_ptr<float> checkAbandon_ {};
    // Inspection accuracy
    shared_ptr<float> checkAccuracy_ {};
    // Inspection efficiency (items/hour)
    shared_ptr<float> checkEfficiency_ {};
    // Check accuracy
    shared_ptr<float> checkedAccuracy_ {};
    // Number of errors found in the inspection flow
    shared_ptr<float> checkedError_ {};
    // Number of checks
    shared_ptr<float> checkedRejectCount_ {};
    // Discarded data items
    shared_ptr<float> finalAbandonCount_ {};
    // Completed data items
    shared_ptr<int64_t> finishedItemCount_ {};
    // Quantity of completed subtasks
    shared_ptr<int64_t> finishedSubtaskCount_ {};
    // Annotation efficiency (items/hour)
    shared_ptr<float> markEfficiency_ {};
    // Quantity of corrections made during pre-annotation
    shared_ptr<float> preMarkFixedCount_ {};
    // Sampling accuracy
    shared_ptr<float> sampledAccuracy_ {};
    // Number of sampled fault samples
    shared_ptr<float> sampledErrorCount_ {};
    // Number of samples denied
    shared_ptr<float> sampledRejectCount_ {};
    // Sampling accuracy
    shared_ptr<float> samplingAccuracy_ {};
    // Total number of check flow steps
    shared_ptr<float> totalCheckCount_ {};
    // Total check time (hours)
    shared_ptr<float> totalCheckTime_ {};
    // Total number of checks
    shared_ptr<float> totalCheckedCount_ {};
    // Total number of data items
    shared_ptr<int64_t> totalItemCount_ {};
    // Total time spent in the annotation phase (hours)
    shared_ptr<float> totalMarkTime_ {};
    // Total sampling quantity
    shared_ptr<float> totalSampledCount_ {};
    // Total number of sampled validations
    shared_ptr<float> totalSamplingCount_ {};
    // Total number of subtasks
    shared_ptr<int64_t> totalSubtaskCount_ {};
    // Total work time (hours)
    shared_ptr<float> totalWorkTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
