// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSSECURITYCONTEXTCAPABILITY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTINITCONTAINERSSECURITYCONTEXTCAPABILITY_HPP_
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
  class ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability& obj) { 
      DARABONBA_PTR_TO_JSON(Adds, adds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability& obj) { 
      DARABONBA_PTR_FROM_JSON(Adds, adds_);
    };
    ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability() = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability(const ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability(ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability &&) = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability() = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability& operator=(const ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability &) = default ;
    ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability& operator=(ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adds_ != nullptr; };
    // adds Field Functions 
    bool hasAdds() const { return this->adds_ != nullptr;};
    void deleteAdds() { this->adds_ = nullptr;};
    inline const vector<string> & adds() const { DARABONBA_PTR_GET_CONST(adds_, vector<string>) };
    inline vector<string> adds() { DARABONBA_PTR_GET(adds_, vector<string>) };
    inline ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability& setAdds(const vector<string> & adds) { DARABONBA_PTR_SET_VALUE(adds_, adds) };
    inline ModifyEciScalingConfigurationRequestInitContainersSecurityContextCapability& setAdds(vector<string> && adds) { DARABONBA_PTR_SET_RVALUE(adds_, adds) };


  protected:
    std::shared_ptr<vector<string>> adds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
