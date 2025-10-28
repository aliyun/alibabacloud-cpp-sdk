// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTRYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_REGISTRYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RegistryAuthConfig.hpp>
#include <alibabacloud/models/RegistryCertConfig.hpp>
#include <alibabacloud/models/RegistryNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RegistryConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistryConfig& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(certConfig, certConfig_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, RegistryConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(certConfig, certConfig_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
    };
    RegistryConfig() = default ;
    RegistryConfig(const RegistryConfig &) = default ;
    RegistryConfig(RegistryConfig &&) = default ;
    RegistryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistryConfig() = default ;
    RegistryConfig& operator=(const RegistryConfig &) = default ;
    RegistryConfig& operator=(RegistryConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfig_ == nullptr
        && return this->certConfig_ == nullptr && return this->networkConfig_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const RegistryAuthConfig & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, RegistryAuthConfig) };
    inline RegistryAuthConfig authConfig() { DARABONBA_PTR_GET(authConfig_, RegistryAuthConfig) };
    inline RegistryConfig& setAuthConfig(const RegistryAuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline RegistryConfig& setAuthConfig(RegistryAuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // certConfig Field Functions 
    bool hasCertConfig() const { return this->certConfig_ != nullptr;};
    void deleteCertConfig() { this->certConfig_ = nullptr;};
    inline const RegistryCertConfig & certConfig() const { DARABONBA_PTR_GET_CONST(certConfig_, RegistryCertConfig) };
    inline RegistryCertConfig certConfig() { DARABONBA_PTR_GET(certConfig_, RegistryCertConfig) };
    inline RegistryConfig& setCertConfig(const RegistryCertConfig & certConfig) { DARABONBA_PTR_SET_VALUE(certConfig_, certConfig) };
    inline RegistryConfig& setCertConfig(RegistryCertConfig && certConfig) { DARABONBA_PTR_SET_RVALUE(certConfig_, certConfig) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const RegistryNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, RegistryNetworkConfig) };
    inline RegistryNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, RegistryNetworkConfig) };
    inline RegistryConfig& setNetworkConfig(const RegistryNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline RegistryConfig& setNetworkConfig(RegistryNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


  protected:
    std::shared_ptr<RegistryAuthConfig> authConfig_ = nullptr;
    std::shared_ptr<RegistryCertConfig> certConfig_ = nullptr;
    std::shared_ptr<RegistryNetworkConfig> networkConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
