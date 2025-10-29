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
    };
    friend void from_json(const Darabonba::Json& j, GetTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IncludeBusinessMetadata, includeBusinessMetadata_);
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
        && return this->includeBusinessMetadata_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetTableRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // includeBusinessMetadata Field Functions 
    bool hasIncludeBusinessMetadata() const { return this->includeBusinessMetadata_ != nullptr;};
    void deleteIncludeBusinessMetadata() { this->includeBusinessMetadata_ = nullptr;};
    inline bool includeBusinessMetadata() const { DARABONBA_PTR_GET_DEFAULT(includeBusinessMetadata_, false) };
    inline GetTableRequest& setIncludeBusinessMetadata(bool includeBusinessMetadata) { DARABONBA_PTR_SET_VALUE(includeBusinessMetadata_, includeBusinessMetadata) };


  protected:
    // The ID. You can refer to the response of the ListTables operation and the [concepts related to metadata entities.](https://help.aliyun.com/document_detail/2880092.html)
    // 
    // The format: `${EntityType}:${Instance ID or escaped URL}:${Catalog identifier}:${Database name}:${Table name}`. Use empty strings as placeholders for levels that do not exist.
    // 
    // >  For the MaxCompute and DLF types, use an empty string as the placeholder for the instance ID.
    // 
    // >  The catalog identifier of the StarRocks is the catalog name, and the catalog identifier of the DLF type is the catalog ID. Other types do not support the catalog level. Use an empty string as a placeholder.
    // 
    // >  For MaxCompute, the database name refers to the MaxCompute project name. If the project has schema enabled, you must specify the schema name. Otherwise, use an empty string as the placeholder for the schema name.
    // 
    // Examples of common ID formats
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
    // > \\
    // `instance_id`: The instance ID, required when the data source is registered in instance mode.\\
    // `encoded_jdbc_url`: The URL-encoded JDBC connection string, which is required when the data source is registered via a connection string.\\
    // `catalog_id`: The DLF catalog ID.\\
    // `project_name`: The MaxCompute project name.\\
    // `database_name`: The database name.\\
    // `schema_name`: The schema name. For the MaxCompute type, this is required only if the project has enabled schema. Otherwise, use an empty string as a placeholder.\\
    // `table_name`: The table name.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // Specifies whether to include metadata. Default: false.
    std::shared_ptr<bool> includeBusinessMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
