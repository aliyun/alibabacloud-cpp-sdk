// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSENDMESSAGETOGLOBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSENDMESSAGETOGLOBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class BatchSendMessageToGlobeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSendMessageToGlobeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSendMessageToGlobeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
    };
    BatchSendMessageToGlobeRequest() = default ;
    BatchSendMessageToGlobeRequest(const BatchSendMessageToGlobeRequest &) = default ;
    BatchSendMessageToGlobeRequest(BatchSendMessageToGlobeRequest &&) = default ;
    BatchSendMessageToGlobeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSendMessageToGlobeRequest() = default ;
    BatchSendMessageToGlobeRequest& operator=(const BatchSendMessageToGlobeRequest &) = default ;
    BatchSendMessageToGlobeRequest& operator=(BatchSendMessageToGlobeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->from_ == nullptr && return this->message_ == nullptr && return this->taskId_ == nullptr && return this->to_ == nullptr && return this->type_ == nullptr
        && return this->validityPeriod_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline BatchSendMessageToGlobeRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline BatchSendMessageToGlobeRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchSendMessageToGlobeRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline BatchSendMessageToGlobeRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline BatchSendMessageToGlobeRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BatchSendMessageToGlobeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // validityPeriod Field Functions 
    bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
    void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
    inline int64_t validityPeriod() const { DARABONBA_PTR_GET_DEFAULT(validityPeriod_, 0L) };
    inline BatchSendMessageToGlobeRequest& setValidityPeriod(int64_t validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };


  protected:
    // The ID of the delivery channel.
    std::shared_ptr<string> channelId_ = nullptr;
    // The mobile phone number of the sender. You can specify the sender ID when you call the API operation. The sender ID can contain only digits and letters. If the sender ID contains letters, it can be a maximum of 11 characters in length. If the sender ID contains only digits, it can be a maximum of 15 characters in length.
    std::shared_ptr<string> from_ = nullptr;
    // The content of the message.
    // 
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the messaging campaign. It must be 1 to 255 characters in length. The ID is the value of the TaskId field in the delivery receipt of the message.
    std::shared_ptr<string> taskId_ = nullptr;
    // The mobile phone number of the recipient. You must add the dialing code to the beginning of each mobile phone number.
    // 
    // For more information, see [Dialing codes](https://help.aliyun.com/document_detail/158400.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> to_ = nullptr;
    // The type of the message. Valid values:
    // 
    // *   **NOTIFY**: notification
    // *   **MKT**: promotional message
    std::shared_ptr<string> type_ = nullptr;
    // The validity period of the message. Unit: seconds.
    std::shared_ptr<int64_t> validityPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
