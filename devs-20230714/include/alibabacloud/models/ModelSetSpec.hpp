// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSETSPEC_HPP_
#define ALIBABACLOUD_MODELS_MODELSETSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelSetSpecFeatures.hpp>
#include <vector>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelSetSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSetSpec& obj) { 
      DARABONBA_PTR_TO_JSON(apiInvokeType, apiInvokeType_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSetSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(apiInvokeType, apiInvokeType_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
    };
    ModelSetSpec() = default ;
    ModelSetSpec(const ModelSetSpec &) = default ;
    ModelSetSpec(ModelSetSpec &&) = default ;
    ModelSetSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSetSpec() = default ;
    ModelSetSpec& operator=(const ModelSetSpec &) = default ;
    ModelSetSpec& operator=(ModelSetSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiInvokeType_ != nullptr
        && this->authConfig_ != nullptr && this->baseUrl_ != nullptr && this->features_ != nullptr && this->modelType_ != nullptr && this->models_ != nullptr
        && this->provider_ != nullptr; };
    // apiInvokeType Field Functions 
    bool hasApiInvokeType() const { return this->apiInvokeType_ != nullptr;};
    void deleteApiInvokeType() { this->apiInvokeType_ = nullptr;};
    inline string apiInvokeType() const { DARABONBA_PTR_GET_DEFAULT(apiInvokeType_, "") };
    inline ModelSetSpec& setApiInvokeType(string apiInvokeType) { DARABONBA_PTR_SET_VALUE(apiInvokeType_, apiInvokeType) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const Authorization & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, Authorization) };
    inline Authorization authConfig() { DARABONBA_PTR_GET(authConfig_, Authorization) };
    inline ModelSetSpec& setAuthConfig(const Authorization & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline ModelSetSpec& setAuthConfig(Authorization && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ModelSetSpec& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const ModelSetSpecFeatures & features() const { DARABONBA_PTR_GET_CONST(features_, ModelSetSpecFeatures) };
    inline ModelSetSpecFeatures features() { DARABONBA_PTR_GET(features_, ModelSetSpecFeatures) };
    inline ModelSetSpec& setFeatures(const ModelSetSpecFeatures & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ModelSetSpec& setFeatures(ModelSetSpecFeatures && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelSetSpec& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<ModelSetModelProfile> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<ModelSetModelProfile>) };
    inline vector<ModelSetModelProfile> models() { DARABONBA_PTR_GET(models_, vector<ModelSetModelProfile>) };
    inline ModelSetSpec& setModels(const vector<ModelSetModelProfile> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ModelSetSpec& setModels(vector<ModelSetModelProfile> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ModelSetSpec& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


  protected:
    std::shared_ptr<string> apiInvokeType_ = nullptr;
    std::shared_ptr<Authorization> authConfig_ = nullptr;
    std::shared_ptr<string> baseUrl_ = nullptr;
    std::shared_ptr<ModelSetSpecFeatures> features_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<ModelSetModelProfile>> models_ = nullptr;
    std::shared_ptr<string> provider_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
