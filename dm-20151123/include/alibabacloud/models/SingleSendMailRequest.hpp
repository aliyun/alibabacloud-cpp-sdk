// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLESENDMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SINGLESENDMAILREQUEST_HPP_
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
  class SingleSendMailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleSendMailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(BccAddress, bccAddress_);
      DARABONBA_PTR_TO_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_TO_JSON(DomainAuth, domainAuth_);
      DARABONBA_PTR_TO_JSON(FromAlias, fromAlias_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(HtmlBody, htmlBody_);
      DARABONBA_PTR_TO_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_TO_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_TO_JSON(ReplyToAddress, replyToAddress_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(TagName, tagName_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TextBody, textBody_);
      DARABONBA_PTR_TO_JSON(ToAddress, toAddress_);
      DARABONBA_PTR_TO_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_TO_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    friend void from_json(const Darabonba::Json& j, SingleSendMailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(BccAddress, bccAddress_);
      DARABONBA_PTR_FROM_JSON(ClickTrace, clickTrace_);
      DARABONBA_PTR_FROM_JSON(DomainAuth, domainAuth_);
      DARABONBA_PTR_FROM_JSON(FromAlias, fromAlias_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(HtmlBody, htmlBody_);
      DARABONBA_PTR_FROM_JSON(IpPoolId, ipPoolId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReplyAddress, replyAddress_);
      DARABONBA_PTR_FROM_JSON(ReplyAddressAlias, replyAddressAlias_);
      DARABONBA_PTR_FROM_JSON(ReplyToAddress, replyToAddress_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TextBody, textBody_);
      DARABONBA_PTR_FROM_JSON(ToAddress, toAddress_);
      DARABONBA_PTR_FROM_JSON(UnSubscribeFilterLevel, unSubscribeFilterLevel_);
      DARABONBA_PTR_FROM_JSON(UnSubscribeLinkType, unSubscribeLinkType_);
    };
    SingleSendMailRequest() = default ;
    SingleSendMailRequest(const SingleSendMailRequest &) = default ;
    SingleSendMailRequest(SingleSendMailRequest &&) = default ;
    SingleSendMailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleSendMailRequest() = default ;
    SingleSendMailRequest& operator=(const SingleSendMailRequest &) = default ;
    SingleSendMailRequest& operator=(SingleSendMailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(TemplateData, templateData_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(TemplateData, templateData_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->templateData_ == nullptr
        && this->templateId_ == nullptr; };
      // templateData Field Functions 
      bool hasTemplateData() const { return this->templateData_ != nullptr;};
      void deleteTemplateData() { this->templateData_ = nullptr;};
      inline const map<string, string> & getTemplateData() const { DARABONBA_PTR_GET_CONST(templateData_, map<string, string>) };
      inline map<string, string> getTemplateData() { DARABONBA_PTR_GET(templateData_, map<string, string>) };
      inline Template& setTemplateData(const map<string, string> & templateData) { DARABONBA_PTR_SET_VALUE(templateData_, templateData) };
      inline Template& setTemplateData(map<string, string> && templateData) { DARABONBA_PTR_SET_RVALUE(templateData_, templateData) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<map<string, string>> templateData_ {};
      shared_ptr<string> templateId_ {};
    };

    class Attachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attachments& obj) { 
        DARABONBA_PTR_TO_JSON(AttachmentName, attachmentName_);
        DARABONBA_PTR_TO_JSON(AttachmentUrl, attachmentUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Attachments& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachmentName, attachmentName_);
        DARABONBA_PTR_FROM_JSON(AttachmentUrl, attachmentUrl_);
      };
      Attachments() = default ;
      Attachments(const Attachments &) = default ;
      Attachments(Attachments &&) = default ;
      Attachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attachments() = default ;
      Attachments& operator=(const Attachments &) = default ;
      Attachments& operator=(Attachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attachmentName_ == nullptr
        && this->attachmentUrl_ == nullptr; };
      // attachmentName Field Functions 
      bool hasAttachmentName() const { return this->attachmentName_ != nullptr;};
      void deleteAttachmentName() { this->attachmentName_ = nullptr;};
      inline string getAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(attachmentName_, "") };
      inline Attachments& setAttachmentName(string attachmentName) { DARABONBA_PTR_SET_VALUE(attachmentName_, attachmentName) };


      // attachmentUrl Field Functions 
      bool hasAttachmentUrl() const { return this->attachmentUrl_ != nullptr;};
      void deleteAttachmentUrl() { this->attachmentUrl_ = nullptr;};
      inline string getAttachmentUrl() const { DARABONBA_PTR_GET_DEFAULT(attachmentUrl_, "") };
      inline Attachments& setAttachmentUrl(string attachmentUrl) { DARABONBA_PTR_SET_VALUE(attachmentUrl_, attachmentUrl) };


    protected:
      shared_ptr<string> attachmentName_ {};
      shared_ptr<string> attachmentUrl_ {};
    };

    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->addressType_ == nullptr && this->attachments_ == nullptr && this->bccAddress_ == nullptr && this->clickTrace_ == nullptr && this->domainAuth_ == nullptr
        && this->fromAlias_ == nullptr && this->headers_ == nullptr && this->htmlBody_ == nullptr && this->ipPoolId_ == nullptr && this->ownerId_ == nullptr
        && this->replyAddress_ == nullptr && this->replyAddressAlias_ == nullptr && this->replyToAddress_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->subject_ == nullptr && this->tagName_ == nullptr && this->template_ == nullptr && this->textBody_ == nullptr && this->toAddress_ == nullptr
        && this->unSubscribeFilterLevel_ == nullptr && this->unSubscribeLinkType_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SingleSendMailRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline int32_t getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, 0) };
    inline SingleSendMailRequest& setAddressType(int32_t addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline const vector<SingleSendMailRequest::Attachments> & getAttachments() const { DARABONBA_PTR_GET_CONST(attachments_, vector<SingleSendMailRequest::Attachments>) };
    inline vector<SingleSendMailRequest::Attachments> getAttachments() { DARABONBA_PTR_GET(attachments_, vector<SingleSendMailRequest::Attachments>) };
    inline SingleSendMailRequest& setAttachments(const vector<SingleSendMailRequest::Attachments> & attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };
    inline SingleSendMailRequest& setAttachments(vector<SingleSendMailRequest::Attachments> && attachments) { DARABONBA_PTR_SET_RVALUE(attachments_, attachments) };


    // bccAddress Field Functions 
    bool hasBccAddress() const { return this->bccAddress_ != nullptr;};
    void deleteBccAddress() { this->bccAddress_ = nullptr;};
    inline string getBccAddress() const { DARABONBA_PTR_GET_DEFAULT(bccAddress_, "") };
    inline SingleSendMailRequest& setBccAddress(string bccAddress) { DARABONBA_PTR_SET_VALUE(bccAddress_, bccAddress) };


    // clickTrace Field Functions 
    bool hasClickTrace() const { return this->clickTrace_ != nullptr;};
    void deleteClickTrace() { this->clickTrace_ = nullptr;};
    inline string getClickTrace() const { DARABONBA_PTR_GET_DEFAULT(clickTrace_, "") };
    inline SingleSendMailRequest& setClickTrace(string clickTrace) { DARABONBA_PTR_SET_VALUE(clickTrace_, clickTrace) };


    // domainAuth Field Functions 
    bool hasDomainAuth() const { return this->domainAuth_ != nullptr;};
    void deleteDomainAuth() { this->domainAuth_ = nullptr;};
    inline bool getDomainAuth() const { DARABONBA_PTR_GET_DEFAULT(domainAuth_, false) };
    inline SingleSendMailRequest& setDomainAuth(bool domainAuth) { DARABONBA_PTR_SET_VALUE(domainAuth_, domainAuth) };


    // fromAlias Field Functions 
    bool hasFromAlias() const { return this->fromAlias_ != nullptr;};
    void deleteFromAlias() { this->fromAlias_ = nullptr;};
    inline string getFromAlias() const { DARABONBA_PTR_GET_DEFAULT(fromAlias_, "") };
    inline SingleSendMailRequest& setFromAlias(string fromAlias) { DARABONBA_PTR_SET_VALUE(fromAlias_, fromAlias) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline SingleSendMailRequest& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // htmlBody Field Functions 
    bool hasHtmlBody() const { return this->htmlBody_ != nullptr;};
    void deleteHtmlBody() { this->htmlBody_ = nullptr;};
    inline string getHtmlBody() const { DARABONBA_PTR_GET_DEFAULT(htmlBody_, "") };
    inline SingleSendMailRequest& setHtmlBody(string htmlBody) { DARABONBA_PTR_SET_VALUE(htmlBody_, htmlBody) };


    // ipPoolId Field Functions 
    bool hasIpPoolId() const { return this->ipPoolId_ != nullptr;};
    void deleteIpPoolId() { this->ipPoolId_ = nullptr;};
    inline string getIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipPoolId_, "") };
    inline SingleSendMailRequest& setIpPoolId(string ipPoolId) { DARABONBA_PTR_SET_VALUE(ipPoolId_, ipPoolId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SingleSendMailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // replyAddress Field Functions 
    bool hasReplyAddress() const { return this->replyAddress_ != nullptr;};
    void deleteReplyAddress() { this->replyAddress_ = nullptr;};
    inline string getReplyAddress() const { DARABONBA_PTR_GET_DEFAULT(replyAddress_, "") };
    inline SingleSendMailRequest& setReplyAddress(string replyAddress) { DARABONBA_PTR_SET_VALUE(replyAddress_, replyAddress) };


    // replyAddressAlias Field Functions 
    bool hasReplyAddressAlias() const { return this->replyAddressAlias_ != nullptr;};
    void deleteReplyAddressAlias() { this->replyAddressAlias_ = nullptr;};
    inline string getReplyAddressAlias() const { DARABONBA_PTR_GET_DEFAULT(replyAddressAlias_, "") };
    inline SingleSendMailRequest& setReplyAddressAlias(string replyAddressAlias) { DARABONBA_PTR_SET_VALUE(replyAddressAlias_, replyAddressAlias) };


    // replyToAddress Field Functions 
    bool hasReplyToAddress() const { return this->replyToAddress_ != nullptr;};
    void deleteReplyToAddress() { this->replyToAddress_ = nullptr;};
    inline bool getReplyToAddress() const { DARABONBA_PTR_GET_DEFAULT(replyToAddress_, false) };
    inline SingleSendMailRequest& setReplyToAddress(bool replyToAddress) { DARABONBA_PTR_SET_VALUE(replyToAddress_, replyToAddress) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SingleSendMailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SingleSendMailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline SingleSendMailRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline SingleSendMailRequest& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const SingleSendMailRequest::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, SingleSendMailRequest::Template) };
    inline SingleSendMailRequest::Template getTemplate() { DARABONBA_PTR_GET(template_, SingleSendMailRequest::Template) };
    inline SingleSendMailRequest& setTemplate(const SingleSendMailRequest::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline SingleSendMailRequest& setTemplate(SingleSendMailRequest::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // textBody Field Functions 
    bool hasTextBody() const { return this->textBody_ != nullptr;};
    void deleteTextBody() { this->textBody_ = nullptr;};
    inline string getTextBody() const { DARABONBA_PTR_GET_DEFAULT(textBody_, "") };
    inline SingleSendMailRequest& setTextBody(string textBody) { DARABONBA_PTR_SET_VALUE(textBody_, textBody) };


    // toAddress Field Functions 
    bool hasToAddress() const { return this->toAddress_ != nullptr;};
    void deleteToAddress() { this->toAddress_ = nullptr;};
    inline string getToAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
    inline SingleSendMailRequest& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


    // unSubscribeFilterLevel Field Functions 
    bool hasUnSubscribeFilterLevel() const { return this->unSubscribeFilterLevel_ != nullptr;};
    void deleteUnSubscribeFilterLevel() { this->unSubscribeFilterLevel_ = nullptr;};
    inline string getUnSubscribeFilterLevel() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeFilterLevel_, "") };
    inline SingleSendMailRequest& setUnSubscribeFilterLevel(string unSubscribeFilterLevel) { DARABONBA_PTR_SET_VALUE(unSubscribeFilterLevel_, unSubscribeFilterLevel) };


    // unSubscribeLinkType Field Functions 
    bool hasUnSubscribeLinkType() const { return this->unSubscribeLinkType_ != nullptr;};
    void deleteUnSubscribeLinkType() { this->unSubscribeLinkType_ = nullptr;};
    inline string getUnSubscribeLinkType() const { DARABONBA_PTR_GET_DEFAULT(unSubscribeLinkType_, "") };
    inline SingleSendMailRequest& setUnSubscribeLinkType(string unSubscribeLinkType) { DARABONBA_PTR_SET_VALUE(unSubscribeLinkType_, unSubscribeLinkType) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // This parameter is required.
    shared_ptr<int32_t> addressType_ {};
    shared_ptr<vector<SingleSendMailRequest::Attachments>> attachments_ {};
    shared_ptr<string> bccAddress_ {};
    shared_ptr<string> clickTrace_ {};
    shared_ptr<bool> domainAuth_ {};
    shared_ptr<string> fromAlias_ {};
    shared_ptr<string> headers_ {};
    shared_ptr<string> htmlBody_ {};
    shared_ptr<string> ipPoolId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> replyAddress_ {};
    shared_ptr<string> replyAddressAlias_ {};
    // This parameter is required.
    shared_ptr<bool> replyToAddress_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> subject_ {};
    shared_ptr<string> tagName_ {};
    shared_ptr<SingleSendMailRequest::Template> template_ {};
    shared_ptr<string> textBody_ {};
    // This parameter is required.
    shared_ptr<string> toAddress_ {};
    shared_ptr<string> unSubscribeFilterLevel_ {};
    shared_ptr<string> unSubscribeLinkType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
