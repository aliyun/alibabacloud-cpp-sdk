// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREGISTRYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREGISTRYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RegistryAuthenticationConfig.hpp>
#include <alibabacloud/models/RegistryCertificateConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ImageRegistryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRegistryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(CertConfig, certConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRegistryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(CertConfig, certConfig_);
    };
    ImageRegistryConfig() = default ;
    ImageRegistryConfig(const ImageRegistryConfig &) = default ;
    ImageRegistryConfig(ImageRegistryConfig &&) = default ;
    ImageRegistryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRegistryConfig() = default ;
    ImageRegistryConfig& operator=(const ImageRegistryConfig &) = default ;
    ImageRegistryConfig& operator=(ImageRegistryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->certConfig_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const RegistryAuthenticationConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, RegistryAuthenticationConfig) };
    inline RegistryAuthenticationConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, RegistryAuthenticationConfig) };
    inline ImageRegistryConfig& setAuthConfig(const RegistryAuthenticationConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline ImageRegistryConfig& setAuthConfig(RegistryAuthenticationConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const RegistryCertificateConfig & getCertConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, RegistryCertificateConfig) };
    inline RegistryCertificateConfig getCertConfig() { DARABONBA_PTR_GET(certConfig_, RegistryCertificateConfig) };
    inline ImageRegistryConfig& setCertConfig(const RegistryCertificateConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline ImageRegistryConfig& setCertConfig(RegistryCertificateConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


  protected:
    shared_ptr<RegistryAuthenticationConfig> authConfig_ {};
    shared_ptr<RegistryCertificateConfig> certConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
