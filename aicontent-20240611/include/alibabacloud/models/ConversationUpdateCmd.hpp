// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERSATIONUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_CONVERSATIONUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ConversationUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversationUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(chatData, chatData_);
      DARABONBA_PTR_TO_JSON(messageCount, messageCount_);
      DARABONBA_PTR_TO_JSON(modelIds, modelIds_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ConversationUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(chatData, chatData_);
      DARABONBA_PTR_FROM_JSON(messageCount, messageCount_);
      DARABONBA_PTR_FROM_JSON(modelIds, modelIds_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ConversationUpdateCmd() = default ;
    ConversationUpdateCmd(const ConversationUpdateCmd &) = default ;
    ConversationUpdateCmd(ConversationUpdateCmd &&) = default ;
    ConversationUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversationUpdateCmd() = default ;
    ConversationUpdateCmd& operator=(const ConversationUpdateCmd &) = default ;
    ConversationUpdateCmd& operator=(ConversationUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatData_ == nullptr
        && this->messageCount_ == nullptr && this->modelIds_ == nullptr && this->title_ == nullptr; };
    // chatData Field Functions 
    bool hasChatData() const { return this->chatData_ != nullptr;};
    void deleteChatData() { this->chatData_ = nullptr;};
    inline string getChatData() const { DARABONBA_PTR_GET_DEFAULT(chatData_, "") };
    inline ConversationUpdateCmd& setChatData(string chatData) { DARABONBA_PTR_SET_VALUE(chatData_, chatData) };


    // messageCount Field Functions 
    bool hasMessageCount() const { return this->messageCount_ != nullptr;};
    void deleteMessageCount() { this->messageCount_ = nullptr;};
    inline int32_t getMessageCount() const { DARABONBA_PTR_GET_DEFAULT(messageCount_, 0) };
    inline ConversationUpdateCmd& setMessageCount(int32_t messageCount) { DARABONBA_PTR_SET_VALUE(messageCount_, messageCount) };


    // modelIds Field Functions 
    bool hasModelIds() const { return this->modelIds_ != nullptr;};
    void deleteModelIds() { this->modelIds_ = nullptr;};
    inline string getModelIds() const { DARABONBA_PTR_GET_DEFAULT(modelIds_, "") };
    inline ConversationUpdateCmd& setModelIds(string modelIds) { DARABONBA_PTR_SET_VALUE(modelIds_, modelIds) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ConversationUpdateCmd& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> chatData_ {};
    shared_ptr<int32_t> messageCount_ {};
    shared_ptr<string> modelIds_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
