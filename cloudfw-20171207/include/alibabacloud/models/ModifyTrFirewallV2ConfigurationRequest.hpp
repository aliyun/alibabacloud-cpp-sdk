// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2CONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2CONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyTrFirewallV2ConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTrFirewallV2ConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTrFirewallV2ConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(FirewallName, firewallName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ModifyTrFirewallV2ConfigurationRequest() = default ;
    ModifyTrFirewallV2ConfigurationRequest(const ModifyTrFirewallV2ConfigurationRequest &) = default ;
    ModifyTrFirewallV2ConfigurationRequest(ModifyTrFirewallV2ConfigurationRequest &&) = default ;
    ModifyTrFirewallV2ConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTrFirewallV2ConfigurationRequest() = default ;
    ModifyTrFirewallV2ConfigurationRequest& operator=(const ModifyTrFirewallV2ConfigurationRequest &) = default ;
    ModifyTrFirewallV2ConfigurationRequest& operator=(ModifyTrFirewallV2ConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && this->firewallName_ == nullptr && this->lang_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline ModifyTrFirewallV2ConfigurationRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // firewallName Field Functions 
    bool hasFirewallName() const { return this->firewallName_ != nullptr;};
    void deleteFirewallName() { this->firewallName_ = nullptr;};
    inline string getFirewallName() const { DARABONBA_PTR_GET_DEFAULT(firewallName_, "") };
    inline ModifyTrFirewallV2ConfigurationRequest& setFirewallName(string firewallName) { DARABONBA_PTR_SET_VALUE(firewallName_, firewallName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyTrFirewallV2ConfigurationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The instance ID of the VPC firewall.
    shared_ptr<string> firewallId_ {};
    // The instance name of the VPC firewall.
    shared_ptr<string> firewallName_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
