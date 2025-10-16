// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRFIREWALLV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRFIREWALLV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteTrFirewallV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTrFirewallV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTrFirewallV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DeleteTrFirewallV2Request() = default ;
    DeleteTrFirewallV2Request(const DeleteTrFirewallV2Request &) = default ;
    DeleteTrFirewallV2Request(DeleteTrFirewallV2Request &&) = default ;
    DeleteTrFirewallV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTrFirewallV2Request() = default ;
    DeleteTrFirewallV2Request& operator=(const DeleteTrFirewallV2Request &) = default ;
    DeleteTrFirewallV2Request& operator=(DeleteTrFirewallV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && return this->lang_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string firewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DeleteTrFirewallV2Request& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteTrFirewallV2Request& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The instance ID of the VPC firewall.
    std::shared_ptr<string> firewallId_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
