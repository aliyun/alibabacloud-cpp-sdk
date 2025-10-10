// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYACLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerAttributeResponseBodyAclConfigAclRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AclRelations, aclRelations_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AclRelations, aclRelations_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
    };
    GetListenerAttributeResponseBodyAclConfig() = default ;
    GetListenerAttributeResponseBodyAclConfig(const GetListenerAttributeResponseBodyAclConfig &) = default ;
    GetListenerAttributeResponseBodyAclConfig(GetListenerAttributeResponseBodyAclConfig &&) = default ;
    GetListenerAttributeResponseBodyAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyAclConfig() = default ;
    GetListenerAttributeResponseBodyAclConfig& operator=(const GetListenerAttributeResponseBodyAclConfig &) = default ;
    GetListenerAttributeResponseBodyAclConfig& operator=(GetListenerAttributeResponseBodyAclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclRelations_ != nullptr
        && this->aclType_ != nullptr; };
    // aclRelations Field Functions 
    bool hasAclRelations() const { return this->aclRelations_ != nullptr;};
    void deleteAclRelations() { this->aclRelations_ = nullptr;};
    inline const vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations> & aclRelations() const { DARABONBA_PTR_GET_CONST(aclRelations_, vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations>) };
    inline vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations> aclRelations() { DARABONBA_PTR_GET(aclRelations_, vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations>) };
    inline GetListenerAttributeResponseBodyAclConfig& setAclRelations(const vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations> & aclRelations) { DARABONBA_PTR_SET_VALUE(aclRelations_, aclRelations) };
    inline GetListenerAttributeResponseBodyAclConfig& setAclRelations(vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations> && aclRelations) { DARABONBA_PTR_SET_RVALUE(aclRelations_, aclRelations) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline GetListenerAttributeResponseBodyAclConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


  protected:
    // The IDs of the ACLs that are associated with the listener.
    std::shared_ptr<vector<Models::GetListenerAttributeResponseBodyAclConfigAclRelations>> aclRelations_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **White**: a whitelist. Only requests from the IP addresses or CIDR blocks in the network ACL are forwarded. Whitelists are applicable to scenarios in which you want to allow only specific IP addresses to access an application. Your service may be adversely affected if the whitelist is not properly configured. If a whitelist is configured for a listener, only requests from IP addresses that are on the whitelist are forwarded by the listener.
    // 
    //     If you enable a whitelist but do not add an IP address to the whitelist, the listener forwards all requests.
    // 
    // *   **Black**: a blacklist. Requests from the IP addresses or CIDR blocks in the network ACL are denied. Blacklists are suitable for scenarios in which you want to deny access from specific IP addresses or CIDR blocks to an application.
    // 
    //     If a blacklist is configured for a listener but no IP addresses are added to the blacklist, the listener forwards all requests.
    std::shared_ptr<string> aclType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
