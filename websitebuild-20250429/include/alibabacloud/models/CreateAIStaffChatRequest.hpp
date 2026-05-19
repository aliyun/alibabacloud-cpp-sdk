// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAISTAFFCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAISTAFFCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAIStaffChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIStaffChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIStaffChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
    };
    CreateAIStaffChatRequest() = default ;
    CreateAIStaffChatRequest(const CreateAIStaffChatRequest &) = default ;
    CreateAIStaffChatRequest(CreateAIStaffChatRequest &&) = default ;
    CreateAIStaffChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIStaffChatRequest() = default ;
    CreateAIStaffChatRequest& operator=(const CreateAIStaffChatRequest &) = default ;
    CreateAIStaffChatRequest& operator=(CreateAIStaffChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(MetaData, metaData_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->metaData_ == nullptr && this->role_ == nullptr && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline Messages& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline const map<string, string> & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
      inline map<string, string> getMetaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
      inline Messages& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
      inline Messages& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Messages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> contentType_ {};
      shared_ptr<map<string, string>> metaData_ {};
      shared_ptr<string> role_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->chatId_ == nullptr && this->conversationId_ == nullptr && this->messages_ == nullptr && this->metaData_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateAIStaffChatRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreateAIStaffChatRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline CreateAIStaffChatRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CreateAIStaffChatRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateAIStaffChatRequest::Messages>) };
    inline vector<CreateAIStaffChatRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<CreateAIStaffChatRequest::Messages>) };
    inline CreateAIStaffChatRequest& setMessages(const vector<CreateAIStaffChatRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateAIStaffChatRequest& setMessages(vector<CreateAIStaffChatRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const map<string, string> & getMetaData() const { DARABONBA_PTR_GET_CONST(metaData_, map<string, string>) };
    inline map<string, string> getMetaData() { DARABONBA_PTR_GET(metaData_, map<string, string>) };
    inline CreateAIStaffChatRequest& setMetaData(const map<string, string> & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline CreateAIStaffChatRequest& setMetaData(map<string, string> && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> chatId_ {};
    shared_ptr<string> conversationId_ {};
    shared_ptr<vector<CreateAIStaffChatRequest::Messages>> messages_ {};
    shared_ptr<map<string, string>> metaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
