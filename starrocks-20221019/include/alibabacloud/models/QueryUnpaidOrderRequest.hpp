// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUNPAIDORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUNPAIDORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class QueryUnpaidOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUnpaidOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingInstanceId, billingInstanceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUnpaidOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingInstanceId, billingInstanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    QueryUnpaidOrderRequest() = default ;
    QueryUnpaidOrderRequest(const QueryUnpaidOrderRequest &) = default ;
    QueryUnpaidOrderRequest(QueryUnpaidOrderRequest &&) = default ;
    QueryUnpaidOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUnpaidOrderRequest() = default ;
    QueryUnpaidOrderRequest& operator=(const QueryUnpaidOrderRequest &) = default ;
    QueryUnpaidOrderRequest& operator=(QueryUnpaidOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingInstanceId_ == nullptr
        && this->instanceId_ == nullptr && this->orderType_ == nullptr; };
    // billingInstanceId Field Functions 
    bool hasBillingInstanceId() const { return this->billingInstanceId_ != nullptr;};
    void deleteBillingInstanceId() { this->billingInstanceId_ = nullptr;};
    inline string getBillingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceId_, "") };
    inline QueryUnpaidOrderRequest& setBillingInstanceId(string billingInstanceId) { DARABONBA_PTR_SET_VALUE(billingInstanceId_, billingInstanceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryUnpaidOrderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline QueryUnpaidOrderRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // This parameter is required.
    shared_ptr<string> billingInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> orderType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
