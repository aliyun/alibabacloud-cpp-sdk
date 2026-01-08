// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2DETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2DETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2DetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2DetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2DetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeTrFirewallsV2DetailRequest() = default ;
    DescribeTrFirewallsV2DetailRequest(const DescribeTrFirewallsV2DetailRequest &) = default ;
    DescribeTrFirewallsV2DetailRequest(DescribeTrFirewallsV2DetailRequest &&) = default ;
    DescribeTrFirewallsV2DetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2DetailRequest() = default ;
    DescribeTrFirewallsV2DetailRequest& operator=(const DescribeTrFirewallsV2DetailRequest &) = default ;
    DescribeTrFirewallsV2DetailRequest& operator=(DescribeTrFirewallsV2DetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallId_ == nullptr
        && this->lang_ == nullptr; };
    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeTrFirewallsV2DetailRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTrFirewallsV2DetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The instance ID of the VPC firewall.
    shared_ptr<string> firewallId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
