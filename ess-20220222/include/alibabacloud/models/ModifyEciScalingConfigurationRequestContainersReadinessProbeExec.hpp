// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBEEXEC_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBEEXEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyEciScalingConfigurationRequestContainersReadinessProbeExec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersReadinessProbeExec& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersReadinessProbeExec& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
    };
    ModifyEciScalingConfigurationRequestContainersReadinessProbeExec() = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeExec(const ModifyEciScalingConfigurationRequestContainersReadinessProbeExec &) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeExec(ModifyEciScalingConfigurationRequestContainersReadinessProbeExec &&) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeExec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersReadinessProbeExec() = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeExec& operator=(const ModifyEciScalingConfigurationRequestContainersReadinessProbeExec &) = default ;
    ModifyEciScalingConfigurationRequestContainersReadinessProbeExec& operator=(ModifyEciScalingConfigurationRequestContainersReadinessProbeExec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commands_ != nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbeExec& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline ModifyEciScalingConfigurationRequestContainersReadinessProbeExec& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


  protected:
    std::shared_ptr<vector<string>> commands_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
