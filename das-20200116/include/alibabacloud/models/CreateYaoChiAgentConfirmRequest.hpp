// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYAOCHIAGENTCONFIRMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEYAOCHIAGENTCONFIRMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateYaoChiAgentConfirmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYaoChiAgentConfirmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Approved, approved_);
      DARABONBA_PTR_TO_JSON(ConfirmationId, confirmationId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(ToolArgs, toolArgs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYaoChiAgentConfirmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Approved, approved_);
      DARABONBA_PTR_FROM_JSON(ConfirmationId, confirmationId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(ToolArgs, toolArgs_);
    };
    CreateYaoChiAgentConfirmRequest() = default ;
    CreateYaoChiAgentConfirmRequest(const CreateYaoChiAgentConfirmRequest &) = default ;
    CreateYaoChiAgentConfirmRequest(CreateYaoChiAgentConfirmRequest &&) = default ;
    CreateYaoChiAgentConfirmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYaoChiAgentConfirmRequest() = default ;
    CreateYaoChiAgentConfirmRequest& operator=(const CreateYaoChiAgentConfirmRequest &) = default ;
    CreateYaoChiAgentConfirmRequest& operator=(CreateYaoChiAgentConfirmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->approved_ == nullptr
        && this->confirmationId_ == nullptr && this->sessionId_ == nullptr && this->toolArgs_ == nullptr; };
    // approved Field Functions 
    bool hasApproved() const { return this->approved_ != nullptr;};
    void deleteApproved() { this->approved_ = nullptr;};
    inline bool getApproved() const { DARABONBA_PTR_GET_DEFAULT(approved_, false) };
    inline CreateYaoChiAgentConfirmRequest& setApproved(bool approved) { DARABONBA_PTR_SET_VALUE(approved_, approved) };


    // confirmationId Field Functions 
    bool hasConfirmationId() const { return this->confirmationId_ != nullptr;};
    void deleteConfirmationId() { this->confirmationId_ = nullptr;};
    inline string getConfirmationId() const { DARABONBA_PTR_GET_DEFAULT(confirmationId_, "") };
    inline CreateYaoChiAgentConfirmRequest& setConfirmationId(string confirmationId) { DARABONBA_PTR_SET_VALUE(confirmationId_, confirmationId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateYaoChiAgentConfirmRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // toolArgs Field Functions 
    bool hasToolArgs() const { return this->toolArgs_ != nullptr;};
    void deleteToolArgs() { this->toolArgs_ = nullptr;};
    inline string getToolArgs() const { DARABONBA_PTR_GET_DEFAULT(toolArgs_, "") };
    inline CreateYaoChiAgentConfirmRequest& setToolArgs(string toolArgs) { DARABONBA_PTR_SET_VALUE(toolArgs_, toolArgs) };


  protected:
    // Specifies whether to approve the execution of the pending operation. Valid values:
    // 
    // - true: Approve the execution.
    // - false: Reject the execution.
    // 
    // This parameter is required. Rejection is also a valid confirmation response and does not indicate an operation call failure.
    // 
    // This parameter is required.
    shared_ptr<bool> approved_ {};
    // The unique identifier of the pending operation. Use the confirmation_id returned by the operation confirmation event in the Alibaba Cloud ApsaraDB agent session. Do not generate it yourself. The format is a 36-character UUID that contains hyphens, such as xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx.
    // 
    // This parameter is required.
    shared_ptr<string> confirmationId_ {};
    // The ID of the Alibaba Cloud ApsaraDB agent session to which the pending operation belongs. It must be the same as the SessionId used when creating the session and initiating the chat, and must correspond to the session to which the ConfirmationId belongs. The format is a 36-character UUID that contains hyphens.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The custom parameters of the tool. The example shows the parameter structure of the tool for modifying instance descriptions. The instance ID and description are desensitized and provided only for format reference. The current version does not support modifying tool parameters through this operation. Omit this parameter in actual calls. Do not pass an empty string or a JSON string. When approving the execution, the original tool parameters generated by the assistant are used.
    shared_ptr<string> toolArgs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
