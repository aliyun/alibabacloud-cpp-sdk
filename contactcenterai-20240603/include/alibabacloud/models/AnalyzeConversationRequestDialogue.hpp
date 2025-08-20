// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTDIALOGUE_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUESTDIALOGUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeConversationRequestDialogueSentences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class AnalyzeConversationRequestDialogue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequestDialogue& obj) { 
      DARABONBA_PTR_TO_JSON(sentences, sentences_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequestDialogue& obj) { 
      DARABONBA_PTR_FROM_JSON(sentences, sentences_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    AnalyzeConversationRequestDialogue() = default ;
    AnalyzeConversationRequestDialogue(const AnalyzeConversationRequestDialogue &) = default ;
    AnalyzeConversationRequestDialogue(AnalyzeConversationRequestDialogue &&) = default ;
    AnalyzeConversationRequestDialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequestDialogue() = default ;
    AnalyzeConversationRequestDialogue& operator=(const AnalyzeConversationRequestDialogue &) = default ;
    AnalyzeConversationRequestDialogue& operator=(AnalyzeConversationRequestDialogue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sentences_ != nullptr
        && this->sessionId_ != nullptr; };
    // sentences Field Functions 
    bool hasSentences() const { return this->sentences_ != nullptr;};
    void deleteSentences() { this->sentences_ = nullptr;};
    inline const vector<Models::AnalyzeConversationRequestDialogueSentences> & sentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Models::AnalyzeConversationRequestDialogueSentences>) };
    inline vector<Models::AnalyzeConversationRequestDialogueSentences> sentences() { DARABONBA_PTR_GET(sentences_, vector<Models::AnalyzeConversationRequestDialogueSentences>) };
    inline AnalyzeConversationRequestDialogue& setSentences(const vector<Models::AnalyzeConversationRequestDialogueSentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
    inline AnalyzeConversationRequestDialogue& setSentences(vector<Models::AnalyzeConversationRequestDialogueSentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AnalyzeConversationRequestDialogue& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::AnalyzeConversationRequestDialogueSentences>> sentences_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
