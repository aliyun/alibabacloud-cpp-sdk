// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESPONSEBODYSTRUCTUREINITIALIZATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESPONSEBODYSTRUCTUREINITIALIZATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus() = default ;
    DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus(const DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus &) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus(DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus &&) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus() = default ;
    DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& operator=(const DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus &) = default ;
    DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& operator=(DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->percent_ == nullptr && return this->progress_ == nullptr && return this->status_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSynchronizationObjectModifyStatusResponseBodyStructureInitializationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if schema synchronization failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The progress of schema synchronization. Unit: %.
    std::shared_ptr<string> percent_ = nullptr;
    // The number of tables whose schemas have been synchronized.
    std::shared_ptr<string> progress_ = nullptr;
    // The status of schema synchronization. Valid values:
    // 
    // *   **NotStarted**: Schema synchronization is not started.
    // *   **Migrating**: Schema synchronization is in progress.
    // *   **Failed**: Schema synchronization failed.
    // *   **Finished**: Schema synchronization is completed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
