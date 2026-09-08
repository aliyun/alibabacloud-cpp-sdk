// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBHOOKCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBHOOKCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class UpdateWebhookContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebhookContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(BotSecurityToken, botSecurityToken_);
      DARABONBA_PTR_TO_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_TO_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Cookies, cookies_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(ServerUrl, serverUrl_);
      DARABONBA_PTR_TO_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_TO_JSON(UidType, uidType_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
      DARABONBA_PTR_TO_JSON(WebhookType, webhookType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebhookContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(BotSecurityToken, botSecurityToken_);
      DARABONBA_PTR_FROM_JSON(CallerProtocol, callerProtocol_);
      DARABONBA_PTR_FROM_JSON(ClientSource, clientSource_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Cookies, cookies_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(ServerUrl, serverUrl_);
      DARABONBA_PTR_FROM_JSON(SrcUrl, srcUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TenantCode, tenantCode_);
      DARABONBA_PTR_FROM_JSON(UidType, uidType_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
      DARABONBA_PTR_FROM_JSON(WebhookType, webhookType_);
    };
    UpdateWebhookContactRequest() = default ;
    UpdateWebhookContactRequest(const UpdateWebhookContactRequest &) = default ;
    UpdateWebhookContactRequest(UpdateWebhookContactRequest &&) = default ;
    UpdateWebhookContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebhookContactRequest() = default ;
    UpdateWebhookContactRequest& operator=(const UpdateWebhookContactRequest &) = default ;
    UpdateWebhookContactRequest& operator=(UpdateWebhookContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->appName_ == nullptr && this->bizName_ == nullptr && this->botSecurityToken_ == nullptr && this->callerProtocol_ == nullptr && this->clientSource_ == nullptr
        && this->contactId_ == nullptr && this->contactName_ == nullptr && this->cookies_ == nullptr && this->securityToken_ == nullptr && this->serverUrl_ == nullptr
        && this->srcUrl_ == nullptr && this->templateCode_ == nullptr && this->tenantCode_ == nullptr && this->uidType_ == nullptr && this->verificationCode_ == nullptr
        && this->webhookType_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateWebhookContactRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateWebhookContactRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline UpdateWebhookContactRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // botSecurityToken Field Functions 
    bool hasBotSecurityToken() const { return this->botSecurityToken_ != nullptr;};
    void deleteBotSecurityToken() { this->botSecurityToken_ = nullptr;};
    inline string getBotSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(botSecurityToken_, "") };
    inline UpdateWebhookContactRequest& setBotSecurityToken(string botSecurityToken) { DARABONBA_PTR_SET_VALUE(botSecurityToken_, botSecurityToken) };


    // callerProtocol Field Functions 
    bool hasCallerProtocol() const { return this->callerProtocol_ != nullptr;};
    void deleteCallerProtocol() { this->callerProtocol_ = nullptr;};
    inline string getCallerProtocol() const { DARABONBA_PTR_GET_DEFAULT(callerProtocol_, "") };
    inline UpdateWebhookContactRequest& setCallerProtocol(string callerProtocol) { DARABONBA_PTR_SET_VALUE(callerProtocol_, callerProtocol) };


    // clientSource Field Functions 
    bool hasClientSource() const { return this->clientSource_ != nullptr;};
    void deleteClientSource() { this->clientSource_ = nullptr;};
    inline string getClientSource() const { DARABONBA_PTR_GET_DEFAULT(clientSource_, "") };
    inline UpdateWebhookContactRequest& setClientSource(string clientSource) { DARABONBA_PTR_SET_VALUE(clientSource_, clientSource) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline UpdateWebhookContactRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline UpdateWebhookContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // cookies Field Functions 
    bool hasCookies() const { return this->cookies_ != nullptr;};
    void deleteCookies() { this->cookies_ = nullptr;};
    inline string getCookies() const { DARABONBA_PTR_GET_DEFAULT(cookies_, "") };
    inline UpdateWebhookContactRequest& setCookies(string cookies) { DARABONBA_PTR_SET_VALUE(cookies_, cookies) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateWebhookContactRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // serverUrl Field Functions 
    bool hasServerUrl() const { return this->serverUrl_ != nullptr;};
    void deleteServerUrl() { this->serverUrl_ = nullptr;};
    inline string getServerUrl() const { DARABONBA_PTR_GET_DEFAULT(serverUrl_, "") };
    inline UpdateWebhookContactRequest& setServerUrl(string serverUrl) { DARABONBA_PTR_SET_VALUE(serverUrl_, serverUrl) };


    // srcUrl Field Functions 
    bool hasSrcUrl() const { return this->srcUrl_ != nullptr;};
    void deleteSrcUrl() { this->srcUrl_ = nullptr;};
    inline string getSrcUrl() const { DARABONBA_PTR_GET_DEFAULT(srcUrl_, "") };
    inline UpdateWebhookContactRequest& setSrcUrl(string srcUrl) { DARABONBA_PTR_SET_VALUE(srcUrl_, srcUrl) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateWebhookContactRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // tenantCode Field Functions 
    bool hasTenantCode() const { return this->tenantCode_ != nullptr;};
    void deleteTenantCode() { this->tenantCode_ = nullptr;};
    inline string getTenantCode() const { DARABONBA_PTR_GET_DEFAULT(tenantCode_, "") };
    inline UpdateWebhookContactRequest& setTenantCode(string tenantCode) { DARABONBA_PTR_SET_VALUE(tenantCode_, tenantCode) };


    // uidType Field Functions 
    bool hasUidType() const { return this->uidType_ != nullptr;};
    void deleteUidType() { this->uidType_ = nullptr;};
    inline string getUidType() const { DARABONBA_PTR_GET_DEFAULT(uidType_, "") };
    inline UpdateWebhookContactRequest& setUidType(string uidType) { DARABONBA_PTR_SET_VALUE(uidType_, uidType) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline UpdateWebhookContactRequest& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


    // webhookType Field Functions 
    bool hasWebhookType() const { return this->webhookType_ != nullptr;};
    void deleteWebhookType() { this->webhookType_ = nullptr;};
    inline string getWebhookType() const { DARABONBA_PTR_GET_DEFAULT(webhookType_, "") };
    inline UpdateWebhookContactRequest& setWebhookType(string webhookType) { DARABONBA_PTR_SET_VALUE(webhookType_, webhookType) };


  protected:
    // The language.
    shared_ptr<string> acceptLanguage_ {};
    // The application name of the caller.
    shared_ptr<string> appName_ {};
    // The business line of the caller.
    shared_ptr<string> bizName_ {};
    // The security signature.
    shared_ptr<string> botSecurityToken_ {};
    // The request protocol type.
    shared_ptr<string> callerProtocol_ {};
    // The source of the operation terminal.
    shared_ptr<string> clientSource_ {};
    // webhook id
    shared_ptr<int64_t> contactId_ {};
    // The webhook name.
    shared_ptr<string> contactName_ {};
    // The user cookies.
    shared_ptr<string> cookies_ {};
    shared_ptr<string> securityToken_ {};
    // The webhook server URL.
    shared_ptr<string> serverUrl_ {};
    // The URL of the source page.
    shared_ptr<string> srcUrl_ {};
    // The template code. This parameter is required only for custom webhooks.
    shared_ptr<string> templateCode_ {};
    // The tenant information.
    shared_ptr<string> tenantCode_ {};
    // The user type.
    shared_ptr<string> uidType_ {};
    // The verification code.
    shared_ptr<string> verificationCode_ {};
    // The webhook type.
    shared_ptr<string> webhookType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
