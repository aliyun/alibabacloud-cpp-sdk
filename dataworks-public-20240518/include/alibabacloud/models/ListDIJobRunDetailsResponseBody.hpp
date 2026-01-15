// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBRUNDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobRunDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobRunDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobRunDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIJobRunDetailsResponseBody() = default ;
    ListDIJobRunDetailsResponseBody(const ListDIJobRunDetailsResponseBody &) = default ;
    ListDIJobRunDetailsResponseBody(ListDIJobRunDetailsResponseBody &&) = default ;
    ListDIJobRunDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobRunDetailsResponseBody() = default ;
    ListDIJobRunDetailsResponseBody& operator=(const ListDIJobRunDetailsResponseBody &) = default ;
    ListDIJobRunDetailsResponseBody& operator=(ListDIJobRunDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(JobRunInfos, jobRunInfos_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(JobRunInfos, jobRunInfos_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobRunInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobRunInfos& obj) { 
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
        friend void from_json(const Darabonba::Json& j, JobRunInfos& obj) { 
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
        JobRunInfos() = default ;
        JobRunInfos(const JobRunInfos &) = default ;
        JobRunInfos(JobRunInfos &&) = default ;
        JobRunInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobRunInfos() = default ;
        JobRunInfos& operator=(const JobRunInfos &) = default ;
        JobRunInfos& operator=(JobRunInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationDatabaseName_ == nullptr
        && this->destinationDatasourceName_ == nullptr && this->destinationSchemaName_ == nullptr && this->destinationTableName_ == nullptr && this->fullMigrationErrorMessage_ == nullptr && this->fullMigrationStatus_ == nullptr
        && this->offlineErrorRecords_ == nullptr && this->offlineTotalBytes_ == nullptr && this->offlineTotalRecords_ == nullptr && this->realtimeMigrationErrorMessage_ == nullptr && this->realtimeMigrationStatus_ == nullptr
        && this->sourceDatabaseName_ == nullptr && this->sourceDatasourceName_ == nullptr && this->sourceSchemaName_ == nullptr && this->sourceTableName_ == nullptr && this->structureMigrationErrorMessage_ == nullptr
        && this->structureMigrationStatus_ == nullptr; };
        // destinationDatabaseName Field Functions 
        bool hasDestinationDatabaseName() const { return this->destinationDatabaseName_ != nullptr;};
        void deleteDestinationDatabaseName() { this->destinationDatabaseName_ = nullptr;};
        inline string getDestinationDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationDatabaseName_, "") };
        inline JobRunInfos& setDestinationDatabaseName(string destinationDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationDatabaseName_, destinationDatabaseName) };


        // destinationDatasourceName Field Functions 
        bool hasDestinationDatasourceName() const { return this->destinationDatasourceName_ != nullptr;};
        void deleteDestinationDatasourceName() { this->destinationDatasourceName_ = nullptr;};
        inline string getDestinationDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(destinationDatasourceName_, "") };
        inline JobRunInfos& setDestinationDatasourceName(string destinationDatasourceName) { DARABONBA_PTR_SET_VALUE(destinationDatasourceName_, destinationDatasourceName) };


        // destinationSchemaName Field Functions 
        bool hasDestinationSchemaName() const { return this->destinationSchemaName_ != nullptr;};
        void deleteDestinationSchemaName() { this->destinationSchemaName_ = nullptr;};
        inline string getDestinationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(destinationSchemaName_, "") };
        inline JobRunInfos& setDestinationSchemaName(string destinationSchemaName) { DARABONBA_PTR_SET_VALUE(destinationSchemaName_, destinationSchemaName) };


        // destinationTableName Field Functions 
        bool hasDestinationTableName() const { return this->destinationTableName_ != nullptr;};
        void deleteDestinationTableName() { this->destinationTableName_ = nullptr;};
        inline string getDestinationTableName() const { DARABONBA_PTR_GET_DEFAULT(destinationTableName_, "") };
        inline JobRunInfos& setDestinationTableName(string destinationTableName) { DARABONBA_PTR_SET_VALUE(destinationTableName_, destinationTableName) };


        // fullMigrationErrorMessage Field Functions 
        bool hasFullMigrationErrorMessage() const { return this->fullMigrationErrorMessage_ != nullptr;};
        void deleteFullMigrationErrorMessage() { this->fullMigrationErrorMessage_ = nullptr;};
        inline string getFullMigrationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(fullMigrationErrorMessage_, "") };
        inline JobRunInfos& setFullMigrationErrorMessage(string fullMigrationErrorMessage) { DARABONBA_PTR_SET_VALUE(fullMigrationErrorMessage_, fullMigrationErrorMessage) };


        // fullMigrationStatus Field Functions 
        bool hasFullMigrationStatus() const { return this->fullMigrationStatus_ != nullptr;};
        void deleteFullMigrationStatus() { this->fullMigrationStatus_ = nullptr;};
        inline string getFullMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(fullMigrationStatus_, "") };
        inline JobRunInfos& setFullMigrationStatus(string fullMigrationStatus) { DARABONBA_PTR_SET_VALUE(fullMigrationStatus_, fullMigrationStatus) };


        // offlineErrorRecords Field Functions 
        bool hasOfflineErrorRecords() const { return this->offlineErrorRecords_ != nullptr;};
        void deleteOfflineErrorRecords() { this->offlineErrorRecords_ = nullptr;};
        inline int64_t getOfflineErrorRecords() const { DARABONBA_PTR_GET_DEFAULT(offlineErrorRecords_, 0L) };
        inline JobRunInfos& setOfflineErrorRecords(int64_t offlineErrorRecords) { DARABONBA_PTR_SET_VALUE(offlineErrorRecords_, offlineErrorRecords) };


        // offlineTotalBytes Field Functions 
        bool hasOfflineTotalBytes() const { return this->offlineTotalBytes_ != nullptr;};
        void deleteOfflineTotalBytes() { this->offlineTotalBytes_ = nullptr;};
        inline int64_t getOfflineTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(offlineTotalBytes_, 0L) };
        inline JobRunInfos& setOfflineTotalBytes(int64_t offlineTotalBytes) { DARABONBA_PTR_SET_VALUE(offlineTotalBytes_, offlineTotalBytes) };


        // offlineTotalRecords Field Functions 
        bool hasOfflineTotalRecords() const { return this->offlineTotalRecords_ != nullptr;};
        void deleteOfflineTotalRecords() { this->offlineTotalRecords_ = nullptr;};
        inline int64_t getOfflineTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(offlineTotalRecords_, 0L) };
        inline JobRunInfos& setOfflineTotalRecords(int64_t offlineTotalRecords) { DARABONBA_PTR_SET_VALUE(offlineTotalRecords_, offlineTotalRecords) };


        // realtimeMigrationErrorMessage Field Functions 
        bool hasRealtimeMigrationErrorMessage() const { return this->realtimeMigrationErrorMessage_ != nullptr;};
        void deleteRealtimeMigrationErrorMessage() { this->realtimeMigrationErrorMessage_ = nullptr;};
        inline string getRealtimeMigrationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(realtimeMigrationErrorMessage_, "") };
        inline JobRunInfos& setRealtimeMigrationErrorMessage(string realtimeMigrationErrorMessage) { DARABONBA_PTR_SET_VALUE(realtimeMigrationErrorMessage_, realtimeMigrationErrorMessage) };


        // realtimeMigrationStatus Field Functions 
        bool hasRealtimeMigrationStatus() const { return this->realtimeMigrationStatus_ != nullptr;};
        void deleteRealtimeMigrationStatus() { this->realtimeMigrationStatus_ = nullptr;};
        inline string getRealtimeMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(realtimeMigrationStatus_, "") };
        inline JobRunInfos& setRealtimeMigrationStatus(string realtimeMigrationStatus) { DARABONBA_PTR_SET_VALUE(realtimeMigrationStatus_, realtimeMigrationStatus) };


        // sourceDatabaseName Field Functions 
        bool hasSourceDatabaseName() const { return this->sourceDatabaseName_ != nullptr;};
        void deleteSourceDatabaseName() { this->sourceDatabaseName_ = nullptr;};
        inline string getSourceDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceDatabaseName_, "") };
        inline JobRunInfos& setSourceDatabaseName(string sourceDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceDatabaseName_, sourceDatabaseName) };


        // sourceDatasourceName Field Functions 
        bool hasSourceDatasourceName() const { return this->sourceDatasourceName_ != nullptr;};
        void deleteSourceDatasourceName() { this->sourceDatasourceName_ = nullptr;};
        inline string getSourceDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceDatasourceName_, "") };
        inline JobRunInfos& setSourceDatasourceName(string sourceDatasourceName) { DARABONBA_PTR_SET_VALUE(sourceDatasourceName_, sourceDatasourceName) };


        // sourceSchemaName Field Functions 
        bool hasSourceSchemaName() const { return this->sourceSchemaName_ != nullptr;};
        void deleteSourceSchemaName() { this->sourceSchemaName_ = nullptr;};
        inline string getSourceSchemaName() const { DARABONBA_PTR_GET_DEFAULT(sourceSchemaName_, "") };
        inline JobRunInfos& setSourceSchemaName(string sourceSchemaName) { DARABONBA_PTR_SET_VALUE(sourceSchemaName_, sourceSchemaName) };


        // sourceTableName Field Functions 
        bool hasSourceTableName() const { return this->sourceTableName_ != nullptr;};
        void deleteSourceTableName() { this->sourceTableName_ = nullptr;};
        inline string getSourceTableName() const { DARABONBA_PTR_GET_DEFAULT(sourceTableName_, "") };
        inline JobRunInfos& setSourceTableName(string sourceTableName) { DARABONBA_PTR_SET_VALUE(sourceTableName_, sourceTableName) };


        // structureMigrationErrorMessage Field Functions 
        bool hasStructureMigrationErrorMessage() const { return this->structureMigrationErrorMessage_ != nullptr;};
        void deleteStructureMigrationErrorMessage() { this->structureMigrationErrorMessage_ = nullptr;};
        inline string getStructureMigrationErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(structureMigrationErrorMessage_, "") };
        inline JobRunInfos& setStructureMigrationErrorMessage(string structureMigrationErrorMessage) { DARABONBA_PTR_SET_VALUE(structureMigrationErrorMessage_, structureMigrationErrorMessage) };


        // structureMigrationStatus Field Functions 
        bool hasStructureMigrationStatus() const { return this->structureMigrationStatus_ != nullptr;};
        void deleteStructureMigrationStatus() { this->structureMigrationStatus_ = nullptr;};
        inline string getStructureMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(structureMigrationStatus_, "") };
        inline JobRunInfos& setStructureMigrationStatus(string structureMigrationStatus) { DARABONBA_PTR_SET_VALUE(structureMigrationStatus_, structureMigrationStatus) };


      protected:
        // The name of the database in the destination.
        shared_ptr<string> destinationDatabaseName_ {};
        // The name of the destination.
        shared_ptr<string> destinationDatasourceName_ {};
        // The name of the schema of the destination.
        shared_ptr<string> destinationSchemaName_ {};
        // The name of the table in the destination.
        shared_ptr<string> destinationTableName_ {};
        // The error message that is returned if an error occurs during full batch synchronization. If no error occurs, no value is returned for this parameter.
        shared_ptr<string> fullMigrationErrorMessage_ {};
        // The status of full batch synchronization.
        shared_ptr<string> fullMigrationStatus_ {};
        // The total number of errors that occur during full synchronization.
        shared_ptr<int64_t> offlineErrorRecords_ {};
        // The total number of bytes that are synchronized during full synchronization.
        shared_ptr<int64_t> offlineTotalBytes_ {};
        // The total number of data records that are synchronized during full synchronization.
        shared_ptr<int64_t> offlineTotalRecords_ {};
        // The error message that is returned if an error occurs during real-time synchronization. If no error occurs, no value is returned for this parameter.
        shared_ptr<string> realtimeMigrationErrorMessage_ {};
        // The status of real-time synchronization.
        shared_ptr<string> realtimeMigrationStatus_ {};
        // The name of the database in the source.
        shared_ptr<string> sourceDatabaseName_ {};
        // The name of the source.
        shared_ptr<string> sourceDatasourceName_ {};
        // The name of the schema of the source.
        shared_ptr<string> sourceSchemaName_ {};
        // The name of the table in the source.
        shared_ptr<string> sourceTableName_ {};
        // The error message that is returned if an error occurs during schema synchronization. If no error occurs, no value is returned for this parameter.
        shared_ptr<string> structureMigrationErrorMessage_ {};
        // The synchronization status of the schema.
        shared_ptr<string> structureMigrationStatus_ {};
      };

      virtual bool empty() const override { return this->jobRunInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // jobRunInfos Field Functions 
      bool hasJobRunInfos() const { return this->jobRunInfos_ != nullptr;};
      void deleteJobRunInfos() { this->jobRunInfos_ = nullptr;};
      inline const vector<PagingInfo::JobRunInfos> & getJobRunInfos() const { DARABONBA_PTR_GET_CONST(jobRunInfos_, vector<PagingInfo::JobRunInfos>) };
      inline vector<PagingInfo::JobRunInfos> getJobRunInfos() { DARABONBA_PTR_GET(jobRunInfos_, vector<PagingInfo::JobRunInfos>) };
      inline PagingInfo& setJobRunInfos(const vector<PagingInfo::JobRunInfos> & jobRunInfos) { DARABONBA_PTR_SET_VALUE(jobRunInfos_, jobRunInfos) };
      inline PagingInfo& setJobRunInfos(vector<PagingInfo::JobRunInfos> && jobRunInfos) { DARABONBA_PTR_SET_RVALUE(jobRunInfos_, jobRunInfos) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline PagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline PagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline PagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The running information about the synchronization task.
      shared_ptr<vector<PagingInfo::JobRunInfos>> jobRunInfos_ {};
      // The page number.
      shared_ptr<string> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDIJobRunDetailsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDIJobRunDetailsResponseBody::PagingInfo) };
    inline ListDIJobRunDetailsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDIJobRunDetailsResponseBody::PagingInfo) };
    inline ListDIJobRunDetailsResponseBody& setPagingInfo(const ListDIJobRunDetailsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDIJobRunDetailsResponseBody& setPagingInfo(ListDIJobRunDetailsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIJobRunDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDIJobRunDetailsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
