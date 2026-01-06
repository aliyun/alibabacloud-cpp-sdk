// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMISSINGINDEXLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceMissingIndexListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMissingIndexListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMissingIndexListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceMissingIndexListResponseBody() = default ;
    GetInstanceMissingIndexListResponseBody(const GetInstanceMissingIndexListResponseBody &) = default ;
    GetInstanceMissingIndexListResponseBody(GetInstanceMissingIndexListResponseBody &&) = default ;
    GetInstanceMissingIndexListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMissingIndexListResponseBody() = default ;
    GetInstanceMissingIndexListResponseBody& operator=(const GetInstanceMissingIndexListResponseBody &) = default ;
    GetInstanceMissingIndexListResponseBody& operator=(GetInstanceMissingIndexListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AvgTotalUserCost, avgTotalUserCost_);
          DARABONBA_PTR_TO_JSON(AvgUserImpact, avgUserImpact_);
          DARABONBA_PTR_TO_JSON(CreateIndex, createIndex_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(EqualityColumns, equalityColumns_);
          DARABONBA_PTR_TO_JSON(IncludedColumns, includedColumns_);
          DARABONBA_PTR_TO_JSON(IndexCount, indexCount_);
          DARABONBA_PTR_TO_JSON(InequalityColumns, inequalityColumns_);
          DARABONBA_PTR_TO_JSON(LastUserSeek, lastUserSeek_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ReservedPages, reservedPages_);
          DARABONBA_PTR_TO_JSON(ReservedSize, reservedSize_);
          DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SystemScans, systemScans_);
          DARABONBA_PTR_TO_JSON(SystemSeeks, systemSeeks_);
          DARABONBA_PTR_TO_JSON(UniqueCompiles, uniqueCompiles_);
          DARABONBA_PTR_TO_JSON(UserScans, userScans_);
          DARABONBA_PTR_TO_JSON(UserSeeks, userSeeks_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AvgTotalUserCost, avgTotalUserCost_);
          DARABONBA_PTR_FROM_JSON(AvgUserImpact, avgUserImpact_);
          DARABONBA_PTR_FROM_JSON(CreateIndex, createIndex_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(EqualityColumns, equalityColumns_);
          DARABONBA_PTR_FROM_JSON(IncludedColumns, includedColumns_);
          DARABONBA_PTR_FROM_JSON(IndexCount, indexCount_);
          DARABONBA_PTR_FROM_JSON(InequalityColumns, inequalityColumns_);
          DARABONBA_PTR_FROM_JSON(LastUserSeek, lastUserSeek_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ReservedPages, reservedPages_);
          DARABONBA_PTR_FROM_JSON(ReservedSize, reservedSize_);
          DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SystemScans, systemScans_);
          DARABONBA_PTR_FROM_JSON(SystemSeeks, systemSeeks_);
          DARABONBA_PTR_FROM_JSON(UniqueCompiles, uniqueCompiles_);
          DARABONBA_PTR_FROM_JSON(UserScans, userScans_);
          DARABONBA_PTR_FROM_JSON(UserSeeks, userSeeks_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->avgTotalUserCost_ == nullptr
        && this->avgUserImpact_ == nullptr && this->createIndex_ == nullptr && this->databaseName_ == nullptr && this->equalityColumns_ == nullptr && this->includedColumns_ == nullptr
        && this->indexCount_ == nullptr && this->inequalityColumns_ == nullptr && this->lastUserSeek_ == nullptr && this->objectName_ == nullptr && this->reservedPages_ == nullptr
        && this->reservedSize_ == nullptr && this->rowCount_ == nullptr && this->schemaName_ == nullptr && this->systemScans_ == nullptr && this->systemSeeks_ == nullptr
        && this->uniqueCompiles_ == nullptr && this->userScans_ == nullptr && this->userSeeks_ == nullptr; };
        // avgTotalUserCost Field Functions 
        bool hasAvgTotalUserCost() const { return this->avgTotalUserCost_ != nullptr;};
        void deleteAvgTotalUserCost() { this->avgTotalUserCost_ = nullptr;};
        inline double getAvgTotalUserCost() const { DARABONBA_PTR_GET_DEFAULT(avgTotalUserCost_, 0.0) };
        inline List& setAvgTotalUserCost(double avgTotalUserCost) { DARABONBA_PTR_SET_VALUE(avgTotalUserCost_, avgTotalUserCost) };


        // avgUserImpact Field Functions 
        bool hasAvgUserImpact() const { return this->avgUserImpact_ != nullptr;};
        void deleteAvgUserImpact() { this->avgUserImpact_ = nullptr;};
        inline double getAvgUserImpact() const { DARABONBA_PTR_GET_DEFAULT(avgUserImpact_, 0.0) };
        inline List& setAvgUserImpact(double avgUserImpact) { DARABONBA_PTR_SET_VALUE(avgUserImpact_, avgUserImpact) };


        // createIndex Field Functions 
        bool hasCreateIndex() const { return this->createIndex_ != nullptr;};
        void deleteCreateIndex() { this->createIndex_ = nullptr;};
        inline string getCreateIndex() const { DARABONBA_PTR_GET_DEFAULT(createIndex_, "") };
        inline List& setCreateIndex(string createIndex) { DARABONBA_PTR_SET_VALUE(createIndex_, createIndex) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline List& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // equalityColumns Field Functions 
        bool hasEqualityColumns() const { return this->equalityColumns_ != nullptr;};
        void deleteEqualityColumns() { this->equalityColumns_ = nullptr;};
        inline string getEqualityColumns() const { DARABONBA_PTR_GET_DEFAULT(equalityColumns_, "") };
        inline List& setEqualityColumns(string equalityColumns) { DARABONBA_PTR_SET_VALUE(equalityColumns_, equalityColumns) };


        // includedColumns Field Functions 
        bool hasIncludedColumns() const { return this->includedColumns_ != nullptr;};
        void deleteIncludedColumns() { this->includedColumns_ = nullptr;};
        inline string getIncludedColumns() const { DARABONBA_PTR_GET_DEFAULT(includedColumns_, "") };
        inline List& setIncludedColumns(string includedColumns) { DARABONBA_PTR_SET_VALUE(includedColumns_, includedColumns) };


        // indexCount Field Functions 
        bool hasIndexCount() const { return this->indexCount_ != nullptr;};
        void deleteIndexCount() { this->indexCount_ = nullptr;};
        inline int64_t getIndexCount() const { DARABONBA_PTR_GET_DEFAULT(indexCount_, 0L) };
        inline List& setIndexCount(int64_t indexCount) { DARABONBA_PTR_SET_VALUE(indexCount_, indexCount) };


        // inequalityColumns Field Functions 
        bool hasInequalityColumns() const { return this->inequalityColumns_ != nullptr;};
        void deleteInequalityColumns() { this->inequalityColumns_ = nullptr;};
        inline string getInequalityColumns() const { DARABONBA_PTR_GET_DEFAULT(inequalityColumns_, "") };
        inline List& setInequalityColumns(string inequalityColumns) { DARABONBA_PTR_SET_VALUE(inequalityColumns_, inequalityColumns) };


        // lastUserSeek Field Functions 
        bool hasLastUserSeek() const { return this->lastUserSeek_ != nullptr;};
        void deleteLastUserSeek() { this->lastUserSeek_ = nullptr;};
        inline int64_t getLastUserSeek() const { DARABONBA_PTR_GET_DEFAULT(lastUserSeek_, 0L) };
        inline List& setLastUserSeek(int64_t lastUserSeek) { DARABONBA_PTR_SET_VALUE(lastUserSeek_, lastUserSeek) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline List& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // reservedPages Field Functions 
        bool hasReservedPages() const { return this->reservedPages_ != nullptr;};
        void deleteReservedPages() { this->reservedPages_ = nullptr;};
        inline int64_t getReservedPages() const { DARABONBA_PTR_GET_DEFAULT(reservedPages_, 0L) };
        inline List& setReservedPages(int64_t reservedPages) { DARABONBA_PTR_SET_VALUE(reservedPages_, reservedPages) };


        // reservedSize Field Functions 
        bool hasReservedSize() const { return this->reservedSize_ != nullptr;};
        void deleteReservedSize() { this->reservedSize_ = nullptr;};
        inline double getReservedSize() const { DARABONBA_PTR_GET_DEFAULT(reservedSize_, 0.0) };
        inline List& setReservedSize(double reservedSize) { DARABONBA_PTR_SET_VALUE(reservedSize_, reservedSize) };


        // rowCount Field Functions 
        bool hasRowCount() const { return this->rowCount_ != nullptr;};
        void deleteRowCount() { this->rowCount_ = nullptr;};
        inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
        inline List& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline List& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // systemScans Field Functions 
        bool hasSystemScans() const { return this->systemScans_ != nullptr;};
        void deleteSystemScans() { this->systemScans_ = nullptr;};
        inline int64_t getSystemScans() const { DARABONBA_PTR_GET_DEFAULT(systemScans_, 0L) };
        inline List& setSystemScans(int64_t systemScans) { DARABONBA_PTR_SET_VALUE(systemScans_, systemScans) };


        // systemSeeks Field Functions 
        bool hasSystemSeeks() const { return this->systemSeeks_ != nullptr;};
        void deleteSystemSeeks() { this->systemSeeks_ = nullptr;};
        inline int64_t getSystemSeeks() const { DARABONBA_PTR_GET_DEFAULT(systemSeeks_, 0L) };
        inline List& setSystemSeeks(int64_t systemSeeks) { DARABONBA_PTR_SET_VALUE(systemSeeks_, systemSeeks) };


        // uniqueCompiles Field Functions 
        bool hasUniqueCompiles() const { return this->uniqueCompiles_ != nullptr;};
        void deleteUniqueCompiles() { this->uniqueCompiles_ = nullptr;};
        inline int64_t getUniqueCompiles() const { DARABONBA_PTR_GET_DEFAULT(uniqueCompiles_, 0L) };
        inline List& setUniqueCompiles(int64_t uniqueCompiles) { DARABONBA_PTR_SET_VALUE(uniqueCompiles_, uniqueCompiles) };


        // userScans Field Functions 
        bool hasUserScans() const { return this->userScans_ != nullptr;};
        void deleteUserScans() { this->userScans_ = nullptr;};
        inline int64_t getUserScans() const { DARABONBA_PTR_GET_DEFAULT(userScans_, 0L) };
        inline List& setUserScans(int64_t userScans) { DARABONBA_PTR_SET_VALUE(userScans_, userScans) };


        // userSeeks Field Functions 
        bool hasUserSeeks() const { return this->userSeeks_ != nullptr;};
        void deleteUserSeeks() { this->userSeeks_ = nullptr;};
        inline int64_t getUserSeeks() const { DARABONBA_PTR_GET_DEFAULT(userSeeks_, 0L) };
        inline List& setUserSeeks(int64_t userSeeks) { DARABONBA_PTR_SET_VALUE(userSeeks_, userSeeks) };


      protected:
        // The average cost savings.
        shared_ptr<double> avgTotalUserCost_ {};
        // The performance improvement, in percentage.
        shared_ptr<double> avgUserImpact_ {};
        // The statement used to create the missing indexes.
        shared_ptr<string> createIndex_ {};
        // The database name.
        shared_ptr<string> databaseName_ {};
        // The index columns included in the equal operation.
        shared_ptr<string> equalityColumns_ {};
        // The columns on which indexes are missing.
        shared_ptr<string> includedColumns_ {};
        // The number of indexes.
        shared_ptr<int64_t> indexCount_ {};
        // The index columns included in the not equal operation.
        shared_ptr<string> inequalityColumns_ {};
        // The last seek time of a user.
        shared_ptr<int64_t> lastUserSeek_ {};
        // The object name.
        shared_ptr<string> objectName_ {};
        // The total number of returned pages.
        shared_ptr<int64_t> reservedPages_ {};
        // The table size.
        shared_ptr<double> reservedSize_ {};
        // The number of table rows.
        shared_ptr<int64_t> rowCount_ {};
        // The schema name.
        shared_ptr<string> schemaName_ {};
        // The number of scans.
        shared_ptr<int64_t> systemScans_ {};
        // The number of seeks.
        shared_ptr<int64_t> systemSeeks_ {};
        // The number of compilations.
        shared_ptr<int64_t> uniqueCompiles_ {};
        // The number of scans performed by users.
        shared_ptr<int64_t> userScans_ {};
        // The number of seeks performed by users.
        shared_ptr<int64_t> userSeeks_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The returned data.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number of the page returned.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceMissingIndexListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceMissingIndexListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceMissingIndexListResponseBody::Data) };
    inline GetInstanceMissingIndexListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceMissingIndexListResponseBody::Data) };
    inline GetInstanceMissingIndexListResponseBody& setData(const GetInstanceMissingIndexListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceMissingIndexListResponseBody& setData(GetInstanceMissingIndexListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceMissingIndexListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceMissingIndexListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetInstanceMissingIndexListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information.
    shared_ptr<GetInstanceMissingIndexListResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
