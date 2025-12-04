// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCESRESPONSEBODYSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDataSourcesResponseBodySchemasSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAllDataSourcesResponseBodySchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourcesResponseBodySchemas& obj) { 
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourcesResponseBodySchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    DescribeAllDataSourcesResponseBodySchemas() = default ;
    DescribeAllDataSourcesResponseBodySchemas(const DescribeAllDataSourcesResponseBodySchemas &) = default ;
    DescribeAllDataSourcesResponseBodySchemas(DescribeAllDataSourcesResponseBodySchemas &&) = default ;
    DescribeAllDataSourcesResponseBodySchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourcesResponseBodySchemas() = default ;
    DescribeAllDataSourcesResponseBodySchemas& operator=(const DescribeAllDataSourcesResponseBodySchemas &) = default ;
    DescribeAllDataSourcesResponseBodySchemas& operator=(DescribeAllDataSourcesResponseBodySchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schema_ == nullptr; };
    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema> & schema() const { DARABONBA_PTR_GET_CONST(schema_, vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema>) };
    inline vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema> schema() { DARABONBA_PTR_GET(schema_, vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema>) };
    inline DescribeAllDataSourcesResponseBodySchemas& setSchema(const vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline DescribeAllDataSourcesResponseBodySchemas& setSchema(vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<vector<Models::DescribeAllDataSourcesResponseBodySchemasSchema>> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
