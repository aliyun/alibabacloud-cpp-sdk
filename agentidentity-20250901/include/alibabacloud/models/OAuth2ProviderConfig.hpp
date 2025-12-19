// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OAUTH2PROVIDERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_OAUTH2PROVIDERCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CustomOAuth2ProviderConfig.hpp>
#include <alibabacloud/models/IncludedOAuth2ProviderConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class OAuth2ProviderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OAuth2ProviderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CustomOAuth2ProviderConfig, customOAuth2ProviderConfig_);
      DARABONBA_PTR_TO_JSON(IncludedOAuth2ProviderConfig, includedOAuth2ProviderConfig_);
    };
    friend void from_json(const Darabonba::Json& j, OAuth2ProviderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomOAuth2ProviderConfig, customOAuth2ProviderConfig_);
      DARABONBA_PTR_FROM_JSON(IncludedOAuth2ProviderConfig, includedOAuth2ProviderConfig_);
    };
    OAuth2ProviderConfig() = default ;
    OAuth2ProviderConfig(const OAuth2ProviderConfig &) = default ;
    OAuth2ProviderConfig(OAuth2ProviderConfig &&) = default ;
    OAuth2ProviderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OAuth2ProviderConfig() = default ;
    OAuth2ProviderConfig& operator=(const OAuth2ProviderConfig &) = default ;
    OAuth2ProviderConfig& operator=(OAuth2ProviderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customOAuth2ProviderConfig_ == nullptr
        && return this->includedOAuth2ProviderConfig_ == nullptr; };
    // customOAuth2ProviderConfig Field Functions 
    bool hasCustomOAuth2ProviderConfig() const { return this->customOAuth2ProviderConfig_ != nullptr;};
    void deleteCustomOAuth2ProviderConfig() { this->customOAuth2ProviderConfig_ = nullptr;};
    inline const CustomOAuth2ProviderConfig & customOAuth2ProviderConfig() const { DARABONBA_PTR_GET_CONST(customOAuth2ProviderConfig_, CustomOAuth2ProviderConfig) };
    inline CustomOAuth2ProviderConfig customOAuth2ProviderConfig() { DARABONBA_PTR_GET(customOAuth2ProviderConfig_, CustomOAuth2ProviderConfig) };
    inline OAuth2ProviderConfig& setCustomOAuth2ProviderConfig(const CustomOAuth2ProviderConfig & customOAuth2ProviderConfig) { DARABONBA_PTR_SET_VALUE(customOAuth2ProviderConfig_, customOAuth2ProviderConfig) };
    inline OAuth2ProviderConfig& setCustomOAuth2ProviderConfig(CustomOAuth2ProviderConfig && customOAuth2ProviderConfig) { DARABONBA_PTR_SET_RVALUE(customOAuth2ProviderConfig_, customOAuth2ProviderConfig) };


    // includedOAuth2ProviderConfig Field Functions 
    bool hasIncludedOAuth2ProviderConfig() const { return this->includedOAuth2ProviderConfig_ != nullptr;};
    void deleteIncludedOAuth2ProviderConfig() { this->includedOAuth2ProviderConfig_ = nullptr;};
    inline const IncludedOAuth2ProviderConfig & includedOAuth2ProviderConfig() const { DARABONBA_PTR_GET_CONST(includedOAuth2ProviderConfig_, IncludedOAuth2ProviderConfig) };
    inline IncludedOAuth2ProviderConfig includedOAuth2ProviderConfig() { DARABONBA_PTR_GET(includedOAuth2ProviderConfig_, IncludedOAuth2ProviderConfig) };
    inline OAuth2ProviderConfig& setIncludedOAuth2ProviderConfig(const IncludedOAuth2ProviderConfig & includedOAuth2ProviderConfig) { DARABONBA_PTR_SET_VALUE(includedOAuth2ProviderConfig_, includedOAuth2ProviderConfig) };
    inline OAuth2ProviderConfig& setIncludedOAuth2ProviderConfig(IncludedOAuth2ProviderConfig && includedOAuth2ProviderConfig) { DARABONBA_PTR_SET_RVALUE(includedOAuth2ProviderConfig_, includedOAuth2ProviderConfig) };


  protected:
    std::shared_ptr<CustomOAuth2ProviderConfig> customOAuth2ProviderConfig_ = nullptr;
    std::shared_ptr<IncludedOAuth2ProviderConfig> includedOAuth2ProviderConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
