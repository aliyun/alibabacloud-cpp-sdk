// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMORYCOLLECTION_HPP_
#define ALIBABACLOUD_MODELS_MEMORYCOLLECTION_HPP_
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
  class MemoryCollection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MemoryCollection& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(embedderConfig, embedderConfig_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(llmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(memoryCollectionId, memoryCollectionId_);
      DARABONBA_PTR_TO_JSON(memoryCollectionName, memoryCollectionName_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(vectorStoreConfig, vectorStoreConfig_);
    };
    friend void from_json(const Darabonba::Json& j, MemoryCollection& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(embedderConfig, embedderConfig_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(llmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(memoryCollectionId, memoryCollectionId_);
      DARABONBA_PTR_FROM_JSON(memoryCollectionName, memoryCollectionName_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(vectorStoreConfig, vectorStoreConfig_);
    };
    MemoryCollection() = default ;
    MemoryCollection(const MemoryCollection &) = default ;
    MemoryCollection(MemoryCollection &&) = default ;
    MemoryCollection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MemoryCollection() = default ;
    MemoryCollection& operator=(const MemoryCollection &) = default ;
    MemoryCollection& operator=(MemoryCollection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->embedderConfig_ == nullptr && this->executionRoleArn_ == nullptr && this->lastUpdatedAt_ == nullptr && this->llmConfig_ == nullptr
        && this->memoryCollectionId_ == nullptr && this->memoryCollectionName_ == nullptr && this->networkConfiguration_ == nullptr && this->vectorStoreConfig_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline MemoryCollection& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MemoryCollection& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // embedderConfig Field Functions 
    bool hasEmbedderConfig() const { return this->embedderConfig_ != nullptr;};
    void deleteEmbedderConfig() { this->embedderConfig_ = nullptr;};
    inline const EmbedderConfig & getEmbedderConfig() const { DARABONBA_PTR_GET_CONST(embedderConfig_, EmbedderConfig) };
    inline EmbedderConfig getEmbedderConfig() { DARABONBA_PTR_GET(embedderConfig_, EmbedderConfig) };
    inline MemoryCollection& setEmbedderConfig(const EmbedderConfig & embedderConfig) { DARABONBA_PTR_SET_VALUE(embedderConfig_, embedderConfig) };
    inline MemoryCollection& setEmbedderConfig(EmbedderConfig && embedderConfig) { DARABONBA_PTR_SET_RVALUE(embedderConfig_, embedderConfig) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline MemoryCollection& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline MemoryCollection& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const LLMConfig & getLlmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, LLMConfig) };
    inline LLMConfig getLlmConfig() { DARABONBA_PTR_GET(llmConfig_, LLMConfig) };
    inline MemoryCollection& setLlmConfig(const LLMConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline MemoryCollection& setLlmConfig(LLMConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // memoryCollectionId Field Functions 
    bool hasMemoryCollectionId() const { return this->memoryCollectionId_ != nullptr;};
    void deleteMemoryCollectionId() { this->memoryCollectionId_ = nullptr;};
    inline string getMemoryCollectionId() const { DARABONBA_PTR_GET_DEFAULT(memoryCollectionId_, "") };
    inline MemoryCollection& setMemoryCollectionId(string memoryCollectionId) { DARABONBA_PTR_SET_VALUE(memoryCollectionId_, memoryCollectionId) };


    // memoryCollectionName Field Functions 
    bool hasMemoryCollectionName() const { return this->memoryCollectionName_ != nullptr;};
    void deleteMemoryCollectionName() { this->memoryCollectionName_ = nullptr;};
    inline string getMemoryCollectionName() const { DARABONBA_PTR_GET_DEFAULT(memoryCollectionName_, "") };
    inline MemoryCollection& setMemoryCollectionName(string memoryCollectionName) { DARABONBA_PTR_SET_VALUE(memoryCollectionName_, memoryCollectionName) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & getNetworkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration getNetworkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline MemoryCollection& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline MemoryCollection& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // vectorStoreConfig Field Functions 
    bool hasVectorStoreConfig() const { return this->vectorStoreConfig_ != nullptr;};
    void deleteVectorStoreConfig() { this->vectorStoreConfig_ = nullptr;};
    inline const VectorStoreConfig & getVectorStoreConfig() const { DARABONBA_PTR_GET_CONST(vectorStoreConfig_, VectorStoreConfig) };
    inline VectorStoreConfig getVectorStoreConfig() { DARABONBA_PTR_GET(vectorStoreConfig_, VectorStoreConfig) };
    inline MemoryCollection& setVectorStoreConfig(const VectorStoreConfig & vectorStoreConfig) { DARABONBA_PTR_SET_VALUE(vectorStoreConfig_, vectorStoreConfig) };
    inline MemoryCollection& setVectorStoreConfig(VectorStoreConfig && vectorStoreConfig) { DARABONBA_PTR_SET_RVALUE(vectorStoreConfig_, vectorStoreConfig) };


  protected:
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> description_ {};
    shared_ptr<EmbedderConfig> embedderConfig_ {};
    shared_ptr<string> executionRoleArn_ {};
    shared_ptr<string> lastUpdatedAt_ {};
    shared_ptr<LLMConfig> llmConfig_ {};
    shared_ptr<string> memoryCollectionId_ {};
    shared_ptr<string> memoryCollectionName_ {};
    shared_ptr<NetworkConfiguration> networkConfiguration_ {};
    shared_ptr<VectorStoreConfig> vectorStoreConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
