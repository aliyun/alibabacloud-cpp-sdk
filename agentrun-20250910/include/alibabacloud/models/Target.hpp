// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGET_HPP_
#define ALIBABACLOUD_MODELS_TARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LLMAPIConfiguration.hpp>
#include <alibabacloud/models/MCPAPI.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Target : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Target& obj) { 
      DARABONBA_PTR_TO_JSON(llmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(mcpAPI, mcpAPI_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, Target& obj) { 
      DARABONBA_PTR_FROM_JSON(llmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(mcpAPI, mcpAPI_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
    };
    Target() = default ;
    Target(const Target &) = default ;
    Target(Target &&) = default ;
    Target(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Target() = default ;
    Target& operator=(const Target &) = default ;
    Target& operator=(Target &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->llmConfig_ != nullptr
        && this->mcpAPI_ != nullptr && this->targetType_ != nullptr; };
    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const LLMAPIConfiguration & llmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, LLMAPIConfiguration) };
    inline LLMAPIConfiguration llmConfig() { DARABONBA_PTR_GET(llmConfig_, LLMAPIConfiguration) };
    inline Target& setLlmConfig(const LLMAPIConfiguration & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline Target& setLlmConfig(LLMAPIConfiguration && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // mcpAPI Field Functions 
    bool hasMcpAPI() const { return this->mcpAPI_ != nullptr;};
    void deleteMcpAPI() { this->mcpAPI_ = nullptr;};
    inline const MCPAPI & mcpAPI() const { DARABONBA_PTR_GET_CONST(mcpAPI_, MCPAPI) };
    inline MCPAPI mcpAPI() { DARABONBA_PTR_GET(mcpAPI_, MCPAPI) };
    inline Target& setMcpAPI(const MCPAPI & mcpAPI) { DARABONBA_PTR_SET_VALUE(mcpAPI_, mcpAPI) };
    inline Target& setMcpAPI(MCPAPI && mcpAPI) { DARABONBA_PTR_SET_RVALUE(mcpAPI_, mcpAPI) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline Target& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<LLMAPIConfiguration> llmConfig_ = nullptr;
    std::shared_ptr<MCPAPI> mcpAPI_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
