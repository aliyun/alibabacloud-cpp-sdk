// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLSETSPEC_HPP_
#define ALIBABACLOUD_MODELS_TOOLSETSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ToolsetSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ToolsetSpec& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, ToolsetSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    ToolsetSpec() = default ;
    ToolsetSpec(const ToolsetSpec &) = default ;
    ToolsetSpec(ToolsetSpec &&) = default ;
    ToolsetSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ToolsetSpec() = default ;
    ToolsetSpec& operator=(const ToolsetSpec &) = default ;
    ToolsetSpec& operator=(ToolsetSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConfig_ != nullptr
        && this->schema_ != nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const Authorization & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, Authorization) };
    inline Authorization authConfig() { DARABONBA_PTR_GET(authConfig_, Authorization) };
    inline ToolsetSpec& setAuthConfig(const Authorization & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline ToolsetSpec& setAuthConfig(Authorization && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const ToolsetSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, ToolsetSchema) };
    inline ToolsetSchema schema() { DARABONBA_PTR_GET(schema_, ToolsetSchema) };
    inline ToolsetSpec& setSchema(const ToolsetSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline ToolsetSpec& setSchema(ToolsetSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<Authorization> authConfig_ = nullptr;
    std::shared_ptr<ToolsetSchema> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
