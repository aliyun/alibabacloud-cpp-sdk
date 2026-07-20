// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRBACROLEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRBACROLEPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryRbacRolePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRbacRolePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRbacRolePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    QueryRbacRolePermissionsRequest() = default ;
    QueryRbacRolePermissionsRequest(const QueryRbacRolePermissionsRequest &) = default ;
    QueryRbacRolePermissionsRequest(QueryRbacRolePermissionsRequest &&) = default ;
    QueryRbacRolePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRbacRolePermissionsRequest() = default ;
    QueryRbacRolePermissionsRequest& operator=(const QueryRbacRolePermissionsRequest &) = default ;
    QueryRbacRolePermissionsRequest& operator=(QueryRbacRolePermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->orderColumn_ == nullptr && this->orderType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->roleId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryRbacRolePermissionsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline QueryRbacRolePermissionsRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline QueryRbacRolePermissionsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryRbacRolePermissionsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRbacRolePermissionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline QueryRbacRolePermissionsRequest& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> orderColumn_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
