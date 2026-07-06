// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOLUMNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOLUMNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetColumnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetColumnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetColumnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetColumnRequest() = default ;
    GetColumnRequest(const GetColumnRequest &) = default ;
    GetColumnRequest(GetColumnRequest &&) = default ;
    GetColumnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetColumnRequest() = default ;
    GetColumnRequest& operator=(const GetColumnRequest &) = default ;
    GetColumnRequest& operator=(GetColumnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetColumnRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID. You can obtain this value from the response of the ListColumns operation. For more information, see [Metadata entity concepts](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The format is `${EntityType}:${InstanceID or encoded URL}:${DataCatalogIdentifier}:${DatabaseName}:${SchemaName}:${TableName}:${ColumnName}`. Use an empty string as a placeholder for levels that do not exist.
    // 
    // > For MaxCompute and DLF types, use an empty string as a placeholder for the instance ID. For MaxCompute, the database name is the MaxCompute project name. Projects with the three-layer model enabled must include the schema name. For projects without the three-layer model, use an empty string as a placeholder for the schema name.
    // 
    // > For StarRocks, the data catalog identifier is the catalog name. For DLF, the data catalog identifier is the catalog ID. Other types do not support the catalog level. Use an empty string as a placeholder.
    // 
    // The following are ID format examples for common types:
    // 
    // `maxcompute-column:::project_name:[schema_name]:table_name:column_name`
    // 
    // `dlf-column::catalog_id:database_name::table_name:column_name`
    // 
    // `hms-column:instance_id::database_name::table_name:column_name`
    // 
    // `holo-column:instance_id::database_name:schema_name:table_name:column_name`
    // 
    // `mysql-column:(instance_id|encoded_jdbc_url)::database_name::table_name:column_name`
    // 
    // > Other parameters:  
    // `instance_id`: The instance ID. This parameter is required when the data source is registered in instance mode.   
    // `encoded_jdbc_url`: The URL-encoded JDBC connection string. This parameter is required when the data source is registered by using a connection string.   
    // `catalog_id`: The DLF catalog ID.   
    // `project_name`: The MaxCompute project name.   
    // `database_name`: The database name.   
    // `schema_name`: The schema name. For MaxCompute, this parameter is required only when the three-layer model is enabled for the project. If the three-layer model is not enabled, use an empty string as a placeholder.    
    // `table_name`: The table name.    
    // `column_name`: The column name.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
