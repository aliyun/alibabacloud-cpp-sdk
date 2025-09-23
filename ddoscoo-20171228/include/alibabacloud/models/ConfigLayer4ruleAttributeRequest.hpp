// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER4RULEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER4RULEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ConfigLayer4RuleAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer4RuleAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Module, module_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer4RuleAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
    };
    ConfigLayer4RuleAttributeRequest() = default ;
    ConfigLayer4RuleAttributeRequest(const ConfigLayer4RuleAttributeRequest &) = default ;
    ConfigLayer4RuleAttributeRequest(ConfigLayer4RuleAttributeRequest &&) = default ;
    ConfigLayer4RuleAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer4RuleAttributeRequest() = default ;
    ConfigLayer4RuleAttributeRequest& operator=(const ConfigLayer4RuleAttributeRequest &) = default ;
    ConfigLayer4RuleAttributeRequest& operator=(ConfigLayer4RuleAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->forwardProtocol_ != nullptr && this->frontendPort_ != nullptr && this->instanceId_ != nullptr && this->module_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ConfigLayer4RuleAttributeRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string forwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline ConfigLayer4RuleAttributeRequest& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline ConfigLayer4RuleAttributeRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigLayer4RuleAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline ConfigLayer4RuleAttributeRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> forwardProtocol_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> module_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
