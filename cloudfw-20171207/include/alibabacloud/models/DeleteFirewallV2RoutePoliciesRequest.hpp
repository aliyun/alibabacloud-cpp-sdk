// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFIREWALLV2ROUTEPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFIREWALLV2ROUTEPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteFirewallV2RoutePoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFirewallV2RoutePoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFirewallV2RoutePoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    DeleteFirewallV2RoutePoliciesRequest() = default ;
    DeleteFirewallV2RoutePoliciesRequest(const DeleteFirewallV2RoutePoliciesRequest &) = default ;
    DeleteFirewallV2RoutePoliciesRequest(DeleteFirewallV2RoutePoliciesRequest &&) = default ;
    DeleteFirewallV2RoutePoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFirewallV2RoutePoliciesRequest() = default ;
    DeleteFirewallV2RoutePoliciesRequest& operator=(const DeleteFirewallV2RoutePoliciesRequest &) = default ;
    DeleteFirewallV2RoutePoliciesRequest& operator=(DeleteFirewallV2RoutePoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && this->lang_ == nullptr && this->trFirewallRoutePolicyId_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DeleteFirewallV2RoutePoliciesRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteFirewallV2RoutePoliciesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline DeleteFirewallV2RoutePoliciesRequest& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The instance ID of the VPC firewall.
    shared_ptr<string> firewallId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The ID of the routing policy.
    shared_ptr<string> trFirewallRoutePolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
