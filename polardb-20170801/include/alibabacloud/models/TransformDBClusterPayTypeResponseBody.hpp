// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMDBCLUSTERPAYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMDBCLUSTERPAYTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class TransformDBClusterPayTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformDBClusterPayTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TransformDBClusterPayTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TransformDBClusterPayTypeResponseBody() = default ;
    TransformDBClusterPayTypeResponseBody(const TransformDBClusterPayTypeResponseBody &) = default ;
    TransformDBClusterPayTypeResponseBody(TransformDBClusterPayTypeResponseBody &&) = default ;
    TransformDBClusterPayTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformDBClusterPayTypeResponseBody() = default ;
    TransformDBClusterPayTypeResponseBody& operator=(const TransformDBClusterPayTypeResponseBody &) = default ;
    TransformDBClusterPayTypeResponseBody& operator=(TransformDBClusterPayTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->DBClusterId_ == nullptr && this->expiredTime_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline TransformDBClusterPayTypeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline TransformDBClusterPayTypeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline TransformDBClusterPayTypeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TransformDBClusterPayTypeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransformDBClusterPayTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    shared_ptr<string> chargeType_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The time when the cluster expires.
    // 
    // >  This parameter is returned if you set the **PayType** parameter to **Prepaid**.
    shared_ptr<string> expiredTime_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
