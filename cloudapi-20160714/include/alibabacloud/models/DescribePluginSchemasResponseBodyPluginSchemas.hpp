// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODYPLUGINSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODYPLUGINSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginSchemasResponseBodyPluginSchemasPluginSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginSchemasResponseBodyPluginSchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSchemasResponseBodyPluginSchemas& obj) { 
      DARABONBA_PTR_TO_JSON(PluginSchema, pluginSchema_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSchemasResponseBodyPluginSchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginSchema, pluginSchema_);
    };
    DescribePluginSchemasResponseBodyPluginSchemas() = default ;
    DescribePluginSchemasResponseBodyPluginSchemas(const DescribePluginSchemasResponseBodyPluginSchemas &) = default ;
    DescribePluginSchemasResponseBodyPluginSchemas(DescribePluginSchemasResponseBodyPluginSchemas &&) = default ;
    DescribePluginSchemasResponseBodyPluginSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSchemasResponseBodyPluginSchemas() = default ;
    DescribePluginSchemasResponseBodyPluginSchemas& operator=(const DescribePluginSchemasResponseBodyPluginSchemas &) = default ;
    DescribePluginSchemasResponseBodyPluginSchemas& operator=(DescribePluginSchemasResponseBodyPluginSchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pluginSchema_ == nullptr; };
    // pluginSchema Field Functions 
    bool hasPluginSchema() const { return this->pluginSchema_ != nullptr;};
    void deletePluginSchema() { this->pluginSchema_ = nullptr;};
    inline const vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema> & pluginSchema() const { DARABONBA_PTR_GET_CONST(pluginSchema_, vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema>) };
    inline vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema> pluginSchema() { DARABONBA_PTR_GET(pluginSchema_, vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema>) };
    inline DescribePluginSchemasResponseBodyPluginSchemas& setPluginSchema(const vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema> & pluginSchema) { DARABONBA_PTR_SET_VALUE(pluginSchema_, pluginSchema) };
    inline DescribePluginSchemasResponseBodyPluginSchemas& setPluginSchema(vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema> && pluginSchema) { DARABONBA_PTR_SET_RVALUE(pluginSchema_, pluginSchema) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginSchemasResponseBodyPluginSchemasPluginSchema>> pluginSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
