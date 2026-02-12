// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRACEQUERYBYMSGIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTRACEQUERYBYMSGIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTraceQueryByMsgIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTraceQueryByMsgIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTraceQueryByMsgIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsTraceQueryByMsgIdRequest() = default ;
    OnsTraceQueryByMsgIdRequest(const OnsTraceQueryByMsgIdRequest &) = default ;
    OnsTraceQueryByMsgIdRequest(OnsTraceQueryByMsgIdRequest &&) = default ;
    OnsTraceQueryByMsgIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTraceQueryByMsgIdRequest() = default ;
    OnsTraceQueryByMsgIdRequest& operator=(const OnsTraceQueryByMsgIdRequest &) = default ;
    OnsTraceQueryByMsgIdRequest& operator=(OnsTraceQueryByMsgIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->msgId_ == nullptr && this->topic_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline OnsTraceQueryByMsgIdRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline OnsTraceQueryByMsgIdRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTraceQueryByMsgIdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline OnsTraceQueryByMsgIdRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTraceQueryByMsgIdRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The beginning of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The end of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the ApsaraMQ for RocketMQ instance that contains the specified topic.
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
