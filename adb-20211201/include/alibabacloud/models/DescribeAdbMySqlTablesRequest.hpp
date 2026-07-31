// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Catalog, catalog_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    DescribeAdbMySqlTablesRequest() = default ;
    DescribeAdbMySqlTablesRequest(const DescribeAdbMySqlTablesRequest &) = default ;
    DescribeAdbMySqlTablesRequest(DescribeAdbMySqlTablesRequest &&) = default ;
    DescribeAdbMySqlTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlTablesRequest() = default ;
    DescribeAdbMySqlTablesRequest& operator=(const DescribeAdbMySqlTablesRequest &) = default ;
    DescribeAdbMySqlTablesRequest& operator=(DescribeAdbMySqlTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalog_ == nullptr
        && this->DBClusterId_ == nullptr && this->regionId_ == nullptr && this->schema_ == nullptr; };
    // catalog Field Functions 
    bool hasCatalog() const { return this->catalog_ != nullptr;};
    void deleteCatalog() { this->catalog_ = nullptr;};
    inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
    inline DescribeAdbMySqlTablesRequest& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAdbMySqlTablesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAdbMySqlTablesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DescribeAdbMySqlTablesRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    shared_ptr<string> catalog_ {};
    // <props="china">The ID of the Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // <props="intl">The ID of the Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The region ID.
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the region ID of a specified cluster.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The database name.
    shared_ptr<string> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
