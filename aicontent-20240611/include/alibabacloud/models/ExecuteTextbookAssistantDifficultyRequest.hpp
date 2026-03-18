// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTDIFFICULTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTDIFFICULTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteTextbookAssistantDifficultyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTextbookAssistantDifficultyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(assistant, assistant_);
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTextbookAssistantDifficultyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(assistant, assistant_);
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
    };
    ExecuteTextbookAssistantDifficultyRequest() = default ;
    ExecuteTextbookAssistantDifficultyRequest(const ExecuteTextbookAssistantDifficultyRequest &) = default ;
    ExecuteTextbookAssistantDifficultyRequest(ExecuteTextbookAssistantDifficultyRequest &&) = default ;
    ExecuteTextbookAssistantDifficultyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTextbookAssistantDifficultyRequest() = default ;
    ExecuteTextbookAssistantDifficultyRequest& operator=(const ExecuteTextbookAssistantDifficultyRequest &) = default ;
    ExecuteTextbookAssistantDifficultyRequest& operator=(ExecuteTextbookAssistantDifficultyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->assistant_ == nullptr && this->authToken_ == nullptr && this->chatId_ == nullptr && this->scenario_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ExecuteTextbookAssistantDifficultyRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // assistant Field Functions 
    bool hasAssistant() const { return this->assistant_ != nullptr;};
    void deleteAssistant() { this->assistant_ = nullptr;};
    inline string getAssistant() const { DARABONBA_PTR_GET_DEFAULT(assistant_, "") };
    inline ExecuteTextbookAssistantDifficultyRequest& setAssistant(string assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ExecuteTextbookAssistantDifficultyRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ExecuteTextbookAssistantDifficultyRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ExecuteTextbookAssistantDifficultyRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // This parameter is required.
    shared_ptr<string> action_ {};
    // This parameter is required.
    shared_ptr<string> assistant_ {};
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    // This parameter is required.
    shared_ptr<string> chatId_ {};
    // This parameter is required.
    shared_ptr<string> scenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
