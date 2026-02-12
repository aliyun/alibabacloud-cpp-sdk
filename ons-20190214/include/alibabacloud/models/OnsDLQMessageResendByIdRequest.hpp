// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSDLQMESSAGERESENDBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSDLQMESSAGERESENDBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsDLQMessageResendByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsDLQMessageResendByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsDLQMessageResendByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
    };
    OnsDLQMessageResendByIdRequest() = default ;
    OnsDLQMessageResendByIdRequest(const OnsDLQMessageResendByIdRequest &) = default ;
    OnsDLQMessageResendByIdRequest(OnsDLQMessageResendByIdRequest &&) = default ;
    OnsDLQMessageResendByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsDLQMessageResendByIdRequest() = default ;
    OnsDLQMessageResendByIdRequest& operator=(const OnsDLQMessageResendByIdRequest &) = default ;
    OnsDLQMessageResendByIdRequest& operator=(OnsDLQMessageResendByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->msgId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsDLQMessageResendByIdRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsDLQMessageResendByIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline OnsDLQMessageResendByIdRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


  protected:
    // The ID of the consumer group in which you want to query dead-letter messages.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the instance in which the dead-letter message you want to query resides.
    shared_ptr<string> instanceId_ {};
    // The ID of the dead-letter message that you want to send to a consumer group for consumption.
    // 
    // This parameter is required.
    shared_ptr<string> msgId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
