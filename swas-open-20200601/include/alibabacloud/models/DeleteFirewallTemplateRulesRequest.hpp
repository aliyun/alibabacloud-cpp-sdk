// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFIREWALLTEMPLATERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEFIREWALLTEMPLATERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DeleteFirewallTemplateRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFirewallTemplateRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_TO_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFirewallTemplateRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_FROM_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteFirewallTemplateRulesRequest() = default ;
    DeleteFirewallTemplateRulesRequest(const DeleteFirewallTemplateRulesRequest &) = default ;
    DeleteFirewallTemplateRulesRequest(DeleteFirewallTemplateRulesRequest &&) = default ;
    DeleteFirewallTemplateRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFirewallTemplateRulesRequest() = default ;
    DeleteFirewallTemplateRulesRequest& operator=(const DeleteFirewallTemplateRulesRequest &) = default ;
    DeleteFirewallTemplateRulesRequest& operator=(DeleteFirewallTemplateRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->firewallTemplateId_ == nullptr && this->firewallTemplateRuleId_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteFirewallTemplateRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // firewallTemplateId Field Functions 
    bool hasFirewallTemplateId() const { return this->firewallTemplateId_ != nullptr;};
    void deleteFirewallTemplateId() { this->firewallTemplateId_ = nullptr;};
    inline string getFirewallTemplateId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateId_, "") };
    inline DeleteFirewallTemplateRulesRequest& setFirewallTemplateId(string firewallTemplateId) { DARABONBA_PTR_SET_VALUE(firewallTemplateId_, firewallTemplateId) };


    // firewallTemplateRuleId Field Functions 
    bool hasFirewallTemplateRuleId() const { return this->firewallTemplateRuleId_ != nullptr;};
    void deleteFirewallTemplateRuleId() { this->firewallTemplateRuleId_ = nullptr;};
    inline const vector<string> & getFirewallTemplateRuleId() const { DARABONBA_PTR_GET_CONST(firewallTemplateRuleId_, vector<string>) };
    inline vector<string> getFirewallTemplateRuleId() { DARABONBA_PTR_GET(firewallTemplateRuleId_, vector<string>) };
    inline DeleteFirewallTemplateRulesRequest& setFirewallTemplateRuleId(const vector<string> & firewallTemplateRuleId) { DARABONBA_PTR_SET_VALUE(firewallTemplateRuleId_, firewallTemplateRuleId) };
    inline DeleteFirewallTemplateRulesRequest& setFirewallTemplateRuleId(vector<string> && firewallTemplateRuleId) { DARABONBA_PTR_SET_RVALUE(firewallTemplateRuleId_, firewallTemplateRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteFirewallTemplateRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The ID of the firewall template.
    // 
    // This parameter is required.
    shared_ptr<string> firewallTemplateId_ {};
    // The IDs of the firewall template rules.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> firewallTemplateRuleId_ {};
    // The region ID of the simple application server. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
