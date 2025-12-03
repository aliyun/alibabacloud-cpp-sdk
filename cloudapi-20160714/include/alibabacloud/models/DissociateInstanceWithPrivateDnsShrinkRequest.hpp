// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEINSTANCEWITHPRIVATEDNSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEINSTANCEWITHPRIVATEDNSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DissociateInstanceWithPrivateDNSShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateInstanceWithPrivateDNSShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntranetDomains, intranetDomainsShrink_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateInstanceWithPrivateDNSShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntranetDomains, intranetDomainsShrink_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DissociateInstanceWithPrivateDNSShrinkRequest() = default ;
    DissociateInstanceWithPrivateDNSShrinkRequest(const DissociateInstanceWithPrivateDNSShrinkRequest &) = default ;
    DissociateInstanceWithPrivateDNSShrinkRequest(DissociateInstanceWithPrivateDNSShrinkRequest &&) = default ;
    DissociateInstanceWithPrivateDNSShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateInstanceWithPrivateDNSShrinkRequest() = default ;
    DissociateInstanceWithPrivateDNSShrinkRequest& operator=(const DissociateInstanceWithPrivateDNSShrinkRequest &) = default ;
    DissociateInstanceWithPrivateDNSShrinkRequest& operator=(DissociateInstanceWithPrivateDNSShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intranetDomainsShrink_ == nullptr && return this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DissociateInstanceWithPrivateDNSShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intranetDomainsShrink Field Functions 
    bool hasIntranetDomainsShrink() const { return this->intranetDomainsShrink_ != nullptr;};
    void deleteIntranetDomainsShrink() { this->intranetDomainsShrink_ = nullptr;};
    inline string intranetDomainsShrink() const { DARABONBA_PTR_GET_DEFAULT(intranetDomainsShrink_, "") };
    inline DissociateInstanceWithPrivateDNSShrinkRequest& setIntranetDomainsShrink(string intranetDomainsShrink) { DARABONBA_PTR_SET_VALUE(intranetDomainsShrink_, intranetDomainsShrink) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DissociateInstanceWithPrivateDNSShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The internal domain names included in the resolution.
    // 
    // This parameter is required.
    std::shared_ptr<string> intranetDomainsShrink_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
