// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUESTDIALOGUE_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONREQUESTDIALOGUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCompletionRequestDialogueSentences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionRequestDialogue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionRequestDialogue& obj) { 
      DARABONBA_PTR_TO_JSON(Sentences, sentences_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionRequestDialogue& obj) { 
      DARABONBA_PTR_FROM_JSON(Sentences, sentences_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    RunCompletionRequestDialogue() = default ;
    RunCompletionRequestDialogue(const RunCompletionRequestDialogue &) = default ;
    RunCompletionRequestDialogue(RunCompletionRequestDialogue &&) = default ;
    RunCompletionRequestDialogue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionRequestDialogue() = default ;
    RunCompletionRequestDialogue& operator=(const RunCompletionRequestDialogue &) = default ;
    RunCompletionRequestDialogue& operator=(RunCompletionRequestDialogue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sentences_ != nullptr
        && this->sessionId_ != nullptr; };
    // sentences Field Functions 
    bool hasSentences() const { return this->sentences_ != nullptr;};
    void deleteSentences() { this->sentences_ = nullptr;};
    inline const vector<Models::RunCompletionRequestDialogueSentences> & sentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Models::RunCompletionRequestDialogueSentences>) };
    inline vector<Models::RunCompletionRequestDialogueSentences> sentences() { DARABONBA_PTR_GET(sentences_, vector<Models::RunCompletionRequestDialogueSentences>) };
    inline RunCompletionRequestDialogue& setSentences(const vector<Models::RunCompletionRequestDialogueSentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
    inline RunCompletionRequestDialogue& setSentences(vector<Models::RunCompletionRequestDialogueSentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunCompletionRequestDialogue& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<vector<Models::RunCompletionRequestDialogueSentences>> sentences_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
