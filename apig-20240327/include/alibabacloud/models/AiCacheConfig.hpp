// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AICACHECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AICACHECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiPluginStatus.hpp>
#include <alibabacloud/models/AiPolicyRedisConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiCacheConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiCacheConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cacheKeyStrategy, cacheKeyStrategy_);
      DARABONBA_PTR_TO_JSON(cacheMode, cacheMode_);
      DARABONBA_PTR_TO_JSON(cacheTTL, cacheTTL_);
      DARABONBA_PTR_TO_JSON(embeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_TO_JSON(redisConfig, redisConfig_);
      DARABONBA_PTR_TO_JSON(vectorConfig, vectorConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AiCacheConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cacheKeyStrategy, cacheKeyStrategy_);
      DARABONBA_PTR_FROM_JSON(cacheMode, cacheMode_);
      DARABONBA_PTR_FROM_JSON(cacheTTL, cacheTTL_);
      DARABONBA_PTR_FROM_JSON(embeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(pluginStatus, pluginStatus_);
      DARABONBA_PTR_FROM_JSON(redisConfig, redisConfig_);
      DARABONBA_PTR_FROM_JSON(vectorConfig, vectorConfig_);
    };
    AiCacheConfig() = default ;
    AiCacheConfig(const AiCacheConfig &) = default ;
    AiCacheConfig(AiCacheConfig &&) = default ;
    AiCacheConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiCacheConfig() = default ;
    AiCacheConfig& operator=(const AiCacheConfig &) = default ;
    AiCacheConfig& operator=(AiCacheConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VectorConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VectorConfig& obj) { 
        DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(collectionId, collectionId_);
        DARABONBA_PTR_TO_JSON(serviceHost, serviceHost_);
        DARABONBA_PTR_TO_JSON(threshold, threshold_);
        DARABONBA_PTR_TO_JSON(timeout, timeout_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, VectorConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(collectionId, collectionId_);
        DARABONBA_PTR_FROM_JSON(serviceHost, serviceHost_);
        DARABONBA_PTR_FROM_JSON(threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      VectorConfig() = default ;
      VectorConfig(const VectorConfig &) = default ;
      VectorConfig(VectorConfig &&) = default ;
      VectorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VectorConfig() = default ;
      VectorConfig& operator=(const VectorConfig &) = default ;
      VectorConfig& operator=(VectorConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->collectionId_ == nullptr && this->serviceHost_ == nullptr && this->threshold_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline VectorConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // collectionId Field Functions 
      bool hasCollectionId() const { return this->collectionId_ != nullptr;};
      void deleteCollectionId() { this->collectionId_ = nullptr;};
      inline string getCollectionId() const { DARABONBA_PTR_GET_DEFAULT(collectionId_, "") };
      inline VectorConfig& setCollectionId(string collectionId) { DARABONBA_PTR_SET_VALUE(collectionId_, collectionId) };


      // serviceHost Field Functions 
      bool hasServiceHost() const { return this->serviceHost_ != nullptr;};
      void deleteServiceHost() { this->serviceHost_ = nullptr;};
      inline string getServiceHost() const { DARABONBA_PTR_GET_DEFAULT(serviceHost_, "") };
      inline VectorConfig& setServiceHost(string serviceHost) { DARABONBA_PTR_SET_VALUE(serviceHost_, serviceHost) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline VectorConfig& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline VectorConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VectorConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The API key to authenticate with the vector database service.
      shared_ptr<string> apiKey_ {};
      // The unique ID of the collection or index within the vector database for search and storage.
      shared_ptr<string> collectionId_ {};
      // The endpoint URL of the vector database service.
      shared_ptr<string> serviceHost_ {};
      // The similarity threshold for a vector search to qualify as a cache hit. The value must be between 0.0 and 1.0. A higher value means a stricter similarity requirement.
      shared_ptr<float> threshold_ {};
      // The request timeout in milliseconds. A request to the vector service fails if it exceeds this duration. Default: `10000`.
      shared_ptr<int32_t> timeout_ {};
      // The type of vector database service. For example, specify `DashVector` for Alibaba Cloud\\"s vector search service.
      shared_ptr<string> type_ {};
    };

    class EmbeddingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EmbeddingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(timeout, timeout_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, EmbeddingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      EmbeddingConfig() = default ;
      EmbeddingConfig(const EmbeddingConfig &) = default ;
      EmbeddingConfig(EmbeddingConfig &&) = default ;
      EmbeddingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EmbeddingConfig() = default ;
      EmbeddingConfig& operator=(const EmbeddingConfig &) = default ;
      EmbeddingConfig& operator=(EmbeddingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelName_ == nullptr
        && this->serviceId_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr; };
      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline EmbeddingConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline EmbeddingConfig& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline EmbeddingConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline EmbeddingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The model name to use for generating embeddings, such as `text-embedding-v1`.
      shared_ptr<string> modelName_ {};
      // The service ID of the deployed embedding model.
      shared_ptr<string> serviceId_ {};
      // The request timeout in milliseconds. A request to the embedding service fails if it exceeds this duration. Default: `10000`.
      shared_ptr<int32_t> timeout_ {};
      // The type of embedding service. For example, specify `Tongyi` for Alibaba Cloud\\"s Tongyi Qwen model series.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->cacheKeyStrategy_ == nullptr
        && this->cacheMode_ == nullptr && this->cacheTTL_ == nullptr && this->embeddingConfig_ == nullptr && this->pluginStatus_ == nullptr && this->redisConfig_ == nullptr
        && this->vectorConfig_ == nullptr; };
    // cacheKeyStrategy Field Functions 
    bool hasCacheKeyStrategy() const { return this->cacheKeyStrategy_ != nullptr;};
    void deleteCacheKeyStrategy() { this->cacheKeyStrategy_ = nullptr;};
    inline string getCacheKeyStrategy() const { DARABONBA_PTR_GET_DEFAULT(cacheKeyStrategy_, "") };
    inline AiCacheConfig& setCacheKeyStrategy(string cacheKeyStrategy) { DARABONBA_PTR_SET_VALUE(cacheKeyStrategy_, cacheKeyStrategy) };


    // cacheMode Field Functions 
    bool hasCacheMode() const { return this->cacheMode_ != nullptr;};
    void deleteCacheMode() { this->cacheMode_ = nullptr;};
    inline string getCacheMode() const { DARABONBA_PTR_GET_DEFAULT(cacheMode_, "") };
    inline AiCacheConfig& setCacheMode(string cacheMode) { DARABONBA_PTR_SET_VALUE(cacheMode_, cacheMode) };


    // cacheTTL Field Functions 
    bool hasCacheTTL() const { return this->cacheTTL_ != nullptr;};
    void deleteCacheTTL() { this->cacheTTL_ = nullptr;};
    inline int32_t getCacheTTL() const { DARABONBA_PTR_GET_DEFAULT(cacheTTL_, 0) };
    inline AiCacheConfig& setCacheTTL(int32_t cacheTTL) { DARABONBA_PTR_SET_VALUE(cacheTTL_, cacheTTL) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const AiCacheConfig::EmbeddingConfig & getEmbeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, AiCacheConfig::EmbeddingConfig) };
    inline AiCacheConfig::EmbeddingConfig getEmbeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, AiCacheConfig::EmbeddingConfig) };
    inline AiCacheConfig& setEmbeddingConfig(const AiCacheConfig::EmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline AiCacheConfig& setEmbeddingConfig(AiCacheConfig::EmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // pluginStatus Field Functions 
    bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
    void deletePluginStatus() { this->pluginStatus_ = nullptr;};
    inline const AiPluginStatus & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, AiPluginStatus) };
    inline AiPluginStatus getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, AiPluginStatus) };
    inline AiCacheConfig& setPluginStatus(const AiPluginStatus & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
    inline AiCacheConfig& setPluginStatus(AiPluginStatus && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


    // redisConfig Field Functions 
    bool hasRedisConfig() const { return this->redisConfig_ != nullptr;};
    void deleteRedisConfig() { this->redisConfig_ = nullptr;};
    inline const AiPolicyRedisConfig & getRedisConfig() const { DARABONBA_PTR_GET_CONST(redisConfig_, AiPolicyRedisConfig) };
    inline AiPolicyRedisConfig getRedisConfig() { DARABONBA_PTR_GET(redisConfig_, AiPolicyRedisConfig) };
    inline AiCacheConfig& setRedisConfig(const AiPolicyRedisConfig & redisConfig) { DARABONBA_PTR_SET_VALUE(redisConfig_, redisConfig) };
    inline AiCacheConfig& setRedisConfig(AiPolicyRedisConfig && redisConfig) { DARABONBA_PTR_SET_RVALUE(redisConfig_, redisConfig) };


    // vectorConfig Field Functions 
    bool hasVectorConfig() const { return this->vectorConfig_ != nullptr;};
    void deleteVectorConfig() { this->vectorConfig_ = nullptr;};
    inline const AiCacheConfig::VectorConfig & getVectorConfig() const { DARABONBA_PTR_GET_CONST(vectorConfig_, AiCacheConfig::VectorConfig) };
    inline AiCacheConfig::VectorConfig getVectorConfig() { DARABONBA_PTR_GET(vectorConfig_, AiCacheConfig::VectorConfig) };
    inline AiCacheConfig& setVectorConfig(const AiCacheConfig::VectorConfig & vectorConfig) { DARABONBA_PTR_SET_VALUE(vectorConfig_, vectorConfig) };
    inline AiCacheConfig& setVectorConfig(AiCacheConfig::VectorConfig && vectorConfig) { DARABONBA_PTR_SET_RVALUE(vectorConfig_, vectorConfig) };


  protected:
    // The cache key strategy, which determines how the system generates a unique key for each cacheable request. Valid values: `DEFAULT` and `CUSTOM`.
    shared_ptr<string> cacheKeyStrategy_ {};
    // The cache mode, which defines the caching behavior. Valid values are `NORMAL` for standard key-value caching and `SEMANTIC` for vector-based similarity caching.
    shared_ptr<string> cacheMode_ {};
    // The cache Time-to-Live (TTL) in seconds. This specifies the duration that a cached response remains valid. After the TTL expires, the cache removes the response.
    shared_ptr<int32_t> cacheTTL_ {};
    // The embedding configuration. Specifies the service that converts text queries into vector embeddings for semantic search.
    shared_ptr<AiCacheConfig::EmbeddingConfig> embeddingConfig_ {};
    // The plugin status. Set to `enable` to activate the plugin or `disable` to deactivate it.
    shared_ptr<AiPluginStatus> pluginStatus_ {};
    // The Redis configuration, required if you use a Redis instance as the cache backend.
    shared_ptr<AiPolicyRedisConfig> redisConfig_ {};
    // The vector configuration for semantic caching. This enables the cache to retrieve results based on semantic similarity instead of exact matches.
    shared_ptr<AiCacheConfig::VectorConfig> vectorConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
