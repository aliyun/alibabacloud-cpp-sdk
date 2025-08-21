// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODYNETWORKRULEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes &&) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes() = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& operator=(const DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes &) = default ;
    DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& operator=(DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->frontendPort_ != nullptr && this->instanceId_ != nullptr && this->protocol_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig) };
    inline Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig config() { DARABONBA_PTR_GET(config_, Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& setConfig(const Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& setConfig(Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The mitigation settings of the port forwarding rule.
    std::shared_ptr<Models::DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributesConfig> config_ = nullptr;
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The forwarding protocol. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
