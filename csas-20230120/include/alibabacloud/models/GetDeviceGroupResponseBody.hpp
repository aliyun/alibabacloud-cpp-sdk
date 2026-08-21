// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Rule.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDeviceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroup, deviceGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroup, deviceGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDeviceGroupResponseBody() = default ;
    GetDeviceGroupResponseBody(const GetDeviceGroupResponseBody &) = default ;
    GetDeviceGroupResponseBody(GetDeviceGroupResponseBody &&) = default ;
    GetDeviceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceGroupResponseBody() = default ;
    GetDeviceGroupResponseBody& operator=(const GetDeviceGroupResponseBody &) = default ;
    GetDeviceGroupResponseBody& operator=(GetDeviceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
        DARABONBA_PTR_TO_JSON(DynamicOperator, dynamicOperator_);
        DARABONBA_PTR_TO_JSON(DynamicRule, dynamicRule_);
        DARABONBA_PTR_TO_JSON(GroupType, groupType_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_TO_JSON(MatchDevTags, matchDevTags_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
        DARABONBA_PTR_FROM_JSON(DynamicOperator, dynamicOperator_);
        DARABONBA_PTR_FROM_JSON(DynamicRule, dynamicRule_);
        DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_PTR_FROM_JSON(MatchDevTags, matchDevTags_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DeviceGroup() = default ;
      DeviceGroup(const DeviceGroup &) = default ;
      DeviceGroup(DeviceGroup &&) = default ;
      DeviceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceGroup() = default ;
      DeviceGroup& operator=(const DeviceGroup &) = default ;
      DeviceGroup& operator=(DeviceGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->deviceGroupId_ == nullptr && this->dynamicOperator_ == nullptr && this->dynamicRule_ == nullptr && this->groupType_ == nullptr && this->isDefault_ == nullptr
        && this->matchDevTags_ == nullptr && this->name_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DeviceGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // deviceGroupId Field Functions 
      bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
      void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
      inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
      inline DeviceGroup& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


      // dynamicOperator Field Functions 
      bool hasDynamicOperator() const { return this->dynamicOperator_ != nullptr;};
      void deleteDynamicOperator() { this->dynamicOperator_ = nullptr;};
      inline string getDynamicOperator() const { DARABONBA_PTR_GET_DEFAULT(dynamicOperator_, "") };
      inline DeviceGroup& setDynamicOperator(string dynamicOperator) { DARABONBA_PTR_SET_VALUE(dynamicOperator_, dynamicOperator) };


      // dynamicRule Field Functions 
      bool hasDynamicRule() const { return this->dynamicRule_ != nullptr;};
      void deleteDynamicRule() { this->dynamicRule_ = nullptr;};
      inline const Rule & getDynamicRule() const { DARABONBA_PTR_GET_CONST(dynamicRule_, Rule) };
      inline Rule getDynamicRule() { DARABONBA_PTR_GET(dynamicRule_, Rule) };
      inline DeviceGroup& setDynamicRule(const Rule & dynamicRule) { DARABONBA_PTR_SET_VALUE(dynamicRule_, dynamicRule) };
      inline DeviceGroup& setDynamicRule(Rule && dynamicRule) { DARABONBA_PTR_SET_RVALUE(dynamicRule_, dynamicRule) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline DeviceGroup& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
      inline DeviceGroup& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // matchDevTags Field Functions 
      bool hasMatchDevTags() const { return this->matchDevTags_ != nullptr;};
      void deleteMatchDevTags() { this->matchDevTags_ = nullptr;};
      inline const vector<string> & getMatchDevTags() const { DARABONBA_PTR_GET_CONST(matchDevTags_, vector<string>) };
      inline vector<string> getMatchDevTags() { DARABONBA_PTR_GET(matchDevTags_, vector<string>) };
      inline DeviceGroup& setMatchDevTags(const vector<string> & matchDevTags) { DARABONBA_PTR_SET_VALUE(matchDevTags_, matchDevTags) };
      inline DeviceGroup& setMatchDevTags(vector<string> && matchDevTags) { DARABONBA_PTR_SET_RVALUE(matchDevTags_, matchDevTags) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DeviceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The device label description.
      shared_ptr<string> description_ {};
      // The device label ID.
      shared_ptr<string> deviceGroupId_ {};
      // The dynamic device group rule operator.
      shared_ptr<string> dynamicOperator_ {};
      // The matching rule of the dynamic device label.
      shared_ptr<Rule> dynamicRule_ {};
      // The device label type. Valid values:
      // - **static**: Static device label. Members consist of manually added terminal devices.
      // - **dynamic**: Dynamic device label.
      shared_ptr<string> groupType_ {};
      // Indicates whether the device label is a system built-in device label. Valid values:
      // - **true**: System built-in device label.
      // - **false**: User-defined device label.
      shared_ptr<string> isDefault_ {};
      // The collection of terminal device IDs associated with the device label.
      shared_ptr<vector<string>> matchDevTags_ {};
      // The device label name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->deviceGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceGroup Field Functions 
    bool hasDeviceGroup() const { return this->deviceGroup_ != nullptr;};
    void deleteDeviceGroup() { this->deviceGroup_ = nullptr;};
    inline const GetDeviceGroupResponseBody::DeviceGroup & getDeviceGroup() const { DARABONBA_PTR_GET_CONST(deviceGroup_, GetDeviceGroupResponseBody::DeviceGroup) };
    inline GetDeviceGroupResponseBody::DeviceGroup getDeviceGroup() { DARABONBA_PTR_GET(deviceGroup_, GetDeviceGroupResponseBody::DeviceGroup) };
    inline GetDeviceGroupResponseBody& setDeviceGroup(const GetDeviceGroupResponseBody::DeviceGroup & deviceGroup) { DARABONBA_PTR_SET_VALUE(deviceGroup_, deviceGroup) };
    inline GetDeviceGroupResponseBody& setDeviceGroup(GetDeviceGroupResponseBody::DeviceGroup && deviceGroup) { DARABONBA_PTR_SET_RVALUE(deviceGroup_, deviceGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The device label details.
    shared_ptr<GetDeviceGroupResponseBody::DeviceGroup> deviceGroup_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
