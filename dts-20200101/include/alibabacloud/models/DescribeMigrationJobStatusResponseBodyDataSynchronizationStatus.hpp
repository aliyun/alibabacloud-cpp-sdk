// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODYDATASYNCHRONIZATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSTATUSRESPONSEBODYDATASYNCHRONIZATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkpoint, checkpoint_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus() = default ;
    DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus(const DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus &) = default ;
    DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus(DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus &&) = default ;
    DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus() = default ;
    DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& operator=(const DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus &) = default ;
    DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& operator=(DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkpoint_ == nullptr
        && return this->delay_ == nullptr && return this->errorMessage_ == nullptr && return this->percent_ == nullptr && return this->status_ == nullptr; };
    // checkpoint Field Functions 
    bool hasCheckpoint() const { return this->checkpoint_ != nullptr;};
    void deleteCheckpoint() { this->checkpoint_ = nullptr;};
    inline string checkpoint() const { DARABONBA_PTR_GET_DEFAULT(checkpoint_, "") };
    inline DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& setCheckpoint(string checkpoint) { DARABONBA_PTR_SET_VALUE(checkpoint_, checkpoint) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline string delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
    inline DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobStatusResponseBodyDataSynchronizationStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The UNIX timestamp generated when the latest incremental data is migrated. Unit: seconds.
    std::shared_ptr<string> checkpoint_ = nullptr;
    // The latency of incremental data migration. Unit: seconds.
    std::shared_ptr<string> delay_ = nullptr;
    // The error message returned if incremental data migration failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The progress of incremental data migration. Unit: %.
    std::shared_ptr<string> percent_ = nullptr;
    // The status of incremental data migration. Valid values:
    // 
    // *   **NotStarted**: Incremental data migration is not started.
    // *   **Migrating**: Incremental data migration is in progress.
    // *   **Failed**: Incremental data migration failed.
    // *   **Finished**: Incremental data migration is completed.
    // *   **Catched**: Incremental data migration is not delayed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
