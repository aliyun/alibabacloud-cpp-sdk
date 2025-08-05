// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBSTRUCTUREINITIALIZATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBSRESPONSEBODYMIGRATIONJOBSMIGRATIONJOBSTRUCTUREINITIALIZATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Percent, percent_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Percent, percent_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization &&) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization() = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& operator=(const DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization &) = default ;
    DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& operator=(DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization &&) = default ;
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
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // percent Field Functions 
    bool hasPercent() const { return this->percent_ != nullptr;};
    void deletePercent() { this->percent_ = nullptr;};
    inline string percent() const { DARABONBA_PTR_GET_DEFAULT(percent_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& setPercent(string percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobsResponseBodyMigrationJobsMigrationJobStructureInitialization& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error message returned if schema migration failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The progress of schema migration. Unit: %.
    std::shared_ptr<string> percent_ = nullptr;
    // The number of tables whose schemas have been migrated.
    std::shared_ptr<string> progress_ = nullptr;
    // The status of schema migration. Valid values:
    // 
    // *   **NotStarted**: Schema migration is not started.
    // *   **Migrating**: Schema migration is in progress.
    // *   **Failed**: Schema migration failed.
    // *   **Finished**: Schema migration is completed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
