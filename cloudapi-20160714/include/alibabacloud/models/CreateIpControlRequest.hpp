// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPCONTROLREQUEST_HPP_
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
  class CreateIpControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_TO_JSON(IpControlPolicys, ipControlPolicys_);
      DARABONBA_PTR_TO_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_FROM_JSON(IpControlPolicys, ipControlPolicys_);
      DARABONBA_PTR_FROM_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    CreateIpControlRequest() = default ;
    CreateIpControlRequest(const CreateIpControlRequest &) = default ;
    CreateIpControlRequest(CreateIpControlRequest &&) = default ;
    CreateIpControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpControlRequest() = default ;
    CreateIpControlRequest& operator=(const CreateIpControlRequest &) = default ;
    CreateIpControlRequest& operator=(CreateIpControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpControlPolicys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpControlPolicys& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      };
      friend void from_json(const Darabonba::Json& j, IpControlPolicys& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      };
      IpControlPolicys() = default ;
      IpControlPolicys(const IpControlPolicys &) = default ;
      IpControlPolicys(IpControlPolicys &&) = default ;
      IpControlPolicys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpControlPolicys() = default ;
      IpControlPolicys& operator=(const IpControlPolicys &) = default ;
      IpControlPolicys& operator=(IpControlPolicys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->cidrIp_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline IpControlPolicys& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // cidrIp Field Functions 
      bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
      void deleteCidrIp() { this->cidrIp_ = nullptr;};
      inline string getCidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
      inline IpControlPolicys& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    protected:
      // The ID of the application that is restricted by the policy. You can configure the AppId parameter only when the value of the IpControlType parameter is ALLOW.
      // 
      // *   You can add only one application ID at a time.
      // *   If this parameter is empty, no applications are restricted.
      // *   If this parameter is not empty, not only IP addresses but also applications are restricted.
      // *   If this parameter is not empty and no security authentication method is specified for the API, all API calls are restricted.
      // *   If the value of the IpControlType parameter is REFUSE and the AppId parameter is not empty, API Gateway automatically ignores the AppId parameter and restricts only the IP addresses.
      // *   Valid values of N in IpControlPolicys.N: `[1,100]`.
      shared_ptr<string> appId_ {};
      // The IP address or CIDR block involved in a policy.
      // 
      // *   If you want to specify a policy when you create an ACL, this parameter is required.
      // *   The IP address or CIDR block that is defined in each policy. Separate multiple IP addresses or CIDR blocks with semicolons (;). You can add a maximum of 10 IP addresses or CIDR blocks.
      // *   Valid values of N in IpControlPolicys.N: `[1,100]`.
      shared_ptr<string> cidrIp_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->ipControlName_ == nullptr && this->ipControlPolicys_ == nullptr && this->ipControlType_ == nullptr && this->securityToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIpControlRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipControlName Field Functions 
    bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
    void deleteIpControlName() { this->ipControlName_ = nullptr;};
    inline string getIpControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
    inline CreateIpControlRequest& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


    // ipControlPolicys Field Functions 
    bool hasIpControlPolicys() const { return this->ipControlPolicys_ != nullptr;};
    void deleteIpControlPolicys() { this->ipControlPolicys_ = nullptr;};
    inline const vector<CreateIpControlRequest::IpControlPolicys> & getIpControlPolicys() const { DARABONBA_PTR_GET_CONST(ipControlPolicys_, vector<CreateIpControlRequest::IpControlPolicys>) };
    inline vector<CreateIpControlRequest::IpControlPolicys> getIpControlPolicys() { DARABONBA_PTR_GET(ipControlPolicys_, vector<CreateIpControlRequest::IpControlPolicys>) };
    inline CreateIpControlRequest& setIpControlPolicys(const vector<CreateIpControlRequest::IpControlPolicys> & ipControlPolicys) { DARABONBA_PTR_SET_VALUE(ipControlPolicys_, ipControlPolicys) };
    inline CreateIpControlRequest& setIpControlPolicys(vector<CreateIpControlRequest::IpControlPolicys> && ipControlPolicys) { DARABONBA_PTR_SET_RVALUE(ipControlPolicys_, ipControlPolicys) };


    // ipControlType Field Functions 
    bool hasIpControlType() const { return this->ipControlType_ != nullptr;};
    void deleteIpControlType() { this->ipControlType_ = nullptr;};
    inline string getIpControlType() const { DARABONBA_PTR_GET_DEFAULT(ipControlType_, "") };
    inline CreateIpControlRequest& setIpControlType(string ipControlType) { DARABONBA_PTR_SET_VALUE(ipControlType_, ipControlType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateIpControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The description. The description can be up to 200 characters in length.
    shared_ptr<string> description_ {};
    // The name of the ACL. The name must be 4 to 50 characters in length, and can contain letters, digits, and underscores (_). The name cannot start with an underscore (_).``
    // 
    // This parameter is required.
    shared_ptr<string> ipControlName_ {};
    // The information about the policies. The information is an array of ipcontrolpolicys data.
    shared_ptr<vector<CreateIpControlRequest::IpControlPolicys>> ipControlPolicys_ {};
    // The type of the ACL. Valid values:
    // 
    // *   **ALLOW**: an IP address whitelist
    // *   **REFUSE**: an IP address blacklist
    // 
    // This parameter is required.
    shared_ptr<string> ipControlType_ {};
    shared_ptr<string> securityToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
