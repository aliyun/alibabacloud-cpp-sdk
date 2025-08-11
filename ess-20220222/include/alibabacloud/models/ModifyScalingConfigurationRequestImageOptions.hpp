// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTIMAGEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTIMAGEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationRequestImageOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequestImageOptions& obj) { 
      DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequestImageOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
    };
    ModifyScalingConfigurationRequestImageOptions() = default ;
    ModifyScalingConfigurationRequestImageOptions(const ModifyScalingConfigurationRequestImageOptions &) = default ;
    ModifyScalingConfigurationRequestImageOptions(ModifyScalingConfigurationRequestImageOptions &&) = default ;
    ModifyScalingConfigurationRequestImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequestImageOptions() = default ;
    ModifyScalingConfigurationRequestImageOptions& operator=(const ModifyScalingConfigurationRequestImageOptions &) = default ;
    ModifyScalingConfigurationRequestImageOptions& operator=(ModifyScalingConfigurationRequestImageOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginAsNonRoot_ != nullptr; };
    // loginAsNonRoot Field Functions 
    bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
    void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
    inline bool loginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
    inline ModifyScalingConfigurationRequestImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


  protected:
    // Specifies whether to use ecs-user to log on to an ECS instance created from the scaling configuration. For information about logon usernames, see [Manage the logon username of an instance](https://help.aliyun.com/document_detail/388447.html). Valid values:
    // 
    // true
    // 
    // false
    std::shared_ptr<bool> loginAsNonRoot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
