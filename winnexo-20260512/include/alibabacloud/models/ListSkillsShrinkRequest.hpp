// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListSkillsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bindStatus, bindStatus_);
      DARABONBA_PTR_TO_JSON(filterType, filterType_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bindStatus, bindStatus_);
      DARABONBA_PTR_FROM_JSON(filterType, filterType_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListSkillsShrinkRequest() = default ;
    ListSkillsShrinkRequest(const ListSkillsShrinkRequest &) = default ;
    ListSkillsShrinkRequest(ListSkillsShrinkRequest &&) = default ;
    ListSkillsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillsShrinkRequest() = default ;
    ListSkillsShrinkRequest& operator=(const ListSkillsShrinkRequest &) = default ;
    ListSkillsShrinkRequest& operator=(ListSkillsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindStatus_ == nullptr
        && this->filterType_ == nullptr && this->keyword_ == nullptr && this->operatingObjectName_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->tagsShrink_ == nullptr && this->tenantId_ == nullptr; };
    // bindStatus Field Functions 
    bool hasBindStatus() const { return this->bindStatus_ != nullptr;};
    void deleteBindStatus() { this->bindStatus_ = nullptr;};
    inline string getBindStatus() const { DARABONBA_PTR_GET_DEFAULT(bindStatus_, "") };
    inline ListSkillsShrinkRequest& setBindStatus(string bindStatus) { DARABONBA_PTR_SET_VALUE(bindStatus_, bindStatus) };


    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline ListSkillsShrinkRequest& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListSkillsShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListSkillsShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSkillsShrinkRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSkillsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListSkillsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListSkillsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The binding status. Valid values: BOUND (bound) and UNBOUND (unbound global skills). Must be specified together with operatingObjectName.
    shared_ptr<string> bindStatus_ {};
    // The filter expression type.
    // 
    // - SQL: SQL-based filtering.
    // - TAG: Tag-based filtering.
    shared_ptr<string> filterType_ {};
    // The search keyword. Supports fuzzy search by API name or exact search by API ID.
    shared_ptr<string> keyword_ {};
    // The digital employee name. Used to calculate the CodeAgent allowedSkills whitelist based on binding relationships.
    shared_ptr<string> operatingObjectName_ {};
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The tag filtering parameter.
    shared_ptr<string> tagsShrink_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
