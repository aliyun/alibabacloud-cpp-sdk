// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSQLReviewOriginSQLRequestOrderActionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLReviewOriginSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderActionDetail, orderActionDetail_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderActionDetail, orderActionDetail_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListSQLReviewOriginSQLRequest() = default ;
    ListSQLReviewOriginSQLRequest(const ListSQLReviewOriginSQLRequest &) = default ;
    ListSQLReviewOriginSQLRequest(ListSQLReviewOriginSQLRequest &&) = default ;
    ListSQLReviewOriginSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLRequest() = default ;
    ListSQLReviewOriginSQLRequest& operator=(const ListSQLReviewOriginSQLRequest &) = default ;
    ListSQLReviewOriginSQLRequest& operator=(ListSQLReviewOriginSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderActionDetail_ != nullptr
        && this->orderId_ != nullptr && this->tid_ != nullptr; };
    // orderActionDetail Field Functions 
    bool hasOrderActionDetail() const { return this->orderActionDetail_ != nullptr;};
    void deleteOrderActionDetail() { this->orderActionDetail_ = nullptr;};
    inline const ListSQLReviewOriginSQLRequestOrderActionDetail & orderActionDetail() const { DARABONBA_PTR_GET_CONST(orderActionDetail_, ListSQLReviewOriginSQLRequestOrderActionDetail) };
    inline ListSQLReviewOriginSQLRequestOrderActionDetail orderActionDetail() { DARABONBA_PTR_GET(orderActionDetail_, ListSQLReviewOriginSQLRequestOrderActionDetail) };
    inline ListSQLReviewOriginSQLRequest& setOrderActionDetail(const ListSQLReviewOriginSQLRequestOrderActionDetail & orderActionDetail) { DARABONBA_PTR_SET_VALUE(orderActionDetail_, orderActionDetail) };
    inline ListSQLReviewOriginSQLRequest& setOrderActionDetail(ListSQLReviewOriginSQLRequestOrderActionDetail && orderActionDetail) { DARABONBA_PTR_SET_RVALUE(orderActionDetail_, orderActionDetail) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListSQLReviewOriginSQLRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListSQLReviewOriginSQLRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are used to filter SQL statements involved in the ticket.
    std::shared_ptr<ListSQLReviewOriginSQLRequestOrderActionDetail> orderActionDetail_ = nullptr;
    // The ID of the SQL review ticket. You can call the [CreateSQLReviewOrder](https://help.aliyun.com/document_detail/257777.html) operation to query the ticket ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
