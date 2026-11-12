// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateFirewallRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
    };
    CreateFirewallRuleRequest() = default ;
    CreateFirewallRuleRequest(const CreateFirewallRuleRequest &) = default ;
    CreateFirewallRuleRequest(CreateFirewallRuleRequest &&) = default ;
    CreateFirewallRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallRuleRequest() = default ;
    CreateFirewallRuleRequest& operator=(const CreateFirewallRuleRequest &) = default ;
    CreateFirewallRuleRequest& operator=(CreateFirewallRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->instanceId_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr && this->ruleProtocol_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFirewallRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFirewallRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateFirewallRuleRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFirewallRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateFirewallRuleRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleProtocol Field Functions 
    bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
    void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
    inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
    inline CreateFirewallRuleRequest& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The instance ID of the specified simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The port range.
    // - TCP/UDP: Valid values: 1 to 65535. Use a forward slash (/) to separate the start port and the end port. For example, 1024/1055 indicates the port range from 1024 to 1055.
    // - ICMP: -1/-1. This value indicates all ports.
    // 
    // This parameter is required.
    shared_ptr<string> port_ {};
    // The region ID of the specified simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The remark for the firewall rule.
    shared_ptr<string> remark_ {};
    // The transport layer protocol. Valid values:
    // 
    // - TCP: TCP
    // - UDP: UDP
    // - TCP+UDP: TCP and UDP
    // - ICMP: ICMP
    // 
    // This parameter is required.
    shared_ptr<string> ruleProtocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
