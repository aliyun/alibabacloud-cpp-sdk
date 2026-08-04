// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERBATCHCREATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERBATCHCREATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateModelItemDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterBatchCreateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterBatchCreateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(symbol, symbol_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterBatchCreateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(symbol, symbol_);
    };
    ModelRouterBatchCreateModelRequest() = default ;
    ModelRouterBatchCreateModelRequest(const ModelRouterBatchCreateModelRequest &) = default ;
    ModelRouterBatchCreateModelRequest(ModelRouterBatchCreateModelRequest &&) = default ;
    ModelRouterBatchCreateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterBatchCreateModelRequest() = default ;
    ModelRouterBatchCreateModelRequest& operator=(const ModelRouterBatchCreateModelRequest &) = default ;
    ModelRouterBatchCreateModelRequest& operator=(ModelRouterBatchCreateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->baseUrl_ == nullptr && this->models_ == nullptr && this->symbol_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ModelRouterBatchCreateModelRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ModelRouterBatchCreateModelRequest& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<BatchCreateModelItemDTO> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<BatchCreateModelItemDTO>) };
    inline vector<BatchCreateModelItemDTO> getModels() { DARABONBA_PTR_GET(models_, vector<BatchCreateModelItemDTO>) };
    inline ModelRouterBatchCreateModelRequest& setModels(const vector<BatchCreateModelItemDTO> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ModelRouterBatchCreateModelRequest& setModels(vector<BatchCreateModelItemDTO> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
    inline ModelRouterBatchCreateModelRequest& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


  protected:
    // The API key. This parameter is required. The key is shared by the same provider and reused by all models.
    // 
    // This parameter is required.
    shared_ptr<string> apiKey_ {};
    // The base URL. This parameter is optional. Specify this parameter when you use a custom gateway address. If you do not specify this parameter, the default address of the provider is used.
    shared_ptr<string> baseUrl_ {};
    // The list of models to create in batches. This parameter is required. At least one item must be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchCreateModelItemDTO>> models_ {};
    // The provider symbol. This parameter is required. All models items share the same provider.
    // 
    // This parameter is required.
    shared_ptr<string> symbol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
