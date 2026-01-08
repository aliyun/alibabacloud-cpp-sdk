// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2ROUTEPOLICYSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRFIREWALLV2ROUTEPOLICYSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyTrFirewallV2RoutePolicyScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTrFirewallV2RoutePolicyScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTrFirewallV2RoutePolicyScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
    };
    ModifyTrFirewallV2RoutePolicyScopeResponseBody() = default ;
    ModifyTrFirewallV2RoutePolicyScopeResponseBody(const ModifyTrFirewallV2RoutePolicyScopeResponseBody &) = default ;
    ModifyTrFirewallV2RoutePolicyScopeResponseBody(ModifyTrFirewallV2RoutePolicyScopeResponseBody &&) = default ;
    ModifyTrFirewallV2RoutePolicyScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTrFirewallV2RoutePolicyScopeResponseBody() = default ;
    ModifyTrFirewallV2RoutePolicyScopeResponseBody& operator=(const ModifyTrFirewallV2RoutePolicyScopeResponseBody &) = default ;
    ModifyTrFirewallV2RoutePolicyScopeResponseBody& operator=(ModifyTrFirewallV2RoutePolicyScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trFirewallRoutePolicyId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline ModifyTrFirewallV2RoutePolicyScopeResponseBody& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the routing policy.
    shared_ptr<string> trFirewallRoutePolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
