// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATAIAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATAIAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ChatAiAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatAiAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hitlDecisions, hitlDecisions_);
      DARABONBA_PTR_TO_JSON(refs, refs_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(userMessage, userMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ChatAiAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hitlDecisions, hitlDecisions_);
      DARABONBA_PTR_FROM_JSON(refs, refs_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(userMessage, userMessage_);
    };
    ChatAiAgentRequest() = default ;
    ChatAiAgentRequest(const ChatAiAgentRequest &) = default ;
    ChatAiAgentRequest(ChatAiAgentRequest &&) = default ;
    ChatAiAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatAiAgentRequest() = default ;
    ChatAiAgentRequest& operator=(const ChatAiAgentRequest &) = default ;
    ChatAiAgentRequest& operator=(ChatAiAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Refs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Refs& obj) { 
        DARABONBA_PTR_TO_JSON(jobs, jobs_);
        DARABONBA_PTR_TO_JSON(skills, skills_);
      };
      friend void from_json(const Darabonba::Json& j, Refs& obj) { 
        DARABONBA_PTR_FROM_JSON(jobs, jobs_);
        DARABONBA_PTR_FROM_JSON(skills, skills_);
      };
      Refs() = default ;
      Refs(const Refs &) = default ;
      Refs(Refs &&) = default ;
      Refs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Refs() = default ;
      Refs& operator=(const Refs &) = default ;
      Refs& operator=(Refs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Jobs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Jobs& obj) { 
          DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
          DARABONBA_PTR_TO_JSON(jobId, jobId_);
        };
        friend void from_json(const Darabonba::Json& j, Jobs& obj) { 
          DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
          DARABONBA_PTR_FROM_JSON(jobId, jobId_);
        };
        Jobs() = default ;
        Jobs(const Jobs &) = default ;
        Jobs(Jobs &&) = default ;
        Jobs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Jobs() = default ;
        Jobs& operator=(const Jobs &) = default ;
        Jobs& operator=(Jobs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deploymentId_ == nullptr
        && this->jobId_ == nullptr; };
        // deploymentId Field Functions 
        bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
        void deleteDeploymentId() { this->deploymentId_ = nullptr;};
        inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
        inline Jobs& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Jobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      protected:
        // Deployment ID
        shared_ptr<string> deploymentId_ {};
        // Job ID
        shared_ptr<string> jobId_ {};
      };

      virtual bool empty() const override { return this->jobs_ == nullptr
        && this->skills_ == nullptr; };
      // jobs Field Functions 
      bool hasJobs() const { return this->jobs_ != nullptr;};
      void deleteJobs() { this->jobs_ = nullptr;};
      inline const vector<Refs::Jobs> & getJobs() const { DARABONBA_PTR_GET_CONST(jobs_, vector<Refs::Jobs>) };
      inline vector<Refs::Jobs> getJobs() { DARABONBA_PTR_GET(jobs_, vector<Refs::Jobs>) };
      inline Refs& setJobs(const vector<Refs::Jobs> & jobs) { DARABONBA_PTR_SET_VALUE(jobs_, jobs) };
      inline Refs& setJobs(vector<Refs::Jobs> && jobs) { DARABONBA_PTR_SET_RVALUE(jobs_, jobs) };


      // skills Field Functions 
      bool hasSkills() const { return this->skills_ != nullptr;};
      void deleteSkills() { this->skills_ = nullptr;};
      inline const vector<string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<string>) };
      inline vector<string> getSkills() { DARABONBA_PTR_GET(skills_, vector<string>) };
      inline Refs& setSkills(const vector<string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
      inline Refs& setSkills(vector<string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


    protected:
      // The list of job references.
      shared_ptr<vector<Refs::Jobs>> jobs_ {};
      // The list of skills to inject.
      shared_ptr<vector<string>> skills_ {};
    };

    class HitlDecisions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HitlDecisions& obj) { 
        DARABONBA_PTR_TO_JSON(decision, decision_);
        DARABONBA_PTR_TO_JSON(hitlId, hitlId_);
      };
      friend void from_json(const Darabonba::Json& j, HitlDecisions& obj) { 
        DARABONBA_PTR_FROM_JSON(decision, decision_);
        DARABONBA_PTR_FROM_JSON(hitlId, hitlId_);
      };
      HitlDecisions() = default ;
      HitlDecisions(const HitlDecisions &) = default ;
      HitlDecisions(HitlDecisions &&) = default ;
      HitlDecisions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HitlDecisions() = default ;
      HitlDecisions& operator=(const HitlDecisions &) = default ;
      HitlDecisions& operator=(HitlDecisions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->decision_ == nullptr
        && this->hitlId_ == nullptr; };
      // decision Field Functions 
      bool hasDecision() const { return this->decision_ != nullptr;};
      void deleteDecision() { this->decision_ = nullptr;};
      inline string getDecision() const { DARABONBA_PTR_GET_DEFAULT(decision_, "") };
      inline HitlDecisions& setDecision(string decision) { DARABONBA_PTR_SET_VALUE(decision_, decision) };


      // hitlId Field Functions 
      bool hasHitlId() const { return this->hitlId_ != nullptr;};
      void deleteHitlId() { this->hitlId_ = nullptr;};
      inline string getHitlId() const { DARABONBA_PTR_GET_DEFAULT(hitlId_, "") };
      inline HitlDecisions& setHitlId(string hitlId) { DARABONBA_PTR_SET_VALUE(hitlId_, hitlId) };


    protected:
      // The approval decision. Valid values: approve and deny.
      shared_ptr<string> decision_ {};
      // The approval item ID corresponding to the hitlPending event.
      shared_ptr<string> hitlId_ {};
    };

    virtual bool empty() const override { return this->hitlDecisions_ == nullptr
        && this->refs_ == nullptr && this->sessionId_ == nullptr && this->userMessage_ == nullptr; };
    // hitlDecisions Field Functions 
    bool hasHitlDecisions() const { return this->hitlDecisions_ != nullptr;};
    void deleteHitlDecisions() { this->hitlDecisions_ = nullptr;};
    inline const vector<ChatAiAgentRequest::HitlDecisions> & getHitlDecisions() const { DARABONBA_PTR_GET_CONST(hitlDecisions_, vector<ChatAiAgentRequest::HitlDecisions>) };
    inline vector<ChatAiAgentRequest::HitlDecisions> getHitlDecisions() { DARABONBA_PTR_GET(hitlDecisions_, vector<ChatAiAgentRequest::HitlDecisions>) };
    inline ChatAiAgentRequest& setHitlDecisions(const vector<ChatAiAgentRequest::HitlDecisions> & hitlDecisions) { DARABONBA_PTR_SET_VALUE(hitlDecisions_, hitlDecisions) };
    inline ChatAiAgentRequest& setHitlDecisions(vector<ChatAiAgentRequest::HitlDecisions> && hitlDecisions) { DARABONBA_PTR_SET_RVALUE(hitlDecisions_, hitlDecisions) };


    // refs Field Functions 
    bool hasRefs() const { return this->refs_ != nullptr;};
    void deleteRefs() { this->refs_ = nullptr;};
    inline const ChatAiAgentRequest::Refs & getRefs() const { DARABONBA_PTR_GET_CONST(refs_, ChatAiAgentRequest::Refs) };
    inline ChatAiAgentRequest::Refs getRefs() { DARABONBA_PTR_GET(refs_, ChatAiAgentRequest::Refs) };
    inline ChatAiAgentRequest& setRefs(const ChatAiAgentRequest::Refs & refs) { DARABONBA_PTR_SET_VALUE(refs_, refs) };
    inline ChatAiAgentRequest& setRefs(ChatAiAgentRequest::Refs && refs) { DARABONBA_PTR_SET_RVALUE(refs_, refs) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatAiAgentRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // userMessage Field Functions 
    bool hasUserMessage() const { return this->userMessage_ != nullptr;};
    void deleteUserMessage() { this->userMessage_ = nullptr;};
    inline string getUserMessage() const { DARABONBA_PTR_GET_DEFAULT(userMessage_, "") };
    inline ChatAiAgentRequest& setUserMessage(string userMessage) { DARABONBA_PTR_SET_VALUE(userMessage_, userMessage) };


  protected:
    // The list of Human-in-the-Loop (HITL) approval decisions, used to resume a session interrupted by a hitlPending event.
    shared_ptr<vector<ChatAiAgentRequest::HitlDecisions>> hitlDecisions_ {};
    // The resource references, including jobs and skill lists.
    shared_ptr<ChatAiAgentRequest::Refs> refs_ {};
    // The session ID. If not specified, the server generates one. For multi-turn conversations, pass the same value across requests.
    shared_ptr<string> sessionId_ {};
    // The user natural language input. The value must be 1 to 64,000 characters in length.
    shared_ptr<string> userMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
