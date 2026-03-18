// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSUGGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSUGGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteTextbookAssistantSuggestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTextbookAssistantSuggestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assistant, assistant_);
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTextbookAssistantSuggestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assistant, assistant_);
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
    };
    ExecuteTextbookAssistantSuggestionRequest() = default ;
    ExecuteTextbookAssistantSuggestionRequest(const ExecuteTextbookAssistantSuggestionRequest &) = default ;
    ExecuteTextbookAssistantSuggestionRequest(ExecuteTextbookAssistantSuggestionRequest &&) = default ;
    ExecuteTextbookAssistantSuggestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTextbookAssistantSuggestionRequest() = default ;
    ExecuteTextbookAssistantSuggestionRequest& operator=(const ExecuteTextbookAssistantSuggestionRequest &) = default ;
    ExecuteTextbookAssistantSuggestionRequest& operator=(ExecuteTextbookAssistantSuggestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistant_ == nullptr
        && this->authToken_ == nullptr && this->chatId_ == nullptr && this->scenario_ == nullptr; };
    // assistant Field Functions 
    bool hasAssistant() const { return this->assistant_ != nullptr;};
    void deleteAssistant() { this->assistant_ = nullptr;};
    inline string getAssistant() const { DARABONBA_PTR_GET_DEFAULT(assistant_, "") };
    inline ExecuteTextbookAssistantSuggestionRequest& setAssistant(string assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ExecuteTextbookAssistantSuggestionRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ExecuteTextbookAssistantSuggestionRequest& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ExecuteTextbookAssistantSuggestionRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
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
