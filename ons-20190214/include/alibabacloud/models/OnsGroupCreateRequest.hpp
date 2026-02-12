// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSGROUPCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSGROUPCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsGroupCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsGroupCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, OnsGroupCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    OnsGroupCreateRequest() = default ;
    OnsGroupCreateRequest(const OnsGroupCreateRequest &) = default ;
    OnsGroupCreateRequest(OnsGroupCreateRequest &&) = default ;
    OnsGroupCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsGroupCreateRequest() = default ;
    OnsGroupCreateRequest& operator=(const OnsGroupCreateRequest &) = default ;
    OnsGroupCreateRequest& operator=(OnsGroupCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupType_ == nullptr && this->instanceId_ == nullptr && this->remark_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsGroupCreateRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline OnsGroupCreateRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsGroupCreateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline OnsGroupCreateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The ID of the consumer group that you want to create. The group ID must meet the following rules:
    // 
    // *   The group ID must be 2 to 64 characters in length and can contain only letters, digits, hyphens (-), and underscores (_).
    // *   If the ApsaraMQ for RocketMQ instance in which you want to create the consumer group uses a namespace, the group ID must be unique in the instance. The group ID cannot be the same as an existing group ID or a topic name in the instance. The group ID can be the same as a group ID or a topic name in another instance that uses a different namespace. For example, if Instance A and Instance B use different namespaces, a group ID in Instance A can be the same as a group ID or a topic name in Instance B.
    // *   If the instance does not use a namespace, the group ID must be globally unique across instances and regions. The group ID cannot be the same as an existing group ID or topic name in ApsaraMQ for RocketMQ instances that belong to your Alibaba Cloud account.
    // 
    // > 
    // 
    // *   After the consumer group is created, the group ID cannot be changed.
    // 
    // *   To check whether an instance uses a namespace, log on to the ApsaraMQ for RocketMQ console, go to the **Instance Details** page, and then view the value of the Namespace field in the **Basic Information** section.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The protocol over which clients in the consumer group communicate with the ApsaraMQ for RocketMQ broker. All clients in a consumer group communicate with the ApsaraMQ for RocketMQ broker over the same protocol. You must create different groups for TCP clients and HTTP clients. Valid values:
    // 
    // *   **tcp**: Clients in the consumer group consume messages over TCP. This is the default value.
    // *   **http**: Clients in the consumer group consume messages over HTTP.
    shared_ptr<string> groupType_ {};
    // The ID of the instance in which you want to create the consumer group.
    shared_ptr<string> instanceId_ {};
    // The description of the consumer group.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
