// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPCONTROLPOLICYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPCONTROLPOLICYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyIpControlPolicyItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIpControlPolicyItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(PolicyItemId, policyItemId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIpControlPolicyItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(PolicyItemId, policyItemId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyIpControlPolicyItemRequest() = default ;
    ModifyIpControlPolicyItemRequest(const ModifyIpControlPolicyItemRequest &) = default ;
    ModifyIpControlPolicyItemRequest(ModifyIpControlPolicyItemRequest &&) = default ;
    ModifyIpControlPolicyItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIpControlPolicyItemRequest() = default ;
    ModifyIpControlPolicyItemRequest& operator=(const ModifyIpControlPolicyItemRequest &) = default ;
    ModifyIpControlPolicyItemRequest& operator=(ModifyIpControlPolicyItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->cidrIp_ == nullptr && this->ipControlId_ == nullptr && this->policyItemId_ == nullptr && this->securityToken_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyIpControlPolicyItemRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cidrIp Field Functions 
    bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
    void deleteCidrIp() { this->cidrIp_ = nullptr;};
    inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
    inline ModifyIpControlPolicyItemRequest& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string getIpControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline ModifyIpControlPolicyItemRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // policyItemId Field Functions 
    bool hasPolicyItemId() const { return this->policyItemId_ != nullptr;};
    void deletePolicyItemId() { this->policyItemId_ = nullptr;};
    inline string getPolicyItemId() const { DARABONBA_PTR_GET_DEFAULT(policyItemId_, "") };
    inline ModifyIpControlPolicyItemRequest& setPolicyItemId(string policyItemId) { DARABONBA_PTR_SET_VALUE(policyItemId_, policyItemId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyIpControlPolicyItemRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the application that is restricted by the policy. You can configure the AppId parameter only when the value of the IpControlType parameter is ALLOW.
    // 
    // *   You can add only one application ID at a time.
    // *   If this parameter is empty, no applications are restricted.
    // *   If this parameter is not empty, not only IP addresses but also applications are restricted.
    // *   If this parameter is not empty and no security authentication method is specified for the API, all API calls are restricted.
    // *   If the value of the IpControlType parameter is REFUSE and the AppId parameter is not empty, API Gateway automatically ignores the AppId parameter and restricts only the IP addresses.
    shared_ptr<string> appId_ {};
    // The IP address or CIDR block that is defined in a policy. Separate multiple IP addresses or CIDR blocks with semicolons (;). You can add a maximum of 10 IP addresses or CIDR blocks.
    // 
    // This parameter is required.
    shared_ptr<string> cidrIp_ {};
    // The ID of the ACL. The ID is unique.
    // 
    // This parameter is required.
    shared_ptr<string> ipControlId_ {};
    // The ID of the policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyItemId_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
