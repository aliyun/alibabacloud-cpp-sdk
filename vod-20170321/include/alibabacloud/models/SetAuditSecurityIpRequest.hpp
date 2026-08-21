// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAUDITSECURITYIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAUDITSECURITYIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetAuditSecurityIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAuditSecurityIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(OperateMode, operateMode_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, SetAuditSecurityIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(OperateMode, operateMode_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    SetAuditSecurityIpRequest() = default ;
    SetAuditSecurityIpRequest(const SetAuditSecurityIpRequest &) = default ;
    SetAuditSecurityIpRequest(SetAuditSecurityIpRequest &&) = default ;
    SetAuditSecurityIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAuditSecurityIpRequest() = default ;
    SetAuditSecurityIpRequest& operator=(const SetAuditSecurityIpRequest &) = default ;
    SetAuditSecurityIpRequest& operator=(SetAuditSecurityIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ips_ == nullptr
        && this->operateMode_ == nullptr && this->securityGroupName_ == nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline string getIps() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
    inline SetAuditSecurityIpRequest& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


    // operateMode Field Functions 
    bool hasOperateMode() const { return this->operateMode_ != nullptr;};
    void deleteOperateMode() { this->operateMode_ = nullptr;};
    inline string getOperateMode() const { DARABONBA_PTR_GET_DEFAULT(operateMode_, "") };
    inline SetAuditSecurityIpRequest& setOperateMode(string operateMode) { DARABONBA_PTR_SET_VALUE(operateMode_, operateMode) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline SetAuditSecurityIpRequest& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The list of security IP addresses for review. Each group supports a maximum of 100 IP addresses. Separate multiple IP addresses with commas (,). The following formats are supported:
    // 
    // - Exact IP address: 192.168.0.1
    // - CIDR block: 192.168.0.1/24 (Classless Inter-Domain Routing. /24 specifies the length of the prefix in the address. Valid values: `[1,32]`.)
    // 
    // This parameter is required.
    shared_ptr<string> ips_ {};
    // The operation mode. Valid values:
    // 
    // - **Append**: default value. Appends IP addresses to the IP address whitelist.
    // - **Cover**: overwrites the existing IP address whitelist.
    // - **Delete**: deletes IP addresses from the IP address whitelist.
    // > If the specified value is not within the valid values, the default value (Append) is used.
    shared_ptr<string> operateMode_ {};
    // The name of the security group for review. Default value: **Default**. A maximum of 10 security groups are supported.
    shared_ptr<string> securityGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
