// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEGROUPSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEGROUPSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyInstanceGroupSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceGroupSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_TO_JSON(OrderTaskId, orderTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceGroupSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_FROM_JSON(OrderTaskId, orderTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInstanceGroupSpecResponseBody() = default ;
    ModifyInstanceGroupSpecResponseBody(const ModifyInstanceGroupSpecResponseBody &) = default ;
    ModifyInstanceGroupSpecResponseBody(ModifyInstanceGroupSpecResponseBody &&) = default ;
    ModifyInstanceGroupSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceGroupSpecResponseBody() = default ;
    ModifyInstanceGroupSpecResponseBody& operator=(const ModifyInstanceGroupSpecResponseBody &) = default ;
    ModifyInstanceGroupSpecResponseBody& operator=(ModifyInstanceGroupSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderInfo& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, OrderInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      };
      OrderInfo() = default ;
      OrderInfo(const OrderInfo &) = default ;
      OrderInfo(OrderInfo &&) = default ;
      OrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderInfo() = default ;
      OrderInfo& operator=(const OrderInfo &) = default ;
      OrderInfo& operator=(OrderInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->orderId_ == nullptr; };
      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline OrderInfo& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline OrderInfo& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline OrderInfo& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      // The list of instance IDs.
      shared_ptr<vector<string>> instanceIds_ {};
      // The order ID.
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->orderInfo_ == nullptr
        && this->orderTaskId_ == nullptr && this->requestId_ == nullptr; };
    // orderInfo Field Functions 
    bool hasOrderInfo() const { return this->orderInfo_ != nullptr;};
    void deleteOrderInfo() { this->orderInfo_ = nullptr;};
    inline const vector<ModifyInstanceGroupSpecResponseBody::OrderInfo> & getOrderInfo() const { DARABONBA_PTR_GET_CONST(orderInfo_, vector<ModifyInstanceGroupSpecResponseBody::OrderInfo>) };
    inline vector<ModifyInstanceGroupSpecResponseBody::OrderInfo> getOrderInfo() { DARABONBA_PTR_GET(orderInfo_, vector<ModifyInstanceGroupSpecResponseBody::OrderInfo>) };
    inline ModifyInstanceGroupSpecResponseBody& setOrderInfo(const vector<ModifyInstanceGroupSpecResponseBody::OrderInfo> & orderInfo) { DARABONBA_PTR_SET_VALUE(orderInfo_, orderInfo) };
    inline ModifyInstanceGroupSpecResponseBody& setOrderInfo(vector<ModifyInstanceGroupSpecResponseBody::OrderInfo> && orderInfo) { DARABONBA_PTR_SET_RVALUE(orderInfo_, orderInfo) };


    // orderTaskId Field Functions 
    bool hasOrderTaskId() const { return this->orderTaskId_ != nullptr;};
    void deleteOrderTaskId() { this->orderTaskId_ = nullptr;};
    inline string getOrderTaskId() const { DARABONBA_PTR_GET_DEFAULT(orderTaskId_, "") };
    inline ModifyInstanceGroupSpecResponseBody& setOrderTaskId(string orderTaskId) { DARABONBA_PTR_SET_VALUE(orderTaskId_, orderTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstanceGroupSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The order information.
    shared_ptr<vector<ModifyInstanceGroupSpecResponseBody::OrderInfo>> orderInfo_ {};
    // The order task ID that is returned when specifications of more than 10 instance groups are changed in a batch. You can call the **DescribeOrderTasks** operation to query the information about each order.
    shared_ptr<string> orderTaskId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
