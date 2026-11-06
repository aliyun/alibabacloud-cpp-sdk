// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIAGENTORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIAGENTORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIAgentOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAgentOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(CapacityPack, capacityPack_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HasOrder, hasOrder_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderName, orderName_);
      DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAgentOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(CapacityPack, capacityPack_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HasOrder, hasOrder_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderName, orderName_);
      DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAIAgentOrderResponseBody() = default ;
    DescribeAIAgentOrderResponseBody(const DescribeAIAgentOrderResponseBody &) = default ;
    DescribeAIAgentOrderResponseBody(DescribeAIAgentOrderResponseBody &&) = default ;
    DescribeAIAgentOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAgentOrderResponseBody() = default ;
    DescribeAIAgentOrderResponseBody& operator=(const DescribeAIAgentOrderResponseBody &) = default ;
    DescribeAIAgentOrderResponseBody& operator=(DescribeAIAgentOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentVersion_ == nullptr
        && this->capacityPack_ == nullptr && this->expireTime_ == nullptr && this->hasOrder_ == nullptr && this->orderId_ == nullptr && this->orderName_ == nullptr
        && this->orderNum_ == nullptr && this->orderStatus_ == nullptr && this->requestId_ == nullptr; };
    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string getAgentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeAIAgentOrderResponseBody& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // capacityPack Field Functions 
    bool hasCapacityPack() const { return this->capacityPack_ != nullptr;};
    void deleteCapacityPack() { this->capacityPack_ = nullptr;};
    inline string getCapacityPack() const { DARABONBA_PTR_GET_DEFAULT(capacityPack_, "") };
    inline DescribeAIAgentOrderResponseBody& setCapacityPack(string capacityPack) { DARABONBA_PTR_SET_VALUE(capacityPack_, capacityPack) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeAIAgentOrderResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // hasOrder Field Functions 
    bool hasHasOrder() const { return this->hasOrder_ != nullptr;};
    void deleteHasOrder() { this->hasOrder_ = nullptr;};
    inline bool getHasOrder() const { DARABONBA_PTR_GET_DEFAULT(hasOrder_, false) };
    inline DescribeAIAgentOrderResponseBody& setHasOrder(bool hasOrder) { DARABONBA_PTR_SET_VALUE(hasOrder_, hasOrder) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline DescribeAIAgentOrderResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderName Field Functions 
    bool hasOrderName() const { return this->orderName_ != nullptr;};
    void deleteOrderName() { this->orderName_ = nullptr;};
    inline string getOrderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
    inline DescribeAIAgentOrderResponseBody& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline string getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, "") };
    inline DescribeAIAgentOrderResponseBody& setOrderNum(string orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline DescribeAIAgentOrderResponseBody& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIAgentOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AI assistant version.
    shared_ptr<string> agentVersion_ {};
    // The capacity package specifications.
    shared_ptr<string> capacityPack_ {};
    // The expiration time of the order in RFC 3339 format.
    shared_ptr<string> expireTime_ {};
    // Indicates whether the current account has an AI assistant order.
    shared_ptr<bool> hasOrder_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The order name.
    shared_ptr<string> orderName_ {};
    // The order number.
    shared_ptr<string> orderNum_ {};
    // The order status.
    shared_ptr<string> orderStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
