// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATACHOICESMESSAGE_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODYDATACHOICESMESSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeResponseBodyDataChoicesMessage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeResponseBodyDataChoicesMessage& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeResponseBodyDataChoicesMessage& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ReasoningContent, reasoningContent_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ChatWithDesensitizeResponseBodyDataChoicesMessage() = default ;
    ChatWithDesensitizeResponseBodyDataChoicesMessage(const ChatWithDesensitizeResponseBodyDataChoicesMessage &) = default ;
    ChatWithDesensitizeResponseBodyDataChoicesMessage(ChatWithDesensitizeResponseBodyDataChoicesMessage &&) = default ;
    ChatWithDesensitizeResponseBodyDataChoicesMessage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeResponseBodyDataChoicesMessage() = default ;
    ChatWithDesensitizeResponseBodyDataChoicesMessage& operator=(const ChatWithDesensitizeResponseBodyDataChoicesMessage &) = default ;
    ChatWithDesensitizeResponseBodyDataChoicesMessage& operator=(ChatWithDesensitizeResponseBodyDataChoicesMessage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->reasoningContent_ == nullptr && return this->role_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ChatWithDesensitizeResponseBodyDataChoicesMessage& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // reasoningContent Field Functions 
    bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
    void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
    inline string reasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
    inline ChatWithDesensitizeResponseBodyDataChoicesMessage& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ChatWithDesensitizeResponseBodyDataChoicesMessage& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> reasoningContent_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
