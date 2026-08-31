// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKGENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKGENTITYREQUEST_HPP_
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
  class ListKgEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKgEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKgEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListKgEntityRequest() = default ;
    ListKgEntityRequest(const ListKgEntityRequest &) = default ;
    ListKgEntityRequest(ListKgEntityRequest &&) = default ;
    ListKgEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKgEntityRequest() = default ;
    ListKgEntityRequest& operator=(const ListKgEntityRequest &) = default ;
    ListKgEntityRequest& operator=(ListKgEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(FilterList, filterList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(FilterList, filterList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
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
      class FilterList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilterList& obj) { 
          DARABONBA_PTR_TO_JSON(Op, op_);
          DARABONBA_PTR_TO_JSON(PropertyCode, propertyCode_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, FilterList& obj) { 
          DARABONBA_PTR_FROM_JSON(Op, op_);
          DARABONBA_PTR_FROM_JSON(PropertyCode, propertyCode_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        FilterList() = default ;
        FilterList(const FilterList &) = default ;
        FilterList(FilterList &&) = default ;
        FilterList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilterList() = default ;
        FilterList& operator=(const FilterList &) = default ;
        FilterList& operator=(FilterList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->op_ == nullptr
        && this->propertyCode_ == nullptr && this->value_ == nullptr; };
        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline FilterList& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // propertyCode Field Functions 
        bool hasPropertyCode() const { return this->propertyCode_ != nullptr;};
        void deletePropertyCode() { this->propertyCode_ = nullptr;};
        inline string getPropertyCode() const { DARABONBA_PTR_GET_DEFAULT(propertyCode_, "") };
        inline FilterList& setPropertyCode(string propertyCode) { DARABONBA_PTR_SET_VALUE(propertyCode_, propertyCode) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline FilterList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The operator. Valid values:
        // - eq: equal to.
        // - neq: not equal to.
        // - contains: contains.
        // - gt: greater than.
        // - gte: greater than or equal to.
        // - lt: less than.
        // - lte: less than or equal to.
        // - like: fuzzy match.
        // 
        // This parameter is required.
        shared_ptr<string> op_ {};
        // The property code.
        // 
        // This parameter is required.
        shared_ptr<string> propertyCode_ {};
        // The property match value.
        // 
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->filterList_ == nullptr
        && this->keyword_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
      // filterList Field Functions 
      bool hasFilterList() const { return this->filterList_ != nullptr;};
      void deleteFilterList() { this->filterList_ = nullptr;};
      inline const vector<ListQuery::FilterList> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<ListQuery::FilterList>) };
      inline vector<ListQuery::FilterList> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<ListQuery::FilterList>) };
      inline ListQuery& setFilterList(const vector<ListQuery::FilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
      inline ListQuery& setFilterList(vector<ListQuery::FilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ListQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      // The property filter conditions.
      shared_ptr<vector<ListQuery::FilterList>> filterList_ {};
      // The keyword for searching display properties.
      shared_ptr<string> keyword_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNum_ {};
      // The number of records per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->entityType_ == nullptr
        && this->listQuery_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListKgEntityRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListKgEntityRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListKgEntityRequest::ListQuery) };
    inline ListKgEntityRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListKgEntityRequest::ListQuery) };
    inline ListKgEntityRequest& setListQuery(const ListKgEntityRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListKgEntityRequest& setListQuery(ListKgEntityRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListKgEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListKgEntityRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListKgEntityRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The entity type code.
    shared_ptr<string> entityType_ {};
    // The paged query filter conditions.
    shared_ptr<ListKgEntityRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
