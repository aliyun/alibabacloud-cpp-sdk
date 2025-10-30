// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONOPERATIONLOGREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionOperationLogRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionOperationLogRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(TabType, tabType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionOperationLogRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(TabType, tabType_);
    };
    ListResourcePermissionOperationLogRequestListQuery() = default ;
    ListResourcePermissionOperationLogRequestListQuery(const ListResourcePermissionOperationLogRequestListQuery &) = default ;
    ListResourcePermissionOperationLogRequestListQuery(ListResourcePermissionOperationLogRequestListQuery &&) = default ;
    ListResourcePermissionOperationLogRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionOperationLogRequestListQuery() = default ;
    ListResourcePermissionOperationLogRequestListQuery& operator=(const ListResourcePermissionOperationLogRequestListQuery &) = default ;
    ListResourcePermissionOperationLogRequestListQuery& operator=(ListResourcePermissionOperationLogRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && return this->pageSize_ == nullptr && return this->searchText_ == nullptr && return this->tabType_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListResourcePermissionOperationLogRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourcePermissionOperationLogRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListResourcePermissionOperationLogRequestListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // tabType Field Functions 
    bool hasTabType() const { return this->tabType_ != nullptr;};
    void deleteTabType() { this->tabType_ = nullptr;};
    inline string tabType() const { DARABONBA_PTR_GET_DEFAULT(tabType_, "") };
    inline ListResourcePermissionOperationLogRequestListQuery& setTabType(string tabType) { DARABONBA_PTR_SET_VALUE(tabType_, tabType) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchText_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tabType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
