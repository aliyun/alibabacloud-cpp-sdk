// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_SERVICEINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ServiceInstanceLatestDeployment.hpp>
#include <map>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceInstance& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(latestDeployment, latestDeployment_);
      DARABONBA_ANY_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(latestDeployment, latestDeployment_);
      DARABONBA_ANY_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    ServiceInstance() = default ;
    ServiceInstance(const ServiceInstance &) = default ;
    ServiceInstance(ServiceInstance &&) = default ;
    ServiceInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceInstance() = default ;
    ServiceInstance& operator=(const ServiceInstance &) = default ;
    ServiceInstance& operator=(ServiceInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->latestDeployment_ != nullptr && this->outputs_ != nullptr && this->variables_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const ServiceConfig & config() const { DARABONBA_PTR_GET_CONST(config_, ServiceConfig) };
    inline ServiceConfig config() { DARABONBA_PTR_GET(config_, ServiceConfig) };
    inline ServiceInstance& setConfig(const ServiceConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ServiceInstance& setConfig(ServiceConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // latestDeployment Field Functions 
    bool hasLatestDeployment() const { return this->latestDeployment_ != nullptr;};
    void deleteLatestDeployment() { this->latestDeployment_ = nullptr;};
    inline const ServiceInstanceLatestDeployment & latestDeployment() const { DARABONBA_PTR_GET_CONST(latestDeployment_, ServiceInstanceLatestDeployment) };
    inline ServiceInstanceLatestDeployment latestDeployment() { DARABONBA_PTR_GET(latestDeployment_, ServiceInstanceLatestDeployment) };
    inline ServiceInstance& setLatestDeployment(const ServiceInstanceLatestDeployment & latestDeployment) { DARABONBA_PTR_SET_VALUE(latestDeployment_, latestDeployment) };
    inline ServiceInstance& setLatestDeployment(ServiceInstanceLatestDeployment && latestDeployment) { DARABONBA_PTR_SET_RVALUE(latestDeployment_, latestDeployment) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline     const Darabonba::Json & outputs() const { DARABONBA_GET(outputs_) };
    Darabonba::Json & outputs() { DARABONBA_GET(outputs_) };
    inline ServiceInstance& setOutputs(const Darabonba::Json & outputs) { DARABONBA_SET_VALUE(outputs_, outputs) };
    inline ServiceInstance& setOutputs(Darabonba::Json & outputs) { DARABONBA_SET_RVALUE(outputs_, outputs) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, Variable> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, Variable>) };
    inline map<string, Variable> variables() { DARABONBA_PTR_GET(variables_, map<string, Variable>) };
    inline ServiceInstance& setVariables(const map<string, Variable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ServiceInstance& setVariables(map<string, Variable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<ServiceConfig> config_ = nullptr;
    std::shared_ptr<ServiceInstanceLatestDeployment> latestDeployment_ = nullptr;
    Darabonba::Json outputs_ = nullptr;
    std::shared_ptr<map<string, Variable>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
