// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TAKEOVERAIAGENTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TAKEOVERAIAGENTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class TakeoverAIAgentCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TakeoverAIAgentCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HumanAgentUserId, humanAgentUserId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequireToken, requireToken_);
    };
    friend void from_json(const Darabonba::Json& j, TakeoverAIAgentCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HumanAgentUserId, humanAgentUserId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequireToken, requireToken_);
    };
    TakeoverAIAgentCallRequest() = default ;
    TakeoverAIAgentCallRequest(const TakeoverAIAgentCallRequest &) = default ;
    TakeoverAIAgentCallRequest(TakeoverAIAgentCallRequest &&) = default ;
    TakeoverAIAgentCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TakeoverAIAgentCallRequest() = default ;
    TakeoverAIAgentCallRequest& operator=(const TakeoverAIAgentCallRequest &) = default ;
    TakeoverAIAgentCallRequest& operator=(TakeoverAIAgentCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->humanAgentUserId_ != nullptr
        && this->instanceId_ != nullptr && this->requireToken_ != nullptr; };
    // humanAgentUserId Field Functions 
    bool hasHumanAgentUserId() const { return this->humanAgentUserId_ != nullptr;};
    void deleteHumanAgentUserId() { this->humanAgentUserId_ = nullptr;};
    inline string humanAgentUserId() const { DARABONBA_PTR_GET_DEFAULT(humanAgentUserId_, "") };
    inline TakeoverAIAgentCallRequest& setHumanAgentUserId(string humanAgentUserId) { DARABONBA_PTR_SET_VALUE(humanAgentUserId_, humanAgentUserId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TakeoverAIAgentCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requireToken Field Functions 
    bool hasRequireToken() const { return this->requireToken_ != nullptr;};
    void deleteRequireToken() { this->requireToken_ = nullptr;};
    inline bool requireToken() const { DARABONBA_PTR_GET_DEFAULT(requireToken_, false) };
    inline TakeoverAIAgentCallRequest& setRequireToken(bool requireToken) { DARABONBA_PTR_SET_VALUE(requireToken_, requireToken) };


  protected:
    // The ID of the human agent that will take over the AI agent (UserId in ARTC). If you do not specify this parameter, it is automatically generated and returned.
    std::shared_ptr<string> humanAgentUserId_ = nullptr;
    // The ID of the AI agent that will be taken over.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to return the ARTC token. Default value: false.
    std::shared_ptr<bool> requireToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
