// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELLMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELLMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class UpdateLLMConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLLMConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_TO_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_TO_JSON(EnableFusion, enableFusion_);
      DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelType, modelType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rps, rps_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLLMConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(BatchSize, batchSize_);
      DARABONBA_PTR_FROM_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_FROM_JSON(EnableFusion, enableFusion_);
      DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rps, rps_);
    };
    UpdateLLMConfigRequest() = default ;
    UpdateLLMConfigRequest(const UpdateLLMConfigRequest &) = default ;
    UpdateLLMConfigRequest(UpdateLLMConfigRequest &&) = default ;
    UpdateLLMConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLLMConfigRequest() = default ;
    UpdateLLMConfigRequest& operator=(const UpdateLLMConfigRequest &) = default ;
    UpdateLLMConfigRequest& operator=(UpdateLLMConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->baseUrl_ == nullptr && this->batchSize_ == nullptr && this->embeddingDimension_ == nullptr && this->enableFusion_ == nullptr && this->maxTokens_ == nullptr
        && this->model_ == nullptr && this->modelType_ == nullptr && this->name_ == nullptr && this->rps_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline UpdateLLMConfigRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline UpdateLLMConfigRequest& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // batchSize Field Functions 
    bool hasBatchSize() const { return this->batchSize_ != nullptr;};
    void deleteBatchSize() { this->batchSize_ = nullptr;};
    inline int32_t getBatchSize() const { DARABONBA_PTR_GET_DEFAULT(batchSize_, 0) };
    inline UpdateLLMConfigRequest& setBatchSize(int32_t batchSize) { DARABONBA_PTR_SET_VALUE(batchSize_, batchSize) };


    // embeddingDimension Field Functions 
    bool hasEmbeddingDimension() const { return this->embeddingDimension_ != nullptr;};
    void deleteEmbeddingDimension() { this->embeddingDimension_ = nullptr;};
    inline int32_t getEmbeddingDimension() const { DARABONBA_PTR_GET_DEFAULT(embeddingDimension_, 0) };
    inline UpdateLLMConfigRequest& setEmbeddingDimension(int32_t embeddingDimension) { DARABONBA_PTR_SET_VALUE(embeddingDimension_, embeddingDimension) };


    // enableFusion Field Functions 
    bool hasEnableFusion() const { return this->enableFusion_ != nullptr;};
    void deleteEnableFusion() { this->enableFusion_ = nullptr;};
    inline bool getEnableFusion() const { DARABONBA_PTR_GET_DEFAULT(enableFusion_, false) };
    inline UpdateLLMConfigRequest& setEnableFusion(bool enableFusion) { DARABONBA_PTR_SET_VALUE(enableFusion_, enableFusion) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline UpdateLLMConfigRequest& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline UpdateLLMConfigRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline UpdateLLMConfigRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateLLMConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rps Field Functions 
    bool hasRps() const { return this->rps_ != nullptr;};
    void deleteRps() { this->rps_ = nullptr;};
    inline int32_t getRps() const { DARABONBA_PTR_GET_DEFAULT(rps_, 0) };
    inline UpdateLLMConfigRequest& setRps(int32_t rps) { DARABONBA_PTR_SET_VALUE(rps_, rps) };


  protected:
    // The API key used to call the large language model (LLM).
    // 
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    // The base URL for calling the large language model (LLM).
    // 
    // This parameter is required.
    shared_ptr<string> baseUrl_ {};
    // The batch size.
    shared_ptr<int32_t> batchSize_ {};
    // The embedding dimension. If you omit this parameter or set it to 0, the model uses its default dimension.
    shared_ptr<int32_t> embeddingDimension_ {};
    // Whether to enable data fusion.
    shared_ptr<bool> enableFusion_ {};
    // The maximum number of input tokens per row.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxTokens_ {};
    // The model name.
    // 
    // This parameter is required.
    shared_ptr<string> model_ {};
    // The model type.
    shared_ptr<string> modelType_ {};
    // The name of the large language model (LLM) call configuration.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The maximum number of requests per second (RPS).
    // 
    // This parameter is required.
    shared_ptr<int32_t> rps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
