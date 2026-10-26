// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESPONDAGENTCONVERSATIONACTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESPONDAGENTCONVERSATIONACTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class RespondAgentConversationActionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RespondAgentConversationActionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accepted, accepted_);
      DARABONBA_PTR_TO_JSON(continuationCreated, continuationCreated_);
      DARABONBA_PTR_TO_JSON(runId, runId_);
    };
    friend void from_json(const Darabonba::Json& j, RespondAgentConversationActionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accepted, accepted_);
      DARABONBA_PTR_FROM_JSON(continuationCreated, continuationCreated_);
      DARABONBA_PTR_FROM_JSON(runId, runId_);
    };
    RespondAgentConversationActionResponseBody() = default ;
    RespondAgentConversationActionResponseBody(const RespondAgentConversationActionResponseBody &) = default ;
    RespondAgentConversationActionResponseBody(RespondAgentConversationActionResponseBody &&) = default ;
    RespondAgentConversationActionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RespondAgentConversationActionResponseBody() = default ;
    RespondAgentConversationActionResponseBody& operator=(const RespondAgentConversationActionResponseBody &) = default ;
    RespondAgentConversationActionResponseBody& operator=(RespondAgentConversationActionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accepted_ == nullptr
        && this->continuationCreated_ == nullptr && this->runId_ == nullptr; };
    // accepted Field Functions 
    bool hasAccepted() const { return this->accepted_ != nullptr;};
    void deleteAccepted() { this->accepted_ = nullptr;};
    inline bool getAccepted() const { DARABONBA_PTR_GET_DEFAULT(accepted_, false) };
    inline RespondAgentConversationActionResponseBody& setAccepted(bool accepted) { DARABONBA_PTR_SET_VALUE(accepted_, accepted) };


    // continuationCreated Field Functions 
    bool hasContinuationCreated() const { return this->continuationCreated_ != nullptr;};
    void deleteContinuationCreated() { this->continuationCreated_ = nullptr;};
    inline bool getContinuationCreated() const { DARABONBA_PTR_GET_DEFAULT(continuationCreated_, false) };
    inline RespondAgentConversationActionResponseBody& setContinuationCreated(bool continuationCreated) { DARABONBA_PTR_SET_VALUE(continuationCreated_, continuationCreated) };


    // runId Field Functions 
    bool hasRunId() const { return this->runId_ != nullptr;};
    void deleteRunId() { this->runId_ = nullptr;};
    inline string getRunId() const { DARABONBA_PTR_GET_DEFAULT(runId_, "") };
    inline RespondAgentConversationActionResponseBody& setRunId(string runId) { DARABONBA_PTR_SET_VALUE(runId_, runId) };


  protected:
    shared_ptr<bool> accepted_ {};
    shared_ptr<bool> continuationCreated_ {};
    shared_ptr<string> runId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
