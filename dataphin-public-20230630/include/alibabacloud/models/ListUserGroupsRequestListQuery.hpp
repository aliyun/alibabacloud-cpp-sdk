// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSREQUESTLISTQUERY_HPP_
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
  class ListUserGroupsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AdminIdList, adminIdList_);
      DARABONBA_PTR_TO_JSON(FilterMine, filterMine_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AdminIdList, adminIdList_);
      DARABONBA_PTR_FROM_JSON(FilterMine, filterMine_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListUserGroupsRequestListQuery() = default ;
    ListUserGroupsRequestListQuery(const ListUserGroupsRequestListQuery &) = default ;
    ListUserGroupsRequestListQuery(ListUserGroupsRequestListQuery &&) = default ;
    ListUserGroupsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsRequestListQuery() = default ;
    ListUserGroupsRequestListQuery& operator=(const ListUserGroupsRequestListQuery &) = default ;
    ListUserGroupsRequestListQuery& operator=(ListUserGroupsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->adminIdList_ == nullptr && return this->filterMine_ == nullptr && return this->keyword_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListUserGroupsRequestListQuery& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // adminIdList Field Functions 
    bool hasAdminIdList() const { return this->adminIdList_ != nullptr;};
    void deleteAdminIdList() { this->adminIdList_ = nullptr;};
    inline const vector<string> & adminIdList() const { DARABONBA_PTR_GET_CONST(adminIdList_, vector<string>) };
    inline vector<string> adminIdList() { DARABONBA_PTR_GET(adminIdList_, vector<string>) };
    inline ListUserGroupsRequestListQuery& setAdminIdList(const vector<string> & adminIdList) { DARABONBA_PTR_SET_VALUE(adminIdList_, adminIdList) };
    inline ListUserGroupsRequestListQuery& setAdminIdList(vector<string> && adminIdList) { DARABONBA_PTR_SET_RVALUE(adminIdList_, adminIdList) };


    // filterMine Field Functions 
    bool hasFilterMine() const { return this->filterMine_ != nullptr;};
    void deleteFilterMine() { this->filterMine_ = nullptr;};
    inline bool filterMine() const { DARABONBA_PTR_GET_DEFAULT(filterMine_, false) };
    inline ListUserGroupsRequestListQuery& setFilterMine(bool filterMine) { DARABONBA_PTR_SET_VALUE(filterMine_, filterMine) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListUserGroupsRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListUserGroupsRequestListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserGroupsRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<vector<string>> adminIdList_ = nullptr;
    std::shared_ptr<bool> filterMine_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
