// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAIAgentVideoAuditTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIAgentVideoAuditTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AuditInterval, auditInterval_);
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfigShrink_);
      DARABONBA_PTR_TO_JSON(CapturePolicies, capturePoliciesShrink_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIAgentVideoAuditTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AuditInterval, auditInterval_);
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfigShrink_);
      DARABONBA_PTR_FROM_JSON(CapturePolicies, capturePoliciesShrink_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAIAgentVideoAuditTaskShrinkRequest() = default ;
    SubmitAIAgentVideoAuditTaskShrinkRequest(const SubmitAIAgentVideoAuditTaskShrinkRequest &) = default ;
    SubmitAIAgentVideoAuditTaskShrinkRequest(SubmitAIAgentVideoAuditTaskShrinkRequest &&) = default ;
    SubmitAIAgentVideoAuditTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIAgentVideoAuditTaskShrinkRequest() = default ;
    SubmitAIAgentVideoAuditTaskShrinkRequest& operator=(const SubmitAIAgentVideoAuditTaskShrinkRequest &) = default ;
    SubmitAIAgentVideoAuditTaskShrinkRequest& operator=(SubmitAIAgentVideoAuditTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIAgentId_ == nullptr
        && return this->auditInterval_ == nullptr && return this->callbackConfigShrink_ == nullptr && return this->capturePoliciesShrink_ == nullptr && return this->inputShrink_ == nullptr && return this->userData_ == nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline SubmitAIAgentVideoAuditTaskShrinkRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // auditInterval Field Functions 
    bool hasAuditInterval() const { return this->auditInterval_ != nullptr;};
    void deleteAuditInterval() { this->auditInterval_ = nullptr;};
    inline int32_t auditInterval() const { DARABONBA_PTR_GET_DEFAULT(auditInterval_, 0) };
    inline SubmitAIAgentVideoAuditTaskShrinkRequest& setAuditInterval(int32_t auditInterval) { DARABONBA_PTR_SET_VALUE(auditInterval_, auditInterval) };


    // callbackConfigShrink Field Functions 
    bool hasCallbackConfigShrink() const { return this->callbackConfigShrink_ != nullptr;};
    void deleteCallbackConfigShrink() { this->callbackConfigShrink_ = nullptr;};
    inline string callbackConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(callbackConfigShrink_, "") };
    inline SubmitAIAgentVideoAuditTaskShrinkRequest& setCallbackConfigShrink(string callbackConfigShrink) { DARABONBA_PTR_SET_VALUE(callbackConfigShrink_, callbackConfigShrink) };


    // capturePoliciesShrink Field Functions 
    bool hasCapturePoliciesShrink() const { return this->capturePoliciesShrink_ != nullptr;};
    void deleteCapturePoliciesShrink() { this->capturePoliciesShrink_ = nullptr;};
    inline string capturePoliciesShrink() const { DARABONBA_PTR_GET_DEFAULT(capturePoliciesShrink_, "") };
    inline SubmitAIAgentVideoAuditTaskShrinkRequest& setCapturePoliciesShrink(string capturePoliciesShrink) { DARABONBA_PTR_SET_VALUE(capturePoliciesShrink_, capturePoliciesShrink) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string inputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline SubmitAIAgentVideoAuditTaskShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAIAgentVideoAuditTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the AI agent.
    // 
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    // The interval, in milliseconds, at which to submit captured frames to the AI agent. Valid values: 0 to 5000. Default value: 3000. If it is set to 0, all captured frames are sent to the model in a single batch request. Otherwise, frames are sent sequentially with the specified interval between each request.
    std::shared_ptr<int32_t> auditInterval_ = nullptr;
    // Callback configurations.
    std::shared_ptr<string> callbackConfigShrink_ = nullptr;
    // An array of frame-capturing policies. Each policy defines a set of frames to be analyzed and will generate a separate result from the model.
    // 
    // This parameter is required.
    std::shared_ptr<string> capturePoliciesShrink_ = nullptr;
    // The details of the input file.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputShrink_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
