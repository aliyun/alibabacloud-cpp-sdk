// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(conversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_ANY_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(conversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_ANY_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CreateConversationResponseBody() = default ;
    CreateConversationResponseBody(const CreateConversationResponseBody &) = default ;
    CreateConversationResponseBody(CreateConversationResponseBody &&) = default ;
    CreateConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConversationResponseBody() = default ;
    CreateConversationResponseBody& operator=(const CreateConversationResponseBody &) = default ;
    CreateConversationResponseBody& operator=(CreateConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->conversationId_ == nullptr && this->createdAt_ == nullptr && this->message_ == nullptr && this->metadata_ == nullptr && this->requestId_ == nullptr
        && this->title_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateConversationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateConversationResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateConversationResponseBody& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateConversationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateConversationResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateConversationResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateConversationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateConversationResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // Id of the request
    shared_ptr<string> conversationId_ {};
    // The time when the share was created.
    shared_ptr<string> createdAt_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // A reserved field for extension use.
    Darabonba::Json metadata_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The appointment title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
