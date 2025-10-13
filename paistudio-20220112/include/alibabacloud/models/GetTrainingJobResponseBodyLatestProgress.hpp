// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYLATESTPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETTRAININGJOBRESPONSEBODYLATESTPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyLatestProgressOverallProgress.hpp>
#include <alibabacloud/models/GetTrainingJobResponseBodyLatestProgressRemainingTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetTrainingJobResponseBodyLatestProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrainingJobResponseBodyLatestProgress& obj) { 
      DARABONBA_PTR_TO_JSON(OverallProgress, overallProgress_);
      DARABONBA_PTR_TO_JSON(RemainingTime, remainingTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrainingJobResponseBodyLatestProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallProgress, overallProgress_);
      DARABONBA_PTR_FROM_JSON(RemainingTime, remainingTime_);
    };
    GetTrainingJobResponseBodyLatestProgress() = default ;
    GetTrainingJobResponseBodyLatestProgress(const GetTrainingJobResponseBodyLatestProgress &) = default ;
    GetTrainingJobResponseBodyLatestProgress(GetTrainingJobResponseBodyLatestProgress &&) = default ;
    GetTrainingJobResponseBodyLatestProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrainingJobResponseBodyLatestProgress() = default ;
    GetTrainingJobResponseBodyLatestProgress& operator=(const GetTrainingJobResponseBodyLatestProgress &) = default ;
    GetTrainingJobResponseBodyLatestProgress& operator=(GetTrainingJobResponseBodyLatestProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overallProgress_ == nullptr
        && return this->remainingTime_ == nullptr; };
    // overallProgress Field Functions 
    bool hasOverallProgress() const { return this->overallProgress_ != nullptr;};
    void deleteOverallProgress() { this->overallProgress_ = nullptr;};
    inline const Models::GetTrainingJobResponseBodyLatestProgressOverallProgress & overallProgress() const { DARABONBA_PTR_GET_CONST(overallProgress_, Models::GetTrainingJobResponseBodyLatestProgressOverallProgress) };
    inline Models::GetTrainingJobResponseBodyLatestProgressOverallProgress overallProgress() { DARABONBA_PTR_GET(overallProgress_, Models::GetTrainingJobResponseBodyLatestProgressOverallProgress) };
    inline GetTrainingJobResponseBodyLatestProgress& setOverallProgress(const Models::GetTrainingJobResponseBodyLatestProgressOverallProgress & overallProgress) { DARABONBA_PTR_SET_VALUE(overallProgress_, overallProgress) };
    inline GetTrainingJobResponseBodyLatestProgress& setOverallProgress(Models::GetTrainingJobResponseBodyLatestProgressOverallProgress && overallProgress) { DARABONBA_PTR_SET_RVALUE(overallProgress_, overallProgress) };


    // remainingTime Field Functions 
    bool hasRemainingTime() const { return this->remainingTime_ != nullptr;};
    void deleteRemainingTime() { this->remainingTime_ = nullptr;};
    inline const Models::GetTrainingJobResponseBodyLatestProgressRemainingTime & remainingTime() const { DARABONBA_PTR_GET_CONST(remainingTime_, Models::GetTrainingJobResponseBodyLatestProgressRemainingTime) };
    inline Models::GetTrainingJobResponseBodyLatestProgressRemainingTime remainingTime() { DARABONBA_PTR_GET(remainingTime_, Models::GetTrainingJobResponseBodyLatestProgressRemainingTime) };
    inline GetTrainingJobResponseBodyLatestProgress& setRemainingTime(const Models::GetTrainingJobResponseBodyLatestProgressRemainingTime & remainingTime) { DARABONBA_PTR_SET_VALUE(remainingTime_, remainingTime) };
    inline GetTrainingJobResponseBodyLatestProgress& setRemainingTime(Models::GetTrainingJobResponseBodyLatestProgressRemainingTime && remainingTime) { DARABONBA_PTR_SET_RVALUE(remainingTime_, remainingTime) };


  protected:
    std::shared_ptr<Models::GetTrainingJobResponseBodyLatestProgressOverallProgress> overallProgress_ = nullptr;
    std::shared_ptr<Models::GetTrainingJobResponseBodyLatestProgressRemainingTime> remainingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
