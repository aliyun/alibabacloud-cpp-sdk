// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELCONNECTIONPROVIDERSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_MODELCONNECTIONPROVIDERSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelConnectionProviderSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelConnectionProviderSettings& obj) { 
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(modelNames, modelNames_);
    };
    friend void from_json(const Darabonba::Json& j, ModelConnectionProviderSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(modelNames, modelNames_);
    };
    ModelConnectionProviderSettings() = default ;
    ModelConnectionProviderSettings(const ModelConnectionProviderSettings &) = default ;
    ModelConnectionProviderSettings(ModelConnectionProviderSettings &&) = default ;
    ModelConnectionProviderSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelConnectionProviderSettings() = default ;
    ModelConnectionProviderSettings& operator=(const ModelConnectionProviderSettings &) = default ;
    ModelConnectionProviderSettings& operator=(ModelConnectionProviderSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->modelNames_ == nullptr; };
    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ModelConnectionProviderSettings& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const vector<string> & getModelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
    inline vector<string> getModelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
    inline ModelConnectionProviderSettings& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline ModelConnectionProviderSettings& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


  protected:
    // 模型提供商的默认API基础地址
    shared_ptr<string> baseUrl_ {};
    // 该连接支持的模型名称列表
    shared_ptr<vector<string>> modelNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
