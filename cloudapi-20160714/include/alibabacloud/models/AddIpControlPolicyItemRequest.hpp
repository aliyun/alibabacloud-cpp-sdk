// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPCONTROLPOLICYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIPCONTROLPOLICYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AddIpControlPolicyItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpControlPolicyItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpControlPolicyItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    AddIpControlPolicyItemRequest() = default ;
    AddIpControlPolicyItemRequest(const AddIpControlPolicyItemRequest &) = default ;
    AddIpControlPolicyItemRequest(AddIpControlPolicyItemRequest &&) = default ;
    AddIpControlPolicyItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpControlPolicyItemRequest() = default ;
    AddIpControlPolicyItemRequest& operator=(const AddIpControlPolicyItemRequest &) = default ;
    AddIpControlPolicyItemRequest& operator=(AddIpControlPolicyItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->cidrIp_ == nullptr && this->ipControlId_ == nullptr && this->securityToken_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AddIpControlPolicyItemRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cidrIp Field Functions 
    bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
    void deleteCidrIp() { this->cidrIp_ = nullptr;};
    inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
    inline AddIpControlPolicyItemRequest& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string getIpControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline AddIpControlPolicyItemRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddIpControlPolicyItemRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The restriction policy on app IDs for a specific policy. You can restrict app IDs only for whitelists. The IpControlType values of whitelists are ALLOW.
    // 
    // *   You can add only one app ID restriction policy at a time.
    // *   If this parameter is empty, no restriction is imposed on the app IDs.
    // *   If this parameter is not empty, there is restriction not only on IP addresses, but also on apps.
    // *   Please note that if this parameter is not empty and the security authentication method of the API is No Authentication, all API calls are restricted.
    // *   If this parameter is not empty for a blacklist, API Gateway automatically skips this parameter and sets only restriction on IP addresses. The IpControlType value of a blacklist is REFUSE.
    shared_ptr<string> appId_ {};
    // The IP addresses or CIDR blocks involved in the policy. Separate multiple IP addresses or CIDR blocks with semicolons (;). You can specify a maximum of 10 IP addresses or CIDR blocks.
    // 
    // This parameter is required.
    shared_ptr<string> cidrIp_ {};
    // The ID of the ACL. The ID is unique.
    // 
    // This parameter is required.
    shared_ptr<string> ipControlId_ {};
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
