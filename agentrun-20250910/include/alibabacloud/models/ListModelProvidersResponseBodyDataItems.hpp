// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERSRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERSRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModelInfoConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListModelProvidersResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProvidersResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(modelInfoConfig, modelInfoConfig_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(models, models_);
      DARABONBA_PTR_TO_JSON(providerName, providerName_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProvidersResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(modelInfoConfig, modelInfoConfig_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(models, models_);
      DARABONBA_PTR_FROM_JSON(providerName, providerName_);
    };
    ListModelProvidersResponseBodyDataItems() = default ;
    ListModelProvidersResponseBodyDataItems(const ListModelProvidersResponseBodyDataItems &) = default ;
    ListModelProvidersResponseBodyDataItems(ListModelProvidersResponseBodyDataItems &&) = default ;
    ListModelProvidersResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProvidersResponseBodyDataItems() = default ;
    ListModelProvidersResponseBodyDataItems& operator=(const ListModelProvidersResponseBodyDataItems &) = default ;
    ListModelProvidersResponseBodyDataItems& operator=(ListModelProvidersResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseUrl_ == nullptr
        && return this->modelInfoConfig_ == nullptr && return this->modelType_ == nullptr && return this->models_ == nullptr && return this->providerName_ == nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string baseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ListModelProvidersResponseBodyDataItems& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // modelInfoConfig Field Functions 
    bool hasModelInfoConfig() const { return this->modelInfoConfig_ != nullptr;};
    void deleteModelInfoConfig() { this->modelInfoConfig_ = nullptr;};
    inline const Models::ModelInfoConfig & modelInfoConfig() const { DARABONBA_PTR_GET_CONST(modelInfoConfig_, Models::ModelInfoConfig) };
    inline Models::ModelInfoConfig modelInfoConfig() { DARABONBA_PTR_GET(modelInfoConfig_, Models::ModelInfoConfig) };
    inline ListModelProvidersResponseBodyDataItems& setModelInfoConfig(const Models::ModelInfoConfig & modelInfoConfig) { DARABONBA_PTR_SET_VALUE(modelInfoConfig_, modelInfoConfig) };
    inline ListModelProvidersResponseBodyDataItems& setModelInfoConfig(Models::ModelInfoConfig && modelInfoConfig) { DARABONBA_PTR_SET_RVALUE(modelInfoConfig_, modelInfoConfig) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string modelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListModelProvidersResponseBodyDataItems& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<string> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<string>) };
    inline vector<string> models() { DARABONBA_PTR_GET(models_, vector<string>) };
    inline ListModelProvidersResponseBodyDataItems& setModels(const vector<string> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListModelProvidersResponseBodyDataItems& setModels(vector<string> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string providerName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline ListModelProvidersResponseBodyDataItems& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


  protected:
    // baseUrl
    std::shared_ptr<string> baseUrl_ = nullptr;
    // modelInfoConfig
    std::shared_ptr<Models::ModelInfoConfig> modelInfoConfig_ = nullptr;
    std::shared_ptr<string> modelType_ = nullptr;
    std::shared_ptr<vector<string>> models_ = nullptr;
    std::shared_ptr<string> providerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
