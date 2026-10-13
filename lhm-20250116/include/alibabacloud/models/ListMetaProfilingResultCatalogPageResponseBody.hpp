// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTCATALOGPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTCATALOGPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingResultCatalogPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingResultCatalogPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingResultCatalogPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMetaProfilingResultCatalogPageResponseBody() = default ;
    ListMetaProfilingResultCatalogPageResponseBody(const ListMetaProfilingResultCatalogPageResponseBody &) = default ;
    ListMetaProfilingResultCatalogPageResponseBody(ListMetaProfilingResultCatalogPageResponseBody &&) = default ;
    ListMetaProfilingResultCatalogPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingResultCatalogPageResponseBody() = default ;
    ListMetaProfilingResultCatalogPageResponseBody& operator=(const ListMetaProfilingResultCatalogPageResponseBody &) = default ;
    ListMetaProfilingResultCatalogPageResponseBody& operator=(ListMetaProfilingResultCatalogPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(jobId, jobId_);
        DARABONBA_PTR_TO_JSON(lastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(metaDatasourceId, metaDatasourceId_);
        DARABONBA_PTR_TO_JSON(metaDatasourceType, metaDatasourceType_);
        DARABONBA_PTR_TO_JSON(migrationProgress, migrationProgress_);
        DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
        DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
        DARABONBA_PTR_TO_JSON(ptTableCount, ptTableCount_);
        DARABONBA_PTR_TO_JSON(recordCount, recordCount_);
        DARABONBA_PTR_TO_JSON(schemaCount, schemaCount_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(tableCount, tableCount_);
        DARABONBA_PTR_TO_JSON(viewCount, viewCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        DARABONBA_PTR_FROM_JSON(lastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(metaDatasourceId, metaDatasourceId_);
        DARABONBA_PTR_FROM_JSON(metaDatasourceType, metaDatasourceType_);
        DARABONBA_PTR_FROM_JSON(migrationProgress, migrationProgress_);
        DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
        DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
        DARABONBA_PTR_FROM_JSON(ptTableCount, ptTableCount_);
        DARABONBA_PTR_FROM_JSON(recordCount, recordCount_);
        DARABONBA_PTR_FROM_JSON(schemaCount, schemaCount_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(tableCount, tableCount_);
        DARABONBA_PTR_FROM_JSON(viewCount, viewCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->created_ == nullptr && this->jobId_ == nullptr && this->lastModified_ == nullptr && this->metaDatasourceId_ == nullptr && this->metaDatasourceType_ == nullptr
        && this->migrationProgress_ == nullptr && this->migrationStatus_ == nullptr && this->partitionCount_ == nullptr && this->ptTableCount_ == nullptr && this->recordCount_ == nullptr
        && this->schemaCount_ == nullptr && this->storageSize_ == nullptr && this->tableCount_ == nullptr && this->viewCount_ == nullptr; };
      // catalogName Field Functions 
      bool hasCatalogName() const { return this->catalogName_ != nullptr;};
      void deleteCatalogName() { this->catalogName_ = nullptr;};
      inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
      inline Data& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Data& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
      inline Data& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Data& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // metaDatasourceId Field Functions 
      bool hasMetaDatasourceId() const { return this->metaDatasourceId_ != nullptr;};
      void deleteMetaDatasourceId() { this->metaDatasourceId_ = nullptr;};
      inline int64_t getMetaDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(metaDatasourceId_, 0L) };
      inline Data& setMetaDatasourceId(int64_t metaDatasourceId) { DARABONBA_PTR_SET_VALUE(metaDatasourceId_, metaDatasourceId) };


      // metaDatasourceType Field Functions 
      bool hasMetaDatasourceType() const { return this->metaDatasourceType_ != nullptr;};
      void deleteMetaDatasourceType() { this->metaDatasourceType_ = nullptr;};
      inline string getMetaDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(metaDatasourceType_, "") };
      inline Data& setMetaDatasourceType(string metaDatasourceType) { DARABONBA_PTR_SET_VALUE(metaDatasourceType_, metaDatasourceType) };


      // migrationProgress Field Functions 
      bool hasMigrationProgress() const { return this->migrationProgress_ != nullptr;};
      void deleteMigrationProgress() { this->migrationProgress_ = nullptr;};
      inline double getMigrationProgress() const { DARABONBA_PTR_GET_DEFAULT(migrationProgress_, 0.0) };
      inline Data& setMigrationProgress(double migrationProgress) { DARABONBA_PTR_SET_VALUE(migrationProgress_, migrationProgress) };


      // migrationStatus Field Functions 
      bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
      void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
      inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
      inline Data& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


      // partitionCount Field Functions 
      bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
      void deletePartitionCount() { this->partitionCount_ = nullptr;};
      inline int32_t getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
      inline Data& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


      // ptTableCount Field Functions 
      bool hasPtTableCount() const { return this->ptTableCount_ != nullptr;};
      void deletePtTableCount() { this->ptTableCount_ = nullptr;};
      inline int32_t getPtTableCount() const { DARABONBA_PTR_GET_DEFAULT(ptTableCount_, 0) };
      inline Data& setPtTableCount(int32_t ptTableCount) { DARABONBA_PTR_SET_VALUE(ptTableCount_, ptTableCount) };


      // recordCount Field Functions 
      bool hasRecordCount() const { return this->recordCount_ != nullptr;};
      void deleteRecordCount() { this->recordCount_ = nullptr;};
      inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
      inline Data& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


      // schemaCount Field Functions 
      bool hasSchemaCount() const { return this->schemaCount_ != nullptr;};
      void deleteSchemaCount() { this->schemaCount_ = nullptr;};
      inline int32_t getSchemaCount() const { DARABONBA_PTR_GET_DEFAULT(schemaCount_, 0) };
      inline Data& setSchemaCount(int32_t schemaCount) { DARABONBA_PTR_SET_VALUE(schemaCount_, schemaCount) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
      inline Data& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // tableCount Field Functions 
      bool hasTableCount() const { return this->tableCount_ != nullptr;};
      void deleteTableCount() { this->tableCount_ = nullptr;};
      inline int32_t getTableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0) };
      inline Data& setTableCount(int32_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


      // viewCount Field Functions 
      bool hasViewCount() const { return this->viewCount_ != nullptr;};
      void deleteViewCount() { this->viewCount_ = nullptr;};
      inline int32_t getViewCount() const { DARABONBA_PTR_GET_DEFAULT(viewCount_, 0) };
      inline Data& setViewCount(int32_t viewCount) { DARABONBA_PTR_SET_VALUE(viewCount_, viewCount) };


    protected:
      shared_ptr<string> catalogName_ {};
      shared_ptr<string> created_ {};
      shared_ptr<int64_t> jobId_ {};
      shared_ptr<string> lastModified_ {};
      shared_ptr<int64_t> metaDatasourceId_ {};
      shared_ptr<string> metaDatasourceType_ {};
      shared_ptr<double> migrationProgress_ {};
      shared_ptr<string> migrationStatus_ {};
      shared_ptr<int32_t> partitionCount_ {};
      shared_ptr<int32_t> ptTableCount_ {};
      shared_ptr<int64_t> recordCount_ {};
      shared_ptr<int32_t> schemaCount_ {};
      shared_ptr<string> storageSize_ {};
      shared_ptr<int32_t> tableCount_ {};
      shared_ptr<int32_t> viewCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMetaProfilingResultCatalogPageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMetaProfilingResultCatalogPageResponseBody::Data>) };
    inline vector<ListMetaProfilingResultCatalogPageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMetaProfilingResultCatalogPageResponseBody::Data>) };
    inline ListMetaProfilingResultCatalogPageResponseBody& setData(const vector<ListMetaProfilingResultCatalogPageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMetaProfilingResultCatalogPageResponseBody& setData(vector<ListMetaProfilingResultCatalogPageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListMetaProfilingResultCatalogPageResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListMetaProfilingResultCatalogPageResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingResultCatalogPageResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingResultCatalogPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaProfilingResultCatalogPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMetaProfilingResultCatalogPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMetaProfilingResultCatalogPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListMetaProfilingResultCatalogPageResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
