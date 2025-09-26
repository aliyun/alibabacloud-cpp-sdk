// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOOLINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETOOLINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CAPConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateToolInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateToolInput& obj) { 
      DARABONBA_PTR_TO_JSON(CAPConfig, CAPConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(toolType, toolType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateToolInput& obj) { 
      DARABONBA_PTR_FROM_JSON(CAPConfig, CAPConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(toolType, toolType_);
    };
    CreateToolInput() = default ;
    CreateToolInput(const CreateToolInput &) = default ;
    CreateToolInput(CreateToolInput &&) = default ;
    CreateToolInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateToolInput() = default ;
    CreateToolInput& operator=(const CreateToolInput &) = default ;
    CreateToolInput& operator=(CreateToolInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CAPConfig_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->schema_ != nullptr && this->sourceType_ != nullptr && this->toolType_ != nullptr; };
    // CAPConfig Field Functions 
    bool hasCAPConfig() const { return this->CAPConfig_ != nullptr;};
    void deleteCAPConfig() { this->CAPConfig_ = nullptr;};
    inline const CAPConfig & CAPConfig() const { DARABONBA_PTR_GET_CONST(CAPConfig_, CAPConfig) };
    inline CAPConfig CAPConfig() { DARABONBA_PTR_GET(CAPConfig_, CAPConfig) };
    inline CreateToolInput& setCAPConfig(const CAPConfig & CAPConfig) { DARABONBA_PTR_SET_VALUE(CAPConfig_, CAPConfig) };
    inline CreateToolInput& setCAPConfig(CAPConfig && CAPConfig) { DARABONBA_PTR_SET_RVALUE(CAPConfig_, CAPConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateToolInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateToolInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline CreateToolInput& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateToolInput& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // toolType Field Functions 
    bool hasToolType() const { return this->toolType_ != nullptr;};
    void deleteToolType() { this->toolType_ = nullptr;};
    inline string toolType() const { DARABONBA_PTR_GET_DEFAULT(toolType_, "") };
    inline CreateToolInput& setToolType(string toolType) { DARABONBA_PTR_SET_VALUE(toolType_, toolType) };


  protected:
    std::shared_ptr<CAPConfig> CAPConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> schema_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
