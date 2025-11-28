// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTMODELPARAMSMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMREQUESTMODELPARAMSMESSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamRequestModelParamsMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamRequestModelParamsMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamRequestModelParamsMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ChatWithKnowledgeBaseStreamRequestModelParamsMessages() = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsMessages(const ChatWithKnowledgeBaseStreamRequestModelParamsMessages &) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsMessages(ChatWithKnowledgeBaseStreamRequestModelParamsMessages &&) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamRequestModelParamsMessages() = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsMessages& operator=(const ChatWithKnowledgeBaseStreamRequestModelParamsMessages &) = default ;
    ChatWithKnowledgeBaseStreamRequestModelParamsMessages& operator=(ChatWithKnowledgeBaseStreamRequestModelParamsMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->role_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatWithKnowledgeBaseStreamRequestModelParamsMessages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatWithKnowledgeBaseStreamRequestModelParamsMessages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // The message content.
    std::shared_ptr<string> content_ = nullptr;
    // The message role. Valid values:
    // 
    // *   system
    // *   user
    // *   assistant
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
