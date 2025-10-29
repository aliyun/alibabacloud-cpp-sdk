// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetSchemaRequest() = default ;
    GetSchemaRequest(const GetSchemaRequest &) = default ;
    GetSchemaRequest(GetSchemaRequest &&) = default ;
    GetSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemaRequest() = default ;
    GetSchemaRequest& operator=(const GetSchemaRequest &) = default ;
    GetSchemaRequest& operator=(GetSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSchemaRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID. You can refer to the ListSchemas operation and [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The format is `${EntityType}:${Instance ID or escaped URL}:${Catalog ID}:${Database name}:${Schema name}</code>`. Use empty strings as placeholders for missing levels.
    // 
    // >  For the MaxCompute type, use an empty string as the placeholder for the instance ID level. The database name is the MaxCompute project name, and the project must have the three-level model enabled.
    // 
    // Examples:
    // 
    // `maxcompute-schema:::project_name:schema_name` (The three-level model is enabled for the MaxCompute project.)
    // 
    // `holo-schema:instance_id::database_name:schema_name`
    // 
    // > \\
    // `instance_id`: The Hologres instance ID\\
    // . `database_name`: The database name\\
    // . `database_name`: The MaxCompute project name\\
    // . `schema_name`: The schema name.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
