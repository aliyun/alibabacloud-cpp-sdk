// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGS_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafSiteSettingsAddBotProtectionHeaders.hpp>
#include <alibabacloud/models/WafSiteSettingsAddSecurityHeaders.hpp>
#include <alibabacloud/models/WafSiteSettingsBandwidthAbuseProtection.hpp>
#include <alibabacloud/models/WafSiteSettingsBotManagement.hpp>
#include <alibabacloud/models/WafSiteSettingsClientIpIdentifier.hpp>
#include <alibabacloud/models/WafSiteSettingsDisableSecurityModule.hpp>
#include <alibabacloud/models/WafSiteSettingsSecurityLevel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AddBotProtectionHeaders, addBotProtectionHeaders_);
      DARABONBA_PTR_TO_JSON(AddSecurityHeaders, addSecurityHeaders_);
      DARABONBA_PTR_TO_JSON(BandwidthAbuseProtection, bandwidthAbuseProtection_);
      DARABONBA_PTR_TO_JSON(BotManagement, botManagement_);
      DARABONBA_PTR_TO_JSON(ClientIpIdentifier, clientIpIdentifier_);
      DARABONBA_PTR_TO_JSON(DisableSecurityModule, disableSecurityModule_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AddBotProtectionHeaders, addBotProtectionHeaders_);
      DARABONBA_PTR_FROM_JSON(AddSecurityHeaders, addSecurityHeaders_);
      DARABONBA_PTR_FROM_JSON(BandwidthAbuseProtection, bandwidthAbuseProtection_);
      DARABONBA_PTR_FROM_JSON(BotManagement, botManagement_);
      DARABONBA_PTR_FROM_JSON(ClientIpIdentifier, clientIpIdentifier_);
      DARABONBA_PTR_FROM_JSON(DisableSecurityModule, disableSecurityModule_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    WafSiteSettings() = default ;
    WafSiteSettings(const WafSiteSettings &) = default ;
    WafSiteSettings(WafSiteSettings &&) = default ;
    WafSiteSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettings() = default ;
    WafSiteSettings& operator=(const WafSiteSettings &) = default ;
    WafSiteSettings& operator=(WafSiteSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addBotProtectionHeaders_ != nullptr
        && this->addSecurityHeaders_ != nullptr && this->bandwidthAbuseProtection_ != nullptr && this->botManagement_ != nullptr && this->clientIpIdentifier_ != nullptr && this->disableSecurityModule_ != nullptr
        && this->securityLevel_ != nullptr; };
    // addBotProtectionHeaders Field Functions 
    bool hasAddBotProtectionHeaders() const { return this->addBotProtectionHeaders_ != nullptr;};
    void deleteAddBotProtectionHeaders() { this->addBotProtectionHeaders_ = nullptr;};
    inline const WafSiteSettingsAddBotProtectionHeaders & addBotProtectionHeaders() const { DARABONBA_PTR_GET_CONST(addBotProtectionHeaders_, WafSiteSettingsAddBotProtectionHeaders) };
    inline WafSiteSettingsAddBotProtectionHeaders addBotProtectionHeaders() { DARABONBA_PTR_GET(addBotProtectionHeaders_, WafSiteSettingsAddBotProtectionHeaders) };
    inline WafSiteSettings& setAddBotProtectionHeaders(const WafSiteSettingsAddBotProtectionHeaders & addBotProtectionHeaders) { DARABONBA_PTR_SET_VALUE(addBotProtectionHeaders_, addBotProtectionHeaders) };
    inline WafSiteSettings& setAddBotProtectionHeaders(WafSiteSettingsAddBotProtectionHeaders && addBotProtectionHeaders) { DARABONBA_PTR_SET_RVALUE(addBotProtectionHeaders_, addBotProtectionHeaders) };


    // addSecurityHeaders Field Functions 
    bool hasAddSecurityHeaders() const { return this->addSecurityHeaders_ != nullptr;};
    void deleteAddSecurityHeaders() { this->addSecurityHeaders_ = nullptr;};
    inline const WafSiteSettingsAddSecurityHeaders & addSecurityHeaders() const { DARABONBA_PTR_GET_CONST(addSecurityHeaders_, WafSiteSettingsAddSecurityHeaders) };
    inline WafSiteSettingsAddSecurityHeaders addSecurityHeaders() { DARABONBA_PTR_GET(addSecurityHeaders_, WafSiteSettingsAddSecurityHeaders) };
    inline WafSiteSettings& setAddSecurityHeaders(const WafSiteSettingsAddSecurityHeaders & addSecurityHeaders) { DARABONBA_PTR_SET_VALUE(addSecurityHeaders_, addSecurityHeaders) };
    inline WafSiteSettings& setAddSecurityHeaders(WafSiteSettingsAddSecurityHeaders && addSecurityHeaders) { DARABONBA_PTR_SET_RVALUE(addSecurityHeaders_, addSecurityHeaders) };


    // bandwidthAbuseProtection Field Functions 
    bool hasBandwidthAbuseProtection() const { return this->bandwidthAbuseProtection_ != nullptr;};
    void deleteBandwidthAbuseProtection() { this->bandwidthAbuseProtection_ = nullptr;};
    inline const WafSiteSettingsBandwidthAbuseProtection & bandwidthAbuseProtection() const { DARABONBA_PTR_GET_CONST(bandwidthAbuseProtection_, WafSiteSettingsBandwidthAbuseProtection) };
    inline WafSiteSettingsBandwidthAbuseProtection bandwidthAbuseProtection() { DARABONBA_PTR_GET(bandwidthAbuseProtection_, WafSiteSettingsBandwidthAbuseProtection) };
    inline WafSiteSettings& setBandwidthAbuseProtection(const WafSiteSettingsBandwidthAbuseProtection & bandwidthAbuseProtection) { DARABONBA_PTR_SET_VALUE(bandwidthAbuseProtection_, bandwidthAbuseProtection) };
    inline WafSiteSettings& setBandwidthAbuseProtection(WafSiteSettingsBandwidthAbuseProtection && bandwidthAbuseProtection) { DARABONBA_PTR_SET_RVALUE(bandwidthAbuseProtection_, bandwidthAbuseProtection) };


    // botManagement Field Functions 
    bool hasBotManagement() const { return this->botManagement_ != nullptr;};
    void deleteBotManagement() { this->botManagement_ = nullptr;};
    inline const WafSiteSettingsBotManagement & botManagement() const { DARABONBA_PTR_GET_CONST(botManagement_, WafSiteSettingsBotManagement) };
    inline WafSiteSettingsBotManagement botManagement() { DARABONBA_PTR_GET(botManagement_, WafSiteSettingsBotManagement) };
    inline WafSiteSettings& setBotManagement(const WafSiteSettingsBotManagement & botManagement) { DARABONBA_PTR_SET_VALUE(botManagement_, botManagement) };
    inline WafSiteSettings& setBotManagement(WafSiteSettingsBotManagement && botManagement) { DARABONBA_PTR_SET_RVALUE(botManagement_, botManagement) };


    // clientIpIdentifier Field Functions 
    bool hasClientIpIdentifier() const { return this->clientIpIdentifier_ != nullptr;};
    void deleteClientIpIdentifier() { this->clientIpIdentifier_ = nullptr;};
    inline const WafSiteSettingsClientIpIdentifier & clientIpIdentifier() const { DARABONBA_PTR_GET_CONST(clientIpIdentifier_, WafSiteSettingsClientIpIdentifier) };
    inline WafSiteSettingsClientIpIdentifier clientIpIdentifier() { DARABONBA_PTR_GET(clientIpIdentifier_, WafSiteSettingsClientIpIdentifier) };
    inline WafSiteSettings& setClientIpIdentifier(const WafSiteSettingsClientIpIdentifier & clientIpIdentifier) { DARABONBA_PTR_SET_VALUE(clientIpIdentifier_, clientIpIdentifier) };
    inline WafSiteSettings& setClientIpIdentifier(WafSiteSettingsClientIpIdentifier && clientIpIdentifier) { DARABONBA_PTR_SET_RVALUE(clientIpIdentifier_, clientIpIdentifier) };


    // disableSecurityModule Field Functions 
    bool hasDisableSecurityModule() const { return this->disableSecurityModule_ != nullptr;};
    void deleteDisableSecurityModule() { this->disableSecurityModule_ = nullptr;};
    inline const WafSiteSettingsDisableSecurityModule & disableSecurityModule() const { DARABONBA_PTR_GET_CONST(disableSecurityModule_, WafSiteSettingsDisableSecurityModule) };
    inline WafSiteSettingsDisableSecurityModule disableSecurityModule() { DARABONBA_PTR_GET(disableSecurityModule_, WafSiteSettingsDisableSecurityModule) };
    inline WafSiteSettings& setDisableSecurityModule(const WafSiteSettingsDisableSecurityModule & disableSecurityModule) { DARABONBA_PTR_SET_VALUE(disableSecurityModule_, disableSecurityModule) };
    inline WafSiteSettings& setDisableSecurityModule(WafSiteSettingsDisableSecurityModule && disableSecurityModule) { DARABONBA_PTR_SET_RVALUE(disableSecurityModule_, disableSecurityModule) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline const WafSiteSettingsSecurityLevel & securityLevel() const { DARABONBA_PTR_GET_CONST(securityLevel_, WafSiteSettingsSecurityLevel) };
    inline WafSiteSettingsSecurityLevel securityLevel() { DARABONBA_PTR_GET(securityLevel_, WafSiteSettingsSecurityLevel) };
    inline WafSiteSettings& setSecurityLevel(const WafSiteSettingsSecurityLevel & securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };
    inline WafSiteSettings& setSecurityLevel(WafSiteSettingsSecurityLevel && securityLevel) { DARABONBA_PTR_SET_RVALUE(securityLevel_, securityLevel) };


  protected:
    std::shared_ptr<WafSiteSettingsAddBotProtectionHeaders> addBotProtectionHeaders_ = nullptr;
    std::shared_ptr<WafSiteSettingsAddSecurityHeaders> addSecurityHeaders_ = nullptr;
    std::shared_ptr<WafSiteSettingsBandwidthAbuseProtection> bandwidthAbuseProtection_ = nullptr;
    std::shared_ptr<WafSiteSettingsBotManagement> botManagement_ = nullptr;
    std::shared_ptr<WafSiteSettingsClientIpIdentifier> clientIpIdentifier_ = nullptr;
    std::shared_ptr<WafSiteSettingsDisableSecurityModule> disableSecurityModule_ = nullptr;
    std::shared_ptr<WafSiteSettingsSecurityLevel> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
