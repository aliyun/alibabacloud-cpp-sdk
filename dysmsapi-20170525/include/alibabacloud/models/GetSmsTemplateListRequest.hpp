// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSTEMPLATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSMSTEMPLATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetSmsTemplateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsTemplateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(UsableStateList, usableStateList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsTemplateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(UsableStateList, usableStateList_);
    };
    GetSmsTemplateListRequest() = default ;
    GetSmsTemplateListRequest(const GetSmsTemplateListRequest &) = default ;
    GetSmsTemplateListRequest(GetSmsTemplateListRequest &&) = default ;
    GetSmsTemplateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsTemplateListRequest() = default ;
    GetSmsTemplateListRequest& operator=(const GetSmsTemplateListRequest &) = default ;
    GetSmsTemplateListRequest& operator=(GetSmsTemplateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->ownerId_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->signName_ == nullptr && this->templateCode_ == nullptr && this->templateName_ == nullptr && this->templateTag_ == nullptr && this->templateType_ == nullptr
        && this->usableStateList_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int64_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0L) };
    inline GetSmsTemplateListRequest& setAuditStatus(int64_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetSmsTemplateListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline GetSmsTemplateListRequest& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetSmsTemplateListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetSmsTemplateListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetSmsTemplateListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline GetSmsTemplateListRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline GetSmsTemplateListRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetSmsTemplateListRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline string getTemplateTag() const { DARABONBA_PTR_GET_DEFAULT(templateTag_, "") };
    inline GetSmsTemplateListRequest& setTemplateTag(string templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
    inline GetSmsTemplateListRequest& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // usableStateList Field Functions 
    bool hasUsableStateList() const { return this->usableStateList_ != nullptr;};
    void deleteUsableStateList() { this->usableStateList_ = nullptr;};
    inline const vector<string> & getUsableStateList() const { DARABONBA_PTR_GET_CONST(usableStateList_, vector<string>) };
    inline vector<string> getUsableStateList() { DARABONBA_PTR_GET(usableStateList_, vector<string>) };
    inline GetSmsTemplateListRequest& setUsableStateList(const vector<string> & usableStateList) { DARABONBA_PTR_SET_VALUE(usableStateList_, usableStateList) };
    inline GetSmsTemplateListRequest& setUsableStateList(vector<string> && usableStateList) { DARABONBA_PTR_SET_RVALUE(usableStateList_, usableStateList) };


  protected:
    // 模板审核状态
    shared_ptr<int64_t> auditStatus_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 页码, 默认1
    shared_ptr<int64_t> pageIndex_ {};
    // 每页数量，默认10
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 签名
    shared_ptr<string> signName_ {};
    // 模板code
    shared_ptr<string> templateCode_ {};
    // 模板名称
    shared_ptr<string> templateName_ {};
    // 模板标签
    shared_ptr<string> templateTag_ {};
    // 模板类型
    shared_ptr<int64_t> templateType_ {};
    // 模板状态
    shared_ptr<vector<string>> usableStateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
