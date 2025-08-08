// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDPAYASYOUGOORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDPAYASYOUGOORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RefundPayAsYouGoOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundPayAsYouGoOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, RefundPayAsYouGoOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    RefundPayAsYouGoOrderRequest() = default ;
    RefundPayAsYouGoOrderRequest(const RefundPayAsYouGoOrderRequest &) = default ;
    RefundPayAsYouGoOrderRequest(RefundPayAsYouGoOrderRequest &&) = default ;
    RefundPayAsYouGoOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundPayAsYouGoOrderRequest() = default ;
    RefundPayAsYouGoOrderRequest& operator=(const RefundPayAsYouGoOrderRequest &) = default ;
    RefundPayAsYouGoOrderRequest& operator=(RefundPayAsYouGoOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->orderId_ != nullptr && this->tid_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RefundPayAsYouGoOrderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RefundPayAsYouGoOrderRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RefundPayAsYouGoOrderRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The instance ID in the sales order.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The order ID of the order for the pay-as-you-go resource. You can call the ListEffectiveOrders operation to query the order ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
