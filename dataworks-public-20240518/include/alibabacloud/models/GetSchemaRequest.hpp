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
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSchemaRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The schema ID. You can call the ListSchemas operation to query the ID. For more information, see [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // The common format of this parameter is `${Entity type}:${Instance ID or escaped URL}:${Catalog identifier}:${Database name}:${Schema name}`. If a level does not exist, specify an empty string as a placeholder.
    // 
    // >  For MaxCompute tables, specify an empty string at the Instance ID level and a MaxCompute project name at the Database name level. Make sure that the three-layer model is enabled for the MaxCompute project.
    // 
    // You can configure this parameter in one of the following formats based on your data source type:
    // 
    // `maxcompute-schema:::project_name:schema_name` (Three-layer model is enabled for the MaxCompute project.)
    // 
    // `holo-schema:instance_id::database_name:schema_name`
    // 
    // > \\
    // `instance_id`: the ID of a Hologres instance\\
    // `database_name`: the name of a database\\
    // `project_name`: the name of a MaxCompute project\\
    // `schema_name`: the name of a schema
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
