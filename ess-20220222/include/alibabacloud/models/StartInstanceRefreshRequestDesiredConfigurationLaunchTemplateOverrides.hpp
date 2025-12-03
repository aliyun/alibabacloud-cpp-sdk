// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATIONLAUNCHTEMPLATEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_STARTINSTANCEREFRESHREQUESTDESIREDCONFIGURATIONLAUNCHTEMPLATEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides() = default ;
    StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides(const StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides &) = default ;
    StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides(StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides &&) = default ;
    StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides() = default ;
    StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides& operator=(const StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides &) = default ;
    StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides& operator=(StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline StartInstanceRefreshRequestDesiredConfigurationLaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The instance type specified by using this parameter overwrites the instance type of the launch template.
    // 
    // >  This parameter takes effect only if you specify LaunchTemplateId.
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
