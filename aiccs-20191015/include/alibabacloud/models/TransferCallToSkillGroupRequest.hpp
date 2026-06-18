// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERCALLTOSKILLGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERCALLTOSKILLGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class TransferCallToSkillGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferCallToSkillGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(HoldConnectionId, holdConnectionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSingleTransfer, isSingleTransfer_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TransferCallToSkillGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(HoldConnectionId, holdConnectionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSingleTransfer, isSingleTransfer_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    TransferCallToSkillGroupRequest() = default ;
    TransferCallToSkillGroupRequest(const TransferCallToSkillGroupRequest &) = default ;
    TransferCallToSkillGroupRequest(TransferCallToSkillGroupRequest &&) = default ;
    TransferCallToSkillGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferCallToSkillGroupRequest() = default ;
    TransferCallToSkillGroupRequest& operator=(const TransferCallToSkillGroupRequest &) = default ;
    TransferCallToSkillGroupRequest& operator=(TransferCallToSkillGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->callId_ == nullptr && this->clientToken_ == nullptr && this->connectionId_ == nullptr && this->holdConnectionId_ == nullptr && this->instanceId_ == nullptr
        && this->isSingleTransfer_ == nullptr && this->jobId_ == nullptr && this->skillGroupId_ == nullptr && this->type_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline TransferCallToSkillGroupRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline TransferCallToSkillGroupRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TransferCallToSkillGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
    inline TransferCallToSkillGroupRequest& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // holdConnectionId Field Functions 
    bool hasHoldConnectionId() const { return this->holdConnectionId_ != nullptr;};
    void deleteHoldConnectionId() { this->holdConnectionId_ = nullptr;};
    inline string getHoldConnectionId() const { DARABONBA_PTR_GET_DEFAULT(holdConnectionId_, "") };
    inline TransferCallToSkillGroupRequest& setHoldConnectionId(string holdConnectionId) { DARABONBA_PTR_SET_VALUE(holdConnectionId_, holdConnectionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline TransferCallToSkillGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSingleTransfer Field Functions 
    bool hasIsSingleTransfer() const { return this->isSingleTransfer_ != nullptr;};
    void deleteIsSingleTransfer() { this->isSingleTransfer_ = nullptr;};
    inline bool getIsSingleTransfer() const { DARABONBA_PTR_GET_DEFAULT(isSingleTransfer_, false) };
    inline TransferCallToSkillGroupRequest& setIsSingleTransfer(bool isSingleTransfer) { DARABONBA_PTR_SET_VALUE(isSingleTransfer_, isSingleTransfer) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline TransferCallToSkillGroupRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline int64_t getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, 0L) };
    inline TransferCallToSkillGroupRequest& setSkillGroupId(int64_t skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline TransferCallToSkillGroupRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The agent account name, which is the phone number or mailbox entered during account registration. It is unique within the instance.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // Hotline session ID.
    shared_ptr<string> callId_ {};
    // Unique ID for the customer request. Used for idempotency validation. You can generate it using UUID.
    shared_ptr<string> clientToken_ {};
    // The connId in the WebSocket after an inbound call.
    shared_ptr<string> connectionId_ {};
    // The holdConnId in the WebSocket after an inbound call (required only for two-step transfer).
    shared_ptr<string> holdConnectionId_ {};
    // Artificial Intelligence Cloud Call Service (AICCS) instance ID.
    // You can obtain it from **Instance Management** in the left-side navigation pane of the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Default value: **true**. Valid values:
    // - **true**: Single-step transfer.
    // - **false**: Two-step transfer.
    shared_ptr<bool> isSingleTransfer_ {};
    // The jobId in the WebSocket after an inbound call.
    shared_ptr<string> jobId_ {};
    // Skill group ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> skillGroupId_ {};
    // Default value: **1**. Valid values:
    // - **1**: Single-step transfer.
    // - **2**: Two-step transfer.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
