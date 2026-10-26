// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESPONDAGENTCONVERSATIONACTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESPONDAGENTCONVERSATIONACTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class RespondAgentConversationActionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RespondAgentConversationActionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(answers, answers_);
      DARABONBA_PTR_TO_JSON(decision, decision_);
      DARABONBA_PTR_TO_JSON(note, note_);
    };
    friend void from_json(const Darabonba::Json& j, RespondAgentConversationActionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(answers, answers_);
      DARABONBA_PTR_FROM_JSON(decision, decision_);
      DARABONBA_PTR_FROM_JSON(note, note_);
    };
    RespondAgentConversationActionRequest() = default ;
    RespondAgentConversationActionRequest(const RespondAgentConversationActionRequest &) = default ;
    RespondAgentConversationActionRequest(RespondAgentConversationActionRequest &&) = default ;
    RespondAgentConversationActionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RespondAgentConversationActionRequest() = default ;
    RespondAgentConversationActionRequest& operator=(const RespondAgentConversationActionRequest &) = default ;
    RespondAgentConversationActionRequest& operator=(RespondAgentConversationActionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answers_ == nullptr
        && this->decision_ == nullptr && this->note_ == nullptr; };
    // answers Field Functions 
    bool hasAnswers() const { return this->answers_ != nullptr;};
    void deleteAnswers() { this->answers_ = nullptr;};
    inline const map<string, string> & getAnswers() const { DARABONBA_PTR_GET_CONST(answers_, map<string, string>) };
    inline map<string, string> getAnswers() { DARABONBA_PTR_GET(answers_, map<string, string>) };
    inline RespondAgentConversationActionRequest& setAnswers(const map<string, string> & answers) { DARABONBA_PTR_SET_VALUE(answers_, answers) };
    inline RespondAgentConversationActionRequest& setAnswers(map<string, string> && answers) { DARABONBA_PTR_SET_RVALUE(answers_, answers) };


    // decision Field Functions 
    bool hasDecision() const { return this->decision_ != nullptr;};
    void deleteDecision() { this->decision_ = nullptr;};
    inline string getDecision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
    inline RespondAgentConversationActionRequest& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline RespondAgentConversationActionRequest& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    shared_ptr<map<string, string>> answers_ {};
    shared_ptr<string> decision_ {};
    shared_ptr<string> note_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
