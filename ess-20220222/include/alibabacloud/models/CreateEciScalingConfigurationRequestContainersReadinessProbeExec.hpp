// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBEEXEC_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSREADINESSPROBEEXEC_HPP_
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
  class CreateEciScalingConfigurationRequestContainersReadinessProbeExec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestContainersReadinessProbeExec& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestContainersReadinessProbeExec& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
    };
    CreateEciScalingConfigurationRequestContainersReadinessProbeExec() = default ;
    CreateEciScalingConfigurationRequestContainersReadinessProbeExec(const CreateEciScalingConfigurationRequestContainersReadinessProbeExec &) = default ;
    CreateEciScalingConfigurationRequestContainersReadinessProbeExec(CreateEciScalingConfigurationRequestContainersReadinessProbeExec &&) = default ;
    CreateEciScalingConfigurationRequestContainersReadinessProbeExec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestContainersReadinessProbeExec() = default ;
    CreateEciScalingConfigurationRequestContainersReadinessProbeExec& operator=(const CreateEciScalingConfigurationRequestContainersReadinessProbeExec &) = default ;
    CreateEciScalingConfigurationRequestContainersReadinessProbeExec& operator=(CreateEciScalingConfigurationRequestContainersReadinessProbeExec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commands_ == nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const vector<string> & commands() const { DARABONBA_PTR_GET_CONST(commands_, vector<string>) };
    inline vector<string> commands() { DARABONBA_PTR_GET(commands_, vector<string>) };
    inline CreateEciScalingConfigurationRequestContainersReadinessProbeExec& setCommands(const vector<string> & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline CreateEciScalingConfigurationRequestContainersReadinessProbeExec& setCommands(vector<string> && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


  protected:
    std::shared_ptr<vector<string>> commands_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
