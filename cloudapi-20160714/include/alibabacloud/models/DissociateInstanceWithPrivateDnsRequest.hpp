// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATEINSTANCEWITHPRIVATEDNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATEINSTANCEWITHPRIVATEDNSREQUEST_HPP_
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
  class DissociateInstanceWithPrivateDNSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateInstanceWithPrivateDNSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntranetDomains, intranetDomains_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateInstanceWithPrivateDNSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntranetDomains, intranetDomains_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DissociateInstanceWithPrivateDNSRequest() = default ;
    DissociateInstanceWithPrivateDNSRequest(const DissociateInstanceWithPrivateDNSRequest &) = default ;
    DissociateInstanceWithPrivateDNSRequest(DissociateInstanceWithPrivateDNSRequest &&) = default ;
    DissociateInstanceWithPrivateDNSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateInstanceWithPrivateDNSRequest() = default ;
    DissociateInstanceWithPrivateDNSRequest& operator=(const DissociateInstanceWithPrivateDNSRequest &) = default ;
    DissociateInstanceWithPrivateDNSRequest& operator=(DissociateInstanceWithPrivateDNSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->intranetDomains_ == nullptr && return this->securityToken_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DissociateInstanceWithPrivateDNSRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intranetDomains Field Functions 
    bool hasIntranetDomains() const { return this->intranetDomains_ != nullptr;};
    void deleteIntranetDomains() { this->intranetDomains_ = nullptr;};
    inline const vector<string> & intranetDomains() const { DARABONBA_PTR_GET_CONST(intranetDomains_, vector<string>) };
    inline vector<string> intranetDomains() { DARABONBA_PTR_GET(intranetDomains_, vector<string>) };
    inline DissociateInstanceWithPrivateDNSRequest& setIntranetDomains(const vector<string> & intranetDomains) { DARABONBA_PTR_SET_VALUE(intranetDomains_, intranetDomains) };
    inline DissociateInstanceWithPrivateDNSRequest& setIntranetDomains(vector<string> && intranetDomains) { DARABONBA_PTR_SET_RVALUE(intranetDomains_, intranetDomains) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DissociateInstanceWithPrivateDNSRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The internal domain names included in the resolution.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> intranetDomains_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
