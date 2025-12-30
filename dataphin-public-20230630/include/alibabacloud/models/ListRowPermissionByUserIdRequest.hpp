// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionByUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListRowPermissionByUserIdQuery, listRowPermissionByUserIdQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListRowPermissionByUserIdQuery, listRowPermissionByUserIdQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListRowPermissionByUserIdRequest() = default ;
    ListRowPermissionByUserIdRequest(const ListRowPermissionByUserIdRequest &) = default ;
    ListRowPermissionByUserIdRequest(ListRowPermissionByUserIdRequest &&) = default ;
    ListRowPermissionByUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdRequest() = default ;
    ListRowPermissionByUserIdRequest& operator=(const ListRowPermissionByUserIdRequest &) = default ;
    ListRowPermissionByUserIdRequest& operator=(ListRowPermissionByUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListRowPermissionByUserIdQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      };
      friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      };
      ListRowPermissionByUserIdQuery() = default ;
      ListRowPermissionByUserIdQuery(const ListRowPermissionByUserIdQuery &) = default ;
      ListRowPermissionByUserIdQuery(ListRowPermissionByUserIdQuery &&) = default ;
      ListRowPermissionByUserIdQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListRowPermissionByUserIdQuery() = default ;
      ListRowPermissionByUserIdQuery& operator=(const ListRowPermissionByUserIdQuery &) = default ;
      ListRowPermissionByUserIdQuery& operator=(ListRowPermissionByUserIdQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operator_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ListRowPermissionByUserIdQuery& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ListRowPermissionByUserIdQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListRowPermissionByUserIdQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    protected:
      // This parameter is required.
      shared_ptr<string> operator_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageNum_ {};
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
    };

    virtual bool empty() const override { return this->listRowPermissionByUserIdQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listRowPermissionByUserIdQuery Field Functions 
    bool hasListRowPermissionByUserIdQuery() const { return this->listRowPermissionByUserIdQuery_ != nullptr;};
    void deleteListRowPermissionByUserIdQuery() { this->listRowPermissionByUserIdQuery_ = nullptr;};
    inline const ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery & getListRowPermissionByUserIdQuery() const { DARABONBA_PTR_GET_CONST(listRowPermissionByUserIdQuery_, ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery) };
    inline ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery getListRowPermissionByUserIdQuery() { DARABONBA_PTR_GET(listRowPermissionByUserIdQuery_, ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery) };
    inline ListRowPermissionByUserIdRequest& setListRowPermissionByUserIdQuery(const ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery & listRowPermissionByUserIdQuery) { DARABONBA_PTR_SET_VALUE(listRowPermissionByUserIdQuery_, listRowPermissionByUserIdQuery) };
    inline ListRowPermissionByUserIdRequest& setListRowPermissionByUserIdQuery(ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery && listRowPermissionByUserIdQuery) { DARABONBA_PTR_SET_RVALUE(listRowPermissionByUserIdQuery_, listRowPermissionByUserIdQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListRowPermissionByUserIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ListRowPermissionByUserIdRequest::ListRowPermissionByUserIdQuery> listRowPermissionByUserIdQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
