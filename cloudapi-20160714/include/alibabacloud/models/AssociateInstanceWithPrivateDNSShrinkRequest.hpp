// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEINSTANCEWITHPRIVATEDNSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEINSTANCEWITHPRIVATEDNSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AssociateInstanceWithPrivateDNSShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateInstanceWithPrivateDNSShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntranetDomains, intranetDomainsShrink_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateInstanceWithPrivateDNSShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntranetDomains, intranetDomainsShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    AssociateInstanceWithPrivateDNSShrinkRequest() = default ;
    AssociateInstanceWithPrivateDNSShrinkRequest(const AssociateInstanceWithPrivateDNSShrinkRequest &) = default ;
    AssociateInstanceWithPrivateDNSShrinkRequest(AssociateInstanceWithPrivateDNSShrinkRequest &&) = default ;
    AssociateInstanceWithPrivateDNSShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateInstanceWithPrivateDNSShrinkRequest() = default ;
    AssociateInstanceWithPrivateDNSShrinkRequest& operator=(const AssociateInstanceWithPrivateDNSShrinkRequest &) = default ;
    AssociateInstanceWithPrivateDNSShrinkRequest& operator=(AssociateInstanceWithPrivateDNSShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->intranetDomainsShrink_ == nullptr && this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateInstanceWithPrivateDNSShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intranetDomainsShrink Field Functions 
    bool hasIntranetDomainsShrink() const { return this->intranetDomainsShrink_ != nullptr;};
    void deleteIntranetDomainsShrink() { this->intranetDomainsShrink_ = nullptr;};
    inline string getIntranetDomainsShrink() const { DARABONBA_PTR_GET_DEFAULT(intranetDomainsShrink_, "") };
    inline AssociateInstanceWithPrivateDNSShrinkRequest& setIntranetDomainsShrink(string intranetDomainsShrink) { DARABONBA_PTR_SET_VALUE(intranetDomainsShrink_, intranetDomainsShrink) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AssociateInstanceWithPrivateDNSShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The internal domain names included in the resolution.
    // 
    // This parameter is required.
    shared_ptr<string> intranetDomainsShrink_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
