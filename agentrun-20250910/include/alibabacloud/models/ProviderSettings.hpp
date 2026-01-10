// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVIDERSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_PROVIDERSETTINGS_HPP_
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
  class ProviderSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProviderSettings& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_TO_JSON(modelNames, modelNames_);
    };
    friend void from_json(const Darabonba::Json& j, ProviderSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(baseUrl, baseUrl_);
      DARABONBA_PTR_FROM_JSON(modelNames, modelNames_);
    };
    ProviderSettings() = default ;
    ProviderSettings(const ProviderSettings &) = default ;
    ProviderSettings(ProviderSettings &&) = default ;
    ProviderSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProviderSettings() = default ;
    ProviderSettings& operator=(const ProviderSettings &) = default ;
    ProviderSettings& operator=(ProviderSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->baseUrl_ == nullptr && this->modelNames_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline ProviderSettings& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // baseUrl Field Functions 
    bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
    void deleteBaseUrl() { this->baseUrl_ = nullptr;};
    inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
    inline ProviderSettings& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const vector<string> & getModelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, vector<string>) };
    inline vector<string> getModelNames() { DARABONBA_PTR_GET(modelNames_, vector<string>) };
    inline ProviderSettings& setModelNames(const vector<string> & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline ProviderSettings& setModelNames(vector<string> && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> baseUrl_ {};
    shared_ptr<vector<string>> modelNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
