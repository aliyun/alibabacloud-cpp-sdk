// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListResourcePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListResourcePermissionsRequest() = default ;
    ListResourcePermissionsRequest(const ListResourcePermissionsRequest &) = default ;
    ListResourcePermissionsRequest(ListResourcePermissionsRequest &&) = default ;
    ListResourcePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcePermissionsRequest() = default ;
    ListResourcePermissionsRequest& operator=(const ListResourcePermissionsRequest &) = default ;
    ListResourcePermissionsRequest& operator=(ListResourcePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(SearchText, searchText_);
        DARABONBA_PTR_TO_JSON(TabType, tabType_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
        DARABONBA_PTR_FROM_JSON(TabType, tabType_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->searchText_ == nullptr && this->tabType_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline ListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // searchText Field Functions 
      bool hasSearchText() const { return this->searchText_ != nullptr;};
      void deleteSearchText() { this->searchText_ = nullptr;};
      inline string getSearchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
      inline ListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


      // tabType Field Functions 
      bool hasTabType() const { return this->tabType_ != nullptr;};
      void deleteTabType() { this->tabType_ = nullptr;};
      inline string getTabType() const { DARABONBA_PTR_GET_DEFAULT(tabType_, "") };
      inline ListQuery& setTabType(string tabType) { DARABONBA_PTR_SET_VALUE(tabType_, tabType) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> page_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> searchText_ {};
      // This parameter is required.
      shared_ptr<string> tabType_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListResourcePermissionsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListResourcePermissionsRequest::ListQuery) };
    inline ListResourcePermissionsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListResourcePermissionsRequest::ListQuery) };
    inline ListResourcePermissionsRequest& setListQuery(const ListResourcePermissionsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListResourcePermissionsRequest& setListQuery(ListResourcePermissionsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListResourcePermissionsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListResourcePermissionsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
