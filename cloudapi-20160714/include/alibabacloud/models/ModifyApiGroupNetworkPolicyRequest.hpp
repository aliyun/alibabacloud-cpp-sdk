// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPIGROUPNETWORKPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPIGROUPNETWORKPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyApiGroupNetworkPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApiGroupNetworkPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(InnerDomainEnable, innerDomainEnable_);
      DARABONBA_PTR_TO_JSON(InternetEnable, internetEnable_);
      DARABONBA_PTR_TO_JSON(InternetIPV6Enable, internetIPV6Enable_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(VpcIntranetEnable, vpcIntranetEnable_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApiGroupNetworkPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(InnerDomainEnable, innerDomainEnable_);
      DARABONBA_PTR_FROM_JSON(InternetEnable, internetEnable_);
      DARABONBA_PTR_FROM_JSON(InternetIPV6Enable, internetIPV6Enable_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(VpcIntranetEnable, vpcIntranetEnable_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetEnable, vpcSlbIntranetEnable_);
    };
    ModifyApiGroupNetworkPolicyRequest() = default ;
    ModifyApiGroupNetworkPolicyRequest(const ModifyApiGroupNetworkPolicyRequest &) = default ;
    ModifyApiGroupNetworkPolicyRequest(ModifyApiGroupNetworkPolicyRequest &&) = default ;
    ModifyApiGroupNetworkPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApiGroupNetworkPolicyRequest() = default ;
    ModifyApiGroupNetworkPolicyRequest& operator=(const ModifyApiGroupNetworkPolicyRequest &) = default ;
    ModifyApiGroupNetworkPolicyRequest& operator=(ModifyApiGroupNetworkPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->httpsPolicy_ == nullptr && this->innerDomainEnable_ == nullptr && this->internetEnable_ == nullptr && this->internetIPV6Enable_ == nullptr && this->securityToken_ == nullptr
        && this->vpcIntranetEnable_ == nullptr && this->vpcSlbIntranetEnable_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyApiGroupNetworkPolicyRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string getHttpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline ModifyApiGroupNetworkPolicyRequest& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // innerDomainEnable Field Functions 
    bool hasInnerDomainEnable() const { return this->innerDomainEnable_ != nullptr;};
    void deleteInnerDomainEnable() { this->innerDomainEnable_ = nullptr;};
    inline bool getInnerDomainEnable() const { DARABONBA_PTR_GET_DEFAULT(innerDomainEnable_, false) };
    inline ModifyApiGroupNetworkPolicyRequest& setInnerDomainEnable(bool innerDomainEnable) { DARABONBA_PTR_SET_VALUE(innerDomainEnable_, innerDomainEnable) };


    // internetEnable Field Functions 
    bool hasInternetEnable() const { return this->internetEnable_ != nullptr;};
    void deleteInternetEnable() { this->internetEnable_ = nullptr;};
    inline bool getInternetEnable() const { DARABONBA_PTR_GET_DEFAULT(internetEnable_, false) };
    inline ModifyApiGroupNetworkPolicyRequest& setInternetEnable(bool internetEnable) { DARABONBA_PTR_SET_VALUE(internetEnable_, internetEnable) };


    // internetIPV6Enable Field Functions 
    bool hasInternetIPV6Enable() const { return this->internetIPV6Enable_ != nullptr;};
    void deleteInternetIPV6Enable() { this->internetIPV6Enable_ = nullptr;};
    inline bool getInternetIPV6Enable() const { DARABONBA_PTR_GET_DEFAULT(internetIPV6Enable_, false) };
    inline ModifyApiGroupNetworkPolicyRequest& setInternetIPV6Enable(bool internetIPV6Enable) { DARABONBA_PTR_SET_VALUE(internetIPV6Enable_, internetIPV6Enable) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyApiGroupNetworkPolicyRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // vpcIntranetEnable Field Functions 
    bool hasVpcIntranetEnable() const { return this->vpcIntranetEnable_ != nullptr;};
    void deleteVpcIntranetEnable() { this->vpcIntranetEnable_ = nullptr;};
    inline bool getVpcIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcIntranetEnable_, false) };
    inline ModifyApiGroupNetworkPolicyRequest& setVpcIntranetEnable(bool vpcIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcIntranetEnable_, vpcIntranetEnable) };


    // vpcSlbIntranetEnable Field Functions 
    bool hasVpcSlbIntranetEnable() const { return this->vpcSlbIntranetEnable_ != nullptr;};
    void deleteVpcSlbIntranetEnable() { this->vpcSlbIntranetEnable_ = nullptr;};
    inline bool getVpcSlbIntranetEnable() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetEnable_, false) };
    inline ModifyApiGroupNetworkPolicyRequest& setVpcSlbIntranetEnable(bool vpcSlbIntranetEnable) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetEnable_, vpcSlbIntranetEnable) };


  protected:
    // The ID of the API group.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The HTTPS security policy.
    shared_ptr<string> httpsPolicy_ {};
    // Specifies whether to disable the public second-level domain name.
    shared_ptr<bool> innerDomainEnable_ {};
    // Specifies whether to enable the virtual private cloud (VPC) second-level domain name.
    shared_ptr<bool> internetEnable_ {};
    // Specifies whether to enable IPv6. Valid values: **true** and **false**.
    shared_ptr<bool> internetIPV6Enable_ {};
    shared_ptr<string> securityToken_ {};
    // Specifies whether to enable the VPC domain name. Valid values:
    // 
    // *   TRUE
    // *   FALSE
    shared_ptr<bool> vpcIntranetEnable_ {};
    // Specifies whether to enable the self-calling domain name.
    shared_ptr<bool> vpcSlbIntranetEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
