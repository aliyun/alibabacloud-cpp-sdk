// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTSTAGEDCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTSTAGEDCONFIGS_HPP_
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
  class EnvironmentStagedConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentStagedConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(services, services_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentStagedConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(services, services_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
    };
    EnvironmentStagedConfigs() = default ;
    EnvironmentStagedConfigs(const EnvironmentStagedConfigs &) = default ;
    EnvironmentStagedConfigs(EnvironmentStagedConfigs &&) = default ;
    EnvironmentStagedConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentStagedConfigs() = default ;
    EnvironmentStagedConfigs& operator=(const EnvironmentStagedConfigs &) = default ;
    EnvironmentStagedConfigs& operator=(EnvironmentStagedConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->services_ != nullptr
        && this->variables_ != nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const map<string, ServiceConfig> & services() const { DARABONBA_PTR_GET_CONST(services_, map<string, ServiceConfig>) };
    inline map<string, ServiceConfig> services() { DARABONBA_PTR_GET(services_, map<string, ServiceConfig>) };
    inline EnvironmentStagedConfigs& setServices(const map<string, ServiceConfig> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline EnvironmentStagedConfigs& setServices(map<string, ServiceConfig> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const map<string, Variable> & variables() const { DARABONBA_PTR_GET_CONST(variables_, map<string, Variable>) };
    inline map<string, Variable> variables() { DARABONBA_PTR_GET(variables_, map<string, Variable>) };
    inline EnvironmentStagedConfigs& setVariables(const map<string, Variable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline EnvironmentStagedConfigs& setVariables(map<string, Variable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<map<string, ServiceConfig>> services_ = nullptr;
    std::shared_ptr<map<string, Variable>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
