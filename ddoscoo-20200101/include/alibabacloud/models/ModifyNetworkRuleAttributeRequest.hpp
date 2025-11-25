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
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkRuleAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
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
        && return this->forwardProtocol_ == nullptr && return this->frontendPort_ == nullptr && return this->instanceId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyNetworkRuleAttributeRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string forwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline ModifyNetworkRuleAttributeRequest& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline ModifyNetworkRuleAttributeRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNetworkRuleAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The detailed settings of the port forwarding rule. This parameter is a JSON string and contains the following fields. The detailed settings of a TCP port forwarding rule contain the following fields.
    // 
    // *   **PersistenceTimeout**: the timeout period of session persistence. This field is required and of the integer type. Valid values: **30** to **3600**. Unit: seconds. Default value: **0**, which indicates that session persistence is disabled.
    // *   **Synproxy**: specifies whether to enable the false source feature in the DDoS mitigation policy. This field is required and of the string type. Valid values: off and on.
    // *   **NodataConn**: specifies whether to enable the empty connection feature in the DDoS mitigation policy. This field is required and of the string type. Valid values: off and on.
    // *   **Sla**: the settings of the speed limit for destination feature. This field is required and of the struct type. For more information, see the following description about Sla.
    // *   **Slimit**: the settings of the rate limit for source feature. This field is required and of the struct type. For more information, see the following description about Slimit.
    // *   **PayloadLen**: the settings of the packet length limit feature. This field is required and of the struct type. For more information, see the following description about PayloadLen.
    // 
    // Sla contains the following fields:
    // 
    // *   **Cps**: the destination rate limit on new connections in the DDoS mitigation policy. This field is required and of the integer type. Valid values: 100 to 100000.
    // *   **Maxconn**: the destination rate limit on concurrent connections in the DDoS mitigation policy. This field is required and of the integer type. Valid values: 1000 to 1000000.
    // *   **CpsEnable**: specifies whether to enable Cps. This field is required and of the integer type. Valid values: 0 and 1. Default value: 1. The value 0 indicates that Cps is disabled, and the value 1 indicates that Cps is enabled.
    // *   **MaxconnEnable**: specifies whether to enable Maxconn. This field is required and of the integer type. Valid values: 0 and 1. Default value: 1. The value 0 indicates that Maxconn is disabled, and the value 1 indicates that Maxconn is enabled.
    // 
    // Slimit contains the following fields:
    // 
    // *   **Cps**: the source rate limit on new connections in the DDoS mitigation policy. This field is required and of the integer type. Valid values: 1 to 50000.
    // *   **Maxconn**: the source rate limit on concurrent connections in the DDoS mitigation policy. This field is required and of the integer type. Valid values: 1 to 50000.
    // *   **CpsEnable**: specifies whether to enable Cps. This field is required and of the integer type. Valid values: 0 and 1. Default value: 1. The value 0 indicates that Cps is disabled, and the value 1 indicates that Cps is enabled.
    // *   **MaxconnEnable**: specifies whether to enable Maxconn. This field is required and of the integer type. Valid values: 0 and 1. Default value: 1. The value 0 indicates that Maxconn is disabled, and the value 1 indicates that Maxconn is enabled.
    // *   **CpsMode**: specifies whether to enable the source rate limit on new connections. This field is required and of the integer type. Valid values: 1 and 2. The value 1 indicates that the source rate limit is disabled. The value 2 indicates that the system determines whether to enable the source rate limit.
    // 
    // PayloadLen contains the following fields:
    // 
    // *   **Min**: the minimum packet length in the DDoS mitigation policy. This field is required and of the integer type. Valid values: 0 to 1500.
    // *   **Max**: the maximum packet length in the DDoS mitigation policy. This field is required and of the integer type. Valid values: 0 to 1500.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    // 
    // This parameter is required.
    std::shared_ptr<string> forwardProtocol_ = nullptr;
    // The forwarding port.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
