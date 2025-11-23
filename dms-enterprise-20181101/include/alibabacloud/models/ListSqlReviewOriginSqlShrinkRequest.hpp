// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSQLREVIEWORIGINSQLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSQLReviewOriginSQLShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSQLReviewOriginSQLShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderActionDetail, orderActionDetailShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListSQLReviewOriginSQLShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderActionDetail, orderActionDetailShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListSQLReviewOriginSQLShrinkRequest() = default ;
    ListSQLReviewOriginSQLShrinkRequest(const ListSQLReviewOriginSQLShrinkRequest &) = default ;
    ListSQLReviewOriginSQLShrinkRequest(ListSQLReviewOriginSQLShrinkRequest &&) = default ;
    ListSQLReviewOriginSQLShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSQLReviewOriginSQLShrinkRequest() = default ;
    ListSQLReviewOriginSQLShrinkRequest& operator=(const ListSQLReviewOriginSQLShrinkRequest &) = default ;
    ListSQLReviewOriginSQLShrinkRequest& operator=(ListSQLReviewOriginSQLShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderActionDetailShrink_ == nullptr
        && return this->orderId_ == nullptr && return this->tid_ == nullptr; };
    // orderActionDetailShrink Field Functions 
    bool hasOrderActionDetailShrink() const { return this->orderActionDetailShrink_ != nullptr;};
    void deleteOrderActionDetailShrink() { this->orderActionDetailShrink_ = nullptr;};
    inline string orderActionDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(orderActionDetailShrink_, "") };
    inline ListSQLReviewOriginSQLShrinkRequest& setOrderActionDetailShrink(string orderActionDetailShrink) { DARABONBA_PTR_SET_VALUE(orderActionDetailShrink_, orderActionDetailShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListSQLReviewOriginSQLShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListSQLReviewOriginSQLShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are used to filter SQL statements involved in the ticket.
    std::shared_ptr<string> orderActionDetailShrink_ = nullptr;
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
