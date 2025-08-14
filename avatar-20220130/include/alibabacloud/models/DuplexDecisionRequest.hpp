// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLEXDECISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DUPLEXDECISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DuplexDecisionRequestDialogContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class DuplexDecisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplexDecisionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BizRequestId, bizRequestId_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(CustomKeywords, customKeywords_);
      DARABONBA_PTR_TO_JSON(DialogContext, dialogContext_);
      DARABONBA_PTR_TO_JSON(DialogStatus, dialogStatus_);
      DARABONBA_PTR_TO_JSON(InterruptType, interruptType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, DuplexDecisionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BizRequestId, bizRequestId_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(CustomKeywords, customKeywords_);
      DARABONBA_PTR_FROM_JSON(DialogContext, dialogContext_);
      DARABONBA_PTR_FROM_JSON(DialogStatus, dialogStatus_);
      DARABONBA_PTR_FROM_JSON(InterruptType, interruptType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    DuplexDecisionRequest() = default ;
    DuplexDecisionRequest(const DuplexDecisionRequest &) = default ;
    DuplexDecisionRequest(DuplexDecisionRequest &&) = default ;
    DuplexDecisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplexDecisionRequest() = default ;
    DuplexDecisionRequest& operator=(const DuplexDecisionRequest &) = default ;
    DuplexDecisionRequest& operator=(DuplexDecisionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->bizRequestId_ != nullptr && this->callTime_ != nullptr && this->customKeywords_ != nullptr && this->dialogContext_ != nullptr && this->dialogStatus_ != nullptr
        && this->interruptType_ != nullptr && this->sessionId_ != nullptr && this->tenantId_ != nullptr && this->text_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DuplexDecisionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bizRequestId Field Functions 
    bool hasBizRequestId() const { return this->bizRequestId_ != nullptr;};
    void deleteBizRequestId() { this->bizRequestId_ = nullptr;};
    inline string bizRequestId() const { DARABONBA_PTR_GET_DEFAULT(bizRequestId_, "") };
    inline DuplexDecisionRequest& setBizRequestId(string bizRequestId) { DARABONBA_PTR_SET_VALUE(bizRequestId_, bizRequestId) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline int32_t callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, 0) };
    inline DuplexDecisionRequest& setCallTime(int32_t callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // customKeywords Field Functions 
    bool hasCustomKeywords() const { return this->customKeywords_ != nullptr;};
    void deleteCustomKeywords() { this->customKeywords_ = nullptr;};
    inline const vector<string> & customKeywords() const { DARABONBA_PTR_GET_CONST(customKeywords_, vector<string>) };
    inline vector<string> customKeywords() { DARABONBA_PTR_GET(customKeywords_, vector<string>) };
    inline DuplexDecisionRequest& setCustomKeywords(const vector<string> & customKeywords) { DARABONBA_PTR_SET_VALUE(customKeywords_, customKeywords) };
    inline DuplexDecisionRequest& setCustomKeywords(vector<string> && customKeywords) { DARABONBA_PTR_SET_RVALUE(customKeywords_, customKeywords) };


    // dialogContext Field Functions 
    bool hasDialogContext() const { return this->dialogContext_ != nullptr;};
    void deleteDialogContext() { this->dialogContext_ = nullptr;};
    inline const DuplexDecisionRequestDialogContext & dialogContext() const { DARABONBA_PTR_GET_CONST(dialogContext_, DuplexDecisionRequestDialogContext) };
    inline DuplexDecisionRequestDialogContext dialogContext() { DARABONBA_PTR_GET(dialogContext_, DuplexDecisionRequestDialogContext) };
    inline DuplexDecisionRequest& setDialogContext(const DuplexDecisionRequestDialogContext & dialogContext) { DARABONBA_PTR_SET_VALUE(dialogContext_, dialogContext) };
    inline DuplexDecisionRequest& setDialogContext(DuplexDecisionRequestDialogContext && dialogContext) { DARABONBA_PTR_SET_RVALUE(dialogContext_, dialogContext) };


    // dialogStatus Field Functions 
    bool hasDialogStatus() const { return this->dialogStatus_ != nullptr;};
    void deleteDialogStatus() { this->dialogStatus_ = nullptr;};
    inline string dialogStatus() const { DARABONBA_PTR_GET_DEFAULT(dialogStatus_, "") };
    inline DuplexDecisionRequest& setDialogStatus(string dialogStatus) { DARABONBA_PTR_SET_VALUE(dialogStatus_, dialogStatus) };


    // interruptType Field Functions 
    bool hasInterruptType() const { return this->interruptType_ != nullptr;};
    void deleteInterruptType() { this->interruptType_ = nullptr;};
    inline int32_t interruptType() const { DARABONBA_PTR_GET_DEFAULT(interruptType_, 0) };
    inline DuplexDecisionRequest& setInterruptType(int32_t interruptType) { DARABONBA_PTR_SET_VALUE(interruptType_, interruptType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DuplexDecisionRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DuplexDecisionRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DuplexDecisionRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizRequestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> callTime_ = nullptr;
    std::shared_ptr<vector<string>> customKeywords_ = nullptr;
    std::shared_ptr<DuplexDecisionRequestDialogContext> dialogContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dialogStatus_ = nullptr;
    std::shared_ptr<int32_t> interruptType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
