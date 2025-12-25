// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyPrepayInstanceSpecShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpecShrink_);
    };
    ModifyPrepayInstanceSpecShrinkRequest() = default ;
    ModifyPrepayInstanceSpecShrinkRequest(const ModifyPrepayInstanceSpecShrinkRequest &) = default ;
    ModifyPrepayInstanceSpecShrinkRequest(ModifyPrepayInstanceSpecShrinkRequest &&) = default ;
    ModifyPrepayInstanceSpecShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayInstanceSpecShrinkRequest() = default ;
    ModifyPrepayInstanceSpecShrinkRequest& operator=(const ModifyPrepayInstanceSpecShrinkRequest &) = default ;
    ModifyPrepayInstanceSpecShrinkRequest& operator=(ModifyPrepayInstanceSpecShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ha_ == nullptr
        && return this->haResourceSpecShrink_ == nullptr && return this->haVSwitchIdsShrink_ == nullptr && return this->haZoneId_ == nullptr && return this->instanceId_ == nullptr && return this->region_ == nullptr
        && return this->resourceSpecShrink_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyPrepayInstanceSpecShrinkRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpecShrink Field Functions 
    bool hasHaResourceSpecShrink() const { return this->haResourceSpecShrink_ != nullptr;};
    void deleteHaResourceSpecShrink() { this->haResourceSpecShrink_ = nullptr;};
    inline string haResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(haResourceSpecShrink_, "") };
    inline ModifyPrepayInstanceSpecShrinkRequest& setHaResourceSpecShrink(string haResourceSpecShrink) { DARABONBA_PTR_SET_VALUE(haResourceSpecShrink_, haResourceSpecShrink) };


    // haVSwitchIdsShrink Field Functions 
    bool hasHaVSwitchIdsShrink() const { return this->haVSwitchIdsShrink_ != nullptr;};
    void deleteHaVSwitchIdsShrink() { this->haVSwitchIdsShrink_ = nullptr;};
    inline string haVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(haVSwitchIdsShrink_, "") };
    inline ModifyPrepayInstanceSpecShrinkRequest& setHaVSwitchIdsShrink(string haVSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(haVSwitchIdsShrink_, haVSwitchIdsShrink) };


    // haZoneId Field Functions 
    bool hasHaZoneId() const { return this->haZoneId_ != nullptr;};
    void deleteHaZoneId() { this->haZoneId_ = nullptr;};
    inline string haZoneId() const { DARABONBA_PTR_GET_DEFAULT(haZoneId_, "") };
    inline ModifyPrepayInstanceSpecShrinkRequest& setHaZoneId(string haZoneId) { DARABONBA_PTR_SET_VALUE(haZoneId_, haZoneId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPrepayInstanceSpecShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyPrepayInstanceSpecShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpecShrink Field Functions 
    bool hasResourceSpecShrink() const { return this->resourceSpecShrink_ != nullptr;};
    void deleteResourceSpecShrink() { this->resourceSpecShrink_ = nullptr;};
    inline string resourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSpecShrink_, "") };
    inline ModifyPrepayInstanceSpecShrinkRequest& setResourceSpecShrink(string resourceSpecShrink) { DARABONBA_PTR_SET_VALUE(resourceSpecShrink_, resourceSpecShrink) };


  protected:
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<string> haResourceSpecShrink_ = nullptr;
    std::shared_ptr<string> haVSwitchIdsShrink_ = nullptr;
    std::shared_ptr<string> haZoneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
