// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYDATASYNCHRONIZATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYDATASYNCHRONIZATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodyDataSynchronizationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDtsJobDetailResponseBodyDataSynchronizationStatus() = default ;
    DescribeDtsJobDetailResponseBodyDataSynchronizationStatus(const DescribeDtsJobDetailResponseBodyDataSynchronizationStatus &) = default ;
    DescribeDtsJobDetailResponseBodyDataSynchronizationStatus(DescribeDtsJobDetailResponseBodyDataSynchronizationStatus &&) = default ;
    DescribeDtsJobDetailResponseBodyDataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodyDataSynchronizationStatus() = default ;
    DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& operator=(const DescribeDtsJobDetailResponseBodyDataSynchronizationStatus &) = default ;
    DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& operator=(DescribeDtsJobDetailResponseBodyDataSynchronizationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->needUpgrade_ == nullptr && return this->percent_ == nullptr && return this->progress_ == nullptr && return this->status_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // needUpgrade Field Functions 
    bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
    void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
    inline bool needUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
    inline DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobDetailResponseBodyDataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if incremental data migration or synchronization failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates whether the instance class needs to be upgraded. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> needUpgrade_ = nullptr;
    // The progress of incremental data migration or synchronization. Unit: percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // The number of rows and size of data that is synchronized or migrated to the destination table per second during incremental data synchronization or migration.
    std::shared_ptr<string> progress_ = nullptr;
    // The state of incremental data migration or synchronization. Valid values:
    // 
    // *   **NotStarted**: The task is not started.
    // *   **Migrating**: The task is in progress.
    // *   **Suspending**: The task is paused.
    // *   **Checking**: The task is in precheck.
    // *   **Failed**: The task failed.
    // *   **Finished**: The task is complete.
    // *   **Catched**: The task has no latency.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
