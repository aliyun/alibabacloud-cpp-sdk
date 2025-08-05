// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTFULLDATACHECKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTFULLDATACHECKSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& obj) { 
      DARABONBA_PTR_TO_JSON(CanSwitch, canSwitch_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(CanSwitch, canSwitch_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus() = default ;
    DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus(const DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus(DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus() = default ;
    DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& operator=(const DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& operator=(DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canSwitch_ != nullptr
        && this->errorMessage_ != nullptr && this->percent_ != nullptr && this->progress_ != nullptr && this->status_ != nullptr; };
    // canSwitch Field Functions 
    bool hasCanSwitch() const { return this->canSwitch_ != nullptr;};
    void deleteCanSwitch() { this->canSwitch_ = nullptr;};
    inline bool canSwitch() const { DARABONBA_PTR_GET_DEFAULT(canSwitch_, false) };
    inline DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& setCanSwitch(bool canSwitch) { DARABONBA_PTR_SET_VALUE(canSwitch_, canSwitch) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListFullDataCheckStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<bool> canSwitch_ = nullptr;
    // The error message returned if the task failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The progress of the full data verification task. Unit: percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // The progress of the full data verification task.
    std::shared_ptr<string> progress_ = nullptr;
    // The state of the full data verification task. Valid values:
    // 
    // - **NotStarted**: The verification is not started. 
    // - **Checking**: The verification is in progress. 
    // - **Failed**: The verification failed. 
    // - **Finished**: The verification is complete.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
