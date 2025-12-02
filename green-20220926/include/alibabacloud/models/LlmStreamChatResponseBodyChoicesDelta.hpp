// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODYCHOICESDELTA_HPP_
#define ALIBABACLOUD_MODELS_LLMSTREAMCHATRESPONSEBODYCHOICESDELTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class LlmStreamChatResponseBodyChoicesDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmStreamChatResponseBodyChoicesDelta& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatResponseBodyChoicesDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    LlmStreamChatResponseBodyChoicesDelta() = default ;
    LlmStreamChatResponseBodyChoicesDelta(const LlmStreamChatResponseBodyChoicesDelta &) = default ;
    LlmStreamChatResponseBodyChoicesDelta(LlmStreamChatResponseBodyChoicesDelta &&) = default ;
    LlmStreamChatResponseBodyChoicesDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmStreamChatResponseBodyChoicesDelta() = default ;
    LlmStreamChatResponseBodyChoicesDelta& operator=(const LlmStreamChatResponseBodyChoicesDelta &) = default ;
    LlmStreamChatResponseBodyChoicesDelta& operator=(LlmStreamChatResponseBodyChoicesDelta &&) = default ;
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
    inline LlmStreamChatResponseBodyChoicesDelta& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline LlmStreamChatResponseBodyChoicesDelta& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // Real-time generated text content
    std::shared_ptr<string> content_ = nullptr;
    // Role identifier
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
