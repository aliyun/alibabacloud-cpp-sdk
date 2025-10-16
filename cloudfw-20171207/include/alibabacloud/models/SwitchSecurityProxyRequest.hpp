// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSECURITYPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSECURITYPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class SwitchSecurityProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSecurityProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSecurityProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
    };
    SwitchSecurityProxyRequest() = default ;
    SwitchSecurityProxyRequest(const SwitchSecurityProxyRequest &) = default ;
    SwitchSecurityProxyRequest(SwitchSecurityProxyRequest &&) = default ;
    SwitchSecurityProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSecurityProxyRequest() = default ;
    SwitchSecurityProxyRequest& operator=(const SwitchSecurityProxyRequest &) = default ;
    SwitchSecurityProxyRequest& operator=(SwitchSecurityProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->proxyId_ == nullptr && return this->switch_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SwitchSecurityProxyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline SwitchSecurityProxyRequest& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline string _switch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
    inline SwitchSecurityProxyRequest& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


  protected:
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the NAT firewall.
    // 
    // This parameter is required.
    std::shared_ptr<string> proxyId_ = nullptr;
    // Specifies whether to enable the NAT firewall. Valid values:
    // 
    // *   open: yes
    // *   close: no
    // 
    // This parameter is required.
    std::shared_ptr<string> switch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
