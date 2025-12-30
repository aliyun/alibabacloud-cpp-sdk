// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGREQUEST_HPP_
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
  class ListDataSourceWithConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListDataSourceWithConfigRequest() = default ;
    ListDataSourceWithConfigRequest(const ListDataSourceWithConfigRequest &) = default ;
    ListDataSourceWithConfigRequest(ListDataSourceWithConfigRequest &&) = default ;
    ListDataSourceWithConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigRequest() = default ;
    ListDataSourceWithConfigRequest& operator=(const ListDataSourceWithConfigRequest &) = default ;
    ListDataSourceWithConfigRequest& operator=(ListDataSourceWithConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ScopeList, scopeList_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(TypeList, typeList_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ScopeList, scopeList_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->ownerList_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->scopeList_ == nullptr && this->tag_ == nullptr
        && this->typeList_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ListQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerList Field Functions 
      bool hasOwnerList() const { return this->ownerList_ != nullptr;};
      void deleteOwnerList() { this->ownerList_ = nullptr;};
      inline const vector<string> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
      inline vector<string> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
      inline ListQuery& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
      inline ListQuery& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


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


      // scopeList Field Functions 
      bool hasScopeList() const { return this->scopeList_ != nullptr;};
      void deleteScopeList() { this->scopeList_ = nullptr;};
      inline const vector<string> & getScopeList() const { DARABONBA_PTR_GET_CONST(scopeList_, vector<string>) };
      inline vector<string> getScopeList() { DARABONBA_PTR_GET(scopeList_, vector<string>) };
      inline ListQuery& setScopeList(const vector<string> & scopeList) { DARABONBA_PTR_SET_VALUE(scopeList_, scopeList) };
      inline ListQuery& setScopeList(vector<string> && scopeList) { DARABONBA_PTR_SET_RVALUE(scopeList_, scopeList) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ListQuery& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // typeList Field Functions 
      bool hasTypeList() const { return this->typeList_ != nullptr;};
      void deleteTypeList() { this->typeList_ = nullptr;};
      inline const vector<string> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
      inline vector<string> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
      inline ListQuery& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
      inline ListQuery& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> ownerList_ {};
      // This parameter is required.
      shared_ptr<int32_t> page_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> scopeList_ {};
      shared_ptr<string> tag_ {};
      shared_ptr<vector<string>> typeList_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListDataSourceWithConfigRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListDataSourceWithConfigRequest::ListQuery) };
    inline ListDataSourceWithConfigRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListDataSourceWithConfigRequest::ListQuery) };
    inline ListDataSourceWithConfigRequest& setListQuery(const ListDataSourceWithConfigRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListDataSourceWithConfigRequest& setListQuery(ListDataSourceWithConfigRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListDataSourceWithConfigRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListDataSourceWithConfigRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
