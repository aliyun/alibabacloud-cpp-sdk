// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIMODELSOURCEMODELREQUEST_HPP_
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
  class UpdateAiModelSourceModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiModelSourceModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
      DARABONBA_PTR_TO_JSON(credit, credit_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_ANY_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiModelSourceModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
      DARABONBA_PTR_FROM_JSON(credit, credit_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_ANY_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
    };
    UpdateAiModelSourceModelRequest() = default ;
    UpdateAiModelSourceModelRequest(const UpdateAiModelSourceModelRequest &) = default ;
    UpdateAiModelSourceModelRequest(UpdateAiModelSourceModelRequest &&) = default ;
    UpdateAiModelSourceModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiModelSourceModelRequest() = default ;
    UpdateAiModelSourceModelRequest& operator=(const UpdateAiModelSourceModelRequest &) = default ;
    UpdateAiModelSourceModelRequest& operator=(UpdateAiModelSourceModelRequest &&) = default ;
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
        && this->credit_ == nullptr && this->expectedVersion_ == nullptr && this->features_ == nullptr && this->meta_ == nullptr && this->modelName_ == nullptr; };
    // availablePaths Field Functions 
    bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
    void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
    inline const vector<UpdateAiModelSourceModelRequest::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<UpdateAiModelSourceModelRequest::AvailablePaths>) };
    inline vector<UpdateAiModelSourceModelRequest::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<UpdateAiModelSourceModelRequest::AvailablePaths>) };
    inline UpdateAiModelSourceModelRequest& setAvailablePaths(const vector<UpdateAiModelSourceModelRequest::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
    inline UpdateAiModelSourceModelRequest& setAvailablePaths(vector<UpdateAiModelSourceModelRequest::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


    // credit Field Functions 
    bool hasCredit() const { return this->credit_ != nullptr;};
    void deleteCredit() { this->credit_ = nullptr;};
    inline const UpdateAiModelSourceModelRequest::Credit & getCredit() const { DARABONBA_PTR_GET_CONST(credit_, UpdateAiModelSourceModelRequest::Credit) };
    inline UpdateAiModelSourceModelRequest::Credit getCredit() { DARABONBA_PTR_GET(credit_, UpdateAiModelSourceModelRequest::Credit) };
    inline UpdateAiModelSourceModelRequest& setCredit(const UpdateAiModelSourceModelRequest::Credit & credit) { DARABONBA_PTR_SET_VALUE(credit_, credit) };
    inline UpdateAiModelSourceModelRequest& setCredit(UpdateAiModelSourceModelRequest::Credit && credit) { DARABONBA_PTR_SET_RVALUE(credit_, credit) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateAiModelSourceModelRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline     const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
    Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
    inline UpdateAiModelSourceModelRequest& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
    inline UpdateAiModelSourceModelRequest& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const UpdateAiModelSourceModelRequest::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, UpdateAiModelSourceModelRequest::Meta) };
    inline UpdateAiModelSourceModelRequest::Meta getMeta() { DARABONBA_PTR_GET(meta_, UpdateAiModelSourceModelRequest::Meta) };
    inline UpdateAiModelSourceModelRequest& setMeta(const UpdateAiModelSourceModelRequest::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline UpdateAiModelSourceModelRequest& setMeta(UpdateAiModelSourceModelRequest::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline UpdateAiModelSourceModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


  protected:
    // The protocols and invocation paths supported by the model.
    shared_ptr<vector<UpdateAiModelSourceModelRequest::AvailablePaths>> availablePaths_ {};
    // The credit pricing configuration of the model.
    shared_ptr<UpdateAiModelSourceModelRequest::Credit> credit_ {};
    // The expected object version. Use the version returned by the most recent query.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
    // The set of capabilities declared by the model. The key is the capability name, and the value indicates whether the capability is supported.
    Darabonba::Json features_ {};
    // The token limits and input and output modality information of the model.
    shared_ptr<UpdateAiModelSourceModelRequest::Meta> meta_ {};
    // The actual model name used by the upstream service.
    shared_ptr<string> modelName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
