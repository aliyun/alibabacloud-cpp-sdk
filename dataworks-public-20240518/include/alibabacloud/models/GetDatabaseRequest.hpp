// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetDatabaseRequest() = default ;
    GetDatabaseRequest(const GetDatabaseRequest &) = default ;
    GetDatabaseRequest(GetDatabaseRequest &&) = default ;
    GetDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseRequest() = default ;
    GetDatabaseRequest& operator=(const GetDatabaseRequest &) = default ;
    GetDatabaseRequest& operator=(GetDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetDatabaseRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // Database entity ID. You can refer to the response of the ListDatabases operation and [the description of metadata entity concepts.](https://help.aliyun.com/document_detail/2880092.html)
    // 
    // The format is `${EntityType}:${Instance ID or encoded URL}:${Catalog identifier}:${Database name}`. Use empty strings as placeholders for non-existent levels.
    // 
    // >  For StarRocks, the catalog identifier is the catalog name. For DLF, the catalog identifier is the catalog ID. For other types, catalog hierarchy is not supported, and an empty string can be used as a placeholder.
    // 
    // Examples of common ID formats
    // 
    // `dlf-database::catalog_id:database_name`
    // 
    // `holo-database:instance_id::database_name`
    // 
    // `mysql-database:(instance_id|encoded_jdbc_url)::database_name`
    // 
    // >  Parameter descriptions\\
    // `catalog_id`: The DLF catalog ID.\\
    // `instance_id`: The instance ID, required for a data source registered in instance mode.\\
    // `encoded_jdbc_url`: The JDBC connection string that has been URL encoded. This parameter is required for the data source registered via a connection string.\\
    // `database_name`: The database name.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
