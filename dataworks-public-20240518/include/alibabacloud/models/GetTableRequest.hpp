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
    virtual bool empty() const override { this->id_ != nullptr
        && this->includeBusinessMetadata_ != nullptr; };
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
    // The table ID. For more information, see [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The common format of this parameter is `${Entity type}:${Instance ID or escaped URL}:${Catalog identifier}:${Database name}:${Schema name}:${Table name}`. If a level does not exist, specify an empty string as a placeholder.
    // 
    // >  For MaxCompute and DLF data sources, specify an empty string at the Instance ID level.
    // 
    // >  For StarRocks data sources, specify a catalog name at the Catalog identifier level. For DLF data sources, specify a catalog ID at the Catalog identifier level. Other types of data sources do not support the Catalog identifier level. You can specify an empty string as a placeholder.
    // 
    // >  For MaxCompute data sources, specify a MaxCompute project name at the Database name level. If the three-layer model is enabled for your MaxCompute project, you must specify a schema name at the Schema name level. Otherwise, you can specify an empty string as a placeholder.
    // 
    // You can configure this parameter in one of the following formats based on your data source type:
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
    // `instance_id`: the ID of an instance. If the related data source is added to DataWorks in Alibaba Cloud instance mode, you must configure this parameter.\\
    // `encoded_jdbc_url`: the JDBC connection string that is URL-encoded. If the related data source is added to DataWorks in connection string mode, you must configure this parameter.\\
    // `catalog_id`: the ID of a DLF catalog.\\
    // `project_name`: the name of a MaxCompute project.\\
    // `database_name`: the name of a database.\\
    // `schema_name`: the name of a schema. For a MaxCompute table, if the three-layer model is enabled for the MaxCompute project to which the table belongs, you must configure this parameter. Otherwise, you can specify an empty string for schema_name as a placeholder.\\
    // `table_name`: the name of a table.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> includeBusinessMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
