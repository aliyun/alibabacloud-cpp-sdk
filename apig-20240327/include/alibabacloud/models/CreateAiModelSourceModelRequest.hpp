// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIMODELSOURCEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIMODELSOURCEMODELREQUEST_HPP_
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
  class CreateAiModelSourceModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAiModelSourceModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
      DARABONBA_PTR_TO_JSON(credit, credit_);
      DARABONBA_ANY_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelSourceId, modelSourceId_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAiModelSourceModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
      DARABONBA_PTR_FROM_JSON(credit, credit_);
      DARABONBA_ANY_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelSourceId, modelSourceId_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateAiModelSourceModelRequest() = default ;
    CreateAiModelSourceModelRequest(const CreateAiModelSourceModelRequest &) = default ;
    CreateAiModelSourceModelRequest(CreateAiModelSourceModelRequest &&) = default ;
    CreateAiModelSourceModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAiModelSourceModelRequest() = default ;
    CreateAiModelSourceModelRequest& operator=(const CreateAiModelSourceModelRequest &) = default ;
    CreateAiModelSourceModelRequest& operator=(CreateAiModelSourceModelRequest &&) = default ;
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
      // The number of credits per million input tokens that hit the cache. The value must be a non-negative number. A value of 0 indicates that cached input is free of charge.
      shared_ptr<float> cacheCost_ {};
      // The number of credits per million input tokens. The value must be a non-negative number. A value of 0 indicates that the input is free of charge.
      shared_ptr<float> inputCost_ {};
      // The number of credits per million output tokens. The value must be a non-negative number. A value of 0 indicates that the output is free of charge.
      shared_ptr<float> outputCost_ {};
      // The pricing method. Valid values: fixed (fixed credit pricing).
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
        && this->credit_ == nullptr && this->features_ == nullptr && this->meta_ == nullptr && this->modelName_ == nullptr && this->modelSourceId_ == nullptr
        && this->clientToken_ == nullptr; };
    // availablePaths Field Functions 
    bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
    void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
    inline const vector<CreateAiModelSourceModelRequest::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<CreateAiModelSourceModelRequest::AvailablePaths>) };
    inline vector<CreateAiModelSourceModelRequest::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<CreateAiModelSourceModelRequest::AvailablePaths>) };
    inline CreateAiModelSourceModelRequest& setAvailablePaths(const vector<CreateAiModelSourceModelRequest::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
    inline CreateAiModelSourceModelRequest& setAvailablePaths(vector<CreateAiModelSourceModelRequest::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


    // credit Field Functions 
    bool hasCredit() const { return this->credit_ != nullptr;};
    void deleteCredit() { this->credit_ = nullptr;};
    inline const CreateAiModelSourceModelRequest::Credit & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, CreateAiModelSourceModelRequest::Credit) };
    inline CreateAiModelSourceModelRequest::Credit getCredit() { DARABONBA_PTR_GET(credit_, CreateAiModelSourceModelRequest::Credit) };
    inline CreateAiModelSourceModelRequest& setCredit(const CreateAiModelSourceModelRequest::Credit & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
    inline CreateAiModelSourceModelRequest& setCredit(CreateAiModelSourceModelRequest::Credit && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline     const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
    Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
    inline CreateAiModelSourceModelRequest& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
    inline CreateAiModelSourceModelRequest& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const CreateAiModelSourceModelRequest::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, CreateAiModelSourceModelRequest::Meta) };
    inline CreateAiModelSourceModelRequest::Meta getMeta() { DARABONBA_PTR_GET(meta_, CreateAiModelSourceModelRequest::Meta) };
    inline CreateAiModelSourceModelRequest& setMeta(const CreateAiModelSourceModelRequest::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline CreateAiModelSourceModelRequest& setMeta(CreateAiModelSourceModelRequest::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateAiModelSourceModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelSourceId Field Functions 
    bool hasModelSourceId() const { return this->modelSourceId_ != nullptr;};
    void deleteModelSourceId() { this->modelSourceId_ = nullptr;};
    inline string getModelSourceId() const { DARABONBA_PTR_GET_DEFAULT(modelSourceId_, "") };
    inline CreateAiModelSourceModelRequest& setModelSourceId(string modelSourceId) { DARABONBA_PTR_SET_VALUE(modelSourceId_, modelSourceId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAiModelSourceModelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The protocols and invocation paths supported by the model.
    shared_ptr<vector<CreateAiModelSourceModelRequest::AvailablePaths>> availablePaths_ {};
    // The credit pricing configuration of the model.
    shared_ptr<CreateAiModelSourceModelRequest::Credit> credit_ {};
    // The set of capabilities declared by the model. The key is the capability name, and the value indicates whether the capability is supported.
    Darabonba::Json features_ {};
    // The token limits and input and output modality information of the model.
    shared_ptr<CreateAiModelSourceModelRequest::Meta> meta_ {};
    // The actual model name used by the upstream service.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The ID of the model source. Use the modelSourceId returned by the CreateAiModelSource operation.
    // 
    // This parameter is required.
    shared_ptr<string> modelSourceId_ {};
    // The client-generated idempotency token used to identify the same creation or retry operation.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
