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
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(ErrorPrompt, errorPrompt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TransferPrompt, transferPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, ForwardAIAgentCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(ErrorPrompt, errorPrompt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TransferPrompt, transferPrompt_);
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
        && return this->callerNumber_ == nullptr && return this->errorPrompt_ == nullptr && return this->instanceId_ == nullptr && return this->transferPrompt_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline ForwardAIAgentCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline ForwardAIAgentCallRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // errorPrompt Field Functions 
    bool hasErrorPrompt() const { return this->errorPrompt_ != nullptr;};
    void deleteErrorPrompt() { this->errorPrompt_ = nullptr;};
    inline string errorPrompt() const { DARABONBA_PTR_GET_DEFAULT(errorPrompt_, "") };
    inline ForwardAIAgentCallRequest& setErrorPrompt(string errorPrompt) { DARABONBA_PTR_SET_VALUE(errorPrompt_, errorPrompt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ForwardAIAgentCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // transferPrompt Field Functions 
    bool hasTransferPrompt() const { return this->transferPrompt_ != nullptr;};
    void deleteTransferPrompt() { this->transferPrompt_ = nullptr;};
    inline string transferPrompt() const { DARABONBA_PTR_GET_DEFAULT(transferPrompt_, "") };
    inline ForwardAIAgentCallRequest& setTransferPrompt(string transferPrompt) { DARABONBA_PTR_SET_VALUE(transferPrompt_, transferPrompt) };


  protected:
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callerNumber_ = nullptr;
    std::shared_ptr<string> errorPrompt_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> transferPrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
