// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class AssociateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Perspective, perspective_);
      DARABONBA_PTR_TO_JSON(RecommendNum, recommendNum_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Perspective, perspective_);
      DARABONBA_PTR_FROM_JSON(RecommendNum, recommendNum_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
    };
    AssociateRequest() = default ;
    AssociateRequest(const AssociateRequest &) = default ;
    AssociateRequest(AssociateRequest &&) = default ;
    AssociateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateRequest() = default ;
    AssociateRequest& operator=(const AssociateRequest &) = default ;
    AssociateRequest& operator=(AssociateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->perspective_ == nullptr && this->recommendNum_ == nullptr && this->sessionId_ == nullptr && this->utterance_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline AssociateRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // perspective Field Functions 
    bool hasPerspective() const { return this->perspective_ != nullptr;};
    void deletePerspective() { this->perspective_ = nullptr;};
    inline const vector<string> & getPerspective() const { DARABONBA_PTR_GET_CONST(perspective_, vector<string>) };
    inline vector<string> getPerspective() { DARABONBA_PTR_GET(perspective_, vector<string>) };
    inline AssociateRequest& setPerspective(const vector<string> & perspective) { DARABONBA_PTR_SET_VALUE(perspective_, perspective) };
    inline AssociateRequest& setPerspective(vector<string> && perspective) { DARABONBA_PTR_SET_RVALUE(perspective_, perspective) };


    // recommendNum Field Functions 
    bool hasRecommendNum() const { return this->recommendNum_ != nullptr;};
    void deleteRecommendNum() { this->recommendNum_ = nullptr;};
    inline int64_t getRecommendNum() const { DARABONBA_PTR_GET_DEFAULT(recommendNum_, 0L) };
    inline AssociateRequest& setRecommendNum(int64_t recommendNum) { DARABONBA_PTR_SET_VALUE(recommendNum_, recommendNum) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AssociateRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline AssociateRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    // The workspace key. If this parameter is not specified, the service uses the default workspace. You can obtain the key from the workspace management page of your Alibaba Cloud account.
    shared_ptr<string> agentKey_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The code for a perspective. Use this to retrieve answers from different perspectives that share the same knowledge title. When constructing the request, pass the value in the "Perspective={perspective_code}" format, for example, \\&Perspective=["FZJBY3raWr"]. If you use an SDK, pass the parameter as defined by the SDK. You can specify only one perspective in each request.
    shared_ptr<vector<string>> perspective_ {};
    // The number of recommended FAQs to return. The value must be an integer from 1 to 10. This parameter takes effect only when recommendations are generated. The number of FAQs returned is less than or equal to the value you specify.
    shared_ptr<int64_t> recommendNum_ {};
    // The session ID that identifies a conversation and maintains context. For the first request from a new user, you can omit this parameter. The service automatically starts a session and returns a session ID in the response. To continue the conversation, you must include the session ID in subsequent requests.
    shared_ptr<string> sessionId_ {};
    // The user\\"s utterance.
    shared_ptr<string> utterance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
