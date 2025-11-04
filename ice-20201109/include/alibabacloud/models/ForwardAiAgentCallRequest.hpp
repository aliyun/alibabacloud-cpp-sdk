// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORWARDAIAGENTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORWARDAIAGENTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ForwardAIAgentCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForwardAIAgentCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ForwardAIAgentCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ForwardAIAgentCallRequest() = default ;
    ForwardAIAgentCallRequest(const ForwardAIAgentCallRequest &) = default ;
    ForwardAIAgentCallRequest(ForwardAIAgentCallRequest &&) = default ;
    ForwardAIAgentCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForwardAIAgentCallRequest() = default ;
    ForwardAIAgentCallRequest& operator=(const ForwardAIAgentCallRequest &) = default ;
    ForwardAIAgentCallRequest& operator=(ForwardAIAgentCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && return this->instanceId_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ForwardAIAgentCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ForwardAIAgentCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
