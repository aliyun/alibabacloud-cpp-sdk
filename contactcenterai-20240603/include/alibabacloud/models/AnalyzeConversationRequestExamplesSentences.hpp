// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTEXAMPLESSENTENCES_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTEXAMPLESSENTENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestExamplesSentences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestExamplesSentences& obj) { 
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(role, role_);
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestExamplesSentences& obj) { 
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(role, role_);
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    AnalyzeConversationRequestExamplesSentences() = default ;
    AnalyzeConversationRequestExamplesSentences(const AnalyzeConversationRequestExamplesSentences &) = default ;
    AnalyzeConversationRequestExamplesSentences(AnalyzeConversationRequestExamplesSentences &&) = default ;
    AnalyzeConversationRequestExamplesSentences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestExamplesSentences() = default ;
    AnalyzeConversationRequestExamplesSentences& operator=(const AnalyzeConversationRequestExamplesSentences &) = default ;
    AnalyzeConversationRequestExamplesSentences& operator=(AnalyzeConversationRequestExamplesSentences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chatId_ != nullptr
        && this->role_ != nullptr && this->text_ != nullptr; };
    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string chatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline AnalyzeConversationRequestExamplesSentences& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline AnalyzeConversationRequestExamplesSentences& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AnalyzeConversationRequestExamplesSentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> chatId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> role_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
