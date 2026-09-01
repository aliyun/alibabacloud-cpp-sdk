// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREGISTRYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREGISTRYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTemplateRegistryAuthConfig.hpp>
#include <alibabacloud/models/CreateTemplateRegistryCertConfig.hpp>
#include <alibabacloud/models/CreateTemplateRegistryNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateRegistryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRegistryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRegistryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
    };
    CreateTemplateRegistryConfig() = default ;
    CreateTemplateRegistryConfig(const CreateTemplateRegistryConfig &) = default ;
    CreateTemplateRegistryConfig(CreateTemplateRegistryConfig &&) = default ;
    CreateTemplateRegistryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRegistryConfig() = default ;
    CreateTemplateRegistryConfig& operator=(const CreateTemplateRegistryConfig &) = default ;
    CreateTemplateRegistryConfig& operator=(CreateTemplateRegistryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->certConfig_ == nullptr && this->networkConfig_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const CreateTemplateRegistryAuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, CreateTemplateRegistryAuthConfig) };
    inline CreateTemplateRegistryAuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, CreateTemplateRegistryAuthConfig) };
    inline CreateTemplateRegistryConfig& setAuthConfig(const CreateTemplateRegistryAuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline CreateTemplateRegistryConfig& setAuthConfig(CreateTemplateRegistryAuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const CreateTemplateRegistryCertConfig & getCertConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, CreateTemplateRegistryCertConfig) };
    inline CreateTemplateRegistryCertConfig getCertConfig() { DARABONBA_PTR_GET(certConfig_, CreateTemplateRegistryCertConfig) };
    inline CreateTemplateRegistryConfig& setCertConfig(const CreateTemplateRegistryCertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline CreateTemplateRegistryConfig& setCertConfig(CreateTemplateRegistryCertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const CreateTemplateRegistryNetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, CreateTemplateRegistryNetworkConfig) };
    inline CreateTemplateRegistryNetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, CreateTemplateRegistryNetworkConfig) };
    inline CreateTemplateRegistryConfig& setNetworkConfig(const CreateTemplateRegistryNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline CreateTemplateRegistryConfig& setNetworkConfig(CreateTemplateRegistryNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    // The image repository authentication configuration.
    shared_ptr<CreateTemplateRegistryAuthConfig> authConfig_ {};
    // The image repository certificate configuration.
    shared_ptr<CreateTemplateRegistryCertConfig> certConfig_ {};
    // The image repository network configuration.
    shared_ptr<CreateTemplateRegistryNetworkConfig> networkConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
