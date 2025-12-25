// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateChatRequestMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(threadId, threadId_);
      DARABONBA_ANY_TO_JSON(variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeName_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(threadId, threadId_);
      DARABONBA_ANY_FROM_JSON(variables, variables_);
    };
    CreateChatRequest() = default ;
    CreateChatRequest(const CreateChatRequest &) = default ;
    CreateChatRequest(CreateChatRequest &&) = default ;
    CreateChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatRequest() = default ;
    CreateChatRequest& operator=(const CreateChatRequest &) = default ;
    CreateChatRequest& operator=(CreateChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->digitalEmployeeName_ == nullptr && return this->messages_ == nullptr && return this->threadId_ == nullptr && return this->variables_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateChatRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string digitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline CreateChatRequest& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CreateChatRequestMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateChatRequestMessages>) };
    inline vector<CreateChatRequestMessages> messages() { DARABONBA_PTR_GET(messages_, vector<CreateChatRequestMessages>) };
    inline CreateChatRequest& setMessages(const vector<CreateChatRequestMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateChatRequest& setMessages(vector<CreateChatRequestMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline CreateChatRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & variables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & variables() { DARABONBA_GET(variables_) };
    inline CreateChatRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline CreateChatRequest& setVariables(Darabonba::Json & variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> digitalEmployeeName_ = nullptr;
    std::shared_ptr<vector<CreateChatRequestMessages>> messages_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    Darabonba::Json variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
