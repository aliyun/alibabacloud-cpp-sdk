// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALTERTABLESCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALTERTABLESCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Schema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class AlterTableSchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlterTableSchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, AlterTableSchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    AlterTableSchemaRequest() = default ;
    AlterTableSchemaRequest(const AlterTableSchemaRequest &) = default ;
    AlterTableSchemaRequest(AlterTableSchemaRequest &&) = default ;
    AlterTableSchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlterTableSchemaRequest() = default ;
    AlterTableSchemaRequest& operator=(const AlterTableSchemaRequest &) = default ;
    AlterTableSchemaRequest& operator=(AlterTableSchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schema_ == nullptr; };
    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema getSchema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline AlterTableSchemaRequest& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline AlterTableSchemaRequest& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    // The table schema.
    shared_ptr<Schema> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
