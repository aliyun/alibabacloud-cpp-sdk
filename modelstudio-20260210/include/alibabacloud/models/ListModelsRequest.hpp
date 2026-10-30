// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(contextWindow, contextWindow_);
      DARABONBA_PTR_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(providers, providers_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(contextWindow, contextWindow_);
      DARABONBA_PTR_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(providers, providers_);
    };
    ListModelsRequest() = default ;
    ListModelsRequest(const ListModelsRequest &) = default ;
    ListModelsRequest(ListModelsRequest &&) = default ;
    ListModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsRequest() = default ;
    ListModelsRequest& operator=(const ListModelsRequest &) = default ;
    ListModelsRequest& operator=(ListModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->contextWindow_ == nullptr && this->features_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->nextToken_ == nullptr && this->providers_ == nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline ListModelsRequest& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline ListModelsRequest& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // contextWindow Field Functions 
    bool hasContextWindow() const { return this->contextWindow_ != nullptr;};
    void deleteContextWindow() { this->contextWindow_ = nullptr;};
    inline int64_t getContextWindow() const { DARABONBA_PTR_GET_DEFAULT(contextWindow_, 0L) };
    inline ListModelsRequest& setContextWindow(int64_t contextWindow) { DARABONBA_PTR_SET_VALUE(contextWindow_, contextWindow) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
    inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
    inline ListModelsRequest& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListModelsRequest& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListModelsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListModelsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListModelsRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListModelsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // providers Field Functions 
    bool hasProviders() const { return this->providers_ != nullptr;};
    void deleteProviders() { this->providers_ = nullptr;};
    inline const vector<string> & getProviders() const { DARABONBA_PTR_GET_CONST(providers_, vector<string>) };
    inline vector<string> getProviders() { DARABONBA_PTR_GET(providers_, vector<string>) };
    inline ListModelsRequest& setProviders(const vector<string> & providers) { DARABONBA_PTR_SET_VALUE(providers_, providers) };
    inline ListModelsRequest& setProviders(vector<string> && providers) { DARABONBA_PTR_SET_RVALUE(providers_, providers) };


  protected:
    // The model type. Valid values:
    // - Reasoning: Deep thinking.
    // - VU: Visual understanding.
    // - IG: Image generation.
    // - VG: Video generation.
    // - ASR: Speech recognition.
    // - TTS: Speech synthesis.
    // - ME: Multimodal embedding.
    // - Realtime-Omni: Real-time omni-modal.
    // - Multimodal-Omni: Omni-modal.
    // - Realtime-Text-to-Speech: Real-time speech synthesis.
    // - TG: Text generation.
    // - TR: Text embedding.
    // - Realtime-ASR: Real-time speech recognition.
    // - Realtime-Audio-Translate: Real-time audio translation.
    // - 3D-generation: 3D generation.
    // - Realtime-Chatting: Real-time voice conversation.
    shared_ptr<vector<string>> capabilities_ {};
    // The context window size used to filter models with a context window smaller than this value.
    shared_ptr<int64_t> contextWindow_ {};
    // The model capability. Valid values:
    // - model-experience: Playground.
    // - function-calling: Function calling.
    // - structured-outputs: Structured output.
    // - web-search: Web search.
    // - prefix-completion: Partial mode.
    // - cache: Cache.
    // - batch: Batch inference.
    // - fine-tuning: Model fine-tuning.
    shared_ptr<vector<string>> features_ {};
    // The language. Valid values:
    // - zh-CN: Chinese.
    // - en-US: English.
    shared_ptr<string> language_ {};
    // The maximum number of results to return. Valid values: 0 to 200.
    shared_ptr<int64_t> maxResults_ {};
    // The model name for exact match.
    shared_ptr<string> model_ {};
    // The model name for fuzzy match.
    shared_ptr<string> name_ {};
    // The next token.
    shared_ptr<string> nextToken_ {};
    // The provider. Valid values:
    // - qwen: Alibaba Cloud - Qwen.
    // - zhipu-ai: Zhipu AI.
    // - wan: Alibaba Cloud - Wan.
    // - qwen-domain-model: Alibaba Cloud - Domain Model.
    // - mini-max: MiniMax.
    // - moonshot-ai: Moonshot AI.
    // - deepseek: DeepSeek.
    // - happyhorse: Alibaba Cloud - HappyHorse.
    // - kling: Kling AI.
    // - pixverse: PixVerse.
    // - vidu: Vidu.
    // - tripo: Tripo.
    // - xiaomi: Xiaomi MiMo.
    shared_ptr<vector<string>> providers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
