// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASECONTENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVISIBLEKNOWLEDGEBASECONTENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListVisibleKnowledgeBaseContentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVisibleKnowledgeBaseContentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sortField, sortField_);
      DARABONBA_PTR_TO_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(sourceTypes, sourceTypesShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVisibleKnowledgeBaseContentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sortField, sortField_);
      DARABONBA_PTR_FROM_JSON(sortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(sourceTypes, sourceTypesShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListVisibleKnowledgeBaseContentsShrinkRequest() = default ;
    ListVisibleKnowledgeBaseContentsShrinkRequest(const ListVisibleKnowledgeBaseContentsShrinkRequest &) = default ;
    ListVisibleKnowledgeBaseContentsShrinkRequest(ListVisibleKnowledgeBaseContentsShrinkRequest &&) = default ;
    ListVisibleKnowledgeBaseContentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVisibleKnowledgeBaseContentsShrinkRequest() = default ;
    ListVisibleKnowledgeBaseContentsShrinkRequest& operator=(const ListVisibleKnowledgeBaseContentsShrinkRequest &) = default ;
    ListVisibleKnowledgeBaseContentsShrinkRequest& operator=(ListVisibleKnowledgeBaseContentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->operatingObjectName_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->sortField_ == nullptr && this->sortOrder_ == nullptr
        && this->sourceTypesShrink_ == nullptr && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // sourceTypesShrink Field Functions 
    bool hasSourceTypesShrink() const { return this->sourceTypesShrink_ != nullptr;};
    void deleteSourceTypesShrink() { this->sourceTypesShrink_ = nullptr;};
    inline string getSourceTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceTypesShrink_, "") };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setSourceTypesShrink(string sourceTypesShrink) { DARABONBA_PTR_SET_VALUE(sourceTypesShrink_, sourceTypesShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListVisibleKnowledgeBaseContentsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 目录 ID（必传非空，必须在数字员工 linked_directories 及其子目录范围内）
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // 数字员工名称（运营对象 name）
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // 页码（从 1 开始）
    shared_ptr<int64_t> page_ {};
    // 每页数量，范围 1-100
    shared_ptr<int64_t> pageSize_ {};
    // 排序字段，可选 name / gmt_create / gmt_modified
    shared_ptr<string> sortField_ {};
    // 排序方向，可选 asc / desc
    shared_ptr<string> sortOrder_ {};
    // 资源类型筛选列表（有值时仅返回资源，不包含子目录）
    shared_ptr<string> sourceTypesShrink_ {};
    // 租户ID，公共参数；winnexo-cli 通过 --tenant-id 显式传入
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
