// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLEXDECISIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DUPLEXDECISIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class DuplexDecisionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplexDecisionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BizRequestId, bizRequestId_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(CustomKeywords, customKeywordsShrink_);
      DARABONBA_PTR_TO_JSON(DialogContext, dialogContextShrink_);
      DARABONBA_PTR_TO_JSON(DialogStatus, dialogStatus_);
      DARABONBA_PTR_TO_JSON(InterruptType, interruptType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, DuplexDecisionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BizRequestId, bizRequestId_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(CustomKeywords, customKeywordsShrink_);
      DARABONBA_PTR_FROM_JSON(DialogContext, dialogContextShrink_);
      DARABONBA_PTR_FROM_JSON(DialogStatus, dialogStatus_);
      DARABONBA_PTR_FROM_JSON(InterruptType, interruptType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    DuplexDecisionShrinkRequest() = default ;
    DuplexDecisionShrinkRequest(const DuplexDecisionShrinkRequest &) = default ;
    DuplexDecisionShrinkRequest(DuplexDecisionShrinkRequest &&) = default ;
    DuplexDecisionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplexDecisionShrinkRequest() = default ;
    DuplexDecisionShrinkRequest& operator=(const DuplexDecisionShrinkRequest &) = default ;
    DuplexDecisionShrinkRequest& operator=(DuplexDecisionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->bizRequestId_ != nullptr && this->callTime_ != nullptr && this->customKeywordsShrink_ != nullptr && this->dialogContextShrink_ != nullptr && this->dialogStatus_ != nullptr
        && this->interruptType_ != nullptr && this->sessionId_ != nullptr && this->tenantId_ != nullptr && this->text_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DuplexDecisionShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bizRequestId Field Functions 
    bool hasBizRequestId() const { return this->bizRequestId_ != nullptr;};
    void deleteBizRequestId() { this->bizRequestId_ = nullptr;};
    inline string bizRequestId() const { DARABONBA_PTR_GET_DEFAULT(bizRequestId_, "") };
    inline DuplexDecisionShrinkRequest& setBizRequestId(string bizRequestId) { DARABONBA_PTR_SET_VALUE(bizRequestId_, bizRequestId) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline int32_t callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, 0) };
    inline DuplexDecisionShrinkRequest& setCallTime(int32_t callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // customKeywordsShrink Field Functions 
    bool hasCustomKeywordsShrink() const { return this->customKeywordsShrink_ != nullptr;};
    void deleteCustomKeywordsShrink() { this->customKeywordsShrink_ = nullptr;};
    inline string customKeywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(customKeywordsShrink_, "") };
    inline DuplexDecisionShrinkRequest& setCustomKeywordsShrink(string customKeywordsShrink) { DARABONBA_PTR_SET_VALUE(customKeywordsShrink_, customKeywordsShrink) };


    // dialogContextShrink Field Functions 
    bool hasDialogContextShrink() const { return this->dialogContextShrink_ != nullptr;};
    void deleteDialogContextShrink() { this->dialogContextShrink_ = nullptr;};
    inline string dialogContextShrink() const { DARABONBA_PTR_GET_DEFAULT(dialogContextShrink_, "") };
    inline DuplexDecisionShrinkRequest& setDialogContextShrink(string dialogContextShrink) { DARABONBA_PTR_SET_VALUE(dialogContextShrink_, dialogContextShrink) };


    // dialogStatus Field Functions 
    bool hasDialogStatus() const { return this->dialogStatus_ != nullptr;};
    void deleteDialogStatus() { this->dialogStatus_ = nullptr;};
    inline string dialogStatus() const { DARABONBA_PTR_GET_DEFAULT(dialogStatus_, "") };
    inline DuplexDecisionShrinkRequest& setDialogStatus(string dialogStatus) { DARABONBA_PTR_SET_VALUE(dialogStatus_, dialogStatus) };


    // interruptType Field Functions 
    bool hasInterruptType() const { return this->interruptType_ != nullptr;};
    void deleteInterruptType() { this->interruptType_ = nullptr;};
    inline int32_t interruptType() const { DARABONBA_PTR_GET_DEFAULT(interruptType_, 0) };
    inline DuplexDecisionShrinkRequest& setInterruptType(int32_t interruptType) { DARABONBA_PTR_SET_VALUE(interruptType_, interruptType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DuplexDecisionShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DuplexDecisionShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DuplexDecisionShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizRequestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> callTime_ = nullptr;
    std::shared_ptr<string> customKeywordsShrink_ = nullptr;
    std::shared_ptr<string> dialogContextShrink_ = nullptr;
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
