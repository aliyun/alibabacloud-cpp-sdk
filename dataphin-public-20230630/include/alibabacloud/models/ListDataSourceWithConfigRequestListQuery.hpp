// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGREQUESTLISTQUERY_HPP_
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
  class ListDataSourceWithConfigRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScopeList, scopeList_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScopeList, scopeList_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    ListDataSourceWithConfigRequestListQuery() = default ;
    ListDataSourceWithConfigRequestListQuery(const ListDataSourceWithConfigRequestListQuery &) = default ;
    ListDataSourceWithConfigRequestListQuery(ListDataSourceWithConfigRequestListQuery &&) = default ;
    ListDataSourceWithConfigRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigRequestListQuery() = default ;
    ListDataSourceWithConfigRequestListQuery& operator=(const ListDataSourceWithConfigRequestListQuery &) = default ;
    ListDataSourceWithConfigRequestListQuery& operator=(ListDataSourceWithConfigRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->ownerList_ == nullptr && return this->page_ == nullptr && return this->pageSize_ == nullptr && return this->scopeList_ == nullptr && return this->tag_ == nullptr
        && return this->typeList_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataSourceWithConfigRequestListQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerList Field Functions 
    bool hasOwnerList() const { return this->ownerList_ != nullptr;};
    void deleteOwnerList() { this->ownerList_ = nullptr;};
    inline const vector<string> & ownerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
    inline vector<string> ownerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
    inline ListDataSourceWithConfigRequestListQuery& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
    inline ListDataSourceWithConfigRequestListQuery& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListDataSourceWithConfigRequestListQuery& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataSourceWithConfigRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scopeList Field Functions 
    bool hasScopeList() const { return this->scopeList_ != nullptr;};
    void deleteScopeList() { this->scopeList_ = nullptr;};
    inline const vector<string> & scopeList() const { DARABONBA_PTR_GET_CONST(scopeList_, vector<string>) };
    inline vector<string> scopeList() { DARABONBA_PTR_GET(scopeList_, vector<string>) };
    inline ListDataSourceWithConfigRequestListQuery& setScopeList(const vector<string> & scopeList) { DARABONBA_PTR_SET_VALUE(scopeList_, scopeList) };
    inline ListDataSourceWithConfigRequestListQuery& setScopeList(vector<string> && scopeList) { DARABONBA_PTR_SET_RVALUE(scopeList_, scopeList) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListDataSourceWithConfigRequestListQuery& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<string> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
    inline vector<string> typeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
    inline ListDataSourceWithConfigRequestListQuery& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline ListDataSourceWithConfigRequestListQuery& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> ownerList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> scopeList_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<vector<string>> typeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
