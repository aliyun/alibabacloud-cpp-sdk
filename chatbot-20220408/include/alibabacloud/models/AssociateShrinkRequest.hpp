// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class AssociateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Perspective, perspectiveShrink_);
      DARABONBA_PTR_TO_JSON(RecommendNum, recommendNum_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Perspective, perspectiveShrink_);
      DARABONBA_PTR_FROM_JSON(RecommendNum, recommendNum_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
    };
    AssociateShrinkRequest() = default ;
    AssociateShrinkRequest(const AssociateShrinkRequest &) = default ;
    AssociateShrinkRequest(AssociateShrinkRequest &&) = default ;
    AssociateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateShrinkRequest() = default ;
    AssociateShrinkRequest& operator=(const AssociateShrinkRequest &) = default ;
    AssociateShrinkRequest& operator=(AssociateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->perspectiveShrink_ != nullptr && this->recommendNum_ != nullptr && this->sessionId_ != nullptr && this->utterance_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline AssociateShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // perspectiveShrink Field Functions 
    bool hasPerspectiveShrink() const { return this->perspectiveShrink_ != nullptr;};
    void deletePerspectiveShrink() { this->perspectiveShrink_ = nullptr;};
    inline string perspectiveShrink() const { DARABONBA_PTR_GET_DEFAULT(perspectiveShrink_, "") };
    inline AssociateShrinkRequest& setPerspectiveShrink(string perspectiveShrink) { DARABONBA_PTR_SET_VALUE(perspectiveShrink_, perspectiveShrink) };


    // recommendNum Field Functions 
    bool hasRecommendNum() const { return this->recommendNum_ != nullptr;};
    void deleteRecommendNum() { this->recommendNum_ = nullptr;};
    inline int64_t recommendNum() const { DARABONBA_PTR_GET_DEFAULT(recommendNum_, 0L) };
    inline AssociateShrinkRequest& setRecommendNum(int64_t recommendNum) { DARABONBA_PTR_SET_VALUE(recommendNum_, recommendNum) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AssociateShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string utterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline AssociateShrinkRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> perspectiveShrink_ = nullptr;
    std::shared_ptr<int64_t> recommendNum_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> utterance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
