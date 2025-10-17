// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATAINITIALIZATIONDETAILLISTDATAINITIALIZATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODYDATAINITIALIZATIONDETAILLISTDATAINITIALIZATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FinishRowNum, finishRowNum_);
      DARABONBA_PTR_TO_JSON(MigrationTime, migrationTime_);
      DARABONBA_PTR_TO_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalRowNum, totalRowNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationOwnerDBName, destinationOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FinishRowNum, finishRowNum_);
      DARABONBA_PTR_FROM_JSON(MigrationTime, migrationTime_);
      DARABONBA_PTR_FROM_JSON(SourceOwnerDBName, sourceOwnerDBName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalRowNum, totalRowNum_);
    };
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail(const DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail(DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail &&) = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail() = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& operator=(const DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail &) = default ;
    DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& operator=(DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationOwnerDBName_ == nullptr
        && return this->errorMessage_ == nullptr && return this->finishRowNum_ == nullptr && return this->migrationTime_ == nullptr && return this->sourceOwnerDBName_ == nullptr && return this->status_ == nullptr
        && return this->tableName_ == nullptr && return this->totalRowNum_ == nullptr; };
    // destinationOwnerDBName Field Functions 
    bool hasDestinationOwnerDBName() const { return this->destinationOwnerDBName_ != nullptr;};
    void deleteDestinationOwnerDBName() { this->destinationOwnerDBName_ = nullptr;};
    inline string destinationOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(destinationOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setDestinationOwnerDBName(string destinationOwnerDBName) { DARABONBA_PTR_SET_VALUE(destinationOwnerDBName_, destinationOwnerDBName) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // finishRowNum Field Functions 
    bool hasFinishRowNum() const { return this->finishRowNum_ != nullptr;};
    void deleteFinishRowNum() { this->finishRowNum_ = nullptr;};
    inline string finishRowNum() const { DARABONBA_PTR_GET_DEFAULT(finishRowNum_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setFinishRowNum(string finishRowNum) { DARABONBA_PTR_SET_VALUE(finishRowNum_, finishRowNum) };


    // migrationTime Field Functions 
    bool hasMigrationTime() const { return this->migrationTime_ != nullptr;};
    void deleteMigrationTime() { this->migrationTime_ = nullptr;};
    inline string migrationTime() const { DARABONBA_PTR_GET_DEFAULT(migrationTime_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setMigrationTime(string migrationTime) { DARABONBA_PTR_SET_VALUE(migrationTime_, migrationTime) };


    // sourceOwnerDBName Field Functions 
    bool hasSourceOwnerDBName() const { return this->sourceOwnerDBName_ != nullptr;};
    void deleteSourceOwnerDBName() { this->sourceOwnerDBName_ = nullptr;};
    inline string sourceOwnerDBName() const { DARABONBA_PTR_GET_DEFAULT(sourceOwnerDBName_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setSourceOwnerDBName(string sourceOwnerDBName) { DARABONBA_PTR_SET_VALUE(sourceOwnerDBName_, sourceOwnerDBName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalRowNum Field Functions 
    bool hasTotalRowNum() const { return this->totalRowNum_ != nullptr;};
    void deleteTotalRowNum() { this->totalRowNum_ = nullptr;};
    inline string totalRowNum() const { DARABONBA_PTR_GET_DEFAULT(totalRowNum_, "") };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailListDataInitializationDetail& setTotalRowNum(string totalRowNum) { DARABONBA_PTR_SET_VALUE(totalRowNum_, totalRowNum) };


  protected:
    // The status of full data migration. Valid values:
    // 
    // - **NotStarted**: Full data migration is not started.
    // - **Migrating**: Full data migration is in progress.
    // - **Failed**: Full data migration failed.
    // - **Finished**: Full data migration is completed.
    std::shared_ptr<string> destinationOwnerDBName_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of full data migration.
    std::shared_ptr<string> finishRowNum_ = nullptr;
    // The name of the database to which the migration object in the source instance belongs.
    std::shared_ptr<string> migrationTime_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> sourceOwnerDBName_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<string> status_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> tableName_ = nullptr;
    // The table name.
    std::shared_ptr<string> totalRowNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
