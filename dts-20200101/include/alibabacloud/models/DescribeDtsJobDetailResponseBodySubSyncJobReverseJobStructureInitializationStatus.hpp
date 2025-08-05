// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOBREVERSEJOBSTRUCTUREINITIALIZATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOBREVERSEJOBSTRUCTUREINITIALIZATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(NeedUpgrade, needUpgrade_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(NeedUpgrade, needUpgrade_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus(const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus(DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus &&) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& operator=(const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& operator=(DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->needUpgrade_ != nullptr && this->percent_ != nullptr && this->progress_ != nullptr && this->status_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // needUpgrade Field Functions 
    bool hasNeedUpgrade() const { return this->needUpgrade_ != nullptr;};
    void deleteNeedUpgrade() { this->needUpgrade_ = nullptr;};
    inline bool needUpgrade() const { DARABONBA_PTR_GET_DEFAULT(needUpgrade_, false) };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& setNeedUpgrade(bool needUpgrade) { DARABONBA_PTR_SET_VALUE(needUpgrade_, needUpgrade) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobStructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Error message indicating task failure.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Whether to display upgrade specifications, return value:
    // 
    // - True: Yes.
    // - False: No.
    std::shared_ptr<bool> needUpgrade_ = nullptr;
    // Initialization progress of library table structure, measured in percentage.
    std::shared_ptr<string> percent_ = nullptr;
    // The number of tables that have completed library table structure initialization.
    std::shared_ptr<string> progress_ = nullptr;
    // The initialization status of the library table structure includes:
    // 
    // - NotStarted: Not started.
    // - Migration: In the process of initialization.
    // - Failed: Initialization failed.
    // - Finished: Initialization completed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
