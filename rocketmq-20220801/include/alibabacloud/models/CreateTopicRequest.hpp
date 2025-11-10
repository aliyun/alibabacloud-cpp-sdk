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
        && return this->maxSendTps_ == nullptr && return this->messageType_ == nullptr && return this->remark_ == nullptr; };
    // liteTopicExpiration Field Functions 
    bool hasLiteTopicExpiration() const { return this->liteTopicExpiration_ != nullptr;};
    void deleteLiteTopicExpiration() { this->liteTopicExpiration_ = nullptr;};
    inline int64_t liteTopicExpiration() const { DARABONBA_PTR_GET_DEFAULT(liteTopicExpiration_, 0L) };
    inline CreateTopicRequest& setLiteTopicExpiration(int64_t liteTopicExpiration) { DARABONBA_PTR_SET_VALUE(liteTopicExpiration_, liteTopicExpiration) };


    // maxSendTps Field Functions 
    bool hasMaxSendTps() const { return this->maxSendTps_ != nullptr;};
    void deleteMaxSendTps() { this->maxSendTps_ = nullptr;};
    inline int64_t maxSendTps() const { DARABONBA_PTR_GET_DEFAULT(maxSendTps_, 0L) };
    inline CreateTopicRequest& setMaxSendTps(int64_t maxSendTps) { DARABONBA_PTR_SET_VALUE(maxSendTps_, maxSendTps) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline CreateTopicRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateTopicRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<int64_t> liteTopicExpiration_ = nullptr;
    // The maximum TPS for message sending.
    std::shared_ptr<int64_t> maxSendTps_ = nullptr;
    // The type of messages in the topic that you want to create.
    // 
    // Valid values:
    // 
    // *   TRANSACTION: transactional messages
    // *   FIFO: ordered messages
    // *   DELAY: scheduled or delayed messages
    // *   NORMAL: normal messages
    // 
    // >  The type of messages in the topic must be the same as the type of messages that you want to send. For example, if you create a topic whose message type is ordered messages, you can use the topic to send and receive only ordered messages.
    // 
    // This parameter is required.
    std::shared_ptr<string> messageType_ = nullptr;
    // The description of the topic that you want to create.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
