// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVICEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVICEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateDeviceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeviceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DynamicOperator, dynamicOperator_);
      DARABONBA_PTR_TO_JSON(DynamicRule, dynamicRuleShrink_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeviceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DynamicOperator, dynamicOperator_);
      DARABONBA_PTR_FROM_JSON(DynamicRule, dynamicRuleShrink_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateDeviceGroupShrinkRequest() = default ;
    CreateDeviceGroupShrinkRequest(const CreateDeviceGroupShrinkRequest &) = default ;
    CreateDeviceGroupShrinkRequest(CreateDeviceGroupShrinkRequest &&) = default ;
    CreateDeviceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeviceGroupShrinkRequest() = default ;
    CreateDeviceGroupShrinkRequest& operator=(const CreateDeviceGroupShrinkRequest &) = default ;
    CreateDeviceGroupShrinkRequest& operator=(CreateDeviceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->dynamicOperator_ == nullptr && this->dynamicRuleShrink_ == nullptr && this->groupType_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDeviceGroupShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dynamicOperator Field Functions 
    bool hasDynamicOperator() const { return this->dynamicOperator_ != nullptr;};
    void deleteDynamicOperator() { this->dynamicOperator_ = nullptr;};
    inline string getDynamicOperator() const { DARABONBA_PTR_GET_DEFAULT(dynamicOperator_, "") };
    inline CreateDeviceGroupShrinkRequest& setDynamicOperator(string dynamicOperator) { DARABONBA_PTR_SET_VALUE(dynamicOperator_, dynamicOperator) };


    // dynamicRuleShrink Field Functions 
    bool hasDynamicRuleShrink() const { return this->dynamicRuleShrink_ != nullptr;};
    void deleteDynamicRuleShrink() { this->dynamicRuleShrink_ = nullptr;};
    inline string getDynamicRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(dynamicRuleShrink_, "") };
    inline CreateDeviceGroupShrinkRequest& setDynamicRuleShrink(string dynamicRuleShrink) { DARABONBA_PTR_SET_VALUE(dynamicRuleShrink_, dynamicRuleShrink) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateDeviceGroupShrinkRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDeviceGroupShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the device label. The description can contain letters, digits, Chinese characters, spaces, periods (.), underscores (_), and hyphens (-). This parameter can be left empty.
    shared_ptr<string> description_ {};
    // The operator of the dynamic device group rule.
    shared_ptr<string> dynamicOperator_ {};
    // The matching rule of the dynamic device label.
    shared_ptr<string> dynamicRuleShrink_ {};
    // The type of the device label. Valid values:
    // 
    // - **static**: static device label. After creation, manually add terminal devices by calling [AddDeviceGroupMatchDevices](~~AddDeviceGroupMatchDevices~~).
    // - **dynamic**: dynamic device label. Members are automatically matched by the DynamicRule matching rule.
    shared_ptr<string> groupType_ {};
    // The name of the device label. The name must be 1 to 128 characters in length and can contain letters, digits, Chinese characters, periods (.), underscores (_), and hyphens (-). Spaces are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
