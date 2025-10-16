// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLINFO_HPP_
#define ALIBABACLOUD_MODELS_TOOLINFO_HPP_
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
  class ToolInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ToolInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CAPConfig, CAPConfig_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(toolType, toolType_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, ToolInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CAPConfig, CAPConfig_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(toolType, toolType_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    ToolInfo() = default ;
    ToolInfo(const ToolInfo &) = default ;
    ToolInfo(ToolInfo &&) = default ;
    ToolInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ToolInfo() = default ;
    ToolInfo& operator=(const ToolInfo &) = default ;
    ToolInfo& operator=(ToolInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CAPConfig_ == nullptr
        && return this->createdAt_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->schema_ == nullptr
        && return this->sourceType_ == nullptr && return this->toolType_ == nullptr && return this->updatedAt_ == nullptr; };
    // CAPConfig Field Functions 
    bool hasCAPConfig() const { return this->CAPConfig_ != nullptr;};
    void deleteCAPConfig() { this->CAPConfig_ = nullptr;};
    inline const CAPConfig & CAPConfig() const { DARABONBA_PTR_GET_CONST(CAPConfig_, CAPConfig) };
    inline CAPConfig CAPConfig() { DARABONBA_PTR_GET(CAPConfig_, CAPConfig) };
    inline ToolInfo& setCAPConfig(const CAPConfig & CAPConfig) { DARABONBA_PTR_SET_VALUE(CAPConfig_, CAPConfig) };
    inline ToolInfo& setCAPConfig(CAPConfig && CAPConfig) { DARABONBA_PTR_SET_RVALUE(CAPConfig_, CAPConfig) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ToolInfo& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ToolInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ToolInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ToolInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ToolInfo& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ToolInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // toolType Field Functions 
    bool hasToolType() const { return this->toolType_ != nullptr;};
    void deleteToolType() { this->toolType_ = nullptr;};
    inline string toolType() const { DARABONBA_PTR_GET_DEFAULT(toolType_, "") };
    inline ToolInfo& setToolType(string toolType) { DARABONBA_PTR_SET_VALUE(toolType_, toolType) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ToolInfo& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<CAPConfig> CAPConfig_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> schema_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> toolType_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
