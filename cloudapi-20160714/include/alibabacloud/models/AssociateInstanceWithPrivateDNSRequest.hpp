// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEINSTANCEWITHPRIVATEDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEINSTANCEWITHPRIVATEDNSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AssociateInstanceWithPrivateDNSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateInstanceWithPrivateDNSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntranetDomains, intranetDomains_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateInstanceWithPrivateDNSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntranetDomains, intranetDomains_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    AssociateInstanceWithPrivateDNSRequest() = default ;
    AssociateInstanceWithPrivateDNSRequest(const AssociateInstanceWithPrivateDNSRequest &) = default ;
    AssociateInstanceWithPrivateDNSRequest(AssociateInstanceWithPrivateDNSRequest &&) = default ;
    AssociateInstanceWithPrivateDNSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateInstanceWithPrivateDNSRequest() = default ;
    AssociateInstanceWithPrivateDNSRequest& operator=(const AssociateInstanceWithPrivateDNSRequest &) = default ;
    AssociateInstanceWithPrivateDNSRequest& operator=(AssociateInstanceWithPrivateDNSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->intranetDomains_ == nullptr && this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateInstanceWithPrivateDNSRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intranetDomains Field Functions 
    bool hasIntranetDomains() const { return this->intranetDomains_ != nullptr;};
    void deleteIntranetDomains() { this->intranetDomains_ = nullptr;};
    inline const vector<string> & getIntranetDomains() const { DARABONBA_PTR_GET_CONST(intranetDomains_, vector<string>) };
    inline vector<string> getIntranetDomains() { DARABONBA_PTR_GET(intranetDomains_, vector<string>) };
    inline AssociateInstanceWithPrivateDNSRequest& setIntranetDomains(const vector<string> & intranetDomains) { DARABONBA_PTR_SET_VALUE(intranetDomains_, intranetDomains) };
    inline AssociateInstanceWithPrivateDNSRequest& setIntranetDomains(vector<string> && intranetDomains) { DARABONBA_PTR_SET_RVALUE(intranetDomains_, intranetDomains) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AssociateInstanceWithPrivateDNSRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The internal domain names included in the resolution.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> intranetDomains_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
