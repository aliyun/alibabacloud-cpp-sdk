// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEVICEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEVICEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateDeviceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeviceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(DynamicOperator, dynamicOperator_);
      DARABONBA_PTR_TO_JSON(DynamicRule, dynamicRuleShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeviceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(DynamicOperator, dynamicOperator_);
      DARABONBA_PTR_FROM_JSON(DynamicRule, dynamicRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateDeviceGroupShrinkRequest() = default ;
    UpdateDeviceGroupShrinkRequest(const UpdateDeviceGroupShrinkRequest &) = default ;
    UpdateDeviceGroupShrinkRequest(UpdateDeviceGroupShrinkRequest &&) = default ;
    UpdateDeviceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeviceGroupShrinkRequest() = default ;
    UpdateDeviceGroupShrinkRequest& operator=(const UpdateDeviceGroupShrinkRequest &) = default ;
    UpdateDeviceGroupShrinkRequest& operator=(UpdateDeviceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceGroupId_ == nullptr && this->dynamicOperator_ == nullptr && this->dynamicRuleShrink_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDeviceGroupShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline UpdateDeviceGroupShrinkRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // dynamicOperator Field Functions 
    bool hasDynamicOperator() const { return this->dynamicOperator_ != nullptr;};
    void deleteDynamicOperator() { this->dynamicOperator_ = nullptr;};
    inline string getDynamicOperator() const { DARABONBA_PTR_GET_DEFAULT(dynamicOperator_, "") };
    inline UpdateDeviceGroupShrinkRequest& setDynamicOperator(string dynamicOperator) { DARABONBA_PTR_SET_VALUE(dynamicOperator_, dynamicOperator) };


    // dynamicRuleShrink Field Functions 
    bool hasDynamicRuleShrink() const { return this->dynamicRuleShrink_ != nullptr;};
    void deleteDynamicRuleShrink() { this->dynamicRuleShrink_ = nullptr;};
    inline string getDynamicRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(dynamicRuleShrink_, "") };
    inline UpdateDeviceGroupShrinkRequest& setDynamicRuleShrink(string dynamicRuleShrink) { DARABONBA_PTR_SET_VALUE(dynamicRuleShrink_, dynamicRuleShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDeviceGroupShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the device label. Set this parameter to an empty string to clear the description. The description can contain letters, digits, Chinese characters, spaces, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // The ID of the device label.
    shared_ptr<string> deviceGroupId_ {};
    // The operator of the dynamic device group rule.
    shared_ptr<string> dynamicOperator_ {};
    // The matching rule of the dynamic device label.
    shared_ptr<string> dynamicRuleShrink_ {};
    // The name of the device label. The name must be 1 to 128 characters in length and can contain letters, digits, Chinese characters, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
