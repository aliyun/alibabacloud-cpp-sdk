// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEREGISTRYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PUBLICUPDATETEMPLATEREGISTRYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicUpdateTemplateRegistryAuthConfig.hpp>
#include <alibabacloud/models/PublicUpdateTemplateRegistryCertConfig.hpp>
#include <alibabacloud/models/PublicUpdateTemplateRegistryNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicUpdateTemplateRegistryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicUpdateTemplateRegistryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, PublicUpdateTemplateRegistryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
    };
    PublicUpdateTemplateRegistryConfig() = default ;
    PublicUpdateTemplateRegistryConfig(const PublicUpdateTemplateRegistryConfig &) = default ;
    PublicUpdateTemplateRegistryConfig(PublicUpdateTemplateRegistryConfig &&) = default ;
    PublicUpdateTemplateRegistryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicUpdateTemplateRegistryConfig() = default ;
    PublicUpdateTemplateRegistryConfig& operator=(const PublicUpdateTemplateRegistryConfig &) = default ;
    PublicUpdateTemplateRegistryConfig& operator=(PublicUpdateTemplateRegistryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->certConfig_ == nullptr && this->networkConfig_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const PublicUpdateTemplateRegistryAuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, PublicUpdateTemplateRegistryAuthConfig) };
    inline PublicUpdateTemplateRegistryAuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, PublicUpdateTemplateRegistryAuthConfig) };
    inline PublicUpdateTemplateRegistryConfig& setAuthConfig(const PublicUpdateTemplateRegistryAuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline PublicUpdateTemplateRegistryConfig& setAuthConfig(PublicUpdateTemplateRegistryAuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const PublicUpdateTemplateRegistryCertConfig & getCertConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, PublicUpdateTemplateRegistryCertConfig) };
    inline PublicUpdateTemplateRegistryCertConfig getCertConfig() { DARABONBA_PTR_GET(certConfig_, PublicUpdateTemplateRegistryCertConfig) };
    inline PublicUpdateTemplateRegistryConfig& setCertConfig(const PublicUpdateTemplateRegistryCertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline PublicUpdateTemplateRegistryConfig& setCertConfig(PublicUpdateTemplateRegistryCertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const PublicUpdateTemplateRegistryNetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, PublicUpdateTemplateRegistryNetworkConfig) };
    inline PublicUpdateTemplateRegistryNetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, PublicUpdateTemplateRegistryNetworkConfig) };
    inline PublicUpdateTemplateRegistryConfig& setNetworkConfig(const PublicUpdateTemplateRegistryNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline PublicUpdateTemplateRegistryConfig& setNetworkConfig(PublicUpdateTemplateRegistryNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    // The image repository authentication configuration.
    shared_ptr<PublicUpdateTemplateRegistryAuthConfig> authConfig_ {};
    // The image repository certificate configuration.
    shared_ptr<PublicUpdateTemplateRegistryCertConfig> certConfig_ {};
    // The image repository network configuration.
    shared_ptr<PublicUpdateTemplateRegistryNetworkConfig> networkConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
