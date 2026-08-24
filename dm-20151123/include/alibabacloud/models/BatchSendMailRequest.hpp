// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSENDMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSENDMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class BatchSendMailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSendMailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_TO_JSON(DomainAuth, domainAuth_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Receivers, receivers_);
      DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_TO_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_TO_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSendMailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_FROM_JSON(DomainAuth, domainAuth_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_FROM_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_FROM_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    BatchSendMailRequest() = default ;
    BatchSendMailRequest(const BatchSendMailRequest &) = default ;
    BatchSendMailRequest(BatchSendMailRequest &&) = default ;
    BatchSendMailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSendMailRequest() = default ;
    BatchSendMailRequest& operator=(const BatchSendMailRequest &) = default ;
    BatchSendMailRequest& operator=(BatchSendMailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateContent& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(HtmlBody, htmlBody_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
        DARABONBA_PTR_TO_JSON(TextBody, textBody_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(HtmlBody, htmlBody_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
        DARABONBA_PTR_FROM_JSON(TextBody, textBody_);
      };
      TemplateContent() = default ;
      TemplateContent(const TemplateContent &) = default ;
      TemplateContent(TemplateContent &&) = default ;
      TemplateContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateContent() = default ;
      TemplateContent& operator=(const TemplateContent &) = default ;
      TemplateContent& operator=(TemplateContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->htmlBody_ == nullptr && this->subject_ == nullptr && this->textBody_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline TemplateContent& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // htmlBody Field Functions 
      bool hasHtmlBody() const { return this->htmlBody_ != nullptr;};
      void deleteHtmlBody() { this->htmlBody_ = nullptr;};
      inline string getHtmlBody() const { DARABONBA_PTR_GET_DEFAULT(htmlBody_, "") };
      inline TemplateContent& setHtmlBody(string htmlBody) { DARABONBA_PTR_SET_VALUE(htmlBody_, htmlBody) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline TemplateContent& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


      // textBody Field Functions 
      bool hasTextBody() const { return this->textBody_ != nullptr;};
      void deleteTextBody() { this->textBody_ = nullptr;};
      inline string getTextBody() const { DARABONBA_PTR_GET_DEFAULT(textBody_, "") };
      inline TemplateContent& setTextBody(string textBody) { DARABONBA_PTR_SET_VALUE(textBody_, textBody) };


    protected:
      // The display name of the sender.
      shared_ptr<string> alias_ {};
      // The HTML body of the email.
      // 
      // Note: HtmlBody and TextBody are used for different types of email content. You must specify one of them.
      // 
      // The new SDK uses Body for parameter passing with a size limit of approximately 8 MB (Java 1.4.0 and later, Python3 1.4.0 and later, PHP 1.4.0 and later).
      shared_ptr<string> htmlBody_ {};
      // The subject of the email.
      shared_ptr<string> subject_ {};
      // The plain text body of the email.
      // 
      // Note: HtmlBody and TextBody are used for different types of email content. You must specify one of them.
      // 
      // The new SDK uses Body for parameter passing with a size limit of approximately 8 MB (Java 1.4.0 and later, Python3 1.4.0 and later, PHP 1.4.0 and later).
      shared_ptr<string> textBody_ {};
    };

    class Receivers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Receivers& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateData, templateData_);
        DARABONBA_PTR_TO_JSON(To, to_);
      };
      friend void from_json(const Darabonba::Json& j, Receivers& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateData, templateData_);
        DARABONBA_PTR_FROM_JSON(To, to_);
      };
      Receivers() = default ;
      Receivers(const Receivers &) = default ;
      Receivers(Receivers &&) = default ;
      Receivers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Receivers() = default ;
      Receivers& operator=(const Receivers &) = default ;
      Receivers& operator=(Receivers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->templateData_ == nullptr
        && this->to_ == nullptr; };
      // templateData Field Functions 
      bool hasTemplateData() const { return this->templateData_ != nullptr;};
      void deleteTemplateData() { this->templateData_ = nullptr;};
      inline const map<string, string> & getTemplateData() const { DARABONBA_PTR_GET_CONST(templateData_, map<string, string>) };
      inline map<string, string> getTemplateData() { DARABONBA_PTR_GET(templateData_, map<string, string>) };
      inline Receivers& setTemplateData(const map<string, string> & templateData) { DARABONBA_PTR_SET_VALUE(templateData_, templateData) };
      inline Receivers& setTemplateData(map<string, string> && templateData) { DARABONBA_PTR_SET_RVALUE(templateData_, templateData) };


      // to Field Functions 
      bool hasTo() const { return this->to_ != nullptr;};
      void deleteTo() { this->to_ = nullptr;};
      inline const vector<string> & getTo() const { DARABONBA_PTR_GET_CONST(to_, vector<string>) };
      inline vector<string> getTo() { DARABONBA_PTR_GET(to_, vector<string>) };
      inline Receivers& setTo(const vector<string> & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
      inline Receivers& setTo(vector<string> && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


    protected:
      // The email template parameters. This parameter is of the JSON map type.
      shared_ptr<map<string, string>> templateData_ {};
      // The recipient list. This parameter is of the array type.
      shared_ptr<vector<string>> to_ {};
    };

    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->addressType_ == nullptr && this->clickTrace_ == nullptr && this->domainAuth_ == nullptr && this->headers_ == nullptr && this->ipPoolId_ == nullptr
        && this->ownerId_ == nullptr && this->receivers_ == nullptr && this->receiversName_ == nullptr && this->replyAddress_ == nullptr && this->replyAddressAlias_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tagName_ == nullptr && this->templateContent_ == nullptr && this->templateName_ == nullptr
        && this->unSubscribeFilterLevel_ == nullptr && this->unSubscribeLinkType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline BatchSendMailRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline int32_t getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, 0) };
    inline BatchSendMailRequest& setAddressType(int32_t addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clickTrace Field Functions 
    bool hasClickTrace() const { return this->clickTrace_ != nullptr;};
    void deleteClickTrace() { this->clickTrace_ = nullptr;};
    inline string getClickTrace() const { DARABONBA_PTR_GET_DEFAULT(clickTrace_, "") };
    inline BatchSendMailRequest& setClickTrace(string clickTrace) { DARABONBA_PTR_SET_VALUE(clickTrace_, clickTrace) };


    // domainAuth Field Functions 
    bool hasDomainAuth() const { return this->domainAuth_ != nullptr;};
    void deleteDomainAuth() { this->domainAuth_ = nullptr;};
    inline bool getDomainAuth() const { DARABONBA_PTR_GET_DEFAULT(domainAuth_, false) };
    inline BatchSendMailRequest& setDomainAuth(bool domainAuth) { DARABONBA_PTR_SET_VALUE(domainAuth_, domainAuth) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline BatchSendMailRequest& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline BatchSendMailRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchSendMailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<BatchSendMailRequest::Receivers> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<BatchSendMailRequest::Receivers>) };
    inline vector<BatchSendMailRequest::Receivers> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<BatchSendMailRequest::Receivers>) };
    inline BatchSendMailRequest& setReceivers(const vector<BatchSendMailRequest::Receivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline BatchSendMailRequest& setReceivers(vector<BatchSendMailRequest::Receivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // receiversName Field Functions 
    bool hasReceiversName() const { return this->receiversName_ != nullptr;};
    void deleteReceiversName() { this->receiversName_ = nullptr;};
    inline string getReceiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
    inline BatchSendMailRequest& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


    // replyAddress Field Functions 
    bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
    void deleteReplyAddress() { this->replyAddress_ = nullptr;};
    inline string getReplyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
    inline BatchSendMailRequest& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


    // replyAddressAlias Field Functions 
    bool hasReplyAddressAlias() const { return this->replyAddressAlias_ != nullptr;};
    void deleteReplyAddressAlias() { this->replyAddressAlias_ = nullptr;};
    inline string getReplyAddressAlias() const { DARABONBA_PTR_GET_DEFAULT(replyAddressAlias_, "") };
    inline BatchSendMailRequest& setReplyAddressAlias(string replyAddressAlias) { DARABONBA_PTR_SET_VALUE(replyAddressAlias_, replyAddressAlias) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BatchSendMailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BatchSendMailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline BatchSendMailRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline const BatchSendMailRequest::TemplateContent & getTemplateContent() const { DARABONBA_PTR_GET_CONST(templateContent_, BatchSendMailRequest::TemplateContent) };
    inline BatchSendMailRequest::TemplateContent getTemplateContent() { DARABONBA_PTR_GET(templateContent_, BatchSendMailRequest::TemplateContent) };
    inline BatchSendMailRequest& setTemplateContent(const BatchSendMailRequest::TemplateContent & templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };
    inline BatchSendMailRequest& setTemplateContent(BatchSendMailRequest::TemplateContent && templateContent) { DARABONBA_PTR_SET_RVALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline BatchSendMailRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // unSubscribeFilterLevel Field Functions 
    bool hasUnSubscribeFilterLevel() const { return this->unSubscribeFilterLevel_ != nullptr;};
    void deleteUnSubscribeFilterLevel() { this->unSubscribeFilterLevel_ = nullptr;};
    inline string getUnSubscribeFilterLevel() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeFilterLevel_, "") };
    inline BatchSendMailRequest& setUnSubscribeFilterLevel(string unSubscribeFilterLevel) { DARABONBA_PTR_SET_VALUE(unSubscribeFilterLevel_, unSubscribeFilterLevel) };


    // unSubscribeLinkType Field Functions 
    bool hasUnSubscribeLinkType() const { return this->unSubscribeLinkType_ != nullptr;};
    void deleteUnSubscribeLinkType() { this->unSubscribeLinkType_ = nullptr;};
    inline string getUnSubscribeLinkType() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeLinkType_, "") };
    inline BatchSendMailRequest& setUnSubscribeLinkType(string unSubscribeLinkType) { DARABONBA_PTR_SET_VALUE(unSubscribeLinkType_, unSubscribeLinkType) };


  protected:
    // The sender address configured in the management console.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // Valid values:
    // - 0: random account
    // - 1: sender address.
    // 
    // This parameter is required.
    shared_ptr<int32_t> addressType_ {};
    // Valid values:
    // - 1: Enables data tracking.
    // - 0 (default): Disables data tracking.
    shared_ptr<string> clickTrace_ {};
    // Specifies whether to enable domain-level authentication.
    // 
    // Valid values:
    // - true
    // - false
    // 
    // Use this parameter only for domain-level authentication. Ignore it for sender address-level authentication.
    // 
    // 1. Create the address domain-auth-created-by-system@example.com in the console. Keep the prefix before @ unchanged and replace the suffix with your own domain name.
    // 
    // 2.
    // 
    // **API scenario**
    // 
    // Set AccountName to the domain name. The recipient sees domain-auth-created-by-system@example.com as the sender.
    // 
    // **SMTP scenario**
    // 
    // a. Call the ModifyPWByDomain operation to set the domain password.
    // 
    // b. Authenticate with the domain name and the configured password. Pass a custom address such as user@example.com as the actual sender (mailfrom). The recipient sees user@example.com as the sender.
    shared_ptr<bool> domainAuth_ {};
    // The email header settings.
    // 
    // Both standard and non-standard fields must comply with the syntax requirements for headers defined in the standard. A maximum of 10 headers can be passed through the headers field when sending emails via API. Headers that exceed this limit are ignored. SMTP has no such limit.
    // 
    // 1. Standard fields
    // 
    // Message-ID, List-Unsubscribe, List-Unsubscribe-Post
    // 
    // Standard fields overwrite the original values in the email header.
    // 
    // 2. Non-standard fields
    // 
    // Case-insensitive.
    // 
    // a. Fields prefixed with X-User- (not pushed to EventBridge or Message Service (MNS). This restriction applies only to API. SMTP allows any custom fields.)
    // 
    // b. Fields prefixed with X-User-Notify- (pushed to EventBridge and Message Service (MNS). Both API and SMTP are supported.)
    // 
    // When pushed to EventBridge or MNS, these fields are included under the header field.
    shared_ptr<string> headers_ {};
    // The ID of the dedicated IP address pool. Users who have purchased dedicated IP addresses can use this parameter to specify the outbound IP address for this email sending task.
    shared_ptr<string> ipPoolId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recipient list. The number of recipients cannot exceed 100. Specify this parameter or ReceiversName. If both Receivers and ReceiversName are specified, ReceiversName takes precedence.
    // 
    // Example: [{"To":["Jackie@example.com"],"TemplateData":{"UserName":"Jackie"}},{"To":["Tom@example.com"],"TemplateData":{"UserName":"Tom"}}].
    shared_ptr<vector<BatchSendMailRequest::Receivers>> receivers_ {};
    // The name of a pre-created recipient list that has recipients uploaded.
    // 
    // Note:
    // 
    // The number of recipients in the list must not exceed the remaining daily quota. Otherwise, the email sending fails.
    // 
    // Do not delete the recipient list until at least 10 minutes after the task is triggered. Otherwise, the email sending may fail.
    shared_ptr<string> receiversName_ {};
    // The reply-to address.
    shared_ptr<string> replyAddress_ {};
    // The alias of the reply-to address.
    shared_ptr<string> replyAddressAlias_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag name of the email.
    shared_ptr<string> tagName_ {};
    // The custom email content. You can directly specify the content without creating a template in advance. Specify this parameter or TemplateName. If both TemplateContent and TemplateName are specified, TemplateName takes precedence.
    shared_ptr<BatchSendMailRequest::TemplateContent> templateContent_ {};
    // The name of a pre-created and approved template.
    shared_ptr<string> templateName_ {};
    // The filtering level. For more information, see [Unsubscribe link generation and filtering mechanism](https://help.aliyun.com/document_detail/2689048.html).
    // Valid values:
    // - disabled: No filtering is applied.
    // - default: The default policy is used. Batch addresses are filtered at the sender address level.
    // - mailfrom: Filtering at the sender address level.
    // - mailfrom_domain: Filtering at the sender domain level.
    // - edm_id: Filtering at the account level.
    shared_ptr<string> unSubscribeFilterLevel_ {};
    // The type of the generated unsubscribe link. For more information, see [Unsubscribe link generation and filtering mechanism](https://help.aliyun.com/document_detail/2689048.html).
    // Valid values:
    // - disabled: No unsubscribe link is generated.
    // - default: The default policy is used. An unsubscribe link is generated when emails are sent from a batch-type sender address to specific domains that contain keywords such as "gmail", "yahoo", "google", "aol.com", "hotmail", "outlook", or "ymail.com".
    // 
    // The display language is automatically determined based on the recipient\\"s browser settings.
    shared_ptr<string> unSubscribeLinkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
