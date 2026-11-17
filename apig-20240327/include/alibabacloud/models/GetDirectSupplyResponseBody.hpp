// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTSUPPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTSUPPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetDirectSupplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectSupplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectSupplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDirectSupplyResponseBody() = default ;
    GetDirectSupplyResponseBody(const GetDirectSupplyResponseBody &) = default ;
    GetDirectSupplyResponseBody(GetDirectSupplyResponseBody &&) = default ;
    GetDirectSupplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectSupplyResponseBody() = default ;
    GetDirectSupplyResponseBody& operator=(const GetDirectSupplyResponseBody &) = default ;
    GetDirectSupplyResponseBody& operator=(GetDirectSupplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(candidateModels, candidateModels_);
        DARABONBA_PTR_TO_JSON(catalogError, catalogError_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(models, models_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(candidateModels, candidateModels_);
        DARABONBA_PTR_FROM_JSON(catalogError, catalogError_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(models, models_);
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
      class Models : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Models& obj) { 
          DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
          DARABONBA_PTR_TO_JSON(credit, credit_);
          DARABONBA_ANY_TO_JSON(features, features_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(meta, meta_);
          DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_TO_JSON(modelName, modelName_);
          DARABONBA_PTR_TO_JSON(modelProvider, modelProvider_);
          DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Models& obj) { 
          DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
          DARABONBA_PTR_FROM_JSON(credit, credit_);
          DARABONBA_ANY_FROM_JSON(features, features_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(meta, meta_);
          DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_FROM_JSON(modelName, modelName_);
          DARABONBA_PTR_FROM_JSON(modelProvider, modelProvider_);
          DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
          // The maximum number of input tokens.
          shared_ptr<int64_t> maxInputTokens_ {};
          // The maximum number of output tokens.
          shared_ptr<int64_t> maxOutputTokens_ {};
          // The maximum total number of tokens.
          shared_ptr<int64_t> maxTokens_ {};
          // The list of supported input modalities.
          shared_ptr<vector<string>> supportedInputModalities_ {};
          // The list of supported output modalities.
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
          // The unit price of cache-hit tokens.
          shared_ptr<float> cacheCost_ {};
          // The unit price of input tokens.
          shared_ptr<float> inputCost_ {};
          // The unit price of output tokens.
          shared_ptr<float> outputCost_ {};
          // The billing type.
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
          // The invocation path.
          shared_ptr<string> path_ {};
          // The path type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->credit_ == nullptr && this->features_ == nullptr && this->gatewayId_ == nullptr && this->meta_ == nullptr && this->modelCardId_ == nullptr
        && this->modelName_ == nullptr && this->modelProvider_ == nullptr && this->modelSourceId_ == nullptr && this->source_ == nullptr && this->updateTime_ == nullptr; };
        // availablePaths Field Functions 
        bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
        void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
        inline const vector<Models::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<Models::AvailablePaths>) };
        inline vector<Models::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<Models::AvailablePaths>) };
        inline Models& setAvailablePaths(const vector<Models::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
        inline Models& setAvailablePaths(vector<Models::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


        // credit Field Functions 
        bool hasCredit() const { return this->credit_ != nullptr;};
        void deleteCredit() { this->credit_ = nullptr;};
        inline const Models::Credit & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, Models::Credit) };
        inline Models::Credit getCredit() { DARABONBA_PTR_GET(credit_, Models::Credit) };
        inline Models& setCredit(const Models::Credit & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
        inline Models& setCredit(Models::Credit && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline         const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
        Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
        inline Models& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
        inline Models& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Models& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline const Models::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Models::Meta) };
        inline Models::Meta getMeta() { DARABONBA_PTR_GET(meta_, Models::Meta) };
        inline Models& setMeta(const Models::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
        inline Models& setMeta(Models::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


        // modelCardId Field Functions 
        bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
        void deleteModelCardId() { this->modelCardId_ = nullptr;};
        inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
        inline Models& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline Models& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelProvider Field Functions 
        bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
        void deleteModelProvider() { this->modelProvider_ = nullptr;};
        inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
        inline Models& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


        // modelSourceId Field Functions 
        bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
        void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
        inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
        inline Models& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Models& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Models& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The list of available invocation paths.
        shared_ptr<vector<Models::AvailablePaths>> availablePaths_ {};
        // The billing information of the model.
        shared_ptr<Models::Credit> credit_ {};
        // The capabilities and features supported by the model.
        Darabonba::Json features_ {};
        // The ID of the gateway instance.
        shared_ptr<string> gatewayId_ {};
        // The capability information of the model.
        shared_ptr<Models::Meta> meta_ {};
        // The ID of the model card, which starts with msc-.
        shared_ptr<string> modelCardId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
        // The model provider.
        shared_ptr<string> modelProvider_ {};
        // The ID of the model source.
        shared_ptr<string> modelSourceId_ {};
        // The source of the model.
        shared_ptr<string> source_ {};
        // The last update time in ISO 8601 (RFC 3339) format in the UTC time zone, such as 2026-05-15T10:00:00Z.
        shared_ptr<string> updateTime_ {};
      };

      class CatalogError : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CatalogError& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(requestId, requestId_);
        };
        friend void from_json(const Darabonba::Json& j, CatalogError& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        };
        CatalogError() = default ;
        CatalogError(const CatalogError &) = default ;
        CatalogError(CatalogError &&) = default ;
        CatalogError(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CatalogError() = default ;
        CatalogError& operator=(const CatalogError &) = default ;
        CatalogError& operator=(CatalogError &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CatalogError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline CatalogError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline CatalogError& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      protected:
        // The error code.
        shared_ptr<string> code_ {};
        // The error message.
        shared_ptr<string> message_ {};
        // The request ID.
        shared_ptr<string> requestId_ {};
      };

      class CandidateModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CandidateModels& obj) { 
          DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
          DARABONBA_PTR_TO_JSON(credit, credit_);
          DARABONBA_ANY_TO_JSON(features, features_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(meta, meta_);
          DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_TO_JSON(modelName, modelName_);
          DARABONBA_PTR_TO_JSON(modelProvider, modelProvider_);
          DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
          DARABONBA_PTR_TO_JSON(source, source_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, CandidateModels& obj) { 
          DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
          DARABONBA_PTR_FROM_JSON(credit, credit_);
          DARABONBA_ANY_FROM_JSON(features, features_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(meta, meta_);
          DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_FROM_JSON(modelName, modelName_);
          DARABONBA_PTR_FROM_JSON(modelProvider, modelProvider_);
          DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
          DARABONBA_PTR_FROM_JSON(source, source_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        };
        CandidateModels() = default ;
        CandidateModels(const CandidateModels &) = default ;
        CandidateModels(CandidateModels &&) = default ;
        CandidateModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CandidateModels() = default ;
        CandidateModels& operator=(const CandidateModels &) = default ;
        CandidateModels& operator=(CandidateModels &&) = default ;
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
          // The maximum number of input tokens.
          shared_ptr<int64_t> maxInputTokens_ {};
          // The maximum number of output tokens.
          shared_ptr<int64_t> maxOutputTokens_ {};
          // The maximum total number of tokens.
          shared_ptr<int64_t> maxTokens_ {};
          // The list of supported input modalities.
          shared_ptr<vector<string>> supportedInputModalities_ {};
          // The list of supported output modalities.
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
          // The unit price of cache-hit tokens.
          shared_ptr<float> cacheCost_ {};
          // The unit price of input tokens.
          shared_ptr<float> inputCost_ {};
          // The unit price of output tokens.
          shared_ptr<float> outputCost_ {};
          // The billing type.
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
          // The invocation path.
          shared_ptr<string> path_ {};
          // The path type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->credit_ == nullptr && this->features_ == nullptr && this->gatewayId_ == nullptr && this->meta_ == nullptr && this->modelCardId_ == nullptr
        && this->modelName_ == nullptr && this->modelProvider_ == nullptr && this->modelSourceId_ == nullptr && this->source_ == nullptr && this->updateTime_ == nullptr; };
        // availablePaths Field Functions 
        bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
        void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
        inline const vector<CandidateModels::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<CandidateModels::AvailablePaths>) };
        inline vector<CandidateModels::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<CandidateModels::AvailablePaths>) };
        inline CandidateModels& setAvailablePaths(const vector<CandidateModels::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
        inline CandidateModels& setAvailablePaths(vector<CandidateModels::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


        // credit Field Functions 
        bool hasCredit() const { return this->credit_ != nullptr;};
        void deleteCredit() { this->credit_ = nullptr;};
        inline const CandidateModels::Credit & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, CandidateModels::Credit) };
        inline CandidateModels::Credit getCredit() { DARABONBA_PTR_GET(credit_, CandidateModels::Credit) };
        inline CandidateModels& setCredit(const CandidateModels::Credit & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
        inline CandidateModels& setCredit(CandidateModels::Credit && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline         const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
        Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
        inline CandidateModels& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
        inline CandidateModels& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline CandidateModels& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline const CandidateModels::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, CandidateModels::Meta) };
        inline CandidateModels::Meta getMeta() { DARABONBA_PTR_GET(meta_, CandidateModels::Meta) };
        inline CandidateModels& setMeta(const CandidateModels::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
        inline CandidateModels& setMeta(CandidateModels::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


        // modelCardId Field Functions 
        bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
        void deleteModelCardId() { this->modelCardId_ = nullptr;};
        inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
        inline CandidateModels& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline CandidateModels& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelProvider Field Functions 
        bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
        void deleteModelProvider() { this->modelProvider_ = nullptr;};
        inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
        inline CandidateModels& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


        // modelSourceId Field Functions 
        bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
        void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
        inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
        inline CandidateModels& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline CandidateModels& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline CandidateModels& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The list of available invocation paths.
        shared_ptr<vector<CandidateModels::AvailablePaths>> availablePaths_ {};
        // The billing information of the model.
        shared_ptr<CandidateModels::Credit> credit_ {};
        // The capabilities and features supported by the model.
        Darabonba::Json features_ {};
        // The ID of the gateway instance.
        shared_ptr<string> gatewayId_ {};
        // The capability information of the model.
        shared_ptr<CandidateModels::Meta> meta_ {};
        // The ID of the model card, which starts with msc-.
        shared_ptr<string> modelCardId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
        // The model provider.
        shared_ptr<string> modelProvider_ {};
        // The ID of the model source.
        shared_ptr<string> modelSourceId_ {};
        // The source of the model.
        shared_ptr<string> source_ {};
        // The last update time in ISO 8601 (RFC 3339) format in the UTC time zone, such as 2026-05-15T10:00:00Z.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->candidateModels_ == nullptr
        && this->catalogError_ == nullptr && this->enabled_ == nullptr && this->gatewayId_ == nullptr && this->models_ == nullptr; };
      // candidateModels Field Functions 
      bool hasCandidateModels() const { return this->candidateModels_ != nullptr;};
      void deleteCandidateModels() { this->candidateModels_ = nullptr;};
      inline const vector<Data::CandidateModels> & getCandidateModels() const { DARABONBA_PTR_GET_CONST(candidateModels_, vector<Data::CandidateModels>) };
      inline vector<Data::CandidateModels> getCandidateModels() { DARABONBA_PTR_GET(candidateModels_, vector<Data::CandidateModels>) };
      inline Data& setCandidateModels(const vector<Data::CandidateModels> & candidateModels) { DARABONBA_PTR_SET_VALUE(candidateModels_, candidateModels) };
      inline Data& setCandidateModels(vector<Data::CandidateModels> && candidateModels) { DARABONBA_PTR_SET_RVALUE(candidateModels_, candidateModels) };


      // catalogError Field Functions 
      bool hasCatalogError() const { return this->catalogError_ != nullptr;};
      void deleteCatalogError() { this->catalogError_ = nullptr;};
      inline const Data::CatalogError & getCatalogError() const { DARABONBA_PTR_GET_CONST(catalogError_, Data::CatalogError) };
      inline Data::CatalogError getCatalogError() { DARABONBA_PTR_GET(catalogError_, Data::CatalogError) };
      inline Data& setCatalogError(const Data::CatalogError & catalogError) { DARABONBA_PTR_SET_VALUE(catalogError_, catalogError) };
      inline Data& setCatalogError(Data::CatalogError && catalogError) { DARABONBA_PTR_SET_RVALUE(catalogError_, catalogError) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // models Field Functions 
      bool hasModels() const { return this->models_ != nullptr;};
      void deleteModels() { this->models_ = nullptr;};
      inline const vector<Data::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<Data::Models>) };
      inline vector<Data::Models> getModels() { DARABONBA_PTR_GET(models_, vector<Data::Models>) };
      inline Data& setModels(const vector<Data::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
      inline Data& setModels(vector<Data::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    protected:
      // The list of candidate models that can be added to direct supply.
      shared_ptr<vector<Data::CandidateModels>> candidateModels_ {};
      // The error message returned when the model catalog query fails. This parameter is not returned when the query succeeds.
      shared_ptr<Data::CatalogError> catalogError_ {};
      // Indicates whether direct supply is enabled.
      shared_ptr<bool> enabled_ {};
      // The ID of the gateway instance.
      shared_ptr<string> gatewayId_ {};
      // The list of models for which direct supply is enabled.
      shared_ptr<vector<Data::Models>> models_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDirectSupplyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDirectSupplyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDirectSupplyResponseBody::Data) };
    inline GetDirectSupplyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDirectSupplyResponseBody::Data) };
    inline GetDirectSupplyResponseBody& setData(const GetDirectSupplyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDirectSupplyResponseBody& setData(GetDirectSupplyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDirectSupplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectSupplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetDirectSupplyResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
