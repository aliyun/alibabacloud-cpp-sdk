// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Rule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DynamicOperator, dynamicOperator_);
      DARABONBA_PTR_TO_JSON(DynamicRule, dynamicRule_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DynamicOperator, dynamicOperator_);
      DARABONBA_PTR_FROM_JSON(DynamicRule, dynamicRule_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateDeviceGroupRequest() = default ;
    CreateDeviceGroupRequest(const CreateDeviceGroupRequest &) = default ;
    CreateDeviceGroupRequest(CreateDeviceGroupRequest &&) = default ;
    CreateDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeviceGroupRequest() = default ;
    CreateDeviceGroupRequest& operator=(const CreateDeviceGroupRequest &) = default ;
    CreateDeviceGroupRequest& operator=(CreateDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->dynamicOperator_ == nullptr && this->dynamicRule_ == nullptr && this->groupType_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDeviceGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dynamicOperator Field Functions 
    bool hasDynamicOperator() const { return this->dynamicOperator_ != nullptr;};
    void deleteDynamicOperator() { this->dynamicOperator_ = nullptr;};
    inline string getDynamicOperator() const { DARABONBA_PTR_GET_DEFAULT(dynamicOperator_, "") };
    inline CreateDeviceGroupRequest& setDynamicOperator(string dynamicOperator) { DARABONBA_PTR_SET_VALUE(dynamicOperator_, dynamicOperator) };


    // dynamicRule Field Functions 
    bool hasDynamicRule() const { return this->dynamicRule_ != nullptr;};
    void deleteDynamicRule() { this->dynamicRule_ = nullptr;};
    inline const Rule & getDynamicRule() const { DARABONBA_PTR_GET_CONST(dynamicRule_, Rule) };
    inline Rule getDynamicRule() { DARABONBA_PTR_GET(dynamicRule_, Rule) };
    inline CreateDeviceGroupRequest& setDynamicRule(const Rule & dynamicRule) { DARABONBA_PTR_SET_VALUE(dynamicRule_, dynamicRule) };
    inline CreateDeviceGroupRequest& setDynamicRule(Rule && dynamicRule) { DARABONBA_PTR_SET_RVALUE(dynamicRule_, dynamicRule) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline CreateDeviceGroupRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDeviceGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the device label. The description can contain letters, digits, Chinese characters, spaces, periods (.), underscores (_), and hyphens (-). This parameter can be left empty.
    shared_ptr<string> description_ {};
    // The operator of the dynamic device group rule.
    shared_ptr<string> dynamicOperator_ {};
    // The matching rule of the dynamic device label.
    shared_ptr<Rule> dynamicRule_ {};
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
