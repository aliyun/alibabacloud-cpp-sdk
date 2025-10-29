// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSRESPONSEBODYPAGINGINFOJOBRUNINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSRESPONSEBODYPAGINGINFOJOBRUNINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationDatabaseName, destinationDatabaseName_);
      DARABONBA_PTR_TO_JSON(DestinationDatasourceName, destinationDatasourceName_);
      DARABONBA_PTR_TO_JSON(DestinationSchemaName, destinationSchemaName_);
      DARABONBA_PTR_TO_JSON(DestinationTableName, destinationTableName_);
      DARABONBA_PTR_TO_JSON(FullMigrationErrorMessage, fullMigrationErrorMessage_);
      DARABONBA_PTR_TO_JSON(FullMigrationStatus, fullMigrationStatus_);
      DARABONBA_PTR_TO_JSON(OfflineErrorRecords, offlineErrorRecords_);
      DARABONBA_PTR_TO_JSON(OfflineTotalBytes, offlineTotalBytes_);
      DARABONBA_PTR_TO_JSON(OfflineTotalRecords, offlineTotalRecords_);
      DARABONBA_PTR_TO_JSON(RealtimeMigrationErrorMessage, realtimeMigrationErrorMessage_);
      DARABONBA_PTR_TO_JSON(RealtimeMigrationStatus, realtimeMigrationStatus_);
      DARABONBA_PTR_TO_JSON(SourceDatabaseName, sourceDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceDatasourceName, sourceDatasourceName_);
      DARABONBA_PTR_TO_JSON(SourceSchemaName, sourceSchemaName_);
      DARABONBA_PTR_TO_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_TO_JSON(StructureMigrationErrorMessage, structureMigrationErrorMessage_);
      DARABONBA_PTR_TO_JSON(StructureMigrationStatus, structureMigrationStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationDatabaseName, destinationDatabaseName_);
      DARABONBA_PTR_FROM_JSON(DestinationDatasourceName, destinationDatasourceName_);
      DARABONBA_PTR_FROM_JSON(DestinationSchemaName, destinationSchemaName_);
      DARABONBA_PTR_FROM_JSON(DestinationTableName, destinationTableName_);
      DARABONBA_PTR_FROM_JSON(FullMigrationErrorMessage, fullMigrationErrorMessage_);
      DARABONBA_PTR_FROM_JSON(FullMigrationStatus, fullMigrationStatus_);
      DARABONBA_PTR_FROM_JSON(OfflineErrorRecords, offlineErrorRecords_);
      DARABONBA_PTR_FROM_JSON(OfflineTotalBytes, offlineTotalBytes_);
      DARABONBA_PTR_FROM_JSON(OfflineTotalRecords, offlineTotalRecords_);
      DARABONBA_PTR_FROM_JSON(RealtimeMigrationErrorMessage, realtimeMigrationErrorMessage_);
      DARABONBA_PTR_FROM_JSON(RealtimeMigrationStatus, realtimeMigrationStatus_);
      DARABONBA_PTR_FROM_JSON(SourceDatabaseName, sourceDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceDatasourceName, sourceDatasourceName_);
      DARABONBA_PTR_FROM_JSON(SourceSchemaName, sourceSchemaName_);
      DARABONBA_PTR_FROM_JSON(SourceTableName, sourceTableName_);
      DARABONBA_PTR_FROM_JSON(StructureMigrationErrorMessage, structureMigrationErrorMessage_);
      DARABONBA_PTR_FROM_JSON(StructureMigrationStatus, structureMigrationStatus_);
    };
    ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos() = default ;
    ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos(const ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos &) = default ;
    ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos(ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos &&) = default ;
    ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos() = default ;
    ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& operator=(const ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos &) = default ;
    ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& operator=(ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationDatabaseName_ == nullptr
        && return this->destinationDatasourceName_ == nullptr && return this->destinationSchemaName_ == nullptr && return this->destinationTableName_ == nullptr && return this->fullMigrationErrorMessage_ == nullptr && return this->fullMigrationStatus_ == nullptr
        && return this->offlineErrorRecords_ == nullptr && return this->offlineTotalBytes_ == nullptr && return this->offlineTotalRecords_ == nullptr && return this->realtimeMigrationErrorMessage_ == nullptr && return this->realtimeMigrationStatus_ == nullptr
        && return this->sourceDatabaseName_ == nullptr && return this->sourceDatasourceName_ == nullptr && return this->sourceSchemaName_ == nullptr && return this->sourceTableName_ == nullptr && return this->structureMigrationErrorMessage_ == nullptr
        && return this->structureMigrationStatus_ == nullptr; };
    // destinationDatabaseName Field Functions 
    bool hasDestinationDatabaseName() const { return this->destinationDatabaseName_ != nullptr;};
    void deleteDestinationDatabaseName() { this->destinationDatabaseName_ = nullptr;};
    inline string destinationDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationDatabaseName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setDestinationDatabaseName(string destinationDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationDatabaseName_, destinationDatabaseName) };


    // destinationDatasourceName Field Functions 
    bool hasDestinationDatasourceName() const { return this->destinationDatasourceName_ != nullptr;};
    void deleteDestinationDatasourceName() { this->destinationDatasourceName_ = nullptr;};
    inline string destinationDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(destinationDatasourceName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setDestinationDatasourceName(string destinationDatasourceName) { DARABONBA_PTR_SET_VALUE(destinationDatasourceName_, destinationDatasourceName) };


    // destinationSchemaName Field Functions 
    bool hasDestinationSchemaName() const { return this->destinationSchemaName_ != nullptr;};
    void deleteDestinationSchemaName() { this->destinationSchemaName_ = nullptr;};
    inline string destinationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(destinationSchemaName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setDestinationSchemaName(string destinationSchemaName) { DARABONBA_PTR_SET_VALUE(destinationSchemaName_, destinationSchemaName) };


    // destinationTableName Field Functions 
    bool hasDestinationTableName() const { return this->destinationTableName_ != nullptr;};
    void deleteDestinationTableName() { this->destinationTableName_ = nullptr;};
    inline string destinationTableName() const { DARABONBA_PTR_GET_DEFAULT(destinationTableName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setDestinationTableName(string destinationTableName) { DARABONBA_PTR_SET_VALUE(destinationTableName_, destinationTableName) };


    // fullMigrationErrorMessage Field Functions 
    bool hasFullMigrationErrorMessage() const { return this->fullMigrationErrorMessage_ != nullptr;};
    void deleteFullMigrationErrorMessage() { this->fullMigrationErrorMessage_ = nullptr;};
    inline string fullMigrationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(fullMigrationErrorMessage_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setFullMigrationErrorMessage(string fullMigrationErrorMessage) { DARABONBA_PTR_SET_VALUE(fullMigrationErrorMessage_, fullMigrationErrorMessage) };


    // fullMigrationStatus Field Functions 
    bool hasFullMigrationStatus() const { return this->fullMigrationStatus_ != nullptr;};
    void deleteFullMigrationStatus() { this->fullMigrationStatus_ = nullptr;};
    inline string fullMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(fullMigrationStatus_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setFullMigrationStatus(string fullMigrationStatus) { DARABONBA_PTR_SET_VALUE(fullMigrationStatus_, fullMigrationStatus) };


    // offlineErrorRecords Field Functions 
    bool hasOfflineErrorRecords() const { return this->offlineErrorRecords_ != nullptr;};
    void deleteOfflineErrorRecords() { this->offlineErrorRecords_ = nullptr;};
    inline int64_t offlineErrorRecords() const { DARABONBA_PTR_GET_DEFAULT(offlineErrorRecords_, 0L) };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setOfflineErrorRecords(int64_t offlineErrorRecords) { DARABONBA_PTR_SET_VALUE(offlineErrorRecords_, offlineErrorRecords) };


    // offlineTotalBytes Field Functions 
    bool hasOfflineTotalBytes() const { return this->offlineTotalBytes_ != nullptr;};
    void deleteOfflineTotalBytes() { this->offlineTotalBytes_ = nullptr;};
    inline int64_t offlineTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(offlineTotalBytes_, 0L) };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setOfflineTotalBytes(int64_t offlineTotalBytes) { DARABONBA_PTR_SET_VALUE(offlineTotalBytes_, offlineTotalBytes) };


    // offlineTotalRecords Field Functions 
    bool hasOfflineTotalRecords() const { return this->offlineTotalRecords_ != nullptr;};
    void deleteOfflineTotalRecords() { this->offlineTotalRecords_ = nullptr;};
    inline int64_t offlineTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(offlineTotalRecords_, 0L) };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setOfflineTotalRecords(int64_t offlineTotalRecords) { DARABONBA_PTR_SET_VALUE(offlineTotalRecords_, offlineTotalRecords) };


    // realtimeMigrationErrorMessage Field Functions 
    bool hasRealtimeMigrationErrorMessage() const { return this->realtimeMigrationErrorMessage_ != nullptr;};
    void deleteRealtimeMigrationErrorMessage() { this->realtimeMigrationErrorMessage_ = nullptr;};
    inline string realtimeMigrationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(realtimeMigrationErrorMessage_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setRealtimeMigrationErrorMessage(string realtimeMigrationErrorMessage) { DARABONBA_PTR_SET_VALUE(realtimeMigrationErrorMessage_, realtimeMigrationErrorMessage) };


    // realtimeMigrationStatus Field Functions 
    bool hasRealtimeMigrationStatus() const { return this->realtimeMigrationStatus_ != nullptr;};
    void deleteRealtimeMigrationStatus() { this->realtimeMigrationStatus_ = nullptr;};
    inline string realtimeMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(realtimeMigrationStatus_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setRealtimeMigrationStatus(string realtimeMigrationStatus) { DARABONBA_PTR_SET_VALUE(realtimeMigrationStatus_, realtimeMigrationStatus) };


    // sourceDatabaseName Field Functions 
    bool hasSourceDatabaseName() const { return this->sourceDatabaseName_ != nullptr;};
    void deleteSourceDatabaseName() { this->sourceDatabaseName_ = nullptr;};
    inline string sourceDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceDatabaseName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setSourceDatabaseName(string sourceDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceDatabaseName_, sourceDatabaseName) };


    // sourceDatasourceName Field Functions 
    bool hasSourceDatasourceName() const { return this->sourceDatasourceName_ != nullptr;};
    void deleteSourceDatasourceName() { this->sourceDatasourceName_ = nullptr;};
    inline string sourceDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasourceName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setSourceDatasourceName(string sourceDatasourceName) { DARABONBA_PTR_SET_VALUE(sourceDatasourceName_, sourceDatasourceName) };


    // sourceSchemaName Field Functions 
    bool hasSourceSchemaName() const { return this->sourceSchemaName_ != nullptr;};
    void deleteSourceSchemaName() { this->sourceSchemaName_ = nullptr;};
    inline string sourceSchemaName() const { DARABONBA_PTR_GET_DEFAULT(sourceSchemaName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setSourceSchemaName(string sourceSchemaName) { DARABONBA_PTR_SET_VALUE(sourceSchemaName_, sourceSchemaName) };


    // sourceTableName Field Functions 
    bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
    void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
    inline string sourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


    // structureMigrationErrorMessage Field Functions 
    bool hasStructureMigrationErrorMessage() const { return this->structureMigrationErrorMessage_ != nullptr;};
    void deleteStructureMigrationErrorMessage() { this->structureMigrationErrorMessage_ = nullptr;};
    inline string structureMigrationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(structureMigrationErrorMessage_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setStructureMigrationErrorMessage(string structureMigrationErrorMessage) { DARABONBA_PTR_SET_VALUE(structureMigrationErrorMessage_, structureMigrationErrorMessage) };


    // structureMigrationStatus Field Functions 
    bool hasStructureMigrationStatus() const { return this->structureMigrationStatus_ != nullptr;};
    void deleteStructureMigrationStatus() { this->structureMigrationStatus_ = nullptr;};
    inline string structureMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(structureMigrationStatus_, "") };
    inline ListDIJobRunDetailsResponseBodyPagingInfoJobRunInfos& setStructureMigrationStatus(string structureMigrationStatus) { DARABONBA_PTR_SET_VALUE(structureMigrationStatus_, structureMigrationStatus) };


  protected:
    // The name of the database in the destination.
    std::shared_ptr<string> destinationDatabaseName_ = nullptr;
    // The name of the destination.
    std::shared_ptr<string> destinationDatasourceName_ = nullptr;
    // The name of the schema of the destination.
    std::shared_ptr<string> destinationSchemaName_ = nullptr;
    // The name of the table in the destination.
    std::shared_ptr<string> destinationTableName_ = nullptr;
    // The error message that is returned if an error occurs during full batch synchronization. If no error occurs, no value is returned for this parameter.
    std::shared_ptr<string> fullMigrationErrorMessage_ = nullptr;
    // The status of full batch synchronization.
    std::shared_ptr<string> fullMigrationStatus_ = nullptr;
    // The total number of errors that occur during full synchronization.
    std::shared_ptr<int64_t> offlineErrorRecords_ = nullptr;
    // The total number of bytes that are synchronized during full synchronization.
    std::shared_ptr<int64_t> offlineTotalBytes_ = nullptr;
    // The total number of data records that are synchronized during full synchronization.
    std::shared_ptr<int64_t> offlineTotalRecords_ = nullptr;
    // The error message that is returned if an error occurs during real-time synchronization. If no error occurs, no value is returned for this parameter.
    std::shared_ptr<string> realtimeMigrationErrorMessage_ = nullptr;
    // The status of real-time synchronization.
    std::shared_ptr<string> realtimeMigrationStatus_ = nullptr;
    // The name of the database in the source.
    std::shared_ptr<string> sourceDatabaseName_ = nullptr;
    // The name of the source.
    std::shared_ptr<string> sourceDatasourceName_ = nullptr;
    // The name of the schema of the source.
    std::shared_ptr<string> sourceSchemaName_ = nullptr;
    // The name of the table in the source.
    std::shared_ptr<string> sourceTableName_ = nullptr;
    // The error message that is returned if an error occurs during schema synchronization. If no error occurs, no value is returned for this parameter.
    std::shared_ptr<string> structureMigrationErrorMessage_ = nullptr;
    // The synchronization status of the schema.
    std::shared_ptr<string> structureMigrationStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
