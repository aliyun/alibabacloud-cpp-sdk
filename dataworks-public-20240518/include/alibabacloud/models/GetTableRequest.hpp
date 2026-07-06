// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IncludeBusinessMetadata, includeBusinessMetadata_);
      DARABONBA_PTR_TO_JSON(IncludeExtendedProperties, includeExtendedProperties_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncludeBusinessMetadata, includeBusinessMetadata_);
      DARABONBA_PTR_FROM_JSON(IncludeExtendedProperties, includeExtendedProperties_);
    };
    GetTableRequest() = default ;
    GetTableRequest(const GetTableRequest &) = default ;
    GetTableRequest(GetTableRequest &&) = default ;
    GetTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableRequest() = default ;
    GetTableRequest& operator=(const GetTableRequest &) = default ;
    GetTableRequest& operator=(GetTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->includeBusinessMetadata_ == nullptr && this->includeExtendedProperties_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTableRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // includeBusinessMetadata Field Functions 
    bool hasIncludeBusinessMetadata() const { return this->includeBusinessMetadata_ != nullptr;};
    void deleteIncludeBusinessMetadata() { this->includeBusinessMetadata_ = nullptr;};
    inline bool getIncludeBusinessMetadata() const { DARABONBA_PTR_GET_DEFAULT(includeBusinessMetadata_, false) };
    inline GetTableRequest& setIncludeBusinessMetadata(bool includeBusinessMetadata) { DARABONBA_PTR_SET_VALUE(includeBusinessMetadata_, includeBusinessMetadata) };


    // includeExtendedProperties Field Functions 
    bool hasIncludeExtendedProperties() const { return this->includeExtendedProperties_ != nullptr;};
    void deleteIncludeExtendedProperties() { this->includeExtendedProperties_ = nullptr;};
    inline bool getIncludeExtendedProperties() const { DARABONBA_PTR_GET_DEFAULT(includeExtendedProperties_, false) };
    inline GetTableRequest& setIncludeExtendedProperties(bool includeExtendedProperties) { DARABONBA_PTR_SET_VALUE(includeExtendedProperties_, includeExtendedProperties) };


  protected:
    // The ID. You can obtain this value from the response of the ListTables operation. For more information, see [Metadata entity concepts](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // 
    // The format is `${EntityType}:${InstanceID or encoded URL}:${DataCatalogIdentifier}:${DatabaseName}:${SchemaName}:${TableName}`. Use an empty string as a placeholder for levels that do not exist.
    // 
    // > For MaxCompute and DLF types, use an empty string as a placeholder for the instance ID.
    // 
    // > For StarRocks, the data catalog identifier is the catalog name. For DLF, the data catalog identifier is the catalog ID. Other types do not support the catalog level. Use an empty string as a placeholder.
    // 
    // > For MaxCompute, the database name is the MaxCompute project name. Projects with the three-layer model enabled require a schema name. For projects without the three-layer model enabled, use an empty string as a placeholder for the schema name.
    // 
    // The following examples show the ID formats for common types:
    // 
    // `maxcompute-table:::project_name:[schema_name]:table_name`
    // 
    // `dlf-table::catalog_id:database_name::table_name`
    // 
    // `hms-table:instance_id::database_name::table_name`
    // 
    // `holo-table:instance_id::database_name:schema_name:table_name`
    // 
    // `mysql-table:(instance_id|encoded_jdbc_url)::database_name::table_name`
    // 
    // > Where  
    // `instance_id`: The instance ID. This is required when the data source is registered in instance mode.  
    // `encoded_jdbc_url`: The URL-encoded JDBC connection string. This is required when the data source is registered using a connection string.   
    // `catalog_id`: The DLF catalog ID.   
    // `project_name`: The MaxCompute project name.   
    // `database_name`: The database name.   
    // `schema_name`: The schema name. For MaxCompute, this is required only when the three-layer model is enabled for the project. Use an empty string as a placeholder if the three-layer model is not enabled.   
    // `table_name`: The table name.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // Specifies whether to include business metadata. Default value: false.
    shared_ptr<bool> includeBusinessMetadata_ {};
    shared_ptr<bool> includeExtendedProperties_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
