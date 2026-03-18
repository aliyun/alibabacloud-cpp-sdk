// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteTextbookAssistantDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTextbookAssistantDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
      DARABONBA_PTR_TO_JSON(userMessage, userMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTextbookAssistantDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(userMessage, userMessage_);
    };
    ExecuteTextbookAssistantDialogueRequest() = default ;
    ExecuteTextbookAssistantDialogueRequest(const ExecuteTextbookAssistantDialogueRequest &) = default ;
    ExecuteTextbookAssistantDialogueRequest(ExecuteTextbookAssistantDialogueRequest &&) = default ;
    ExecuteTextbookAssistantDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTextbookAssistantDialogueRequest() = default ;
    ExecuteTextbookAssistantDialogueRequest& operator=(const ExecuteTextbookAssistantDialogueRequest &) = default ;
    ExecuteTextbookAssistantDialogueRequest& operator=(ExecuteTextbookAssistantDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->chatId_ == nullptr && this->scenario_ == nullptr && this->userMessage_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ExecuteTextbookAssistantDialogueRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ExecuteTextbookAssistantDialogueRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ExecuteTextbookAssistantDialogueRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // userMessage Field Functions 
    bool hasUserMessage() const { return this->userMessage_ != nullptr;};
    void deleteUserMessage() { this->userMessage_ = nullptr;};
    inline string getUserMessage() const { DARABONBA_PTR_GET_DEFAULT(userMessage_, "") };
    inline ExecuteTextbookAssistantDialogueRequest& setUserMessage(string userMessage) { DARABONBA_PTR_SET_VALUE(userMessage_, userMessage) };


  protected:
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    // This parameter is required.
    shared_ptr<string> chatId_ {};
    // This parameter is required.
    shared_ptr<string> scenario_ {};
    // This parameter is required.
    shared_ptr<string> userMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
