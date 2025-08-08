// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPROVIDERSPEC_HPP_
#define ALIBABACLOUD_MODELS_MODELPROVIDERSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelProviderSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelProviderSpec& obj) { 
      DARABONBA_PTR_TO_JSON(authorization, authorization_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, ModelProviderSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    ModelProviderSpec() = default ;
    ModelProviderSpec(const ModelProviderSpec &) = default ;
    ModelProviderSpec(ModelProviderSpec &&) = default ;
    ModelProviderSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelProviderSpec() = default ;
    ModelProviderSpec& operator=(const ModelProviderSpec &) = default ;
    ModelProviderSpec& operator=(ModelProviderSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorization_ != nullptr
        && this->schema_ != nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline const ModelProviderAuthorization & authorization() const { DARABONBA_PTR_GET_CONST(authorization_, ModelProviderAuthorization) };
    inline ModelProviderAuthorization authorization() { DARABONBA_PTR_GET(authorization_, ModelProviderAuthorization) };
    inline ModelProviderSpec& setAuthorization(const ModelProviderAuthorization & authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };
    inline ModelProviderSpec& setAuthorization(ModelProviderAuthorization && authorization) { DARABONBA_PTR_SET_RVALUE(authorization_, authorization) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const ModelProviderSchema & schema() const { DARABONBA_PTR_GET_CONST(schema_, ModelProviderSchema) };
    inline ModelProviderSchema schema() { DARABONBA_PTR_GET(schema_, ModelProviderSchema) };
    inline ModelProviderSpec& setSchema(const ModelProviderSchema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline ModelProviderSpec& setSchema(ModelProviderSchema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<ModelProviderAuthorization> authorization_ = nullptr;
    std::shared_ptr<ModelProviderSchema> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
