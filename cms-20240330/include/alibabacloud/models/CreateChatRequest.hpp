// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(contents, contents_);
        DARABONBA_PTR_TO_JSON(messageId, messageId_);
        DARABONBA_PTR_TO_JSON(role, role_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(contents, contents_);
        DARABONBA_PTR_FROM_JSON(messageId, messageId_);
        DARABONBA_PTR_FROM_JSON(role, role_);
        DARABONBA_PTR_FROM_JSON(tools, tools_);
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
      class Contents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contents& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Contents& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Contents() = default ;
        Contents(const Contents &) = default ;
        Contents(Contents &&) = default ;
        Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contents() = default ;
        Contents& operator=(const Contents &) = default ;
        Contents& operator=(Contents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Contents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Contents& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->contents_ == nullptr
        && this->messageId_ == nullptr && this->role_ == nullptr && this->tools_ == nullptr; };
      // contents Field Functions 
      bool hasContents() const { return this->contents_ != nullptr;};
      void deleteContents() { this->contents_ = nullptr;};
      inline const vector<Messages::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Messages::Contents>) };
      inline vector<Messages::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<Messages::Contents>) };
      inline Messages& setContents(const vector<Messages::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
      inline Messages& setContents(vector<Messages::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


      // messageId Field Functions 
      bool hasMessageId() const { return this->messageId_ != nullptr;};
      void deleteMessageId() { this->messageId_ = nullptr;};
      inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
      inline Messages& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<Darabonba::Json> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getTools() { DARABONBA_PTR_GET(tools_, vector<Darabonba::Json>) };
      inline Messages& setTools(const vector<Darabonba::Json> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline Messages& setTools(vector<Darabonba::Json> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


    protected:
      shared_ptr<vector<Messages::Contents>> contents_ {};
      shared_ptr<string> messageId_ {};
      shared_ptr<string> role_ {};
      shared_ptr<vector<Darabonba::Json>> tools_ {};
    };

    virtual bool empty() const override { return this->action_ == nullptr
        && this->digitalEmployeeName_ == nullptr && this->messages_ == nullptr && this->threadId_ == nullptr && this->variables_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateChatRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // digitalEmployeeName Field Functions 
    bool hasDigitalEmployeeName() const { return this->digitalEmployeeName_ != nullptr;};
    void deleteDigitalEmployeeName() { this->digitalEmployeeName_ = nullptr;};
    inline string getDigitalEmployeeName() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeName_, "") };
    inline CreateChatRequest& setDigitalEmployeeName(string digitalEmployeeName) { DARABONBA_PTR_SET_VALUE(digitalEmployeeName_, digitalEmployeeName) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CreateChatRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateChatRequest::Messages>) };
    inline vector<CreateChatRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<CreateChatRequest::Messages>) };
    inline CreateChatRequest& setMessages(const vector<CreateChatRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateChatRequest& setMessages(vector<CreateChatRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline CreateChatRequest& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline     const Darabonba::Json & getVariables() const { DARABONBA_GET(variables_) };
    Darabonba::Json & getVariables() { DARABONBA_GET(variables_) };
    inline CreateChatRequest& setVariables(const Darabonba::Json & variables) { DARABONBA_SET_VALUE(variables_, variables) };
    inline CreateChatRequest& setVariables(Darabonba::Json && variables) { DARABONBA_SET_RVALUE(variables_, variables) };


  protected:
    shared_ptr<string> action_ {};
    shared_ptr<string> digitalEmployeeName_ {};
    shared_ptr<vector<CreateChatRequest::Messages>> messages_ {};
    shared_ptr<string> threadId_ {};
    Darabonba::Json variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
