// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetMetaTableBasicInfoRequest() = default ;
    GetMetaTableBasicInfoRequest(const GetMetaTableBasicInfoRequest &) = default ;
    GetMetaTableBasicInfoRequest(GetMetaTableBasicInfoRequest &&) = default ;
    GetMetaTableBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableBasicInfoRequest() = default ;
    GetMetaTableBasicInfoRequest& operator=(const GetMetaTableBasicInfoRequest &) = default ;
    GetMetaTableBasicInfoRequest& operator=(GetMetaTableBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dataSourceType_ == nullptr && this->databaseName_ == nullptr && this->extension_ == nullptr && this->tableGuid_ == nullptr && this->tableName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaTableBasicInfoRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetMetaTableBasicInfoRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaTableBasicInfoRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline bool getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, false) };
    inline GetMetaTableBasicInfoRequest& setExtension(bool extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableBasicInfoRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaTableBasicInfoRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
    // 
    // You can log on to the [EMR console](https://emr.console.aliyun.com/?spm=a2c4g.11186623.0.0.965cc5c2GeiHet#/cn-hangzhou) to query the ID.
    shared_ptr<string> clusterId_ {};
    // The type of the data source. Valid values: odps and emr.
    shared_ptr<string> dataSourceType_ {};
    // The name of the metadatabase. This parameter is required only if you set the DataSourceType parameter to emr.
    // 
    // You can call the [ListMetaDB](https://help.aliyun.com/document_detail/2780105.html) operation to query the name.
    shared_ptr<string> databaseName_ {};
    // Specifies whether to include extended fields in query results. The extended fields include ReadCount, FavoriteCount, and ViewCount. This parameter takes effect only if you set the DataSourceType parameter to odps.
    shared_ptr<bool> extension_ {};
    // The GUID of the MaxCompute table. Specify the GUID in the odps.projectName.tableName format.
    // 
    // > This parameter is optional for E-MapReduce (EMR) tables.
    shared_ptr<string> tableGuid_ {};
    // The name of the metatable in the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
    // 
    // You can call the [GetMetaDBTableList](https://help.aliyun.com/document_detail/2780086.html) operation to query the name.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
