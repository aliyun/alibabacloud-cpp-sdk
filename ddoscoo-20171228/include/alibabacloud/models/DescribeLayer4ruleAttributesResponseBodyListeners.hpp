// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListenersConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeLayer4RuleAttributesResponseBodyListeners() = default ;
    DescribeLayer4RuleAttributesResponseBodyListeners(const DescribeLayer4RuleAttributesResponseBodyListeners &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListeners(DescribeLayer4RuleAttributesResponseBodyListeners &&) = default ;
    DescribeLayer4RuleAttributesResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBodyListeners() = default ;
    DescribeLayer4RuleAttributesResponseBodyListeners& operator=(const DescribeLayer4RuleAttributesResponseBodyListeners &) = default ;
    DescribeLayer4RuleAttributesResponseBodyListeners& operator=(DescribeLayer4RuleAttributesResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->frontendPort_ != nullptr && this->instanceId_ != nullptr && this->protocol_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig) };
    inline Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig config() { DARABONBA_PTR_GET(config_, Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig) };
    inline DescribeLayer4RuleAttributesResponseBodyListeners& setConfig(const Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeLayer4RuleAttributesResponseBodyListeners& setConfig(Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeLayer4RuleAttributesResponseBodyListeners& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLayer4RuleAttributesResponseBodyListeners& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeLayer4RuleAttributesResponseBodyListeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<Models::DescribeLayer4RuleAttributesResponseBodyListenersConfig> config_ = nullptr;
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
