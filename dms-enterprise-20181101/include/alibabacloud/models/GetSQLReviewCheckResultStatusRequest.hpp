// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLREVIEWCHECKRESULTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetSQLReviewCheckResultStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSQLReviewCheckResultStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetSQLReviewCheckResultStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetSQLReviewCheckResultStatusRequest() = default ;
    GetSQLReviewCheckResultStatusRequest(const GetSQLReviewCheckResultStatusRequest &) = default ;
    GetSQLReviewCheckResultStatusRequest(GetSQLReviewCheckResultStatusRequest &&) = default ;
    GetSQLReviewCheckResultStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSQLReviewCheckResultStatusRequest() = default ;
    GetSQLReviewCheckResultStatusRequest& operator=(const GetSQLReviewCheckResultStatusRequest &) = default ;
    GetSQLReviewCheckResultStatusRequest& operator=(GetSQLReviewCheckResultStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->tid_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetSQLReviewCheckResultStatusRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetSQLReviewCheckResultStatusRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the ticket. You can obtain the ticket ID from the response parameters of the [CreateSQLReviewOrder](https://help.aliyun.com/document_detail/257777.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the ID of the tenant.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
