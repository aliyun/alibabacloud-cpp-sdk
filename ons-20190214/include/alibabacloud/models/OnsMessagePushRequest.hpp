// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSMESSAGEPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSMESSAGEPUSHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsMessagePushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsMessagePushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsMessagePushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsMessagePushRequest() = default ;
    OnsMessagePushRequest(const OnsMessagePushRequest &) = default ;
    OnsMessagePushRequest(OnsMessagePushRequest &&) = default ;
    OnsMessagePushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsMessagePushRequest() = default ;
    OnsMessagePushRequest& operator=(const OnsMessagePushRequest &) = default ;
    OnsMessagePushRequest& operator=(OnsMessagePushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->msgId_ == nullptr && this->topic_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline OnsMessagePushRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsMessagePushRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsMessagePushRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline OnsMessagePushRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsMessagePushRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the consumer client. You can call the [OnsConsumerGetConnection](https://help.aliyun.com/document_detail/29598.html) operation to query client IDs.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The ID of the consumer group. For information about what a consumer group is, see [Terms](https://help.aliyun.com/document_detail/29533.html).
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the ApsaraMQ for RocketMQ instance to which the specified consumer group belongs.
    shared_ptr<string> instanceId_ {};
    // The ID of the message.
    // 
    // This parameter is required.
    shared_ptr<string> msgId_ {};
    // The topic to which the message is pushed.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
