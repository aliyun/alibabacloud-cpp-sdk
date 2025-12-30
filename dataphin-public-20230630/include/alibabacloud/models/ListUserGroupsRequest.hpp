// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListUserGroupsRequest() = default ;
    ListUserGroupsRequest(const ListUserGroupsRequest &) = default ;
    ListUserGroupsRequest(ListUserGroupsRequest &&) = default ;
    ListUserGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsRequest() = default ;
    ListUserGroupsRequest& operator=(const ListUserGroupsRequest &) = default ;
    ListUserGroupsRequest& operator=(ListUserGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(AdminIdList, adminIdList_);
        DARABONBA_PTR_TO_JSON(FilterMine, filterMine_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(AdminIdList, adminIdList_);
        DARABONBA_PTR_FROM_JSON(FilterMine, filterMine_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      virtual bool empty() const override { return this->active_ == nullptr
        && this->adminIdList_ == nullptr && this->filterMine_ == nullptr && this->keyword_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline ListQuery& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // adminIdList Field Functions 
      bool hasAdminIdList() const { return this->adminIdList_ != nullptr;};
      void deleteAdminIdList() { this->adminIdList_ = nullptr;};
      inline const vector<string> & getAdminIdList() const { DARABONBA_PTR_GET_CONST(adminIdList_, vector<string>) };
      inline vector<string> getAdminIdList() { DARABONBA_PTR_GET(adminIdList_, vector<string>) };
      inline ListQuery& setAdminIdList(const vector<string> & adminIdList) { DARABONBA_PTR_SET_VALUE(adminIdList_, adminIdList) };
      inline ListQuery& setAdminIdList(vector<string> && adminIdList) { DARABONBA_PTR_SET_RVALUE(adminIdList_, adminIdList) };


      // filterMine Field Functions 
      bool hasFilterMine() const { return this->filterMine_ != nullptr;};
      void deleteFilterMine() { this->filterMine_ = nullptr;};
      inline bool getFilterMine() const { DARABONBA_PTR_GET_DEFAULT(filterMine_, false) };
      inline ListQuery& setFilterMine(bool filterMine) { DARABONBA_PTR_SET_VALUE(filterMine_, filterMine) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline ListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      shared_ptr<bool> active_ {};
      shared_ptr<vector<string>> adminIdList_ {};
      shared_ptr<bool> filterMine_ {};
      shared_ptr<string> keyword_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageNo_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListUserGroupsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListUserGroupsRequest::ListQuery) };
    inline ListUserGroupsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListUserGroupsRequest::ListQuery) };
    inline ListUserGroupsRequest& setListQuery(const ListUserGroupsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListUserGroupsRequest& setListQuery(ListUserGroupsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListUserGroupsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListUserGroupsRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
