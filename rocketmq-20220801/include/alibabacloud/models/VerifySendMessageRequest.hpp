// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYSENDMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYSENDMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class VerifySendMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifySendMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(liteTopicName, liteTopicName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(messageKey, messageKey_);
      DARABONBA_PTR_TO_JSON(messageTag, messageTag_);
    };
    friend void from_json(const Darabonba::Json& j, VerifySendMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(liteTopicName, liteTopicName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(messageKey, messageKey_);
      DARABONBA_PTR_FROM_JSON(messageTag, messageTag_);
    };
    VerifySendMessageRequest() = default ;
    VerifySendMessageRequest(const VerifySendMessageRequest &) = default ;
    VerifySendMessageRequest(VerifySendMessageRequest &&) = default ;
    VerifySendMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifySendMessageRequest() = default ;
    VerifySendMessageRequest& operator=(const VerifySendMessageRequest &) = default ;
    VerifySendMessageRequest& operator=(VerifySendMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liteTopicName_ == nullptr
        && return this->message_ == nullptr && return this->messageKey_ == nullptr && return this->messageTag_ == nullptr; };
    // liteTopicName Field Functions 
    bool hasLiteTopicName() const { return this->liteTopicName_ != nullptr;};
    void deleteLiteTopicName() { this->liteTopicName_ = nullptr;};
    inline string liteTopicName() const { DARABONBA_PTR_GET_DEFAULT(liteTopicName_, "") };
    inline VerifySendMessageRequest& setLiteTopicName(string liteTopicName) { DARABONBA_PTR_SET_VALUE(liteTopicName_, liteTopicName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifySendMessageRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageKey Field Functions 
    bool hasMessageKey() const { return this->messageKey_ != nullptr;};
    void deleteMessageKey() { this->messageKey_ = nullptr;};
    inline string messageKey() const { DARABONBA_PTR_GET_DEFAULT(messageKey_, "") };
    inline VerifySendMessageRequest& setMessageKey(string messageKey) { DARABONBA_PTR_SET_VALUE(messageKey_, messageKey) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline VerifySendMessageRequest& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


  protected:
    std::shared_ptr<string> liteTopicName_ = nullptr;
    // The message body.
    std::shared_ptr<string> message_ = nullptr;
    // The message key.
    std::shared_ptr<string> messageKey_ = nullptr;
    // The message tag.
    std::shared_ptr<string> messageTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
