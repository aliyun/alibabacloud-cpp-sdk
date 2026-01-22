// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARCHIVETABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARCHIVETABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeArchiveTableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeArchiveTableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeArchiveTableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeArchiveTableListResponseBody() = default ;
    DescribeArchiveTableListResponseBody(const DescribeArchiveTableListResponseBody &) = default ;
    DescribeArchiveTableListResponseBody(DescribeArchiveTableListResponseBody &&) = default ;
    DescribeArchiveTableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeArchiveTableListResponseBody() = default ;
    DescribeArchiveTableListResponseBody& operator=(const DescribeArchiveTableListResponseBody &) = default ;
    DescribeArchiveTableListResponseBody& operator=(DescribeArchiveTableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PausedCount, pausedCount_);
        DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
        DARABONBA_PTR_TO_JSON(TobeArchivedConut, tobeArchivedConut_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PausedCount, pausedCount_);
        DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
        DARABONBA_PTR_FROM_JSON(TobeArchivedConut, tobeArchivedConut_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Tables : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tables& obj) { 
          DARABONBA_PTR_TO_JSON(ArchiveStatus, archiveStatus_);
          DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
          DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
          DARABONBA_PTR_TO_JSON(LastSuccessArchiveTime, lastSuccessArchiveTime_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SpaceSize, spaceSize_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, Tables& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchiveStatus, archiveStatus_);
          DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
          DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
          DARABONBA_PTR_FROM_JSON(LastSuccessArchiveTime, lastSuccessArchiveTime_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SpaceSize, spaceSize_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        Tables() = default ;
        Tables(const Tables &) = default ;
        Tables(Tables &&) = default ;
        Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tables() = default ;
        Tables& operator=(const Tables &) = default ;
        Tables& operator=(Tables &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->archiveStatus_ == nullptr
        && this->createdDate_ == nullptr && this->fileCount_ == nullptr && this->lastSuccessArchiveTime_ == nullptr && this->schemaName_ == nullptr && this->spaceSize_ == nullptr
        && this->tableName_ == nullptr; };
        // archiveStatus Field Functions 
        bool hasArchiveStatus() const { return this->archiveStatus_ != nullptr;};
        void deleteArchiveStatus() { this->archiveStatus_ = nullptr;};
        inline string getArchiveStatus() const { DARABONBA_PTR_GET_DEFAULT(archiveStatus_, "") };
        inline Tables& setArchiveStatus(string archiveStatus) { DARABONBA_PTR_SET_VALUE(archiveStatus_, archiveStatus) };


        // createdDate Field Functions 
        bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
        void deleteCreatedDate() { this->createdDate_ = nullptr;};
        inline int64_t getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, 0L) };
        inline Tables& setCreatedDate(int64_t createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


        // fileCount Field Functions 
        bool hasFileCount() const { return this->fileCount_ != nullptr;};
        void deleteFileCount() { this->fileCount_ = nullptr;};
        inline int32_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0) };
        inline Tables& setFileCount(int32_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


        // lastSuccessArchiveTime Field Functions 
        bool hasLastSuccessArchiveTime() const { return this->lastSuccessArchiveTime_ != nullptr;};
        void deleteLastSuccessArchiveTime() { this->lastSuccessArchiveTime_ = nullptr;};
        inline int64_t getLastSuccessArchiveTime() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessArchiveTime_, 0L) };
        inline Tables& setLastSuccessArchiveTime(int64_t lastSuccessArchiveTime) { DARABONBA_PTR_SET_VALUE(lastSuccessArchiveTime_, lastSuccessArchiveTime) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline Tables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // spaceSize Field Functions 
        bool hasSpaceSize() const { return this->spaceSize_ != nullptr;};
        void deleteSpaceSize() { this->spaceSize_ = nullptr;};
        inline double getSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(spaceSize_, 0.0) };
        inline Tables& setSpaceSize(double spaceSize) { DARABONBA_PTR_SET_VALUE(spaceSize_, spaceSize) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Tables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        shared_ptr<string> archiveStatus_ {};
        shared_ptr<int64_t> createdDate_ {};
        shared_ptr<int32_t> fileCount_ {};
        shared_ptr<int64_t> lastSuccessArchiveTime_ {};
        shared_ptr<string> schemaName_ {};
        shared_ptr<double> spaceSize_ {};
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->pausedCount_ == nullptr && this->runningCount_ == nullptr && this->successCount_ == nullptr && this->tables_ == nullptr
        && this->tobeArchivedConut_ == nullptr && this->total_ == nullptr; };
      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
      inline Data& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pausedCount Field Functions 
      bool hasPausedCount() const { return this->pausedCount_ != nullptr;};
      void deletePausedCount() { this->pausedCount_ = nullptr;};
      inline int32_t getPausedCount() const { DARABONBA_PTR_GET_DEFAULT(pausedCount_, 0) };
      inline Data& setPausedCount(int32_t pausedCount) { DARABONBA_PTR_SET_VALUE(pausedCount_, pausedCount) };


      // runningCount Field Functions 
      bool hasRunningCount() const { return this->runningCount_ != nullptr;};
      void deleteRunningCount() { this->runningCount_ = nullptr;};
      inline int32_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
      inline Data& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<Data::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Data::Tables>) };
      inline vector<Data::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<Data::Tables>) };
      inline Data& setTables(const vector<Data::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline Data& setTables(vector<Data::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


      // tobeArchivedConut Field Functions 
      bool hasTobeArchivedConut() const { return this->tobeArchivedConut_ != nullptr;};
      void deleteTobeArchivedConut() { this->tobeArchivedConut_ = nullptr;};
      inline int32_t getTobeArchivedConut() const { DARABONBA_PTR_GET_DEFAULT(tobeArchivedConut_, 0) };
      inline Data& setTobeArchivedConut(int32_t tobeArchivedConut) { DARABONBA_PTR_SET_VALUE(tobeArchivedConut_, tobeArchivedConut) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> pageIndex_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int32_t> pausedCount_ {};
      shared_ptr<int32_t> runningCount_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<vector<Data::Tables>> tables_ {};
      shared_ptr<int32_t> tobeArchivedConut_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeArchiveTableListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeArchiveTableListResponseBody::Data) };
    inline DescribeArchiveTableListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeArchiveTableListResponseBody::Data) };
    inline DescribeArchiveTableListResponseBody& setData(const DescribeArchiveTableListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeArchiveTableListResponseBody& setData(DescribeArchiveTableListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeArchiveTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeArchiveTableListResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
