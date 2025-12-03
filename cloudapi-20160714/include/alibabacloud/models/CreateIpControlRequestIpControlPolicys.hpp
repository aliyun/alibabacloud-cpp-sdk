// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPCONTROLREQUESTIPCONTROLPOLICYS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPCONTROLREQUESTIPCONTROLPOLICYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateIpControlRequestIpControlPolicys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpControlRequestIpControlPolicys& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpControlRequestIpControlPolicys& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
    };
    CreateIpControlRequestIpControlPolicys() = default ;
    CreateIpControlRequestIpControlPolicys(const CreateIpControlRequestIpControlPolicys &) = default ;
    CreateIpControlRequestIpControlPolicys(CreateIpControlRequestIpControlPolicys &&) = default ;
    CreateIpControlRequestIpControlPolicys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpControlRequestIpControlPolicys() = default ;
    CreateIpControlRequestIpControlPolicys& operator=(const CreateIpControlRequestIpControlPolicys &) = default ;
    CreateIpControlRequestIpControlPolicys& operator=(CreateIpControlRequestIpControlPolicys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->cidrIp_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateIpControlRequestIpControlPolicys& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cidrIp Field Functions 
    bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
    void deleteCidrIp() { this->cidrIp_ = nullptr;};
    inline string cidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
    inline CreateIpControlRequestIpControlPolicys& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


  protected:
    // The ID of the application that is restricted by the policy. You can configure the AppId parameter only when the value of the IpControlType parameter is ALLOW.
    // 
    // *   You can add only one application ID at a time.
    // *   If this parameter is empty, no applications are restricted.
    // *   If this parameter is not empty, not only IP addresses but also applications are restricted.
    // *   If this parameter is not empty and no security authentication method is specified for the API, all API calls are restricted.
    // *   If the value of the IpControlType parameter is REFUSE and the AppId parameter is not empty, API Gateway automatically ignores the AppId parameter and restricts only the IP addresses.
    // *   Valid values of N in IpControlPolicys.N: `[1,100]`.
    std::shared_ptr<string> appId_ = nullptr;
    // The IP address or CIDR block involved in a policy.
    // 
    // *   If you want to specify a policy when you create an ACL, this parameter is required.
    // *   The IP address or CIDR block that is defined in each policy. Separate multiple IP addresses or CIDR blocks with semicolons (;). You can add a maximum of 10 IP addresses or CIDR blocks.
    // *   Valid values of N in IpControlPolicys.N: `[1,100]`.
    std::shared_ptr<string> cidrIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
