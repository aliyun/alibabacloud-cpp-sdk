// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTREVERSEJOBSTRUCTUREINITIALIZATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYETLDEMOLISTREVERSEJOBSTRUCTUREINITIALIZATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus(const DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus(DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus &&) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus() = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& operator=(const DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus &) = default ;
    DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& operator=(DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->percent_ != nullptr && this->progress_ != nullptr && this->status_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobsResponseBodyEtlDemoListReverseJobStructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if initial schema synchronization failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The progress of initial schema synchronization. Unit: percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // The number of tables that have been synchronized during initial schema synchronization.
    std::shared_ptr<string> progress_ = nullptr;
    // The state of initial schema synchronization. Valid values:
    // 
    // - **NotStarted**: The task is not started. 
    // - **Migrating**: The task is in progress. 
    // - **Failed**: The task failed. 
    // - **Finished**: The task is complete.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
