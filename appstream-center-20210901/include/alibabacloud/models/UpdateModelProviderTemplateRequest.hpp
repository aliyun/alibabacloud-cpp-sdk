// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELPROVIDERTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELPROVIDERTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UpdateModelProviderTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelProviderTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableWuyingProxy, enableWuyingProxy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelProviderTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableWuyingProxy, enableWuyingProxy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
    };
    UpdateModelProviderTemplateRequest() = default ;
    UpdateModelProviderTemplateRequest(const UpdateModelProviderTemplateRequest &) = default ;
    UpdateModelProviderTemplateRequest(UpdateModelProviderTemplateRequest &&) = default ;
    UpdateModelProviderTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelProviderTemplateRequest() = default ;
    UpdateModelProviderTemplateRequest& operator=(const UpdateModelProviderTemplateRequest &) = default ;
    UpdateModelProviderTemplateRequest& operator=(UpdateModelProviderTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ApiType, apiType_);
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiType_ == nullptr && this->baseUrl_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Config& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiType Field Functions 
      bool hasApiType() const { return this->apiType_ != nullptr;};
      void deleteApiType() { this->apiType_ = nullptr;};
      inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
      inline Config& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Config& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> apiType_ {};
      shared_ptr<string> baseUrl_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->description_ == nullptr && this->enableWuyingProxy_ == nullptr && this->name_ == nullptr && this->providerTemplateId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const UpdateModelProviderTemplateRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, UpdateModelProviderTemplateRequest::Config) };
    inline UpdateModelProviderTemplateRequest::Config getConfig() { DARABONBA_PTR_GET(config_, UpdateModelProviderTemplateRequest::Config) };
    inline UpdateModelProviderTemplateRequest& setConfig(const UpdateModelProviderTemplateRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline UpdateModelProviderTemplateRequest& setConfig(UpdateModelProviderTemplateRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelProviderTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableWuyingProxy Field Functions 
    bool hasEnableWuyingProxy() const { return this->enableWuyingProxy_ != nullptr;};
    void deleteEnableWuyingProxy() { this->enableWuyingProxy_ = nullptr;};
    inline bool getEnableWuyingProxy() const { DARABONBA_PTR_GET_DEFAULT(enableWuyingProxy_, false) };
    inline UpdateModelProviderTemplateRequest& setEnableWuyingProxy(bool enableWuyingProxy) { DARABONBA_PTR_SET_VALUE(enableWuyingProxy_, enableWuyingProxy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelProviderTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline UpdateModelProviderTemplateRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


  protected:
    shared_ptr<UpdateModelProviderTemplateRequest::Config> config_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableWuyingProxy_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> providerTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
