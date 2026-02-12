// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMORYCOLLECTIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMORYCOLLECTIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EmbedderConfig.hpp>
#include <alibabacloud/models/LLMConfig.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/VectorStoreConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateMemoryCollectionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemoryCollectionInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(embedderConfig, embedderConfig_);
      DARABONBA_PTR_TO_JSON(enableConversationHistory, enableConversationHistory_);
      DARABONBA_PTR_TO_JSON(enableConversationState, enableConversationState_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(llmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(memoryCollectionName, memoryCollectionName_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vectorStoreConfig, vectorStoreConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemoryCollectionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(embedderConfig, embedderConfig_);
      DARABONBA_PTR_FROM_JSON(enableConversationHistory, enableConversationHistory_);
      DARABONBA_PTR_FROM_JSON(enableConversationState, enableConversationState_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(llmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(memoryCollectionName, memoryCollectionName_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vectorStoreConfig, vectorStoreConfig_);
    };
    CreateMemoryCollectionInput() = default ;
    CreateMemoryCollectionInput(const CreateMemoryCollectionInput &) = default ;
    CreateMemoryCollectionInput(CreateMemoryCollectionInput &&) = default ;
    CreateMemoryCollectionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemoryCollectionInput() = default ;
    CreateMemoryCollectionInput& operator=(const CreateMemoryCollectionInput &) = default ;
    CreateMemoryCollectionInput& operator=(CreateMemoryCollectionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->embedderConfig_ == nullptr && this->enableConversationHistory_ == nullptr && this->enableConversationState_ == nullptr && this->executionRoleArn_ == nullptr && this->llmConfig_ == nullptr
        && this->memoryCollectionName_ == nullptr && this->networkConfiguration_ == nullptr && this->type_ == nullptr && this->vectorStoreConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateMemoryCollectionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embedderConfig Field Functions 
    bool hasEmbedderConfig() const { return this->embedderConfig_ != nullptr;};
    void deleteEmbedderConfig() { this->embedderConfig_ = nullptr;};
    inline const EmbedderConfig & getEmbedderConfig() const { DARABONBA_PTR_GET_CONST(embedderConfig_, EmbedderConfig) };
    inline EmbedderConfig getEmbedderConfig() { DARABONBA_PTR_GET(embedderConfig_, EmbedderConfig) };
    inline CreateMemoryCollectionInput& setEmbedderConfig(const EmbedderConfig & embedderConfig) { DARABONBA_PTR_SET_VALUE(embedderConfig_, embedderConfig) };
    inline CreateMemoryCollectionInput& setEmbedderConfig(EmbedderConfig && embedderConfig) { DARABONBA_PTR_SET_RVALUE(embedderConfig_, embedderConfig) };


    // enableConversationHistory Field Functions 
    bool hasEnableConversationHistory() const { return this->enableConversationHistory_ != nullptr;};
    void deleteEnableConversationHistory() { this->enableConversationHistory_ = nullptr;};
    inline bool getEnableConversationHistory() const { DARABONBA_PTR_GET_DEFAULT(enableConversationHistory_, false) };
    inline CreateMemoryCollectionInput& setEnableConversationHistory(bool enableConversationHistory) { DARABONBA_PTR_SET_VALUE(enableConversationHistory_, enableConversationHistory) };


    // enableConversationState Field Functions 
    bool hasEnableConversationState() const { return this->enableConversationState_ != nullptr;};
    void deleteEnableConversationState() { this->enableConversationState_ = nullptr;};
    inline bool getEnableConversationState() const { DARABONBA_PTR_GET_DEFAULT(enableConversationState_, false) };
    inline CreateMemoryCollectionInput& setEnableConversationState(bool enableConversationState) { DARABONBA_PTR_SET_VALUE(enableConversationState_, enableConversationState) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CreateMemoryCollectionInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const LLMConfig & getLlmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, LLMConfig) };
    inline LLMConfig getLlmConfig() { DARABONBA_PTR_GET(llmConfig_, LLMConfig) };
    inline CreateMemoryCollectionInput& setLlmConfig(const LLMConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline CreateMemoryCollectionInput& setLlmConfig(LLMConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // memoryCollectionName Field Functions 
    bool hasMemoryCollectionName() const { return this->memoryCollectionName_ != nullptr;};
    void deleteMemoryCollectionName() { this->memoryCollectionName_ = nullptr;};
    inline string getMemoryCollectionName() const { DARABONBA_PTR_GET_DEFAULT(memoryCollectionName_, "") };
    inline CreateMemoryCollectionInput& setMemoryCollectionName(string memoryCollectionName) { DARABONBA_PTR_SET_VALUE(memoryCollectionName_, memoryCollectionName) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CreateMemoryCollectionInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateMemoryCollectionInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMemoryCollectionInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vectorStoreConfig Field Functions 
    bool hasVectorStoreConfig() const { return this->vectorStoreConfig_ != nullptr;};
    void deleteVectorStoreConfig() { this->vectorStoreConfig_ = nullptr;};
    inline const VectorStoreConfig & getVectorStoreConfig() const { DARABONBA_PTR_GET_CONST(vectorStoreConfig_, VectorStoreConfig) };
    inline VectorStoreConfig getVectorStoreConfig() { DARABONBA_PTR_GET(vectorStoreConfig_, VectorStoreConfig) };
    inline CreateMemoryCollectionInput& setVectorStoreConfig(const VectorStoreConfig & vectorStoreConfig) { DARABONBA_PTR_SET_VALUE(vectorStoreConfig_, vectorStoreConfig) };
    inline CreateMemoryCollectionInput& setVectorStoreConfig(VectorStoreConfig && vectorStoreConfig) { DARABONBA_PTR_SET_RVALUE(vectorStoreConfig_, vectorStoreConfig) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<EmbedderConfig> embedderConfig_ {};
    shared_ptr<bool> enableConversationHistory_ {};
    shared_ptr<bool> enableConversationState_ {};
    shared_ptr<string> executionRoleArn_ {};
    shared_ptr<LLMConfig> llmConfig_ {};
    shared_ptr<string> memoryCollectionName_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<string> type_ {};
    shared_ptr<VectorStoreConfig> vectorStoreConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
