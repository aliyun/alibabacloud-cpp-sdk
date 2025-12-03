// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEIPCONTROLPOLICYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEIPCONTROLPOLICYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveIpControlPolicyItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveIpControlPolicyItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(PolicyItemIds, policyItemIds_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveIpControlPolicyItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(PolicyItemIds, policyItemIds_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    RemoveIpControlPolicyItemRequest() = default ;
    RemoveIpControlPolicyItemRequest(const RemoveIpControlPolicyItemRequest &) = default ;
    RemoveIpControlPolicyItemRequest(RemoveIpControlPolicyItemRequest &&) = default ;
    RemoveIpControlPolicyItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveIpControlPolicyItemRequest() = default ;
    RemoveIpControlPolicyItemRequest& operator=(const RemoveIpControlPolicyItemRequest &) = default ;
    RemoveIpControlPolicyItemRequest& operator=(RemoveIpControlPolicyItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipControlId_ == nullptr
        && return this->policyItemIds_ == nullptr && return this->securityToken_ == nullptr; };
    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline RemoveIpControlPolicyItemRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // policyItemIds Field Functions 
    bool hasPolicyItemIds() const { return this->policyItemIds_ != nullptr;};
    void deletePolicyItemIds() { this->policyItemIds_ = nullptr;};
    inline string policyItemIds() const { DARABONBA_PTR_GET_DEFAULT(policyItemIds_, "") };
    inline RemoveIpControlPolicyItemRequest& setPolicyItemIds(string policyItemIds) { DARABONBA_PTR_SET_VALUE(policyItemIds_, policyItemIds) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RemoveIpControlPolicyItemRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the ACL. The ID is unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlId_ = nullptr;
    // The ID of a policy. Separate multiple IDs with semicolons (;). A maximum of 100 IDs can be entered.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyItemIds_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
