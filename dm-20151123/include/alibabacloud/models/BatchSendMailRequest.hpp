// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSENDMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSENDMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_TO_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_TO_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSendMailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReceiversName, receiversName_);
      DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_FROM_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
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
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->addressType_ == nullptr && return this->clickTrace_ == nullptr && return this->headers_ == nullptr && return this->ipPoolId_ == nullptr && return this->ownerId_ == nullptr
        && return this->receiversName_ == nullptr && return this->replyAddress_ == nullptr && return this->replyAddressAlias_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->tagName_ == nullptr && return this->templateName_ == nullptr && return this->unSubscribeFilterLevel_ == nullptr && return this->unSubscribeLinkType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline BatchSendMailRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline int32_t addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, 0) };
    inline BatchSendMailRequest& setAddressType(int32_t addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // clickTrace Field Functions 
    bool hasClickTrace() const { return this->clickTrace_ != nullptr;};
    void deleteClickTrace() { this->clickTrace_ = nullptr;};
    inline string clickTrace() const { DARABONBA_PTR_GET_DEFAULT(clickTrace_, "") };
    inline BatchSendMailRequest& setClickTrace(string clickTrace) { DARABONBA_PTR_SET_VALUE(clickTrace_, clickTrace) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string headers() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline BatchSendMailRequest& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string ipPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline BatchSendMailRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchSendMailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // receiversName Field Functions 
    bool hasReceiversName() const { return this->receiversName_ != nullptr;};
    void deleteReceiversName() { this->receiversName_ = nullptr;};
    inline string receiversName() const { DARABONBA_PTR_GET_DEFAULT(receiversName_, "") };
    inline BatchSendMailRequest& setReceiversName(string receiversName) { DARABONBA_PTR_SET_VALUE(receiversName_, receiversName) };


    // replyAddress Field Functions 
    bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
    void deleteReplyAddress() { this->replyAddress_ = nullptr;};
    inline string replyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
    inline BatchSendMailRequest& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


    // replyAddressAlias Field Functions 
    bool hasReplyAddressAlias() const { return this->replyAddressAlias_ != nullptr;};
    void deleteReplyAddressAlias() { this->replyAddressAlias_ = nullptr;};
    inline string replyAddressAlias() const { DARABONBA_PTR_GET_DEFAULT(replyAddressAlias_, "") };
    inline BatchSendMailRequest& setReplyAddressAlias(string replyAddressAlias) { DARABONBA_PTR_SET_VALUE(replyAddressAlias_, replyAddressAlias) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BatchSendMailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BatchSendMailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline BatchSendMailRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline BatchSendMailRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // unSubscribeFilterLevel Field Functions 
    bool hasUnSubscribeFilterLevel() const { return this->unSubscribeFilterLevel_ != nullptr;};
    void deleteUnSubscribeFilterLevel() { this->unSubscribeFilterLevel_ = nullptr;};
    inline string unSubscribeFilterLevel() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeFilterLevel_, "") };
    inline BatchSendMailRequest& setUnSubscribeFilterLevel(string unSubscribeFilterLevel) { DARABONBA_PTR_SET_VALUE(unSubscribeFilterLevel_, unSubscribeFilterLevel) };


    // unSubscribeLinkType Field Functions 
    bool hasUnSubscribeLinkType() const { return this->unSubscribeLinkType_ != nullptr;};
    void deleteUnSubscribeLinkType() { this->unSubscribeLinkType_ = nullptr;};
    inline string unSubscribeLinkType() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeLinkType_, "") };
    inline BatchSendMailRequest& setUnSubscribeLinkType(string unSubscribeLinkType) { DARABONBA_PTR_SET_VALUE(unSubscribeLinkType_, unSubscribeLinkType) };


  protected:
    // The sending address configured in the management console.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // - 0: Random account
    // - 1: Sending address
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> addressType_ = nullptr;
    // - 1: Enable data tracking function
    // - 0 (default): Disable data tracking function
    std::shared_ptr<string> clickTrace_ = nullptr;
    // Currently, the standard fields that can be added to the email header are Message-ID, List-Unsubscribe, and List-Unsubscribe-Post. Standard fields will overwrite the existing values in the email header, while non-standard fields must start with X-User- and will be appended to the email header. Currently, up to 10 headers can be passed in JSON format, and both standard and non-standard fields must comply with the syntax requirements for headers.
    std::shared_ptr<string> headers_ = nullptr;
    // dedicated IP pool ID. Users who have purchased an dedicated IP can use this parameter to specify the outgoing IP for this send operation.
    std::shared_ptr<string> ipPoolId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the recipient list that has been created and uploaded with recipients. Note: The recipient list should not be deleted until at least 10 minutes after the task is triggered, otherwise it may cause sending failure.
    // 
    // This parameter is required.
    std::shared_ptr<string> receiversName_ = nullptr;
    // Reply address
    std::shared_ptr<string> replyAddress_ = nullptr;
    // Alias for the reply address
    std::shared_ptr<string> replyAddressAlias_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Email tag name.
    std::shared_ptr<string> tagName_ = nullptr;
    // The name of the template that has been created and approved in advance.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
    // Filtering level. Refer to the [Unsubscribe Function Link Generation and Filtering Mechanism](https://help.aliyun.com/document_detail/2689048.html) document.
    // - disabled: No filtering
    // - default: Use the default strategy, bulk addresses use sender address-level filtering
    // - mailfrom: Sender address-level filtering
    // - mailfrom_domain: Sender domain-level filtering
    // - edm_id: Account-level filtering
    std::shared_ptr<string> unSubscribeFilterLevel_ = nullptr;
    // The type of generated unsubscribe link. Refer to the [Unsubscribe Function Link Generation and Filtering Mechanism](https://help.aliyun.com/document_detail/2689048.html) document.
    // - disabled: Do not generate
    // - default: Use the default strategy: Generate an unsubscribe link when a bulk-type sending address sends to specific domains, such as those containing keywords like "gmail", "yahoo",
    // "google", "aol.com", "hotmail",
    // "outlook", "ymail.com", etc.
    // - zh-cn: Generate, for future content preparation
    // - en-us: Generate, for future content preparation
    std::shared_ptr<string> unSubscribeLinkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
