// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAIAgentVideoAuditTaskRequestCallbackConfig.hpp>
#include <vector>
#include <alibabacloud/models/SubmitAIAgentVideoAuditTaskRequestCapturePolicies.hpp>
#include <alibabacloud/models/SubmitAIAgentVideoAuditTaskRequestInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAIAgentVideoAuditTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIAgentVideoAuditTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_TO_JSON(AuditInterval, auditInterval_);
      DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_TO_JSON(CapturePolicies, capturePolicies_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIAgentVideoAuditTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIAgentId, AIAgentId_);
      DARABONBA_PTR_FROM_JSON(AuditInterval, auditInterval_);
      DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
      DARABONBA_PTR_FROM_JSON(CapturePolicies, capturePolicies_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitAIAgentVideoAuditTaskRequest() = default ;
    SubmitAIAgentVideoAuditTaskRequest(const SubmitAIAgentVideoAuditTaskRequest &) = default ;
    SubmitAIAgentVideoAuditTaskRequest(SubmitAIAgentVideoAuditTaskRequest &&) = default ;
    SubmitAIAgentVideoAuditTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIAgentVideoAuditTaskRequest() = default ;
    SubmitAIAgentVideoAuditTaskRequest& operator=(const SubmitAIAgentVideoAuditTaskRequest &) = default ;
    SubmitAIAgentVideoAuditTaskRequest& operator=(SubmitAIAgentVideoAuditTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIAgentId_ != nullptr
        && this->auditInterval_ != nullptr && this->callbackConfig_ != nullptr && this->capturePolicies_ != nullptr && this->input_ != nullptr && this->userData_ != nullptr; };
    // AIAgentId Field Functions 
    bool hasAIAgentId() const { return this->AIAgentId_ != nullptr;};
    void deleteAIAgentId() { this->AIAgentId_ = nullptr;};
    inline string AIAgentId() const { DARABONBA_PTR_GET_DEFAULT(AIAgentId_, "") };
    inline SubmitAIAgentVideoAuditTaskRequest& setAIAgentId(string AIAgentId) { DARABONBA_PTR_SET_VALUE(AIAgentId_, AIAgentId) };


    // auditInterval Field Functions 
    bool hasAuditInterval() const { return this->auditInterval_ != nullptr;};
    void deleteAuditInterval() { this->auditInterval_ = nullptr;};
    inline int32_t auditInterval() const { DARABONBA_PTR_GET_DEFAULT(auditInterval_, 0) };
    inline SubmitAIAgentVideoAuditTaskRequest& setAuditInterval(int32_t auditInterval) { DARABONBA_PTR_SET_VALUE(auditInterval_, auditInterval) };


    // callbackConfig Field Functions 
    bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
    void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
    inline const SubmitAIAgentVideoAuditTaskRequestCallbackConfig & callbackConfig() const { DARABONBA_PTR_GET_CONST(callbackConfig_, SubmitAIAgentVideoAuditTaskRequestCallbackConfig) };
    inline SubmitAIAgentVideoAuditTaskRequestCallbackConfig callbackConfig() { DARABONBA_PTR_GET(callbackConfig_, SubmitAIAgentVideoAuditTaskRequestCallbackConfig) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCallbackConfig(const SubmitAIAgentVideoAuditTaskRequestCallbackConfig & callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCallbackConfig(SubmitAIAgentVideoAuditTaskRequestCallbackConfig && callbackConfig) { DARABONBA_PTR_SET_RVALUE(callbackConfig_, callbackConfig) };


    // capturePolicies Field Functions 
    bool hasCapturePolicies() const { return this->capturePolicies_ != nullptr;};
    void deleteCapturePolicies() { this->capturePolicies_ = nullptr;};
    inline const vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies> & capturePolicies() const { DARABONBA_PTR_GET_CONST(capturePolicies_, vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies>) };
    inline vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies> capturePolicies() { DARABONBA_PTR_GET(capturePolicies_, vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies>) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCapturePolicies(const vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies> & capturePolicies) { DARABONBA_PTR_SET_VALUE(capturePolicies_, capturePolicies) };
    inline SubmitAIAgentVideoAuditTaskRequest& setCapturePolicies(vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies> && capturePolicies) { DARABONBA_PTR_SET_RVALUE(capturePolicies_, capturePolicies) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitAIAgentVideoAuditTaskRequestInput & input() const { DARABONBA_PTR_GET_CONST(input_, SubmitAIAgentVideoAuditTaskRequestInput) };
    inline SubmitAIAgentVideoAuditTaskRequestInput input() { DARABONBA_PTR_GET(input_, SubmitAIAgentVideoAuditTaskRequestInput) };
    inline SubmitAIAgentVideoAuditTaskRequest& setInput(const SubmitAIAgentVideoAuditTaskRequestInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitAIAgentVideoAuditTaskRequest& setInput(SubmitAIAgentVideoAuditTaskRequestInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitAIAgentVideoAuditTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> AIAgentId_ = nullptr;
    std::shared_ptr<int32_t> auditInterval_ = nullptr;
    std::shared_ptr<SubmitAIAgentVideoAuditTaskRequestCallbackConfig> callbackConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SubmitAIAgentVideoAuditTaskRequestCapturePolicies>> capturePolicies_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SubmitAIAgentVideoAuditTaskRequestInput> input_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
