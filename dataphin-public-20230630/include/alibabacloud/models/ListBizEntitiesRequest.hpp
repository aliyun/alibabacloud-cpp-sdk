// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZENTITIESREQUEST_HPP_
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
  class ListBizEntitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizEntitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizEntitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListBizEntitiesRequest() = default ;
    ListBizEntitiesRequest(const ListBizEntitiesRequest &) = default ;
    ListBizEntitiesRequest(ListBizEntitiesRequest &&) = default ;
    ListBizEntitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizEntitiesRequest() = default ;
    ListBizEntitiesRequest& operator=(const ListBizEntitiesRequest &) = default ;
    ListBizEntitiesRequest& operator=(ListBizEntitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(FilterCriteria, filterCriteria_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(FilterCriteria, filterCriteria_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
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
      class FilterCriteria : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilterCriteria& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnitIdList, bizUnitIdList_);
          DARABONBA_PTR_TO_JSON(BizUnitNameList, bizUnitNameList_);
          DARABONBA_PTR_TO_JSON(DataDomainIdList, dataDomainIdList_);
          DARABONBA_PTR_TO_JSON(DataDomainNameList, dataDomainNameList_);
          DARABONBA_PTR_TO_JSON(HasTableRef, hasTableRef_);
          DARABONBA_PTR_TO_JSON(OwnerUserIdList, ownerUserIdList_);
          DARABONBA_PTR_TO_JSON(StatusList, statusList_);
          DARABONBA_PTR_TO_JSON(SubTypeList, subTypeList_);
        };
        friend void from_json(const Darabonba::Json& j, FilterCriteria& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnitIdList, bizUnitIdList_);
          DARABONBA_PTR_FROM_JSON(BizUnitNameList, bizUnitNameList_);
          DARABONBA_PTR_FROM_JSON(DataDomainIdList, dataDomainIdList_);
          DARABONBA_PTR_FROM_JSON(DataDomainNameList, dataDomainNameList_);
          DARABONBA_PTR_FROM_JSON(HasTableRef, hasTableRef_);
          DARABONBA_PTR_FROM_JSON(OwnerUserIdList, ownerUserIdList_);
          DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
          DARABONBA_PTR_FROM_JSON(SubTypeList, subTypeList_);
        };
        FilterCriteria() = default ;
        FilterCriteria(const FilterCriteria &) = default ;
        FilterCriteria(FilterCriteria &&) = default ;
        FilterCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilterCriteria() = default ;
        FilterCriteria& operator=(const FilterCriteria &) = default ;
        FilterCriteria& operator=(FilterCriteria &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizUnitIdList_ == nullptr
        && this->bizUnitNameList_ == nullptr && this->dataDomainIdList_ == nullptr && this->dataDomainNameList_ == nullptr && this->hasTableRef_ == nullptr && this->ownerUserIdList_ == nullptr
        && this->statusList_ == nullptr && this->subTypeList_ == nullptr; };
        // bizUnitIdList Field Functions 
        bool hasBizUnitIdList() const { return this->bizUnitIdList_ != nullptr;};
        void deleteBizUnitIdList() { this->bizUnitIdList_ = nullptr;};
        inline const vector<int64_t> & getBizUnitIdList() const { DARABONBA_PTR_GET_CONST(bizUnitIdList_, vector<int64_t>) };
        inline vector<int64_t> getBizUnitIdList() { DARABONBA_PTR_GET(bizUnitIdList_, vector<int64_t>) };
        inline FilterCriteria& setBizUnitIdList(const vector<int64_t> & bizUnitIdList) { DARABONBA_PTR_SET_VALUE(bizUnitIdList_, bizUnitIdList) };
        inline FilterCriteria& setBizUnitIdList(vector<int64_t> && bizUnitIdList) { DARABONBA_PTR_SET_RVALUE(bizUnitIdList_, bizUnitIdList) };


        // bizUnitNameList Field Functions 
        bool hasBizUnitNameList() const { return this->bizUnitNameList_ != nullptr;};
        void deleteBizUnitNameList() { this->bizUnitNameList_ = nullptr;};
        inline const vector<string> & getBizUnitNameList() const { DARABONBA_PTR_GET_CONST(bizUnitNameList_, vector<string>) };
        inline vector<string> getBizUnitNameList() { DARABONBA_PTR_GET(bizUnitNameList_, vector<string>) };
        inline FilterCriteria& setBizUnitNameList(const vector<string> & bizUnitNameList) { DARABONBA_PTR_SET_VALUE(bizUnitNameList_, bizUnitNameList) };
        inline FilterCriteria& setBizUnitNameList(vector<string> && bizUnitNameList) { DARABONBA_PTR_SET_RVALUE(bizUnitNameList_, bizUnitNameList) };


        // dataDomainIdList Field Functions 
        bool hasDataDomainIdList() const { return this->dataDomainIdList_ != nullptr;};
        void deleteDataDomainIdList() { this->dataDomainIdList_ = nullptr;};
        inline const vector<int64_t> & getDataDomainIdList() const { DARABONBA_PTR_GET_CONST(dataDomainIdList_, vector<int64_t>) };
        inline vector<int64_t> getDataDomainIdList() { DARABONBA_PTR_GET(dataDomainIdList_, vector<int64_t>) };
        inline FilterCriteria& setDataDomainIdList(const vector<int64_t> & dataDomainIdList) { DARABONBA_PTR_SET_VALUE(dataDomainIdList_, dataDomainIdList) };
        inline FilterCriteria& setDataDomainIdList(vector<int64_t> && dataDomainIdList) { DARABONBA_PTR_SET_RVALUE(dataDomainIdList_, dataDomainIdList) };


        // dataDomainNameList Field Functions 
        bool hasDataDomainNameList() const { return this->dataDomainNameList_ != nullptr;};
        void deleteDataDomainNameList() { this->dataDomainNameList_ = nullptr;};
        inline const vector<string> & getDataDomainNameList() const { DARABONBA_PTR_GET_CONST(dataDomainNameList_, vector<string>) };
        inline vector<string> getDataDomainNameList() { DARABONBA_PTR_GET(dataDomainNameList_, vector<string>) };
        inline FilterCriteria& setDataDomainNameList(const vector<string> & dataDomainNameList) { DARABONBA_PTR_SET_VALUE(dataDomainNameList_, dataDomainNameList) };
        inline FilterCriteria& setDataDomainNameList(vector<string> && dataDomainNameList) { DARABONBA_PTR_SET_RVALUE(dataDomainNameList_, dataDomainNameList) };


        // hasTableRef Field Functions 
        bool hasHasTableRef() const { return this->hasTableRef_ != nullptr;};
        void deleteHasTableRef() { this->hasTableRef_ = nullptr;};
        inline bool getHasTableRef() const { DARABONBA_PTR_GET_DEFAULT(hasTableRef_, false) };
        inline FilterCriteria& setHasTableRef(bool hasTableRef) { DARABONBA_PTR_SET_VALUE(hasTableRef_, hasTableRef) };


        // ownerUserIdList Field Functions 
        bool hasOwnerUserIdList() const { return this->ownerUserIdList_ != nullptr;};
        void deleteOwnerUserIdList() { this->ownerUserIdList_ = nullptr;};
        inline const vector<string> & getOwnerUserIdList() const { DARABONBA_PTR_GET_CONST(ownerUserIdList_, vector<string>) };
        inline vector<string> getOwnerUserIdList() { DARABONBA_PTR_GET(ownerUserIdList_, vector<string>) };
        inline FilterCriteria& setOwnerUserIdList(const vector<string> & ownerUserIdList) { DARABONBA_PTR_SET_VALUE(ownerUserIdList_, ownerUserIdList) };
        inline FilterCriteria& setOwnerUserIdList(vector<string> && ownerUserIdList) { DARABONBA_PTR_SET_RVALUE(ownerUserIdList_, ownerUserIdList) };


        // statusList Field Functions 
        bool hasStatusList() const { return this->statusList_ != nullptr;};
        void deleteStatusList() { this->statusList_ = nullptr;};
        inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
        inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
        inline FilterCriteria& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
        inline FilterCriteria& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


        // subTypeList Field Functions 
        bool hasSubTypeList() const { return this->subTypeList_ != nullptr;};
        void deleteSubTypeList() { this->subTypeList_ = nullptr;};
        inline const vector<string> & getSubTypeList() const { DARABONBA_PTR_GET_CONST(subTypeList_, vector<string>) };
        inline vector<string> getSubTypeList() { DARABONBA_PTR_GET(subTypeList_, vector<string>) };
        inline FilterCriteria& setSubTypeList(const vector<string> & subTypeList) { DARABONBA_PTR_SET_VALUE(subTypeList_, subTypeList) };
        inline FilterCriteria& setSubTypeList(vector<string> && subTypeList) { DARABONBA_PTR_SET_RVALUE(subTypeList_, subTypeList) };


      protected:
        shared_ptr<vector<int64_t>> bizUnitIdList_ {};
        shared_ptr<vector<string>> bizUnitNameList_ {};
        shared_ptr<vector<int64_t>> dataDomainIdList_ {};
        shared_ptr<vector<string>> dataDomainNameList_ {};
        shared_ptr<bool> hasTableRef_ {};
        shared_ptr<vector<string>> ownerUserIdList_ {};
        shared_ptr<vector<string>> statusList_ {};
        shared_ptr<vector<string>> subTypeList_ {};
      };

      virtual bool empty() const override { return this->filterCriteria_ == nullptr
        && this->keyword_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr; };
      // filterCriteria Field Functions 
      bool hasFilterCriteria() const { return this->filterCriteria_ != nullptr;};
      void deleteFilterCriteria() { this->filterCriteria_ = nullptr;};
      inline const ListQuery::FilterCriteria & getFilterCriteria() const { DARABONBA_PTR_GET_CONST(filterCriteria_, ListQuery::FilterCriteria) };
      inline ListQuery::FilterCriteria getFilterCriteria() { DARABONBA_PTR_GET(filterCriteria_, ListQuery::FilterCriteria) };
      inline ListQuery& setFilterCriteria(const ListQuery::FilterCriteria & filterCriteria) { DARABONBA_PTR_SET_VALUE(filterCriteria_, filterCriteria) };
      inline ListQuery& setFilterCriteria(ListQuery::FilterCriteria && filterCriteria) { DARABONBA_PTR_SET_RVALUE(filterCriteria_, filterCriteria) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


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


    protected:
      shared_ptr<ListQuery::FilterCriteria> filterCriteria_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListBizEntitiesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListBizEntitiesRequest::ListQuery) };
    inline ListBizEntitiesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListBizEntitiesRequest::ListQuery) };
    inline ListBizEntitiesRequest& setListQuery(const ListBizEntitiesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListBizEntitiesRequest& setListQuery(ListBizEntitiesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListBizEntitiesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListBizEntitiesRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
