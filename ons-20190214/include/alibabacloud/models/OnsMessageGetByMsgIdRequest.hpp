// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSMESSAGEGETBYMSGIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSMESSAGEGETBYMSGIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsMessageGetByMsgIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsMessageGetByMsgIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsMessageGetByMsgIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsMessageGetByMsgIdRequest() = default ;
    OnsMessageGetByMsgIdRequest(const OnsMessageGetByMsgIdRequest &) = default ;
    OnsMessageGetByMsgIdRequest(OnsMessageGetByMsgIdRequest &&) = default ;
    OnsMessageGetByMsgIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsMessageGetByMsgIdRequest() = default ;
    OnsMessageGetByMsgIdRequest& operator=(const OnsMessageGetByMsgIdRequest &) = default ;
    OnsMessageGetByMsgIdRequest& operator=(OnsMessageGetByMsgIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->msgId_ == nullptr && this->topic_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsMessageGetByMsgIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline OnsMessageGetByMsgIdRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsMessageGetByMsgIdRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the instance to which the message you want to query belongs.
    shared_ptr<string> instanceId_ {};
    // The ID of the message that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> msgId_ {};
    // The topic that contains the message you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
