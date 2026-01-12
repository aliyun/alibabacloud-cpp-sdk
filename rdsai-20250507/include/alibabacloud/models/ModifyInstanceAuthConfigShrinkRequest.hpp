// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTHCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTHCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstanceAuthConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAuthConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configListShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAuthConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configListShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyInstanceAuthConfigShrinkRequest() = default ;
    ModifyInstanceAuthConfigShrinkRequest(const ModifyInstanceAuthConfigShrinkRequest &) = default ;
    ModifyInstanceAuthConfigShrinkRequest(ModifyInstanceAuthConfigShrinkRequest &&) = default ;
    ModifyInstanceAuthConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAuthConfigShrinkRequest() = default ;
    ModifyInstanceAuthConfigShrinkRequest& operator=(const ModifyInstanceAuthConfigShrinkRequest &) = default ;
    ModifyInstanceAuthConfigShrinkRequest& operator=(ModifyInstanceAuthConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configListShrink_ == nullptr
        && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
    // configListShrink Field Functions 
    bool hasConfigListShrink() const { return this->configListShrink_ != nullptr;};
    void deleteConfigListShrink() { this->configListShrink_ = nullptr;};
    inline string getConfigListShrink() const { DARABONBA_PTR_GET_DEFAULT(configListShrink_, "") };
    inline ModifyInstanceAuthConfigShrinkRequest& setConfigListShrink(string configListShrink) { DARABONBA_PTR_SET_VALUE(configListShrink_, configListShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAuthConfigShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceAuthConfigShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the RDS Supabase instance.
    shared_ptr<string> configListShrink_ {};
    // The region ID.
    shared_ptr<string> instanceName_ {};
    // The operation that you want to perform. Set the value to **ModifyInstanceAuthConfig**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
