// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXTCAPABILITY_HPP_
#define ALIBABACLOUD_MODELS_CREATEECISCALINGCONFIGURATIONREQUESTCONTAINERSSECURITYCONTEXTCAPABILITY_HPP_
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
  class CreateEciScalingConfigurationRequestContainersSecurityContextCapability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEciScalingConfigurationRequestContainersSecurityContextCapability& obj) { 
      DARABONBA_PTR_TO_JSON(Add, add_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEciScalingConfigurationRequestContainersSecurityContextCapability& obj) { 
      DARABONBA_PTR_FROM_JSON(Add, add_);
    };
    CreateEciScalingConfigurationRequestContainersSecurityContextCapability() = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContextCapability(const CreateEciScalingConfigurationRequestContainersSecurityContextCapability &) = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContextCapability(CreateEciScalingConfigurationRequestContainersSecurityContextCapability &&) = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContextCapability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEciScalingConfigurationRequestContainersSecurityContextCapability() = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContextCapability& operator=(const CreateEciScalingConfigurationRequestContainersSecurityContextCapability &) = default ;
    CreateEciScalingConfigurationRequestContainersSecurityContextCapability& operator=(CreateEciScalingConfigurationRequestContainersSecurityContextCapability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->add_ == nullptr; };
    // add Field Functions 
    bool hasAdd() const { return this->add_ != nullptr;};
    void deleteAdd() { this->add_ = nullptr;};
    inline const vector<string> & add() const { DARABONBA_PTR_GET_CONST(add_, vector<string>) };
    inline vector<string> add() { DARABONBA_PTR_GET(add_, vector<string>) };
    inline CreateEciScalingConfigurationRequestContainersSecurityContextCapability& setAdd(const vector<string> & add) { DARABONBA_PTR_SET_VALUE(add_, add) };
    inline CreateEciScalingConfigurationRequestContainersSecurityContextCapability& setAdd(vector<string> && add) { DARABONBA_PTR_SET_RVALUE(add_, add) };


  protected:
    std::shared_ptr<vector<string>> add_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
