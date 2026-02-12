// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSGROUPCONSUMERUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSGROUPCONSUMERUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsGroupConsumerUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsGroupConsumerUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ReadEnable, readEnable_);
    };
    friend void from_json(const Darabonba::Json& j, OnsGroupConsumerUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ReadEnable, readEnable_);
    };
    OnsGroupConsumerUpdateRequest() = default ;
    OnsGroupConsumerUpdateRequest(const OnsGroupConsumerUpdateRequest &) = default ;
    OnsGroupConsumerUpdateRequest(OnsGroupConsumerUpdateRequest &&) = default ;
    OnsGroupConsumerUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsGroupConsumerUpdateRequest() = default ;
    OnsGroupConsumerUpdateRequest& operator=(const OnsGroupConsumerUpdateRequest &) = default ;
    OnsGroupConsumerUpdateRequest& operator=(OnsGroupConsumerUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->readEnable_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsGroupConsumerUpdateRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsGroupConsumerUpdateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // readEnable Field Functions 
    bool hasReadEnable() const { return this->readEnable_ != nullptr;};
    void deleteReadEnable() { this->readEnable_ = nullptr;};
    inline bool getReadEnable() const { DARABONBA_PTR_GET_DEFAULT(readEnable_, false) };
    inline OnsGroupConsumerUpdateRequest& setReadEnable(bool readEnable) { DARABONBA_PTR_SET_VALUE(readEnable_, readEnable) };


  protected:
    // The ID of the consumer group for which you want to configure read permissions.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the instance to which the consumer group you want to configure belongs.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to authorize the consumer group to read messages. Valid values:
    // 
    // *   **true**: The consumer group can read messages.
    // *   **false**: The consumer group cannot read messages.
    // 
    // Default value: **true**.
    // 
    // This parameter is required.
    shared_ptr<bool> readEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
