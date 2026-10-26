// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class CreateTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(liteTopicExpiration, liteTopicExpiration_);
      DARABONBA_PTR_TO_JSON(maxSendTps, maxSendTps_);
      DARABONBA_PTR_TO_JSON(messageType, messageType_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(liteTopicExpiration, liteTopicExpiration_);
      DARABONBA_PTR_FROM_JSON(maxSendTps, maxSendTps_);
      DARABONBA_PTR_FROM_JSON(messageType, messageType_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    CreateTopicRequest() = default ;
    CreateTopicRequest(const CreateTopicRequest &) = default ;
    CreateTopicRequest(CreateTopicRequest &&) = default ;
    CreateTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicRequest() = default ;
    CreateTopicRequest& operator=(const CreateTopicRequest &) = default ;
    CreateTopicRequest& operator=(CreateTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liteTopicExpiration_ == nullptr
        && this->maxSendTps_ == nullptr && this->messageType_ == nullptr && this->remark_ == nullptr; };
    // liteTopicExpiration Field Functions 
    bool hasLiteTopicExpiration() const { return this->liteTopicExpiration_ != nullptr;};
    void deleteLiteTopicExpiration() { this->liteTopicExpiration_ = nullptr;};
    inline int64_t getLiteTopicExpiration() const { DARABONBA_PTR_GET_DEFAULT(liteTopicExpiration_, 0L) };
    inline CreateTopicRequest& setLiteTopicExpiration(int64_t liteTopicExpiration) { DARABONBA_PTR_SET_VALUE(liteTopicExpiration_, liteTopicExpiration) };


    // maxSendTps Field Functions 
    bool hasMaxSendTps() const { return this->maxSendTps_ != nullptr;};
    void deleteMaxSendTps() { this->maxSendTps_ = nullptr;};
    inline int64_t getMaxSendTps() const { DARABONBA_PTR_GET_DEFAULT(maxSendTps_, 0L) };
    inline CreateTopicRequest& setMaxSendTps(int64_t maxSendTps) { DARABONBA_PTR_SET_VALUE(maxSendTps_, maxSendTps) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline CreateTopicRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateTopicRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The expiration time of the lite topic, in minutes.
    // Valid values: 30 to 720.
    // Default value: -1, which indicates the topic never expires.
    shared_ptr<int64_t> liteTopicExpiration_ {};
    // The maximum transactions per second (TPS) for sending messages.
    shared_ptr<int64_t> maxSendTps_ {};
    // The message type of the topic to be created.
    // 
    // >Notice: The type of the topic must be the same as the type of messages sent to the topic. For example, if you create a topic of the ordered message type, the topic can be used only to send and receive ordered messages, not other types of messages.
    // 
    // This parameter is required.
    shared_ptr<string> messageType_ {};
    // The remarks of the topic to be created.
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
