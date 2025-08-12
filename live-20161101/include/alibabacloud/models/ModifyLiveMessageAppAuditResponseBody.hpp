// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEAPPAUDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageAppAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageAppAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppSign, appSign_);
      DARABONBA_PTR_TO_JSON(AuditNeedAuthentication, auditNeedAuthentication_);
      DARABONBA_PTR_TO_JSON(AuditType, auditType_);
      DARABONBA_PTR_TO_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageAppAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppSign, appSign_);
      DARABONBA_PTR_FROM_JSON(AuditNeedAuthentication, auditNeedAuthentication_);
      DARABONBA_PTR_FROM_JSON(AuditType, auditType_);
      DARABONBA_PTR_FROM_JSON(AuditUrl, auditUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLiveMessageAppAuditResponseBody() = default ;
    ModifyLiveMessageAppAuditResponseBody(const ModifyLiveMessageAppAuditResponseBody &) = default ;
    ModifyLiveMessageAppAuditResponseBody(ModifyLiveMessageAppAuditResponseBody &&) = default ;
    ModifyLiveMessageAppAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageAppAuditResponseBody() = default ;
    ModifyLiveMessageAppAuditResponseBody& operator=(const ModifyLiveMessageAppAuditResponseBody &) = default ;
    ModifyLiveMessageAppAuditResponseBody& operator=(ModifyLiveMessageAppAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appSign_ != nullptr && this->auditNeedAuthentication_ != nullptr && this->auditType_ != nullptr && this->auditUrl_ != nullptr && this->requestId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageAppAuditResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appSign Field Functions 
    bool hasAppSign() const { return this->appSign_ != nullptr;};
    void deleteAppSign() { this->appSign_ = nullptr;};
    inline string appSign() const { DARABONBA_PTR_GET_DEFAULT(appSign_, "") };
    inline ModifyLiveMessageAppAuditResponseBody& setAppSign(string appSign) { DARABONBA_PTR_SET_VALUE(appSign_, appSign) };


    // auditNeedAuthentication Field Functions 
    bool hasAuditNeedAuthentication() const { return this->auditNeedAuthentication_ != nullptr;};
    void deleteAuditNeedAuthentication() { this->auditNeedAuthentication_ = nullptr;};
    inline bool auditNeedAuthentication() const { DARABONBA_PTR_GET_DEFAULT(auditNeedAuthentication_, false) };
    inline ModifyLiveMessageAppAuditResponseBody& setAuditNeedAuthentication(bool auditNeedAuthentication) { DARABONBA_PTR_SET_VALUE(auditNeedAuthentication_, auditNeedAuthentication) };


    // auditType Field Functions 
    bool hasAuditType() const { return this->auditType_ != nullptr;};
    void deleteAuditType() { this->auditType_ = nullptr;};
    inline int32_t auditType() const { DARABONBA_PTR_GET_DEFAULT(auditType_, 0) };
    inline ModifyLiveMessageAppAuditResponseBody& setAuditType(int32_t auditType) { DARABONBA_PTR_SET_VALUE(auditType_, auditType) };


    // auditUrl Field Functions 
    bool hasAuditUrl() const { return this->auditUrl_ != nullptr;};
    void deleteAuditUrl() { this->auditUrl_ = nullptr;};
    inline string auditUrl() const { DARABONBA_PTR_GET_DEFAULT(auditUrl_, "") };
    inline ModifyLiveMessageAppAuditResponseBody& setAuditUrl(string auditUrl) { DARABONBA_PTR_SET_VALUE(auditUrl_, auditUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLiveMessageAppAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the interactive messaging application.
    std::shared_ptr<string> appId_ = nullptr;
    // The signature of the interactive messaging application. It is required by the interactive messaging SDK.
    std::shared_ptr<string> appSign_ = nullptr;
    // Indicates whether authentication is enabled. If custom content moderation is used, the value of this parameter is true by default.
    std::shared_ptr<bool> auditNeedAuthentication_ = nullptr;
    // The content moderation method.
    std::shared_ptr<int32_t> auditType_ = nullptr;
    // The URL for content moderation. This parameter is returned when the value of AuditType is 2.
    std::shared_ptr<string> auditUrl_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
