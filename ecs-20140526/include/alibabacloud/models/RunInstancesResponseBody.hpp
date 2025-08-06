// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunInstancesResponseBodyInstanceIdSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdSets, instanceIdSets_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdSets, instanceIdSets_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
    };
    RunInstancesResponseBody() = default ;
    RunInstancesResponseBody(const RunInstancesResponseBody &) = default ;
    RunInstancesResponseBody(RunInstancesResponseBody &&) = default ;
    RunInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesResponseBody() = default ;
    RunInstancesResponseBody& operator=(const RunInstancesResponseBody &) = default ;
    RunInstancesResponseBody& operator=(RunInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIdSets_ != nullptr
        && this->orderId_ != nullptr && this->requestId_ != nullptr && this->tradePrice_ != nullptr; };
    // instanceIdSets Field Functions 
    bool hasInstanceIdSets() const { return this->instanceIdSets_ != nullptr;};
    void deleteInstanceIdSets() { this->instanceIdSets_ = nullptr;};
    inline const RunInstancesResponseBodyInstanceIdSets & instanceIdSets() const { DARABONBA_PTR_GET_CONST(instanceIdSets_, RunInstancesResponseBodyInstanceIdSets) };
    inline RunInstancesResponseBodyInstanceIdSets instanceIdSets() { DARABONBA_PTR_GET(instanceIdSets_, RunInstancesResponseBodyInstanceIdSets) };
    inline RunInstancesResponseBody& setInstanceIdSets(const RunInstancesResponseBodyInstanceIdSets & instanceIdSets) { DARABONBA_PTR_SET_VALUE(instanceIdSets_, instanceIdSets) };
    inline RunInstancesResponseBody& setInstanceIdSets(RunInstancesResponseBodyInstanceIdSets && instanceIdSets) { DARABONBA_PTR_SET_RVALUE(instanceIdSets_, instanceIdSets) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RunInstancesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline RunInstancesResponseBody& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


  protected:
    // The instance IDs.
    std::shared_ptr<RunInstancesResponseBodyInstanceIdSets> instanceIdSets_ = nullptr;
    // The ID of the order. This parameter is returned only when `InstanceChargeType` is set to PrePaid.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The transaction price.
    std::shared_ptr<float> tradePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
