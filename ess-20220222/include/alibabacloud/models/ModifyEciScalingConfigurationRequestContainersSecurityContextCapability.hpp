// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXTCAPABILITY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXTCAPABILITY_HPP_
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
  class ModifyEciScalingConfigurationRequestContainersSecurityContextCapability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEciScalingConfigurationRequestContainersSecurityContextCapability& obj) { 
      DARABONBA_PTR_TO_JSON(Adds, adds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEciScalingConfigurationRequestContainersSecurityContextCapability& obj) { 
      DARABONBA_PTR_FROM_JSON(Adds, adds_);
    };
    ModifyEciScalingConfigurationRequestContainersSecurityContextCapability() = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContextCapability(const ModifyEciScalingConfigurationRequestContainersSecurityContextCapability &) = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContextCapability(ModifyEciScalingConfigurationRequestContainersSecurityContextCapability &&) = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContextCapability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEciScalingConfigurationRequestContainersSecurityContextCapability() = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContextCapability& operator=(const ModifyEciScalingConfigurationRequestContainersSecurityContextCapability &) = default ;
    ModifyEciScalingConfigurationRequestContainersSecurityContextCapability& operator=(ModifyEciScalingConfigurationRequestContainersSecurityContextCapability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adds_ == nullptr; };
    // adds Field Functions 
    bool hasAdds() const { return this->adds_ != nullptr;};
    void deleteAdds() { this->adds_ = nullptr;};
    inline const vector<string> & adds() const { DARABONBA_PTR_GET_CONST(adds_, vector<string>) };
    inline vector<string> adds() { DARABONBA_PTR_GET(adds_, vector<string>) };
    inline ModifyEciScalingConfigurationRequestContainersSecurityContextCapability& setAdds(const vector<string> & adds) { DARABONBA_PTR_SET_VALUE(adds_, adds) };
    inline ModifyEciScalingConfigurationRequestContainersSecurityContextCapability& setAdds(vector<string> && adds) { DARABONBA_PTR_SET_RVALUE(adds_, adds) };


  protected:
    std::shared_ptr<vector<string>> adds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
