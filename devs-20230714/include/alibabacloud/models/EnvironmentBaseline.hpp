// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTBASELINE_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTBASELINE_HPP_
#include <darabonba/Core.hpp>
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
  class EnvironmentBaseline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentBaseline& obj) { 
      DARABONBA_PTR_TO_JSON(servicesInstances, servicesInstances_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentBaseline& obj) { 
      DARABONBA_PTR_FROM_JSON(servicesInstances, servicesInstances_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    EnvironmentBaseline() = default ;
    EnvironmentBaseline(const EnvironmentBaseline &) = default ;
    EnvironmentBaseline(EnvironmentBaseline &&) = default ;
    EnvironmentBaseline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentBaseline() = default ;
    EnvironmentBaseline& operator=(const EnvironmentBaseline &) = default ;
    EnvironmentBaseline& operator=(EnvironmentBaseline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->servicesInstances_ != nullptr
        && this->variables_ != nullptr; };
    // servicesInstances Field Functions 
    bool hasServicesInstances() const { return this->servicesInstances_ != nullptr;};
    void deleteServicesInstances() { this->servicesInstances_ = nullptr;};
    inline const map<string, ServiceInstance> & servicesInstances() const { DARABONBA_PTR_GET_CONST(servicesInstances_, map<string, ServiceInstance>) };
    inline map<string, ServiceInstance> servicesInstances() { DARABONBA_PTR_GET(servicesInstances_, map<string, ServiceInstance>) };
    inline EnvironmentBaseline& setServicesInstances(const map<string, ServiceInstance> & servicesInstances) { DARABONBA_PTR_SET_VALUE(servicesInstances_, servicesInstances) };
    inline EnvironmentBaseline& setServicesInstances(map<string, ServiceInstance> && servicesInstances) { DARABONBA_PTR_SET_RVALUE(servicesInstances_, servicesInstances) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, Variable> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, Variable>) };
    inline map<string, Variable> variables() { DARABONBA_PTR_GET(variables_, map<string, Variable>) };
    inline EnvironmentBaseline& setVariables(const map<string, Variable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline EnvironmentBaseline& setVariables(map<string, Variable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<map<string, ServiceInstance>> servicesInstances_ = nullptr;
    std::shared_ptr<map<string, Variable>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
