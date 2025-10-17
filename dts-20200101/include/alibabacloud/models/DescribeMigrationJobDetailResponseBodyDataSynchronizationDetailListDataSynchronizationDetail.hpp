// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATASYNCHRONIZATIONDETAILLISTDATASYNCHRONIZATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATASYNCHRONIZATIONDETAILLISTDATASYNCHRONIZATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail(const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail(DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail &&) = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& operator=(const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& operator=(DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && return this->errorMessage_ == nullptr && return this->sourceOwnerDBName_ == nullptr && return this->status_ == nullptr && return this->tableName_ == nullptr; };
    // destinationOwnerDBName Field Functions 
    bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
    void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
    inline string destinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // sourceOwnerDBName Field Functions 
    bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
    void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
    inline string sourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailListDataSynchronizationDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The status of incremental data migration. Valid values:
    // 
    // *   **NotStarted**: Incremental data migration is not started.
    // *   **Migrating**: Incremental data migration is in progress.
    // *   **Failed**: Incremental data migration failed.
    // *   **Finished**: Incremental data migration is completed.
    std::shared_ptr<string> destinationOwnerDBName_ = nullptr;
    // The total number of records that are supposed to be migrated by the task.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time taken by full data migration.
    std::shared_ptr<string> sourceOwnerDBName_ = nullptr;
    // The number of records that have been migrated.
    std::shared_ptr<string> status_ = nullptr;
    // The name of the database to which the migration object in the destination instance belongs.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
