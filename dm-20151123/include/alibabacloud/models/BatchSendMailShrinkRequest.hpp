// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSENDMAILSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSENDMAILSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class BatchSendMailShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSendMailShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_TO_JSON(DomainAuth, domainAuth_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Receivers, receiversShrink_);
      DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_TO_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContentShrink_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_TO_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSendMailShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_FROM_JSON(DomainAuth, domainAuth_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Receivers, receiversShrink_);
      DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_FROM_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContentShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_FROM_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    BatchSendMailShrinkRequest() = default ;
    BatchSendMailShrinkRequest(const BatchSendMailShrinkRequest &) = default ;
    BatchSendMailShrinkRequest(BatchSendMailShrinkRequest &&) = default ;
    BatchSendMailShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSendMailShrinkRequest() = default ;
    BatchSendMailShrinkRequest& operator=(const BatchSendMailShrinkRequest &) = default ;
    BatchSendMailShrinkRequest& operator=(BatchSendMailShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->addressType_ == nullptr && this->clickTrace_ == nullptr && this->domainAuth_ == nullptr && this->headers_ == nullptr && this->ipPoolId_ == nullptr
        && this->ownerId_ == nullptr && this->receiversShrink_ == nullptr && this->receiversName_ == nullptr && this->replyAddress_ == nullptr && this->replyAddressAlias_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tagName_ == nullptr && this->templateContentShrink_ == nullptr && this->templateName_ == nullptr
        && this->unSubscribeFilterLevel_ == nullptr && this->unSubscribeLinkType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline BatchSendMailShrinkRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline int32_t getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, 0) };
    inline BatchSendMailShrinkRequest& setAddressType(int32_t addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clickTrace Field Functions 
    bool hasClickTrace() const { return this->clickTrace_ != nullptr;};
    void deleteClickTrace() { this->clickTrace_ = nullptr;};
    inline string getClickTrace() const { DARABONBA_PTR_GET_DEFAULT(clickTrace_, "") };
    inline BatchSendMailShrinkRequest& setClickTrace(string clickTrace) { DARABONBA_PTR_SET_VALUE(clickTrace_, clickTrace) };


    // domainAuth Field Functions 
    bool hasDomainAuth() const { return this->domainAuth_ != nullptr;};
    void deleteDomainAuth() { this->domainAuth_ = nullptr;};
    inline bool getDomainAuth() const { DARABONBA_PTR_GET_DEFAULT(domainAuth_, false) };
    inline BatchSendMailShrinkRequest& setDomainAuth(bool domainAuth) { DARABONBA_PTR_SET_VALUE(domainAuth_, domainAuth) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline BatchSendMailShrinkRequest& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline BatchSendMailShrinkRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchSendMailShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // receiversShrink Field Functions 
    bool hasReceiversShrink() const { return this->receiversShrink_ != nullptr;};
    void deleteReceiversShrink() { this->receiversShrink_ = nullptr;};
    inline string getReceiversShrink() const { DARABONBA_PTR_GET_DEFAULT(receiversShrink_, "") };
    inline BatchSendMailShrinkRequest& setReceiversShrink(string receiversShrink) { DARABONBA_PTR_SET_VALUE(receiversShrink_, receiversShrink) };


    // receiversName Field Functions 
    bool hasReceiversName() const { return this->receiversName_ != nullptr;};
    void deleteReceiversName() { this->receiversName_ = nullptr;};
    inline string getReceiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
    inline BatchSendMailShrinkRequest& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


    // replyAddress Field Functions 
    bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
    void deleteReplyAddress() { this->replyAddress_ = nullptr;};
    inline string getReplyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
    inline BatchSendMailShrinkRequest& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


    // replyAddressAlias Field Functions 
    bool hasReplyAddressAlias() const { return this->replyAddressAlias_ != nullptr;};
    void deleteReplyAddressAlias() { this->replyAddressAlias_ = nullptr;};
    inline string getReplyAddressAlias() const { DARABONBA_PTR_GET_DEFAULT(replyAddressAlias_, "") };
    inline BatchSendMailShrinkRequest& setReplyAddressAlias(string replyAddressAlias) { DARABONBA_PTR_SET_VALUE(replyAddressAlias_, replyAddressAlias) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BatchSendMailShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BatchSendMailShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline BatchSendMailShrinkRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // templateContentShrink Field Functions 
    bool hasTemplateContentShrink() const { return this->templateContentShrink_ != nullptr;};
    void deleteTemplateContentShrink() { this->templateContentShrink_ = nullptr;};
    inline string getTemplateContentShrink() const { DARABONBA_PTR_GET_DEFAULT(templateContentShrink_, "") };
    inline BatchSendMailShrinkRequest& setTemplateContentShrink(string templateContentShrink) { DARABONBA_PTR_SET_VALUE(templateContentShrink_, templateContentShrink) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline BatchSendMailShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // unSubscribeFilterLevel Field Functions 
    bool hasUnSubscribeFilterLevel() const { return this->unSubscribeFilterLevel_ != nullptr;};
    void deleteUnSubscribeFilterLevel() { this->unSubscribeFilterLevel_ = nullptr;};
    inline string getUnSubscribeFilterLevel() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeFilterLevel_, "") };
    inline BatchSendMailShrinkRequest& setUnSubscribeFilterLevel(string unSubscribeFilterLevel) { DARABONBA_PTR_SET_VALUE(unSubscribeFilterLevel_, unSubscribeFilterLevel) };


    // unSubscribeLinkType Field Functions 
    bool hasUnSubscribeLinkType() const { return this->unSubscribeLinkType_ != nullptr;};
    void deleteUnSubscribeLinkType() { this->unSubscribeLinkType_ = nullptr;};
    inline string getUnSubscribeLinkType() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeLinkType_, "") };
    inline BatchSendMailShrinkRequest& setUnSubscribeLinkType(string unSubscribeLinkType) { DARABONBA_PTR_SET_VALUE(unSubscribeLinkType_, unSubscribeLinkType) };


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
    // - true
    // 
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
    // b. Authenticate with the domain name and the configured password. Set the actual sender (mailfrom) to a custom address such as user@example.com. The recipient sees user@example.com as the sender.
    shared_ptr<bool> domainAuth_ {};
    // The email header settings.
    // 
    // Both standard and non-standard fields must comply with the syntax requirements for headers defined in the standard. A maximum of 10 headers can be passed through the headers field when sending emails via API. Headers exceeding this limit are ignored. SMTP has no such limit.
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
    // a. Fields prefixed with X-User- (not pushed to EventBridge or Message Service (MNS). This restriction applies to API only. SMTP allows any custom fields.)
    // 
    // b. Fields prefixed with X-User-Notify- (pushed to EventBridge and Message Service (MNS). Both API and SMTP are supported.)
    // 
    // When pushed to EventBridge or MNS, these fields are included under the header field.
    shared_ptr<string> headers_ {};
    // The ID of the dedicated IP address pool. Users who have purchased dedicated IP addresses can use this parameter to specify the outbound IP address for this email sending.
    shared_ptr<string> ipPoolId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recipient list. The number of recipients must not exceed 100. Use this parameter or ReceiversName. If both Receivers and ReceiversName are specified, ReceiversName takes precedence.
    // 
    // Example: [{"To":["Jackie@example.com"],"TemplateData":{"UserName":"Jackie"}},{"To":["Tom@example.com"],"TemplateData":{"UserName":"Tom"}}].
    shared_ptr<string> receiversShrink_ {};
    // The name of a pre-created recipient list that has recipients uploaded.
    // 
    // > **Note**
    // 
    // > The number of recipients in the list must not exceed the remaining daily quota. Otherwise, the email sending fails.
    // 
    // > Wait at least 10 minutes after triggering the task before deleting the recipient list. Otherwise, the email sending may fail.
    shared_ptr<string> receiversName_ {};
    // The reply-to address.
    shared_ptr<string> replyAddress_ {};
    // The alias of the reply-to address.
    shared_ptr<string> replyAddressAlias_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the email tag.
    shared_ptr<string> tagName_ {};
    // The custom email content. Directly specify the content without creating a template in advance. Use this parameter or TemplateName. If both TemplateContent and TemplateName are specified, TemplateName takes precedence.
    shared_ptr<string> templateContentShrink_ {};
    // The name of a pre-created and approved template.
    shared_ptr<string> templateName_ {};
    // The filtering level. For more information, see [Unsubscribe link generation and filtering mechanism](https://help.aliyun.com/document_detail/2689048.html).
    // - disabled: No filtering is applied.
    // - default: Uses the default policy. Batch addresses use sender address-level filtering.
    // - mailfrom: Sender address-level filtering.
    // - mailfrom_domain: Sender domain-level filtering.
    // - edm_id: Account-level filtering.
    shared_ptr<string> unSubscribeFilterLevel_ {};
    // The type of the generated unsubscribe link. For more information, see [Unsubscribe link generation and filtering mechanism](https://help.aliyun.com/document_detail/2689048.html).
    // - disabled: No unsubscribe link is generated.
    // - default: Uses the default policy. An unsubscribe link is generated when a batch-type sender address sends emails to specific domains, such as domains containing keywords "gmail", "yahoo", "google", "aol.com", "hotmail", "outlook", or "ymail.com".
    // 
    // The display language is automatically determined based on the recipient\\"s browser settings.
    shared_ptr<string> unSubscribeLinkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
