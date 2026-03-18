// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSTARTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSTARTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteTextbookAssistantStartConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTextbookAssistantStartConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(articleId, articleId_);
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTextbookAssistantStartConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(articleId, articleId_);
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
    };
    ExecuteTextbookAssistantStartConversationRequest() = default ;
    ExecuteTextbookAssistantStartConversationRequest(const ExecuteTextbookAssistantStartConversationRequest &) = default ;
    ExecuteTextbookAssistantStartConversationRequest(ExecuteTextbookAssistantStartConversationRequest &&) = default ;
    ExecuteTextbookAssistantStartConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTextbookAssistantStartConversationRequest() = default ;
    ExecuteTextbookAssistantStartConversationRequest& operator=(const ExecuteTextbookAssistantStartConversationRequest &) = default ;
    ExecuteTextbookAssistantStartConversationRequest& operator=(ExecuteTextbookAssistantStartConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articleId_ == nullptr
        && this->authToken_ == nullptr && this->scenario_ == nullptr; };
    // articleId Field Functions 
    bool hasArticleId() const { return this->articleId_ != nullptr;};
    void deleteArticleId() { this->articleId_ = nullptr;};
    inline string getArticleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
    inline ExecuteTextbookAssistantStartConversationRequest& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ExecuteTextbookAssistantStartConversationRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ExecuteTextbookAssistantStartConversationRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // This parameter is required.
    shared_ptr<string> articleId_ {};
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    // This parameter is required.
    shared_ptr<string> scenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
