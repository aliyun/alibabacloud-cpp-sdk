// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLDATASOURCERESPONSEBODYSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllDataSourceResponseBodySchemasSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAllDataSourceResponseBodySchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllDataSourceResponseBodySchemas& obj) { 
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllDataSourceResponseBodySchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    DescribeAllDataSourceResponseBodySchemas() = default ;
    DescribeAllDataSourceResponseBodySchemas(const DescribeAllDataSourceResponseBodySchemas &) = default ;
    DescribeAllDataSourceResponseBodySchemas(DescribeAllDataSourceResponseBodySchemas &&) = default ;
    DescribeAllDataSourceResponseBodySchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllDataSourceResponseBodySchemas() = default ;
    DescribeAllDataSourceResponseBodySchemas& operator=(const DescribeAllDataSourceResponseBodySchemas &) = default ;
    DescribeAllDataSourceResponseBodySchemas& operator=(DescribeAllDataSourceResponseBodySchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schema_ == nullptr; };
    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const vector<Models::DescribeAllDataSourceResponseBodySchemasSchema> & schema() const { DARABONBA_PTR_GET_CONST(schema_, vector<Models::DescribeAllDataSourceResponseBodySchemasSchema>) };
    inline vector<Models::DescribeAllDataSourceResponseBodySchemasSchema> schema() { DARABONBA_PTR_GET(schema_, vector<Models::DescribeAllDataSourceResponseBodySchemasSchema>) };
    inline DescribeAllDataSourceResponseBodySchemas& setSchema(const vector<Models::DescribeAllDataSourceResponseBodySchemasSchema> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline DescribeAllDataSourceResponseBodySchemas& setSchema(vector<Models::DescribeAllDataSourceResponseBodySchemasSchema> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<vector<Models::DescribeAllDataSourceResponseBodySchemasSchema>> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
