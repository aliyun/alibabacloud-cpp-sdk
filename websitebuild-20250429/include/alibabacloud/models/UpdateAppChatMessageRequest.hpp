// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPCHATMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPCHATMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateAppChatMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppChatMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddedMetaData, addedMetaData_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedMetaData, addedMetaData_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
    };
    UpdateAppChatMessageRequest() = default ;
    UpdateAppChatMessageRequest(const UpdateAppChatMessageRequest &) = default ;
    UpdateAppChatMessageRequest(UpdateAppChatMessageRequest &&) = default ;
    UpdateAppChatMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppChatMessageRequest() = default ;
    UpdateAppChatMessageRequest& operator=(const UpdateAppChatMessageRequest &) = default ;
    UpdateAppChatMessageRequest& operator=(UpdateAppChatMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addedMetaData_ == nullptr
        && this->content_ == nullptr && this->conversationId_ == nullptr && this->messageId_ == nullptr; };
    // addedMetaData Field Functions 
    bool hasAddedMetaData() const { return this->addedMetaData_ != nullptr;};
    void deleteAddedMetaData() { this->addedMetaData_ = nullptr;};
    inline string getAddedMetaData() const { DARABONBA_PTR_GET_DEFAULT(addedMetaData_, "") };
    inline UpdateAppChatMessageRequest& setAddedMetaData(string addedMetaData) { DARABONBA_PTR_SET_VALUE(addedMetaData_, addedMetaData) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateAppChatMessageRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline UpdateAppChatMessageRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline UpdateAppChatMessageRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    // Appended message metadata (JSON format)
    shared_ptr<string> addedMetaData_ {};
    // Message content
    shared_ptr<string> content_ {};
    // Session ID
    shared_ptr<string> conversationId_ {};
    // Message ID
    shared_ptr<string> messageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
