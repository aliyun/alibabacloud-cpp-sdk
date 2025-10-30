// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDABLEUSERSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTADDABLEUSERSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListAddableUsersRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddableUsersRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddableUsersRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
    };
    ListAddableUsersRequestListQuery() = default ;
    ListAddableUsersRequestListQuery(const ListAddableUsersRequestListQuery &) = default ;
    ListAddableUsersRequestListQuery(ListAddableUsersRequestListQuery &&) = default ;
    ListAddableUsersRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddableUsersRequestListQuery() = default ;
    ListAddableUsersRequestListQuery& operator=(const ListAddableUsersRequestListQuery &) = default ;
    ListAddableUsersRequestListQuery& operator=(ListAddableUsersRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && return this->pageSize_ == nullptr && return this->searchText_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListAddableUsersRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAddableUsersRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListAddableUsersRequestListQuery& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


  protected:
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
