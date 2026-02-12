// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRACEQUERYBYMSGKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTRACEQUERYBYMSGKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTraceQueryByMsgKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTraceQueryByMsgKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgKey, msgKey_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTraceQueryByMsgKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgKey, msgKey_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTraceQueryByMsgKeyRequest() = default ;
    OnsTraceQueryByMsgKeyRequest(const OnsTraceQueryByMsgKeyRequest &) = default ;
    OnsTraceQueryByMsgKeyRequest(OnsTraceQueryByMsgKeyRequest &&) = default ;
    OnsTraceQueryByMsgKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTraceQueryByMsgKeyRequest() = default ;
    OnsTraceQueryByMsgKeyRequest& operator=(const OnsTraceQueryByMsgKeyRequest &) = default ;
    OnsTraceQueryByMsgKeyRequest& operator=(OnsTraceQueryByMsgKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->msgKey_ == nullptr && this->topic_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline OnsTraceQueryByMsgKeyRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline OnsTraceQueryByMsgKeyRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTraceQueryByMsgKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgKey Field Functions 
    bool hasMsgKey() const { return this->msgKey_ != nullptr;};
    void deleteMsgKey() { this->msgKey_ = nullptr;};
    inline string getMsgKey() const { DARABONBA_PTR_GET_DEFAULT(msgKey_, "") };
    inline OnsTraceQueryByMsgKeyRequest& setMsgKey(string msgKey) { DARABONBA_PTR_SET_VALUE(msgKey_, msgKey) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTraceQueryByMsgKeyRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The start of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The end of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the ApsaraMQ for RocketMQ instance that contains the specified topic.
    shared_ptr<string> instanceId_ {};
    // The key of the message that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> msgKey_ {};
    // The topic that contains the message you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
