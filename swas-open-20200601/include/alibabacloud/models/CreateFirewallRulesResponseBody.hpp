// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLRULESRESPONSEBODY_HPP_
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
  class CreateFirewallRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallRuleIds, firewallRuleIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallRuleIds, firewallRuleIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFirewallRulesResponseBody() = default ;
    CreateFirewallRulesResponseBody(const CreateFirewallRulesResponseBody &) = default ;
    CreateFirewallRulesResponseBody(CreateFirewallRulesResponseBody &&) = default ;
    CreateFirewallRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallRulesResponseBody() = default ;
    CreateFirewallRulesResponseBody& operator=(const CreateFirewallRulesResponseBody &) = default ;
    CreateFirewallRulesResponseBody& operator=(CreateFirewallRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallRuleIds_ == nullptr
        && this->requestId_ == nullptr; };
    // firewallRuleIds Field Functions 
    bool hasFirewallRuleIds() const { return this->firewallRuleIds_ != nullptr;};
    void deleteFirewallRuleIds() { this->firewallRuleIds_ = nullptr;};
    inline const vector<string> & getFirewallRuleIds() const { DARABONBA_PTR_GET_CONST(firewallRuleIds_, vector<string>) };
    inline vector<string> getFirewallRuleIds() { DARABONBA_PTR_GET(firewallRuleIds_, vector<string>) };
    inline CreateFirewallRulesResponseBody& setFirewallRuleIds(const vector<string> & firewallRuleIds) { DARABONBA_PTR_SET_VALUE(firewallRuleIds_, firewallRuleIds) };
    inline CreateFirewallRulesResponseBody& setFirewallRuleIds(vector<string> && firewallRuleIds) { DARABONBA_PTR_SET_RVALUE(firewallRuleIds_, firewallRuleIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFirewallRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of firewall rule IDs.
    shared_ptr<vector<string>> firewallRuleIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
