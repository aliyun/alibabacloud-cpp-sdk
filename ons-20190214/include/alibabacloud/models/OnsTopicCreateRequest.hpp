// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTOPICCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTOPICCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTopicCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTopicCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTopicCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTopicCreateRequest() = default ;
    OnsTopicCreateRequest(const OnsTopicCreateRequest &) = default ;
    OnsTopicCreateRequest(OnsTopicCreateRequest &&) = default ;
    OnsTopicCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTopicCreateRequest() = default ;
    OnsTopicCreateRequest& operator=(const OnsTopicCreateRequest &) = default ;
    OnsTopicCreateRequest& operator=(OnsTopicCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->messageType_ == nullptr && this->remark_ == nullptr && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTopicCreateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline int32_t getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, 0) };
    inline OnsTopicCreateRequest& setMessageType(int32_t messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline OnsTopicCreateRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTopicCreateRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance in which you want to create the topic.
    shared_ptr<string> instanceId_ {};
    // The type of messages that you want to publish to the topic. Valid values:
    // 
    // *   **0**: normal messages
    // *   **1**: partitionally ordered messages
    // *   **2**: globally ordered messages
    // *   **4**: transactional messages
    // *   **5**: scheduled or delayed messages
    // 
    // For more information about message types, see [Message types](https://help.aliyun.com/document_detail/155952.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> messageType_ {};
    // The description of the topic that you want to create.
    shared_ptr<string> remark_ {};
    // The name of the topic that you want to create. The name must meet the following rules:
    // 
    // *   The name must be 3 to 64 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // *   The topic name cannot start with CID or GID because CID and GID are reserved prefixes for group IDs.
    // *   If the ApsaraMQ for RocketMQ instance in which you want to create the topic uses a namespace, the topic name must be unique in the instance. The topic name cannot be the same as an existing topic name or a group ID in the instance. The topic name can be the same as a topic name or a group ID in another instance that uses a different namespace. For example, if Instance A and Instance B use different namespaces, a topic name in Instance A can be the same as a topic name or a group ID in Instance B.
    // *   If the instance in which you want to create the topic does not use a namespace, the topic name must be globally unique across instances and regions. The topic name cannot be the same as an existing topic name or group ID in all ApsaraMQ for RocketMQ instances that belong to your Alibaba Cloud account.
    // 
    // > To check whether an instance uses a namespace, log on to the ApsaraMQ for RocketMQ console, go to the **Instance Details** page, and then view the value of the Namespace field in the **Basic Information** section.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
