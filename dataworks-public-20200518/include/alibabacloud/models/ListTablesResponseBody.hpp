// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODY_HPP_
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
  class ListTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTablesResponseBody() = default ;
    ListTablesResponseBody(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody(ListTablesResponseBody &&) = default ;
    ListTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBody() = default ;
    ListTablesResponseBody& operator=(const ListTablesResponseBody &) = default ;
    ListTablesResponseBody& operator=(ListTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TableEntityList, tableEntityList_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TableEntityList, tableEntityList_);
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
      class TableEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(EntityContent, entityContent_);
          DARABONBA_PTR_TO_JSON(EntityQualifiedName, entityQualifiedName_);
        };
        friend void from_json(const Darabonba::Json& j, TableEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityContent, entityContent_);
          DARABONBA_PTR_FROM_JSON(EntityQualifiedName, entityQualifiedName_);
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
        class EntityContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EntityContent& obj) { 
            DARABONBA_PTR_TO_JSON(DataSourceQualifiedName, dataSourceQualifiedName_);
            DARABONBA_PTR_TO_JSON(DataSourceUniqueId, dataSourceUniqueId_);
            DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, EntityContent& obj) { 
            DARABONBA_PTR_FROM_JSON(DataSourceQualifiedName, dataSourceQualifiedName_);
            DARABONBA_PTR_FROM_JSON(DataSourceUniqueId, dataSourceUniqueId_);
            DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          EntityContent() = default ;
          EntityContent(const EntityContent &) = default ;
          EntityContent(EntityContent &&) = default ;
          EntityContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EntityContent() = default ;
          EntityContent& operator=(const EntityContent &) = default ;
          EntityContent& operator=(EntityContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataSourceQualifiedName_ == nullptr
        && this->dataSourceUniqueId_ == nullptr && this->databaseName_ == nullptr && this->instanceId_ == nullptr && this->projectName_ == nullptr && this->tableName_ == nullptr; };
          // dataSourceQualifiedName Field Functions 
          bool hasDataSourceQualifiedName() const { return this->dataSourceQualifiedName_ != nullptr;};
          void deleteDataSourceQualifiedName() { this->dataSourceQualifiedName_ = nullptr;};
          inline string getDataSourceQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceQualifiedName_, "") };
          inline EntityContent& setDataSourceQualifiedName(string dataSourceQualifiedName) { DARABONBA_PTR_SET_VALUE(dataSourceQualifiedName_, dataSourceQualifiedName) };


          // dataSourceUniqueId Field Functions 
          bool hasDataSourceUniqueId() const { return this->dataSourceUniqueId_ != nullptr;};
          void deleteDataSourceUniqueId() { this->dataSourceUniqueId_ = nullptr;};
          inline string getDataSourceUniqueId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUniqueId_, "") };
          inline EntityContent& setDataSourceUniqueId(string dataSourceUniqueId) { DARABONBA_PTR_SET_VALUE(dataSourceUniqueId_, dataSourceUniqueId) };


          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline EntityContent& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline EntityContent& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline EntityContent& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline EntityContent& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The unique identifier of the data source.
          shared_ptr<string> dataSourceQualifiedName_ {};
          // The unique ID of the data source identifier.
          shared_ptr<string> dataSourceUniqueId_ {};
          // The name of the database.
          shared_ptr<string> databaseName_ {};
          // The ID of the data source instance.
          shared_ptr<string> instanceId_ {};
          // The name of the ODPS project.
          shared_ptr<string> projectName_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->entityContent_ == nullptr
        && this->entityQualifiedName_ == nullptr; };
        // entityContent Field Functions 
        bool hasEntityContent() const { return this->entityContent_ != nullptr;};
        void deleteEntityContent() { this->entityContent_ = nullptr;};
        inline const TableEntityList::EntityContent & getEntityContent() const { DARABONBA_PTR_GET_CONST(entityContent_, TableEntityList::EntityContent) };
        inline TableEntityList::EntityContent getEntityContent() { DARABONBA_PTR_GET(entityContent_, TableEntityList::EntityContent) };
        inline TableEntityList& setEntityContent(const TableEntityList::EntityContent & entityContent) { DARABONBA_PTR_SET_VALUE(entityContent_, entityContent) };
        inline TableEntityList& setEntityContent(TableEntityList::EntityContent && entityContent) { DARABONBA_PTR_SET_RVALUE(entityContent_, entityContent) };


        // entityQualifiedName Field Functions 
        bool hasEntityQualifiedName() const { return this->entityQualifiedName_ != nullptr;};
        void deleteEntityQualifiedName() { this->entityQualifiedName_ = nullptr;};
        inline string getEntityQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(entityQualifiedName_, "") };
        inline TableEntityList& setEntityQualifiedName(string entityQualifiedName) { DARABONBA_PTR_SET_VALUE(entityQualifiedName_, entityQualifiedName) };


      protected:
        // The information about the table.
        shared_ptr<TableEntityList::EntityContent> entityContent_ {};
        // The unique identifier of the table entity.
        shared_ptr<string> entityQualifiedName_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->tableEntityList_ == nullptr && this->total_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // tableEntityList Field Functions 
      bool hasTableEntityList() const { return this->tableEntityList_ != nullptr;};
      void deleteTableEntityList() { this->tableEntityList_ = nullptr;};
      inline const vector<Data::TableEntityList> & getTableEntityList() const { DARABONBA_PTR_GET_CONST(tableEntityList_, vector<Data::TableEntityList>) };
      inline vector<Data::TableEntityList> getTableEntityList() { DARABONBA_PTR_GET(tableEntityList_, vector<Data::TableEntityList>) };
      inline Data& setTableEntityList(const vector<Data::TableEntityList> & tableEntityList) { DARABONBA_PTR_SET_VALUE(tableEntityList_, tableEntityList) };
      inline Data& setTableEntityList(vector<Data::TableEntityList> && tableEntityList) { DARABONBA_PTR_SET_RVALUE(tableEntityList_, tableEntityList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Pagination information, which specifies the starting point of the next read.
      shared_ptr<string> nextToken_ {};
      // An array of entities.
      shared_ptr<vector<Data::TableEntityList>> tableEntityList_ {};
      // The total number.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListTablesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListTablesResponseBody::Data) };
    inline ListTablesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListTablesResponseBody::Data) };
    inline ListTablesResponseBody& setData(const ListTablesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTablesResponseBody& setData(ListTablesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListTablesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
