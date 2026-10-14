// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKRULEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKRULEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyNetworkRuleAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkRuleAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Module, module_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkRuleAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
    };
    ModifyNetworkRuleAttributeRequest() = default ;
    ModifyNetworkRuleAttributeRequest(const ModifyNetworkRuleAttributeRequest &) = default ;
    ModifyNetworkRuleAttributeRequest(ModifyNetworkRuleAttributeRequest &&) = default ;
    ModifyNetworkRuleAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkRuleAttributeRequest() = default ;
    ModifyNetworkRuleAttributeRequest& operator=(const ModifyNetworkRuleAttributeRequest &) = default ;
    ModifyNetworkRuleAttributeRequest& operator=(ModifyNetworkRuleAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->forwardProtocol_ == nullptr && this->frontendPort_ == nullptr && this->instanceId_ == nullptr && this->module_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyNetworkRuleAttributeRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string getForwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline ModifyNetworkRuleAttributeRequest& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline ModifyNetworkRuleAttributeRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNetworkRuleAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline ModifyNetworkRuleAttributeRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


  protected:
    // The advanced settings for the port forwarding rule. Specify the settings as a JSON string. The structure is described below.
    // The structure of \\`TcpConfig\\` is as follows:
    // 
    // - **PersistenceTimeout**: An integer. This parameter is required. The timeout period for session persistence. Unit: seconds. Valid values: **30** to **3600**. The default value is **0**, which disables session persistence.
    // 
    // - **Synproxy**: A string. This parameter is required. The status of the False Source setting for the DDoS mitigation policy. Valid values: \\`off\\` and \\`on\\`.
    // 
    // - **NodataConn**: A string. This parameter is required. The status of the Empty Connection setting for the DDoS mitigation policy. Valid values: \\`off\\` and \\`on\\`.
    // 
    // - **Sla**: A struct. This parameter is required. The configuration for destination rate limiting. For more information, see the \\`Sla\\` section below.
    // 
    // - **Slimit**: A struct. This parameter is required. The configuration for source rate limiting. For more information, see the \\`Slimit\\` section below.
    // 
    // - **PayloadLen**: A struct. This parameter is required. The packet length filter configuration. For more information, see the \\`PayloadLen\\` section below.
    // 
    // The structure of \\`Sla\\` is as follows:
    // 
    // - **Cps**: An integer. This parameter is required. The maximum number of new connections per second to a destination IP address. Valid values: 100 to 100,000.
    // 
    // - **Maxconn**: An integer. This parameter is required. The maximum number of concurrent connections to a destination IP address. Valid values: 1,000 to 1,000,000.
    // 
    // - **CpsEnable**: An integer. This parameter is required. Specifies whether to enable the limit on new connections. Valid values: 0 (disabled) and 1 (enabled). The default value is 1.
    // 
    // - **MaxconnEnable**: An integer. This parameter is required. Specifies whether to enable the limit on concurrent connections. Valid values: 0 (disabled) and 1 (enabled). The default value is 1.
    // 
    // The structure of \\`Slimit\\` is as follows:
    // 
    // - **Cps**: An integer. This parameter is required. The maximum number of new connections per second from a source IP address. Valid values: 1 to 50,000.
    // 
    // - **Maxconn**: An integer. This parameter is required. The maximum number of concurrent connections from a source IP address. Valid values: 1 to 50,000.
    // 
    // - **CpsEnable**: An integer. This parameter is required. Specifies whether to enable the limit on new connections. Valid values: 0 (disabled) and 1 (enabled). The default value is 1.
    // 
    // - **MaxconnEnable**: An integer. This parameter is required. Specifies whether to enable the limit on concurrent connections. Valid values: 0 (disabled) and 1 (enabled). The default value is 1.
    // 
    // - **CpsMode**: An integer. This parameter is required. The mode for the new connection rate limit from a source IP address. Valid values: 1 (off) and 2 (auto).
    // 
    // The structure of \\`PayloadLen\\` is as follows:
    // 
    // - **Min**: An integer. This parameter is required. The minimum packet length. Valid values: 0 to 1,500.
    // 
    // - **Max**: An integer. This parameter is required. The maximum packet length. Valid values: 0 to 1,500.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The forwarding protocol. Valid values:
    // 
    // - **tcp**
    // 
    // - **udp**
    // 
    // This parameter is required.
    shared_ptr<string> forwardProtocol_ {};
    // The forwarding port.
    // 
    // This parameter is required.
    shared_ptr<int32_t> frontendPort_ {};
    // The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // 
    // > Call [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) to query the IDs of all Anti-DDoS Pro and Anti-DDoS Premium instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The module for Layer 7 port support. The default value is sla. Valid value:
    // 
    // **sla**: Speed Limit for Destination
    shared_ptr<string> module_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
