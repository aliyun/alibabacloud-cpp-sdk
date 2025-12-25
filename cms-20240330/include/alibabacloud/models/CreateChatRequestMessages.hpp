// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATREQUESTMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATREQUESTMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateChatRequestMessagesContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateChatRequestMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatRequestMessages& obj) { 
      DARABONBA_PTR_TO_JSON(contents, contents_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatRequestMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(contents, contents_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    CreateChatRequestMessages() = default ;
    CreateChatRequestMessages(const CreateChatRequestMessages &) = default ;
    CreateChatRequestMessages(CreateChatRequestMessages &&) = default ;
    CreateChatRequestMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatRequestMessages() = default ;
    CreateChatRequestMessages& operator=(const CreateChatRequestMessages &) = default ;
    CreateChatRequestMessages& operator=(CreateChatRequestMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contents_ == nullptr
        && return this->messageId_ == nullptr && return this->role_ == nullptr && return this->tools_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<Models::CreateChatRequestMessagesContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Models::CreateChatRequestMessagesContents>) };
    inline vector<Models::CreateChatRequestMessagesContents> contents() { DARABONBA_PTR_GET(contents_, vector<Models::CreateChatRequestMessagesContents>) };
    inline CreateChatRequestMessages& setContents(const vector<Models::CreateChatRequestMessagesContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline CreateChatRequestMessages& setContents(vector<Models::CreateChatRequestMessagesContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline CreateChatRequestMessages& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateChatRequestMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const vector<Darabonba::Json> & tools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> tools() { DARABONBA_PTR_GET(tools_, vector<Darabonba::Json>) };
    inline CreateChatRequestMessages& setTools(const vector<Darabonba::Json> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline CreateChatRequestMessages& setTools(vector<Darabonba::Json> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    std::shared_ptr<vector<Models::CreateChatRequestMessagesContents>> contents_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> tools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
