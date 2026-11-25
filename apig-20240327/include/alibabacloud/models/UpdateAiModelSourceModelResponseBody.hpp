// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCEMODELRESPONSEBODY_HPP_
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
  class UpdateAiModelSourceModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiModelSourceModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiModelSourceModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateAiModelSourceModelResponseBody() = default ;
    UpdateAiModelSourceModelResponseBody(const UpdateAiModelSourceModelResponseBody &) = default ;
    UpdateAiModelSourceModelResponseBody(UpdateAiModelSourceModelResponseBody &&) = default ;
    UpdateAiModelSourceModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiModelSourceModelResponseBody() = default ;
    UpdateAiModelSourceModelResponseBody& operator=(const UpdateAiModelSourceModelResponseBody &) = default ;
    UpdateAiModelSourceModelResponseBody& operator=(UpdateAiModelSourceModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
        DARABONBA_PTR_TO_JSON(callName, callName_);
        DARABONBA_PTR_TO_JSON(credit, credit_);
        DARABONBA_ANY_TO_JSON(features, features_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(modelProvider, modelProvider_);
        DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
        DARABONBA_PTR_TO_JSON(modelSourceName, modelSourceName_);
        DARABONBA_PTR_TO_JSON(modelSourceVersion, modelSourceVersion_);
        DARABONBA_PTR_TO_JSON(pricingStatus, pricingStatus_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
        DARABONBA_PTR_FROM_JSON(callName, callName_);
        DARABONBA_PTR_FROM_JSON(credit, credit_);
        DARABONBA_ANY_FROM_JSON(features, features_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(modelProvider, modelProvider_);
        DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
        DARABONBA_PTR_FROM_JSON(modelSourceName, modelSourceName_);
        DARABONBA_PTR_FROM_JSON(modelSourceVersion, modelSourceVersion_);
        DARABONBA_PTR_FROM_JSON(pricingStatus, pricingStatus_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
        // The maximum number of input tokens supported by the model.
        shared_ptr<int64_t> maxInputTokens_ {};
        // The maximum number of output tokens supported by the model.
        shared_ptr<int64_t> maxOutputTokens_ {};
        // The maximum number of context tokens supported by the model.
        shared_ptr<int64_t> maxTokens_ {};
        // The input modalities supported by the model.
        shared_ptr<vector<string>> supportedInputModalities_ {};
        // The output modalities supported by the model.
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
        // The number of credits per million cached input tokens. The value must be a non-negative number. A value of 0 indicates that cached input is free of charge.
        shared_ptr<float> cacheCost_ {};
        // The number of credits per million input tokens. The value must be a non-negative number. A value of 0 indicates that input is free of charge.
        shared_ptr<float> inputCost_ {};
        // The number of credits per million output tokens. The value must be a non-negative number. A value of 0 indicates that output is free of charge.
        shared_ptr<float> outputCost_ {};
        // The pricing method. Valid value: fixed (fixed credit pricing).
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
        // The invocation path of the model.
        shared_ptr<string> path_ {};
        // The protocol type used by the invocation path.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->callName_ == nullptr && this->credit_ == nullptr && this->features_ == nullptr && this->gatewayId_ == nullptr && this->meta_ == nullptr
        && this->modelCardId_ == nullptr && this->modelName_ == nullptr && this->modelProvider_ == nullptr && this->modelSourceId_ == nullptr && this->modelSourceName_ == nullptr
        && this->modelSourceVersion_ == nullptr && this->pricingStatus_ == nullptr && this->serviceId_ == nullptr && this->source_ == nullptr && this->updateTime_ == nullptr
        && this->version_ == nullptr; };
      // availablePaths Field Functions 
      bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
      void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
      inline const vector<Data::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<Data::AvailablePaths>) };
      inline vector<Data::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<Data::AvailablePaths>) };
      inline Data& setAvailablePaths(const vector<Data::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
      inline Data& setAvailablePaths(vector<Data::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


      // callName Field Functions 
      bool hasCallName() const { return this->callName_ != nullptr;};
      void deleteCallName() { this->callName_ = nullptr;};
      inline string getCallName() const { DARABONBA_PTR_GET_DEFAULT(callName_, "") };
      inline Data& setCallName(string callName) { DARABONBA_PTR_SET_VALUE(callName_, callName) };


      // credit Field Functions 
      bool hasCredit() const { return this->credit_ != nullptr;};
      void deleteCredit() { this->credit_ = nullptr;};
      inline const Data::Credit & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, Data::Credit) };
      inline Data::Credit getCredit() { DARABONBA_PTR_GET(credit_, Data::Credit) };
      inline Data& setCredit(const Data::Credit & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
      inline Data& setCredit(Data::Credit && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline       const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
      Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
      inline Data& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
      inline Data& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Data::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Data::Meta) };
      inline Data::Meta getMeta() { DARABONBA_PTR_GET(meta_, Data::Meta) };
      inline Data& setMeta(const Data::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Data& setMeta(Data::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // modelCardId Field Functions 
      bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
      void deleteModelCardId() { this->modelCardId_ = nullptr;};
      inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
      inline Data& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Data& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // modelProvider Field Functions 
      bool hasModelProvider() const { return this->modelProvider_ != nullptr;};
      void deleteModelProvider() { this->modelProvider_ = nullptr;};
      inline string getModelProvider() const { DARABONBA_PTR_GET_DEFAULT(modelProvider_, "") };
      inline Data& setModelProvider(string modelProvider) { DARABONBA_PTR_SET_VALUE(modelProvider_, modelProvider) };


      // modelSourceId Field Functions 
      bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
      void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
      inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
      inline Data& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


      // modelSourceName Field Functions 
      bool hasModelSourceName() const { return this->modelSourceName_ != nullptr;};
      void deleteModelSourceName() { this->modelSourceName_ = nullptr;};
      inline string getModelSourceName() const { DARABONBA_PTR_GET_DEFAULT(modelSourceName_, "") };
      inline Data& setModelSourceName(string modelSourceName) { DARABONBA_PTR_SET_VALUE(modelSourceName_, modelSourceName) };


      // modelSourceVersion Field Functions 
      bool hasModelSourceVersion() const { return this->modelSourceVersion_ != nullptr;};
      void deleteModelSourceVersion() { this->modelSourceVersion_ = nullptr;};
      inline int64_t getModelSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(modelSourceVersion_, 0L) };
      inline Data& setModelSourceVersion(int64_t modelSourceVersion) { DARABONBA_PTR_SET_VALUE(modelSourceVersion_, modelSourceVersion) };


      // pricingStatus Field Functions 
      bool hasPricingStatus() const { return this->pricingStatus_ != nullptr;};
      void deletePricingStatus() { this->pricingStatus_ = nullptr;};
      inline string getPricingStatus() const { DARABONBA_PTR_GET_DEFAULT(pricingStatus_, "") };
      inline Data& setPricingStatus(string pricingStatus) { DARABONBA_PTR_SET_VALUE(pricingStatus_, pricingStatus) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Data& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Data& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The protocols and invocation paths supported by the model.
      shared_ptr<vector<Data::AvailablePaths>> availablePaths_ {};
      shared_ptr<string> callName_ {};
      // The credit pricing configuration of the model.
      shared_ptr<Data::Credit> credit_ {};
      // The set of capabilities declared by the model. The key is the capability name, and the value indicates whether the capability is supported.
      Darabonba::Json features_ {};
      // The ID of the AI gateway instance to which the resource belongs.
      shared_ptr<string> gatewayId_ {};
      // The token limits and input and output modality information of the model.
      shared_ptr<Data::Meta> meta_ {};
      // The model identifier. For standard models, use the source model card ID. For logical model entries, use the vm- identifier.
      shared_ptr<string> modelCardId_ {};
      // The actual model name used by the upstream service.
      shared_ptr<string> modelName_ {};
      // The stable identifier of the provider to which the model belongs.
      shared_ptr<string> modelProvider_ {};
      // The model source ID. Use the modelSourceId returned by CreateAiModelSource.
      shared_ptr<string> modelSourceId_ {};
      // The display name of the model source.
      shared_ptr<string> modelSourceName_ {};
      // The current version of the model source to which the model belongs.
      shared_ptr<int64_t> modelSourceVersion_ {};
      // The synchronization status of the model pricing configuration. Valid values: Pending (the current version is not synchronized) and Ready (the current version is synchronized).
      shared_ptr<string> pricingStatus_ {};
      // The ID of the actual AI service bound to the model source.
      shared_ptr<string> serviceId_ {};
      // The source of the model asset. Valid values: user (user model) and builtin (system built-in model).
      shared_ptr<string> source_ {};
      // The most recent business update time in RFC 3339 format and UTC time zone.
      shared_ptr<string> updateTime_ {};
      // The current version of the object, which is used for conditional validation during updates or deletions.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateAiModelSourceModelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateAiModelSourceModelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateAiModelSourceModelResponseBody::Data) };
    inline UpdateAiModelSourceModelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateAiModelSourceModelResponseBody::Data) };
    inline UpdateAiModelSourceModelResponseBody& setData(const UpdateAiModelSourceModelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateAiModelSourceModelResponseBody& setData(UpdateAiModelSourceModelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateAiModelSourceModelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAiModelSourceModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. A value of Ok indicates success. If the request fails, a specific business error code is returned.
    shared_ptr<string> code_ {};
    // The business result returned by the operation on the AI model in the source.
    shared_ptr<UpdateAiModelSourceModelResponseBody::Data> data_ {};
    // The response message, which describes the request processing result.
    shared_ptr<string> message_ {};
    // The request ID, which is generated by the system and used to locate this call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
