// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlTableMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlTableMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlTableMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeAdbMySqlTableMetaRequest() = default ;
    DescribeAdbMySqlTableMetaRequest(const DescribeAdbMySqlTableMetaRequest &) = default ;
    DescribeAdbMySqlTableMetaRequest(DescribeAdbMySqlTableMetaRequest &&) = default ;
    DescribeAdbMySqlTableMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlTableMetaRequest() = default ;
    DescribeAdbMySqlTableMetaRequest& operator=(const DescribeAdbMySqlTableMetaRequest &) = default ;
    DescribeAdbMySqlTableMetaRequest& operator=(DescribeAdbMySqlTableMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->regionId_ == nullptr && this->schema_ == nullptr && this->tableName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAdbMySqlTableMetaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAdbMySqlTableMetaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlTableMetaRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAdbMySqlTableMetaRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the details of all AnalyticDB for MySQL Data Lakehouse Edition clusters in a specified region, including the cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> schema_ {};
    // The name of the table.
    // > If this parameter is left empty, the usage frequency data of all tables in the specified cluster on the current day is returned.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
