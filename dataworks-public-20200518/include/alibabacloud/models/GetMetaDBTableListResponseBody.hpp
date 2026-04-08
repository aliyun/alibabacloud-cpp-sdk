// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADBTABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETADBTABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaDBTableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaDBTableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaDBTableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMetaDBTableListResponseBody() = default ;
    GetMetaDBTableListResponseBody(const GetMetaDBTableListResponseBody &) = default ;
    GetMetaDBTableListResponseBody(GetMetaDBTableListResponseBody &&) = default ;
    GetMetaDBTableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaDBTableListResponseBody() = default ;
    GetMetaDBTableListResponseBody& operator=(const GetMetaDBTableListResponseBody &) = default ;
    GetMetaDBTableListResponseBody& operator=(GetMetaDBTableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TableEntityList, tableEntityList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TableEntityList, tableEntityList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class TableEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, TableEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        TableEntityList() = default ;
        TableEntityList(const TableEntityList &) = default ;
        TableEntityList(TableEntityList &&) = default ;
        TableEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableEntityList() = default ;
        TableEntityList& operator=(const TableEntityList &) = default ;
        TableEntityList& operator=(TableEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->tableGuid_ == nullptr && this->tableName_ == nullptr; };
        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline TableEntityList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // tableGuid Field Functions 
        bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
        void deleteTableGuid() { this->tableGuid_ = nullptr;};
        inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
        inline TableEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline TableEntityList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The name of the metadatabase.
        shared_ptr<string> databaseName_ {};
        // The GUID of the metatable.
        shared_ptr<string> tableGuid_ {};
        // The name of the metatable.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->tableEntityList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // tableEntityList Field Functions 
      bool hasTableEntityList() const { return this->tableEntityList_ != nullptr;};
      void deleteTableEntityList() { this->tableEntityList_ = nullptr;};
      inline const vector<Data::TableEntityList> & getTableEntityList() const { DARABONBA_PTR_GET_CONST(tableEntityList_, vector<Data::TableEntityList>) };
      inline vector<Data::TableEntityList> getTableEntityList() { DARABONBA_PTR_GET(tableEntityList_, vector<Data::TableEntityList>) };
      inline Data& setTableEntityList(const vector<Data::TableEntityList> & tableEntityList) { DARABONBA_PTR_SET_VALUE(tableEntityList_, tableEntityList) };
      inline Data& setTableEntityList(vector<Data::TableEntityList> && tableEntityList) { DARABONBA_PTR_SET_RVALUE(tableEntityList_, tableEntityList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The list of metatables in the compute engine instance.
      shared_ptr<vector<Data::TableEntityList>> tableEntityList_ {};
      // The total number of compute engine instances returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaDBTableListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaDBTableListResponseBody::Data) };
    inline GetMetaDBTableListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaDBTableListResponseBody::Data) };
    inline GetMetaDBTableListResponseBody& setData(const GetMetaDBTableListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaDBTableListResponseBody& setData(GetMetaDBTableListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaDBTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metatable information in a compute engine instance.
    shared_ptr<GetMetaDBTableListResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
