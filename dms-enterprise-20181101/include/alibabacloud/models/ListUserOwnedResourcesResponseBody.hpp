// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSEROWNEDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSEROWNEDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserOwnedResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserOwnedResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserOwnedResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUserOwnedResourcesResponseBody() = default ;
    ListUserOwnedResourcesResponseBody(const ListUserOwnedResourcesResponseBody &) = default ;
    ListUserOwnedResourcesResponseBody(ListUserOwnedResourcesResponseBody &&) = default ;
    ListUserOwnedResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserOwnedResourcesResponseBody() = default ;
    ListUserOwnedResourcesResponseBody& operator=(const ListUserOwnedResourcesResponseBody &) = default ;
    ListUserOwnedResourcesResponseBody& operator=(ListUserOwnedResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(resourceList, resourceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(resourceList, resourceList_);
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
      class ResourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_TO_JSON(DbType, dbType_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Logic, logic_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_TO_JSON(SearchName, searchName_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_FROM_JSON(DbType, dbType_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Logic, logic_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
          DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        ResourceList() = default ;
        ResourceList(const ResourceList &) = default ;
        ResourceList(ResourceList &&) = default ;
        ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceList() = default ;
        ResourceList& operator=(const ResourceList &) = default ;
        ResourceList& operator=(ResourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->dbId_ == nullptr && this->dbInstanceId_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr
        && this->instanceId_ == nullptr && this->logic_ == nullptr && this->port_ == nullptr && this->schemaName_ == nullptr && this->searchName_ == nullptr
        && this->tableId_ == nullptr && this->tableName_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline ResourceList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
        inline ResourceList& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // dbInstanceId Field Functions 
        bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
        void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
        inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
        inline ResourceList& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


        // dbType Field Functions 
        bool hasDbType() const { return this->dbType_ != nullptr;};
        void deleteDbType() { this->dbType_ = nullptr;};
        inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
        inline ResourceList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline ResourceList& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline ResourceList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ResourceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // logic Field Functions 
        bool hasLogic() const { return this->logic_ != nullptr;};
        void deleteLogic() { this->logic_ = nullptr;};
        inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
        inline ResourceList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
        inline ResourceList& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // schemaName Field Functions 
        bool hasSchemaName() const { return this->schemaName_ != nullptr;};
        void deleteSchemaName() { this->schemaName_ = nullptr;};
        inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
        inline ResourceList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


        // searchName Field Functions 
        bool hasSearchName() const { return this->searchName_ != nullptr;};
        void deleteSearchName() { this->searchName_ = nullptr;};
        inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
        inline ResourceList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
        inline ResourceList& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline ResourceList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The alias of the instance.
        shared_ptr<string> alias_ {};
        // The ID of the database in DMS.
        shared_ptr<string> dbId_ {};
        // The ID of the instance to which the database belongs.
        shared_ptr<string> dbInstanceId_ {};
        // The database engine type. For more information about the valid values of the DbType parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
        shared_ptr<string> dbType_ {};
        // The type of the environment to which the database instance belongs.
        shared_ptr<string> envType_ {};
        // The endpoint of the instance to which the database belongs.
        shared_ptr<string> host_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the database is a logical database. Valid values:
        // 
        // *   **true**: The database is a logical database
        // *   **false**: The database is a physical database.
        shared_ptr<bool> logic_ {};
        // The connection port of the instance to which the database belongs.
        shared_ptr<int64_t> port_ {};
        // The name of the database.
        shared_ptr<string> schemaName_ {};
        // The query name of the database.
        shared_ptr<string> searchName_ {};
        // The table ID.
        shared_ptr<string> tableId_ {};
        // The table name.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->resourceList_ == nullptr; };
      // resourceList Field Functions 
      bool hasResourceList() const { return this->resourceList_ != nullptr;};
      void deleteResourceList() { this->resourceList_ = nullptr;};
      inline const vector<Data::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<Data::ResourceList>) };
      inline vector<Data::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<Data::ResourceList>) };
      inline Data& setResourceList(const vector<Data::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
      inline Data& setResourceList(vector<Data::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    protected:
      shared_ptr<vector<Data::ResourceList>> resourceList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListUserOwnedResourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListUserOwnedResourcesResponseBody::Data) };
    inline ListUserOwnedResourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListUserOwnedResourcesResponseBody::Data) };
    inline ListUserOwnedResourcesResponseBody& setData(const ListUserOwnedResourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUserOwnedResourcesResponseBody& setData(ListUserOwnedResourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUserOwnedResourcesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUserOwnedResourcesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserOwnedResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserOwnedResourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserOwnedResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether the request was successful. Valid values:
    shared_ptr<ListUserOwnedResourcesResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of entries returned. By default, this parameter is not returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
