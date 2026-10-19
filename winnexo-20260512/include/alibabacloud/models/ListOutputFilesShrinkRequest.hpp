// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTPUTFILESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTPUTFILESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListOutputFilesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutputFilesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(itemType, itemType_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sharedOnly, sharedOnly_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutputFilesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(itemType, itemType_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sharedOnly, sharedOnly_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListOutputFilesShrinkRequest() = default ;
    ListOutputFilesShrinkRequest(const ListOutputFilesShrinkRequest &) = default ;
    ListOutputFilesShrinkRequest(ListOutputFilesShrinkRequest &&) = default ;
    ListOutputFilesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutputFilesShrinkRequest() = default ;
    ListOutputFilesShrinkRequest& operator=(const ListOutputFilesShrinkRequest &) = default ;
    ListOutputFilesShrinkRequest& operator=(ListOutputFilesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->collaborationGroupId_ == nullptr && this->itemType_ == nullptr && this->keyword_ == nullptr && this->operatingObjectName_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->sessionId_ == nullptr && this->sharedOnly_ == nullptr && this->tagsShrink_ == nullptr && this->tenantId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListOutputFilesShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline ListOutputFilesShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline ListOutputFilesShrinkRequest& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListOutputFilesShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListOutputFilesShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListOutputFilesShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListOutputFilesShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListOutputFilesShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sharedOnly Field Functions 
    bool hasSharedOnly() const { return this->sharedOnly_ != nullptr;};
    void deleteSharedOnly() { this->sharedOnly_ = nullptr;};
    inline bool getSharedOnly() const { DARABONBA_PTR_GET_DEFAULT(sharedOnly_, false) };
    inline ListOutputFilesShrinkRequest& setSharedOnly(bool sharedOnly) { DARABONBA_PTR_SET_VALUE(sharedOnly_, sharedOnly) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListOutputFilesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListOutputFilesShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 精确业务编号，来自文件登记或工作流实例关联
    shared_ptr<string> bizId_ {};
    // 可选协作空间 ID；未传保持当前用户个人产出范围
    shared_ptr<string> collaborationGroupId_ {};
    // The type of the output item. Valid values: ppt, html, document, picture, slides, video, audio, email, and others.
    shared_ptr<string> itemType_ {};
    // The keyword for searching. Matches the output title or item name.
    shared_ptr<string> keyword_ {};
    // The name of the digital employee (operating object). Used to filter results by name.
    shared_ptr<string> operatingObjectName_ {};
    // The page number, starting from 1.
    shared_ptr<int64_t> page_ {};
    // The number of items per page. Valid values: 1 to 100.
    shared_ptr<int64_t> pageSize_ {};
    // 精确会话 ID，覆盖普通会话、技能会话与任务 executionId
    shared_ptr<string> sessionId_ {};
    // Specifies whether to display only outputs and output items with sharing enabled.
    shared_ptr<bool> sharedOnly_ {};
    // 全部匹配的标签列表，来自文件登记或实例 variables.tags
    shared_ptr<string> tagsShrink_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass it explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
