// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERUPDATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERUPDATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterUpdateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterUpdateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(maxInputLength, maxInputLength_);
      DARABONBA_PTR_TO_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(symbol, symbol_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterUpdateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(maxInputLength, maxInputLength_);
      DARABONBA_PTR_FROM_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ModelRouterUpdateModelRequest() = default ;
    ModelRouterUpdateModelRequest(const ModelRouterUpdateModelRequest &) = default ;
    ModelRouterUpdateModelRequest(ModelRouterUpdateModelRequest &&) = default ;
    ModelRouterUpdateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterUpdateModelRequest() = default ;
    ModelRouterUpdateModelRequest& operator=(const ModelRouterUpdateModelRequest &) = default ;
    ModelRouterUpdateModelRequest& operator=(ModelRouterUpdateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->baseUrl_ == nullptr && this->description_ == nullptr && this->maxInputLength_ == nullptr && this->maxOutputLength_ == nullptr && this->modelId_ == nullptr
        && this->modelType_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->symbol_ == nullptr && this->tags_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ModelRouterUpdateModelRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ModelRouterUpdateModelRequest& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModelRouterUpdateModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxInputLength Field Functions 
    bool hasMaxInputLength() const { return this->maxInputLength_ != nullptr;};
    void deleteMaxInputLength() { this->maxInputLength_ = nullptr;};
    inline string getMaxInputLength() const { DARABONBA_PTR_GET_DEFAULT(maxInputLength_, "") };
    inline ModelRouterUpdateModelRequest& setMaxInputLength(string maxInputLength) { DARABONBA_PTR_SET_VALUE(maxInputLength_, maxInputLength) };


    // maxOutputLength Field Functions 
    bool hasMaxOutputLength() const { return this->maxOutputLength_ != nullptr;};
    void deleteMaxOutputLength() { this->maxOutputLength_ = nullptr;};
    inline string getMaxOutputLength() const { DARABONBA_PTR_GET_DEFAULT(maxOutputLength_, "") };
    inline ModelRouterUpdateModelRequest& setMaxOutputLength(string maxOutputLength) { DARABONBA_PTR_SET_VALUE(maxOutputLength_, maxOutputLength) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline ModelRouterUpdateModelRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelRouterUpdateModelRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelRouterUpdateModelRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModelRouterUpdateModelRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
    inline ModelRouterUpdateModelRequest& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ModelRouterUpdateModelRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // API Key
    shared_ptr<string> apiKey_ {};
    // Base URL
    shared_ptr<string> baseUrl_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> maxInputLength_ {};
    shared_ptr<string> maxOutputLength_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> symbol_ {};
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
