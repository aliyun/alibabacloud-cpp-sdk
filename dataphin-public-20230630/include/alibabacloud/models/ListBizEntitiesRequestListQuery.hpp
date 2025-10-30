// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZENTITIESREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZENTITIESREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListBizEntitiesRequestListQueryFilterCriteria.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizEntitiesRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizEntitiesRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(FilterCriteria, filterCriteria_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizEntitiesRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterCriteria, filterCriteria_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListBizEntitiesRequestListQuery() = default ;
    ListBizEntitiesRequestListQuery(const ListBizEntitiesRequestListQuery &) = default ;
    ListBizEntitiesRequestListQuery(ListBizEntitiesRequestListQuery &&) = default ;
    ListBizEntitiesRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizEntitiesRequestListQuery() = default ;
    ListBizEntitiesRequestListQuery& operator=(const ListBizEntitiesRequestListQuery &) = default ;
    ListBizEntitiesRequestListQuery& operator=(ListBizEntitiesRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterCriteria_ == nullptr
        && return this->keyword_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr; };
    // filterCriteria Field Functions 
    bool hasFilterCriteria() const { return this->filterCriteria_ != nullptr;};
    void deleteFilterCriteria() { this->filterCriteria_ = nullptr;};
    inline const Models::ListBizEntitiesRequestListQueryFilterCriteria & filterCriteria() const { DARABONBA_PTR_GET_CONST(filterCriteria_, Models::ListBizEntitiesRequestListQueryFilterCriteria) };
    inline Models::ListBizEntitiesRequestListQueryFilterCriteria filterCriteria() { DARABONBA_PTR_GET(filterCriteria_, Models::ListBizEntitiesRequestListQueryFilterCriteria) };
    inline ListBizEntitiesRequestListQuery& setFilterCriteria(const Models::ListBizEntitiesRequestListQueryFilterCriteria & filterCriteria) { DARABONBA_PTR_SET_VALUE(filterCriteria_, filterCriteria) };
    inline ListBizEntitiesRequestListQuery& setFilterCriteria(Models::ListBizEntitiesRequestListQueryFilterCriteria && filterCriteria) { DARABONBA_PTR_SET_RVALUE(filterCriteria_, filterCriteria) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListBizEntitiesRequestListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListBizEntitiesRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBizEntitiesRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<Models::ListBizEntitiesRequestListQueryFilterCriteria> filterCriteria_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
