// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRBACUSERROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRBACUSERROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryRbacUserRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRbacUserRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationUserId, applicationUserId_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRbacUserRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationUserId, applicationUserId_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryRbacUserRolesRequest() = default ;
    QueryRbacUserRolesRequest(const QueryRbacUserRolesRequest &) = default ;
    QueryRbacUserRolesRequest(QueryRbacUserRolesRequest &&) = default ;
    QueryRbacUserRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRbacUserRolesRequest() = default ;
    QueryRbacUserRolesRequest& operator=(const QueryRbacUserRolesRequest &) = default ;
    QueryRbacUserRolesRequest& operator=(QueryRbacUserRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationUserId_ == nullptr
        && this->bizId_ == nullptr && this->orderColumn_ == nullptr && this->orderType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // applicationUserId Field Functions 
    bool hasApplicationUserId() const { return this->applicationUserId_ != nullptr;};
    void deleteApplicationUserId() { this->applicationUserId_ = nullptr;};
    inline string getApplicationUserId() const { DARABONBA_PTR_GET_DEFAULT(applicationUserId_, "") };
    inline QueryRbacUserRolesRequest& setApplicationUserId(string applicationUserId) { DARABONBA_PTR_SET_VALUE(applicationUserId_, applicationUserId) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryRbacUserRolesRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline QueryRbacUserRolesRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline QueryRbacUserRolesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryRbacUserRolesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRbacUserRolesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> applicationUserId_ {};
    shared_ptr<string> bizId_ {};
    shared_ptr<string> orderColumn_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
