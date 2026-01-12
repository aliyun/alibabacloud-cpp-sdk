// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESPECSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESPECSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyInstanceSpecShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSpecShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
    };
    ModifyInstanceSpecShrinkRequest() = default ;
    ModifyInstanceSpecShrinkRequest(const ModifyInstanceSpecShrinkRequest &) = default ;
    ModifyInstanceSpecShrinkRequest(ModifyInstanceSpecShrinkRequest &&) = default ;
    ModifyInstanceSpecShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSpecShrinkRequest() = default ;
    ModifyInstanceSpecShrinkRequest& operator=(const ModifyInstanceSpecShrinkRequest &) = default ;
    ModifyInstanceSpecShrinkRequest& operator=(ModifyInstanceSpecShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ha_ == nullptr
        && this->haResourceSpecShrink_ == nullptr && this->haVSwitchIdsShrink_ == nullptr && this->instanceId_ == nullptr && this->promotionCode_ == nullptr && this->region_ == nullptr
        && this->resourceSpecShrink_ == nullptr && this->usePromotionCode_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyInstanceSpecShrinkRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpecShrink Field Functions 
    bool hasHaResourceSpecShrink() const { return this->haResourceSpecShrink_ != nullptr;};
    void deleteHaResourceSpecShrink() { this->haResourceSpecShrink_ = nullptr;};
    inline string getHaResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(haResourceSpecShrink_, "") };
    inline ModifyInstanceSpecShrinkRequest& setHaResourceSpecShrink(string haResourceSpecShrink) { DARABONBA_PTR_SET_VALUE(haResourceSpecShrink_, haResourceSpecShrink) };


    // haVSwitchIdsShrink Field Functions 
    bool hasHaVSwitchIdsShrink() const { return this->haVSwitchIdsShrink_ != nullptr;};
    void deleteHaVSwitchIdsShrink() { this->haVSwitchIdsShrink_ = nullptr;};
    inline string getHaVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(haVSwitchIdsShrink_, "") };
    inline ModifyInstanceSpecShrinkRequest& setHaVSwitchIdsShrink(string haVSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(haVSwitchIdsShrink_, haVSwitchIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceSpecShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline ModifyInstanceSpecShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyInstanceSpecShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpecShrink Field Functions 
    bool hasResourceSpecShrink() const { return this->resourceSpecShrink_ != nullptr;};
    void deleteResourceSpecShrink() { this->resourceSpecShrink_ = nullptr;};
    inline string getResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSpecShrink_, "") };
    inline ModifyInstanceSpecShrinkRequest& setResourceSpecShrink(string resourceSpecShrink) { DARABONBA_PTR_SET_VALUE(resourceSpecShrink_, resourceSpecShrink) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool getUsePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline ModifyInstanceSpecShrinkRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


  protected:
    shared_ptr<bool> ha_ {};
    shared_ptr<string> haResourceSpecShrink_ {};
    shared_ptr<string> haVSwitchIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> promotionCode_ {};
    // This parameter is required.
    shared_ptr<string> region_ {};
    // This parameter is required.
    shared_ptr<string> resourceSpecShrink_ {};
    shared_ptr<bool> usePromotionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
