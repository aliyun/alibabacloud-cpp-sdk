// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIMODELPROVIDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIMODELPROVIDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ServiceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListAiModelProvidersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiModelProvidersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAiModelProvidersResponseBody() = default ;
    ListAiModelProvidersResponseBody(const ListAiModelProvidersResponseBody &) = default ;
    ListAiModelProvidersResponseBody(ListAiModelProvidersResponseBody &&) = default ;
    ListAiModelProvidersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiModelProvidersResponseBody() = default ;
    ListAiModelProvidersResponseBody& operator=(const ListAiModelProvidersResponseBody &) = default ;
    ListAiModelProvidersResponseBody& operator=(ListAiModelProvidersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(boundServices, boundServices_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(modelCards, modelCards_);
          DARABONBA_PTR_TO_JSON(modelCount, modelCount_);
          DARABONBA_PTR_TO_JSON(modelProviderId, modelProviderId_);
          DARABONBA_PTR_TO_JSON(provider, provider_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(boundServices, boundServices_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(modelCards, modelCards_);
          DARABONBA_PTR_FROM_JSON(modelCount, modelCount_);
          DARABONBA_PTR_FROM_JSON(modelProviderId, modelProviderId_);
          DARABONBA_PTR_FROM_JSON(provider, provider_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModelCards : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModelCards& obj) { 
            DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
            DARABONBA_PTR_TO_JSON(credit, credit_);
            DARABONBA_ANY_TO_JSON(features, features_);
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(meta, meta_);
            DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
            DARABONBA_PTR_TO_JSON(modelName, modelName_);
            DARABONBA_PTR_TO_JSON(modelProvider, modelProvider_);
            DARABONBA_PTR_TO_JSON(source, source_);
            DARABONBA_PTR_TO_JSON(sourceURL, sourceURL_);
            DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
          };
          friend void from_json(const Darabonba::Json& j, ModelCards& obj) { 
            DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
            DARABONBA_PTR_FROM_JSON(credit, credit_);
            DARABONBA_ANY_FROM_JSON(features, features_);
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(meta, meta_);
            DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
            DARABONBA_PTR_FROM_JSON(modelName, modelName_);
            DARABONBA_PTR_FROM_JSON(modelProvider, modelProvider_);
            DARABONBA_PTR_FROM_JSON(source, source_);
            DARABONBA_PTR_FROM_JSON(sourceURL, sourceURL_);
            DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
          };
          ModelCards() = default ;
          ModelCards(const ModelCards &) = default ;
          ModelCards(ModelCards &&) = default ;
          ModelCards(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModelCards() = default ;
          ModelCards& operator=(const ModelCards &) = default ;
          ModelCards& operator=(ModelCards &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Meta : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Meta& obj) { 
              DARABONBA_PTR_TO_JSON(maxInputTokens, maxInputTokens_);
              DARABONBA_PTR_TO_JSON(maxOutputTokens, maxOutputTokens_);
              DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
              DARABONBA_PTR_TO_JSON(supportedInputModalities, supportedInputModalities_);
              DARABONBA_PTR_TO_JSON(supportedOutputModalities, supportedOutputModalities_);
            };
            friend void from_json(const Darabonba::Json& j, Meta& obj) { 
              DARABONBA_PTR_FROM_JSON(maxInputTokens, maxInputTokens_);
              DARABONBA_PTR_FROM_JSON(maxOutputTokens, maxOutputTokens_);
              DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
              DARABONBA_PTR_FROM_JSON(supportedInputModalities, supportedInputModalities_);
              DARABONBA_PTR_FROM_JSON(supportedOutputModalities, supportedOutputModalities_);
            };
            Meta() = default ;
            Meta(const Meta &) = default ;
            Meta(Meta &&) = default ;
            Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Meta() = default ;
            Meta& operator=(const Meta &) = default ;
            Meta& operator=(Meta &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->maxInputTokens_ == nullptr
        && this->maxOutputTokens_ == nullptr && this->maxTokens_ == nullptr && this->supportedInputModalities_ == nullptr && this->supportedOutputModalities_ == nullptr; };
            // maxInputTokens Field Functions 
            bool hasMaxInputTokens() const { return this->maxInputTokens_ != nullptr;};
            void deleteMaxInputTokens() { this->maxInputTokens_ = nullptr;};
            inline int64_t getMaxInputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxInputTokens_, 0L) };
            inline Meta& setMaxInputTokens(int64_t maxInputTokens) { DARABONBA_PTR_SET_VALUE(maxInputTokens_, maxInputTokens) };


            // maxOutputTokens Field Functions 
            bool hasMaxOutputTokens() const { return this->maxOutputTokens_ != nullptr;};
            void deleteMaxOutputTokens() { this->maxOutputTokens_ = nullptr;};
            inline int64_t getMaxOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxOutputTokens_, 0L) };
            inline Meta& setMaxOutputTokens(int64_t maxOutputTokens) { DARABONBA_PTR_SET_VALUE(maxOutputTokens_, maxOutputTokens) };


            // maxTokens Field Functions 
            bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
            void deleteMaxTokens() { this->maxTokens_ = nullptr;};
            inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
            inline Meta& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


            // supportedInputModalities Field Functions 
            bool hasSupportedInputModalities() const { return this->supportedInputModalities_ != nullptr;};
            void deleteSupportedInputModalities() { this->supportedInputModalities_ = nullptr;};
            inline const vector<string> & getSupportedInputModalities() const { DARABONBA_PTR_GET_CONST(supportedInputModalities_, vector<string>) };
            inline vector<string> getSupportedInputModalities() { DARABONBA_PTR_GET(supportedInputModalities_, vector<string>) };
            inline Meta& setSupportedInputModalities(const vector<string> & supportedInputModalities) { DARABONBA_PTR_SET_VALUE(supportedInputModalities_, supportedInputModalities) };
            inline Meta& setSupportedInputModalities(vector<string> && supportedInputModalities) { DARABONBA_PTR_SET_RVALUE(supportedInputModalities_, supportedInputModalities) };


            // supportedOutputModalities Field Functions 
            bool hasSupportedOutputModalities() const { return this->supportedOutputModalities_ != nullptr;};
            void deleteSupportedOutputModalities() { this->supportedOutputModalities_ = nullptr;};
            inline const vector<string> & getSupportedOutputModalities() const { DARABONBA_PTR_GET_CONST(supportedOutputModalities_, vector<string>) };
            inline vector<string> getSupportedOutputModalities() { DARABONBA_PTR_GET(supportedOutputModalities_, vector<string>) };
            inline Meta& setSupportedOutputModalities(const vector<string> & supportedOutputModalities) { DARABONBA_PTR_SET_VALUE(supportedOutputModalities_, supportedOutputModalities) };
            inline Meta& setSupportedOutputModalities(vector<string> && supportedOutputModalities) { DARABONBA_PTR_SET_RVALUE(supportedOutputModalities_, supportedOutputModalities) };


          protected:
            shared_ptr<int64_t> maxInputTokens_ {};
            shared_ptr<int64_t> maxOutputTokens_ {};
            shared_ptr<int64_t> maxTokens_ {};
            shared_ptr<vector<string>> supportedInputModalities_ {};
            shared_ptr<vector<string>> supportedOutputModalities_ {};
          };

          class Credit : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Credit& obj) { 
              DARABONBA_PTR_TO_JSON(cacheCost, cacheCost_);
              DARABONBA_PTR_TO_JSON(inputCost, inputCost_);
              DARABONBA_PTR_TO_JSON(outputCost, outputCost_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Credit& obj) { 
              DARABONBA_PTR_FROM_JSON(cacheCost, cacheCost_);
              DARABONBA_PTR_FROM_JSON(inputCost, inputCost_);
              DARABONBA_PTR_FROM_JSON(outputCost, outputCost_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            Credit() = default ;
            Credit(const Credit &) = default ;
            Credit(Credit &&) = default ;
            Credit(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Credit() = default ;
            Credit& operator=(const Credit &) = default ;
            Credit& operator=(Credit &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cacheCost_ == nullptr
        && this->inputCost_ == nullptr && this->outputCost_ == nullptr && this->type_ == nullptr; };
            // cacheCost Field Functions 
            bool hasCacheCost() const { return this->cacheCost_ != nullptr;};
            void deleteCacheCost() { this->cacheCost_ = nullptr;};
            inline float getCacheCost() const { DARABONBA_PTR_GET_DEFAULT(cacheCost_, 0.0) };
            inline Credit& setCacheCost(float cacheCost) { DARABONBA_PTR_SET_VALUE(cacheCost_, cacheCost) };


            // inputCost Field Functions 
            bool hasInputCost() const { return this->inputCost_ != nullptr;};
            void deleteInputCost() { this->inputCost_ = nullptr;};
            inline float getInputCost() const { DARABONBA_PTR_GET_DEFAULT(inputCost_, 0.0) };
            inline Credit& setInputCost(float inputCost) { DARABONBA_PTR_SET_VALUE(inputCost_, inputCost) };


            // outputCost Field Functions 
            bool hasOutputCost() const { return this->outputCost_ != nullptr;};
            void deleteOutputCost() { this->outputCost_ = nullptr;};
            inline float getOutputCost() const { DARABONBA_PTR_GET_DEFAULT(outputCost_, 0.0) };
            inline Credit& setOutputCost(float outputCost) { DARABONBA_PTR_SET_VALUE(outputCost_, outputCost) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Credit& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<float> cacheCost_ {};
            shared_ptr<float> inputCost_ {};
            shared_ptr<float> outputCost_ {};
            shared_ptr<string> type_ {};
          };

          class AvailablePaths : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AvailablePaths& obj) { 
              DARABONBA_PTR_TO_JSON(path, path_);
              DARABONBA_PTR_TO_JSON(type, type_);
            };
            friend void from_json(const Darabonba::Json& j, AvailablePaths& obj) { 
              DARABONBA_PTR_FROM_JSON(path, path_);
              DARABONBA_PTR_FROM_JSON(type, type_);
            };
            AvailablePaths() = default ;
            AvailablePaths(const AvailablePaths &) = default ;
            AvailablePaths(AvailablePaths &&) = default ;
            AvailablePaths(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AvailablePaths() = default ;
            AvailablePaths& operator=(const AvailablePaths &) = default ;
            AvailablePaths& operator=(AvailablePaths &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
            // path Field Functions 
            bool hasPath() const { return this->path_ != nullptr;};
            void deletePath() { this->path_ = nullptr;};
            inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
            inline AvailablePaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline AvailablePaths& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> path_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->credit_ == nullptr && this->features_ == nullptr && this->gatewayId_ == nullptr && this->meta_ == nullptr && this->modelCardId_ == nullptr
        && this->modelName_ == nullptr && this->modelProvider_ == nullptr && this->source_ == nullptr && this->sourceURL_ == nullptr && this->updateTime_ == nullptr; };
          // availablePaths Field Functions 
          bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
          void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
          inline const vector<ModelCards::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<ModelCards::AvailablePaths>) };
          inline vector<ModelCards::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<ModelCards::AvailablePaths>) };
          inline ModelCards& setAvailablePaths(const vector<ModelCards::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
          inline ModelCards& setAvailablePaths(vector<ModelCards::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


          // credit Field Functions 
          bool hasCredit() const { return this->credit_ != nullptr;};
          void deleteCredit() { this->credit_ = nullptr;};
          inline const ModelCards::Credit & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, ModelCards::Credit) };
          inline ModelCards::Credit getCredit() { DARABONBA_PTR_GET(credit_, ModelCards::Credit) };
          inline ModelCards& setCredit(const ModelCards::Credit & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
          inline ModelCards& setCredit(ModelCards::Credit && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


          // features Field Functions 
          bool hasFeatures() const { return this->features_ != nullptr;};
          void deleteFeatures() { this->features_ = nullptr;};
          inline           const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
          Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
          inline ModelCards& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
          inline ModelCards& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline ModelCards& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // meta Field Functions 
          bool hasMeta() const { return this->meta_ != nullptr;};
          void deleteMeta() { this->meta_ = nullptr;};
          inline const ModelCards::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, ModelCards::Meta) };
          inline ModelCards::Meta getMeta() { DARABONBA_PTR_GET(meta_, ModelCards::Meta) };
          inline ModelCards& setMeta(const ModelCards::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
          inline ModelCards& setMeta(ModelCards::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


          // modelCardId Field Functions 
          bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
          void deleteModelCardId() { this->modelCardId_ = nullptr;};
          inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
          inline ModelCards& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


          // modelName Field Functions 
          bool hasModelName() const { return this->modelName_ != nullptr;};
          void deleteModelName() { this->modelName_ = nullptr;};
          inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
          inline ModelCards& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


          // modelProvider Field Functions 
          bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
          void deleteModelProvider() { this->modelProvider_ = nullptr;};
          inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
          inline ModelCards& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline ModelCards& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // sourceURL Field Functions 
          bool hasSourceURL() const { return this->sourceURL_ != nullptr;};
          void deleteSourceURL() { this->sourceURL_ = nullptr;};
          inline string getSourceURL() const { DARABONBA_PTR_GET_DEFAULT(sourceURL_, "") };
          inline ModelCards& setSourceURL(string sourceURL) { DARABONBA_PTR_SET_VALUE(sourceURL_, sourceURL) };


          // updateTime Field Functions 
          bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
          void deleteUpdateTime() { this->updateTime_ = nullptr;};
          inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
          inline ModelCards& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        protected:
          shared_ptr<vector<ModelCards::AvailablePaths>> availablePaths_ {};
          shared_ptr<ModelCards::Credit> credit_ {};
          Darabonba::Json features_ {};
          shared_ptr<string> gatewayId_ {};
          shared_ptr<ModelCards::Meta> meta_ {};
          shared_ptr<string> modelCardId_ {};
          shared_ptr<string> modelName_ {};
          shared_ptr<string> modelProvider_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> sourceURL_ {};
          shared_ptr<string> updateTime_ {};
        };

        virtual bool empty() const override { return this->boundServices_ == nullptr
        && this->displayName_ == nullptr && this->gatewayId_ == nullptr && this->modelCards_ == nullptr && this->modelCount_ == nullptr && this->modelProviderId_ == nullptr
        && this->provider_ == nullptr && this->source_ == nullptr && this->updateTime_ == nullptr; };
        // boundServices Field Functions 
        bool hasBoundServices() const { return this->boundServices_ != nullptr;};
        void deleteBoundServices() { this->boundServices_ = nullptr;};
        inline const vector<ServiceInfo> & getBoundServices() const { DARABONBA_PTR_GET_CONST(boundServices_, vector<ServiceInfo>) };
        inline vector<ServiceInfo> getBoundServices() { DARABONBA_PTR_GET(boundServices_, vector<ServiceInfo>) };
        inline Items& setBoundServices(const vector<ServiceInfo> & boundServices) { DARABONBA_PTR_SET_VALUE(boundServices_, boundServices) };
        inline Items& setBoundServices(vector<ServiceInfo> && boundServices) { DARABONBA_PTR_SET_RVALUE(boundServices_, boundServices) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // modelCards Field Functions 
        bool hasModelCards() const { return this->modelCards_ != nullptr;};
        void deleteModelCards() { this->modelCards_ = nullptr;};
        inline const vector<Items::ModelCards> & getModelCards() const { DARABONBA_PTR_GET_CONST(modelCards_, vector<Items::ModelCards>) };
        inline vector<Items::ModelCards> getModelCards() { DARABONBA_PTR_GET(modelCards_, vector<Items::ModelCards>) };
        inline Items& setModelCards(const vector<Items::ModelCards> & modelCards) { DARABONBA_PTR_SET_VALUE(modelCards_, modelCards) };
        inline Items& setModelCards(vector<Items::ModelCards> && modelCards) { DARABONBA_PTR_SET_RVALUE(modelCards_, modelCards) };


        // modelCount Field Functions 
        bool hasModelCount() const { return this->modelCount_ != nullptr;};
        void deleteModelCount() { this->modelCount_ = nullptr;};
        inline int32_t getModelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0) };
        inline Items& setModelCount(int32_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


        // modelProviderId Field Functions 
        bool hasModelProviderId() const { return this->modelProviderId_ != nullptr;};
        void deleteModelProviderId() { this->modelProviderId_ = nullptr;};
        inline string getModelProviderId() const { DARABONBA_PTR_GET_DEFAULT(modelProviderId_, "") };
        inline Items& setModelProviderId(string modelProviderId) { DARABONBA_PTR_SET_VALUE(modelProviderId_, modelProviderId) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline Items& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Items& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Items& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<vector<ServiceInfo>> boundServices_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> gatewayId_ {};
        shared_ptr<vector<Items::ModelCards>> modelCards_ {};
        shared_ptr<int32_t> modelCount_ {};
        shared_ptr<string> modelProviderId_ {};
        shared_ptr<string> provider_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAiModelProvidersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAiModelProvidersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAiModelProvidersResponseBody::Data) };
    inline ListAiModelProvidersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAiModelProvidersResponseBody::Data) };
    inline ListAiModelProvidersResponseBody& setData(const ListAiModelProvidersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAiModelProvidersResponseBody& setData(ListAiModelProvidersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAiModelProvidersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAiModelProvidersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListAiModelProvidersResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
