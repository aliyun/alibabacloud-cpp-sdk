// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELSRESPONSEBODY_HPP_
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
  class ListModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListModelsResponseBody() = default ;
    ListModelsResponseBody(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody(ListModelsResponseBody &&) = default ;
    ListModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelsResponseBody() = default ;
    ListModelsResponseBody& operator=(const ListModelsResponseBody &) = default ;
    ListModelsResponseBody& operator=(ListModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(features, features_);
        DARABONBA_PTR_TO_JSON(inferenceMetadata, inferenceMetadata_);
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(modelInfo, modelInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(prices, prices_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
        DARABONBA_PTR_TO_JSON(publishedTime, publishedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(features, features_);
        DARABONBA_PTR_FROM_JSON(inferenceMetadata, inferenceMetadata_);
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(modelInfo, modelInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(prices, prices_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
        DARABONBA_PTR_FROM_JSON(publishedTime, publishedTime_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Prices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Prices& obj) { 
          DARABONBA_PTR_TO_JSON(prices, prices_);
          DARABONBA_PTR_TO_JSON(rangeName, rangeName_);
        };
        friend void from_json(const Darabonba::Json& j, Prices& obj) { 
          DARABONBA_PTR_FROM_JSON(prices, prices_);
          DARABONBA_PTR_FROM_JSON(rangeName, rangeName_);
        };
        Prices() = default ;
        Prices(const Prices &) = default ;
        Prices(Prices &&) = default ;
        Prices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Prices() = default ;
        Prices& operator=(const Prices &) = default ;
        Prices& operator=(Prices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PricesItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PricesItem& obj) { 
            DARABONBA_PTR_TO_JSON(price, price_);
            DARABONBA_PTR_TO_JSON(priceName, priceName_);
            DARABONBA_PTR_TO_JSON(priceUnit, priceUnit_);
          };
          friend void from_json(const Darabonba::Json& j, PricesItem& obj) { 
            DARABONBA_PTR_FROM_JSON(price, price_);
            DARABONBA_PTR_FROM_JSON(priceName, priceName_);
            DARABONBA_PTR_FROM_JSON(priceUnit, priceUnit_);
          };
          PricesItem() = default ;
          PricesItem(const PricesItem &) = default ;
          PricesItem(PricesItem &&) = default ;
          PricesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PricesItem() = default ;
          PricesItem& operator=(const PricesItem &) = default ;
          PricesItem& operator=(PricesItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->price_ == nullptr
        && this->priceName_ == nullptr && this->priceUnit_ == nullptr; };
          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
          inline PricesItem& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // priceName Field Functions 
          bool hasPriceName() const { return this->priceName_ != nullptr;};
          void deletePriceName() { this->priceName_ = nullptr;};
          inline string getPriceName() const { DARABONBA_PTR_GET_DEFAULT(priceName_, "") };
          inline PricesItem& setPriceName(string priceName) { DARABONBA_PTR_SET_VALUE(priceName_, priceName) };


          // priceUnit Field Functions 
          bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
          void deletePriceUnit() { this->priceUnit_ = nullptr;};
          inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
          inline PricesItem& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


        protected:
          shared_ptr<string> price_ {};
          shared_ptr<string> priceName_ {};
          shared_ptr<string> priceUnit_ {};
        };

        virtual bool empty() const override { return this->prices_ == nullptr
        && this->rangeName_ == nullptr; };
        // prices Field Functions 
        bool hasPrices() const { return this->prices_ != nullptr;};
        void deletePrices() { this->prices_ = nullptr;};
        inline const vector<Prices::PricesItem> & getPrices() const { DARABONBA_PTR_GET_CONST(prices_, vector<Prices::PricesItem>) };
        inline vector<Prices::PricesItem> getPrices() { DARABONBA_PTR_GET(prices_, vector<Prices::PricesItem>) };
        inline Prices& setPrices(const vector<Prices::PricesItem> & prices) { DARABONBA_PTR_SET_VALUE(prices_, prices) };
        inline Prices& setPrices(vector<Prices::PricesItem> && prices) { DARABONBA_PTR_SET_RVALUE(prices_, prices) };


        // rangeName Field Functions 
        bool hasRangeName() const { return this->rangeName_ != nullptr;};
        void deleteRangeName() { this->rangeName_ = nullptr;};
        inline string getRangeName() const { DARABONBA_PTR_GET_DEFAULT(rangeName_, "") };
        inline Prices& setRangeName(string rangeName) { DARABONBA_PTR_SET_VALUE(rangeName_, rangeName) };


      protected:
        shared_ptr<vector<Prices::PricesItem>> prices_ {};
        shared_ptr<string> rangeName_ {};
      };

      class ModelInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelInfo& obj) { 
          DARABONBA_PTR_TO_JSON(contextWindow, contextWindow_);
          DARABONBA_PTR_TO_JSON(maxInputTokens, maxInputTokens_);
          DARABONBA_PTR_TO_JSON(maxOutputTokens, maxOutputTokens_);
          DARABONBA_PTR_TO_JSON(maxReasoningTokens, maxReasoningTokens_);
          DARABONBA_PTR_TO_JSON(reasoningMaxInputTokens, reasoningMaxInputTokens_);
          DARABONBA_PTR_TO_JSON(reasoningMaxOutputTokens, reasoningMaxOutputTokens_);
        };
        friend void from_json(const Darabonba::Json& j, ModelInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(contextWindow, contextWindow_);
          DARABONBA_PTR_FROM_JSON(maxInputTokens, maxInputTokens_);
          DARABONBA_PTR_FROM_JSON(maxOutputTokens, maxOutputTokens_);
          DARABONBA_PTR_FROM_JSON(maxReasoningTokens, maxReasoningTokens_);
          DARABONBA_PTR_FROM_JSON(reasoningMaxInputTokens, reasoningMaxInputTokens_);
          DARABONBA_PTR_FROM_JSON(reasoningMaxOutputTokens, reasoningMaxOutputTokens_);
        };
        ModelInfo() = default ;
        ModelInfo(const ModelInfo &) = default ;
        ModelInfo(ModelInfo &&) = default ;
        ModelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelInfo() = default ;
        ModelInfo& operator=(const ModelInfo &) = default ;
        ModelInfo& operator=(ModelInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contextWindow_ == nullptr
        && this->maxInputTokens_ == nullptr && this->maxOutputTokens_ == nullptr && this->maxReasoningTokens_ == nullptr && this->reasoningMaxInputTokens_ == nullptr && this->reasoningMaxOutputTokens_ == nullptr; };
        // contextWindow Field Functions 
        bool hasContextWindow() const { return this->contextWindow_ != nullptr;};
        void deleteContextWindow() { this->contextWindow_ = nullptr;};
        inline int64_t getContextWindow() const { DARABONBA_PTR_GET_DEFAULT(contextWindow_, 0L) };
        inline ModelInfo& setContextWindow(int64_t contextWindow) { DARABONBA_PTR_SET_VALUE(contextWindow_, contextWindow) };


        // maxInputTokens Field Functions 
        bool hasMaxInputTokens() const { return this->maxInputTokens_ != nullptr;};
        void deleteMaxInputTokens() { this->maxInputTokens_ = nullptr;};
        inline int64_t getMaxInputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxInputTokens_, 0L) };
        inline ModelInfo& setMaxInputTokens(int64_t maxInputTokens) { DARABONBA_PTR_SET_VALUE(maxInputTokens_, maxInputTokens) };


        // maxOutputTokens Field Functions 
        bool hasMaxOutputTokens() const { return this->maxOutputTokens_ != nullptr;};
        void deleteMaxOutputTokens() { this->maxOutputTokens_ = nullptr;};
        inline int64_t getMaxOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxOutputTokens_, 0L) };
        inline ModelInfo& setMaxOutputTokens(int64_t maxOutputTokens) { DARABONBA_PTR_SET_VALUE(maxOutputTokens_, maxOutputTokens) };


        // maxReasoningTokens Field Functions 
        bool hasMaxReasoningTokens() const { return this->maxReasoningTokens_ != nullptr;};
        void deleteMaxReasoningTokens() { this->maxReasoningTokens_ = nullptr;};
        inline int64_t getMaxReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(maxReasoningTokens_, 0L) };
        inline ModelInfo& setMaxReasoningTokens(int64_t maxReasoningTokens) { DARABONBA_PTR_SET_VALUE(maxReasoningTokens_, maxReasoningTokens) };


        // reasoningMaxInputTokens Field Functions 
        bool hasReasoningMaxInputTokens() const { return this->reasoningMaxInputTokens_ != nullptr;};
        void deleteReasoningMaxInputTokens() { this->reasoningMaxInputTokens_ = nullptr;};
        inline int64_t getReasoningMaxInputTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningMaxInputTokens_, 0L) };
        inline ModelInfo& setReasoningMaxInputTokens(int64_t reasoningMaxInputTokens) { DARABONBA_PTR_SET_VALUE(reasoningMaxInputTokens_, reasoningMaxInputTokens) };


        // reasoningMaxOutputTokens Field Functions 
        bool hasReasoningMaxOutputTokens() const { return this->reasoningMaxOutputTokens_ != nullptr;};
        void deleteReasoningMaxOutputTokens() { this->reasoningMaxOutputTokens_ = nullptr;};
        inline int64_t getReasoningMaxOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningMaxOutputTokens_, 0L) };
        inline ModelInfo& setReasoningMaxOutputTokens(int64_t reasoningMaxOutputTokens) { DARABONBA_PTR_SET_VALUE(reasoningMaxOutputTokens_, reasoningMaxOutputTokens) };


      protected:
        shared_ptr<int64_t> contextWindow_ {};
        shared_ptr<int64_t> maxInputTokens_ {};
        shared_ptr<int64_t> maxOutputTokens_ {};
        shared_ptr<int64_t> maxReasoningTokens_ {};
        shared_ptr<int64_t> reasoningMaxInputTokens_ {};
        shared_ptr<int64_t> reasoningMaxOutputTokens_ {};
      };

      class InferenceMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InferenceMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(requestModality, requestModality_);
          DARABONBA_PTR_TO_JSON(responseModality, responseModality_);
        };
        friend void from_json(const Darabonba::Json& j, InferenceMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(requestModality, requestModality_);
          DARABONBA_PTR_FROM_JSON(responseModality, responseModality_);
        };
        InferenceMetadata() = default ;
        InferenceMetadata(const InferenceMetadata &) = default ;
        InferenceMetadata(InferenceMetadata &&) = default ;
        InferenceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InferenceMetadata() = default ;
        InferenceMetadata& operator=(const InferenceMetadata &) = default ;
        InferenceMetadata& operator=(InferenceMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requestModality_ == nullptr
        && this->responseModality_ == nullptr; };
        // requestModality Field Functions 
        bool hasRequestModality() const { return this->requestModality_ != nullptr;};
        void deleteRequestModality() { this->requestModality_ = nullptr;};
        inline const vector<string> & getRequestModality() const { DARABONBA_PTR_GET_CONST(requestModality_, vector<string>) };
        inline vector<string> getRequestModality() { DARABONBA_PTR_GET(requestModality_, vector<string>) };
        inline InferenceMetadata& setRequestModality(const vector<string> & requestModality) { DARABONBA_PTR_SET_VALUE(requestModality_, requestModality) };
        inline InferenceMetadata& setRequestModality(vector<string> && requestModality) { DARABONBA_PTR_SET_RVALUE(requestModality_, requestModality) };


        // responseModality Field Functions 
        bool hasResponseModality() const { return this->responseModality_ != nullptr;};
        void deleteResponseModality() { this->responseModality_ = nullptr;};
        inline const vector<string> & getResponseModality() const { DARABONBA_PTR_GET_CONST(responseModality_, vector<string>) };
        inline vector<string> getResponseModality() { DARABONBA_PTR_GET(responseModality_, vector<string>) };
        inline InferenceMetadata& setResponseModality(const vector<string> & responseModality) { DARABONBA_PTR_SET_VALUE(responseModality_, responseModality) };
        inline InferenceMetadata& setResponseModality(vector<string> && responseModality) { DARABONBA_PTR_SET_RVALUE(responseModality_, responseModality) };


      protected:
        shared_ptr<vector<string>> requestModality_ {};
        shared_ptr<vector<string>> responseModality_ {};
      };

      virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->description_ == nullptr && this->features_ == nullptr && this->inferenceMetadata_ == nullptr && this->model_ == nullptr && this->modelInfo_ == nullptr
        && this->name_ == nullptr && this->prices_ == nullptr && this->provider_ == nullptr && this->publishedTime_ == nullptr; };
      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
      inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
      inline Models& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Models& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Models& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline const vector<string> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<string>) };
      inline vector<string> getFeatures() { DARABONBA_PTR_GET(features_, vector<string>) };
      inline Models& setFeatures(const vector<string> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
      inline Models& setFeatures(vector<string> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


      // inferenceMetadata Field Functions 
      bool hasInferenceMetadata() const { return this->inferenceMetadata_ != nullptr;};
      void deleteInferenceMetadata() { this->inferenceMetadata_ = nullptr;};
      inline const Models::InferenceMetadata & getInferenceMetadata() const { DARABONBA_PTR_GET_CONST(inferenceMetadata_, Models::InferenceMetadata) };
      inline Models::InferenceMetadata getInferenceMetadata() { DARABONBA_PTR_GET(inferenceMetadata_, Models::InferenceMetadata) };
      inline Models& setInferenceMetadata(const Models::InferenceMetadata & inferenceMetadata) { DARABONBA_PTR_SET_VALUE(inferenceMetadata_, inferenceMetadata) };
      inline Models& setInferenceMetadata(Models::InferenceMetadata && inferenceMetadata) { DARABONBA_PTR_SET_RVALUE(inferenceMetadata_, inferenceMetadata) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Models& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelInfo Field Functions 
      bool hasModelInfo() const { return this->modelInfo_ != nullptr;};
      void deleteModelInfo() { this->modelInfo_ = nullptr;};
      inline const Models::ModelInfo & getModelInfo() const { DARABONBA_PTR_GET_CONST(modelInfo_, Models::ModelInfo) };
      inline Models::ModelInfo getModelInfo() { DARABONBA_PTR_GET(modelInfo_, Models::ModelInfo) };
      inline Models& setModelInfo(const Models::ModelInfo & modelInfo) { DARABONBA_PTR_SET_VALUE(modelInfo_, modelInfo) };
      inline Models& setModelInfo(Models::ModelInfo && modelInfo) { DARABONBA_PTR_SET_RVALUE(modelInfo_, modelInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Models& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // prices Field Functions 
      bool hasPrices() const { return this->prices_ != nullptr;};
      void deletePrices() { this->prices_ = nullptr;};
      inline const vector<Models::Prices> & getPrices() const { DARABONBA_PTR_GET_CONST(prices_, vector<Models::Prices>) };
      inline vector<Models::Prices> getPrices() { DARABONBA_PTR_GET(prices_, vector<Models::Prices>) };
      inline Models& setPrices(const vector<Models::Prices> & prices) { DARABONBA_PTR_SET_VALUE(prices_, prices) };
      inline Models& setPrices(vector<Models::Prices> && prices) { DARABONBA_PTR_SET_RVALUE(prices_, prices) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline Models& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // publishedTime Field Functions 
      bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
      void deletePublishedTime() { this->publishedTime_ = nullptr;};
      inline int64_t getPublishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, 0L) };
      inline Models& setPublishedTime(int64_t publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


    protected:
      shared_ptr<vector<string>> capabilities_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<string>> features_ {};
      shared_ptr<Models::InferenceMetadata> inferenceMetadata_ {};
      shared_ptr<string> model_ {};
      shared_ptr<Models::ModelInfo> modelInfo_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Models::Prices>> prices_ {};
      shared_ptr<string> provider_ {};
      shared_ptr<int64_t> publishedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->models_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListModelsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListModelsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline ListModelsResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListModelsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<ListModelsResponseBody::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<ListModelsResponseBody::Models>) };
    inline vector<ListModelsResponseBody::Models> getModels() { DARABONBA_PTR_GET(models_, vector<ListModelsResponseBody::Models>) };
    inline ListModelsResponseBody& setModels(const vector<ListModelsResponseBody::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListModelsResponseBody& setModels(vector<ListModelsResponseBody::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListModelsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<vector<ListModelsResponseBody::Models>> models_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
