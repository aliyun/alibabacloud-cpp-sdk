// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATELLMTEMPLATECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATELLMTEMPLATECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ValidateLlmTemplateConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateLlmTemplateConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateLlmTemplateConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
    };
    ValidateLlmTemplateConfigRequest() = default ;
    ValidateLlmTemplateConfigRequest(const ValidateLlmTemplateConfigRequest &) = default ;
    ValidateLlmTemplateConfigRequest(ValidateLlmTemplateConfigRequest &&) = default ;
    ValidateLlmTemplateConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateLlmTemplateConfigRequest() = default ;
    ValidateLlmTemplateConfigRequest& operator=(const ValidateLlmTemplateConfigRequest &) = default ;
    ValidateLlmTemplateConfigRequest& operator=(ValidateLlmTemplateConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->providerTemplateId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ValidateLlmTemplateConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline ValidateLlmTemplateConfigRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


  protected:
    // This parameter is required.
    shared_ptr<string> config_ {};
    // This parameter is required.
    shared_ptr<string> providerTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
