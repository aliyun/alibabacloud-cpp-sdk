// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_TARGETCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LLMAPIConfiguration.hpp>
#include <alibabacloud/models/MCPAPIConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class TargetConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(llmAPIConfig, llmAPIConfig_);
      DARABONBA_PTR_TO_JSON(mcpAPIConfig, mcpAPIConfig_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, TargetConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(llmAPIConfig, llmAPIConfig_);
      DARABONBA_PTR_FROM_JSON(mcpAPIConfig, mcpAPIConfig_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    TargetConfiguration() = default ;
    TargetConfiguration(const TargetConfiguration &) = default ;
    TargetConfiguration(TargetConfiguration &&) = default ;
    TargetConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetConfiguration() = default ;
    TargetConfiguration& operator=(const TargetConfiguration &) = default ;
    TargetConfiguration& operator=(TargetConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->llmAPIConfig_ == nullptr
        && return this->mcpAPIConfig_ == nullptr && return this->targetType_ == nullptr; };
    // llmAPIConfig Field Functions 
    bool hasLlmAPIConfig() const { return this->llmAPIConfig_ != nullptr;};
    void deleteLlmAPIConfig() { this->llmAPIConfig_ = nullptr;};
    inline const LLMAPIConfiguration & llmAPIConfig() const { DARABONBA_PTR_GET_CONST(llmAPIConfig_, LLMAPIConfiguration) };
    inline LLMAPIConfiguration llmAPIConfig() { DARABONBA_PTR_GET(llmAPIConfig_, LLMAPIConfiguration) };
    inline TargetConfiguration& setLlmAPIConfig(const LLMAPIConfiguration & llmAPIConfig) { DARABONBA_PTR_SET_VALUE(llmAPIConfig_, llmAPIConfig) };
    inline TargetConfiguration& setLlmAPIConfig(LLMAPIConfiguration && llmAPIConfig) { DARABONBA_PTR_SET_RVALUE(llmAPIConfig_, llmAPIConfig) };


    // mcpAPIConfig Field Functions 
    bool hasMcpAPIConfig() const { return this->mcpAPIConfig_ != nullptr;};
    void deleteMcpAPIConfig() { this->mcpAPIConfig_ = nullptr;};
    inline const MCPAPIConfiguration & mcpAPIConfig() const { DARABONBA_PTR_GET_CONST(mcpAPIConfig_, MCPAPIConfiguration) };
    inline MCPAPIConfiguration mcpAPIConfig() { DARABONBA_PTR_GET(mcpAPIConfig_, MCPAPIConfiguration) };
    inline TargetConfiguration& setMcpAPIConfig(const MCPAPIConfiguration & mcpAPIConfig) { DARABONBA_PTR_SET_VALUE(mcpAPIConfig_, mcpAPIConfig) };
    inline TargetConfiguration& setMcpAPIConfig(MCPAPIConfiguration && mcpAPIConfig) { DARABONBA_PTR_SET_RVALUE(mcpAPIConfig_, mcpAPIConfig) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline TargetConfiguration& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<LLMAPIConfiguration> llmAPIConfig_ = nullptr;
    std::shared_ptr<MCPAPIConfiguration> mcpAPIConfig_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
