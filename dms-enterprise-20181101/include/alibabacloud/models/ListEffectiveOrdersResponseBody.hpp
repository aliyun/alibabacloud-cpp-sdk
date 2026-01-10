// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListEffectiveOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEffectiveOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OrderSummary, orderSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEffectiveOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OrderSummary, orderSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEffectiveOrdersResponseBody() = default ;
    ListEffectiveOrdersResponseBody(const ListEffectiveOrdersResponseBody &) = default ;
    ListEffectiveOrdersResponseBody(ListEffectiveOrdersResponseBody &&) = default ;
    ListEffectiveOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEffectiveOrdersResponseBody() = default ;
    ListEffectiveOrdersResponseBody& operator=(const ListEffectiveOrdersResponseBody &) = default ;
    ListEffectiveOrdersResponseBody& operator=(ListEffectiveOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderSummary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderSummary& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityType, commodityType_);
        DARABONBA_PTR_TO_JSON(OrderList, orderList_);
        DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(VersionType, versionType_);
      };
      friend void from_json(const Darabonba::Json& j, OrderSummary& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityType, commodityType_);
        DARABONBA_PTR_FROM_JSON(OrderList, orderList_);
        DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(VersionType, versionType_);
      };
      OrderSummary() = default ;
      OrderSummary(const OrderSummary &) = default ;
      OrderSummary(OrderSummary &&) = default ;
      OrderSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderSummary() = default ;
      OrderSummary& operator=(const OrderSummary &) = default ;
      OrderSummary& operator=(OrderSummary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OrderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
          DARABONBA_PTR_TO_JSON(BuyerId, buyerId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InsNum, insNum_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
          DARABONBA_PTR_FROM_JSON(BuyerId, buyerId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InsNum, insNum_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        OrderList() = default ;
        OrderList(const OrderList &) = default ;
        OrderList(OrderList &&) = default ;
        OrderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderList() = default ;
        OrderList& operator=(const OrderList &) = default ;
        OrderList& operator=(OrderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->buyerId_ == nullptr
        && this->endTime_ == nullptr && this->insNum_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr && this->startTime_ == nullptr; };
        // buyerId Field Functions 
        bool hasBuyerId() const { return this->buyerId_ != nullptr;};
        void deleteBuyerId() { this->buyerId_ = nullptr;};
        inline string getBuyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, "") };
        inline OrderList& setBuyerId(string buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline OrderList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // insNum Field Functions 
        bool hasInsNum() const { return this->insNum_ != nullptr;};
        void deleteInsNum() { this->insNum_ = nullptr;};
        inline string getInsNum() const { DARABONBA_PTR_GET_DEFAULT(insNum_, "") };
        inline OrderList& setInsNum(string insNum) { DARABONBA_PTR_SET_VALUE(insNum_, insNum) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline OrderList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline OrderList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline OrderList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The UID of the user who placed the order.
        shared_ptr<string> buyerId_ {};
        // The time when the instance expires.
        shared_ptr<string> endTime_ {};
        // The maximum number of database instances that you can use DMS to manage.
        shared_ptr<string> insNum_ {};
        // The ID of the instance for the purchased service.
        shared_ptr<string> instanceId_ {};
        // The ID of the order.
        shared_ptr<string> orderId_ {};
        // The time when the instance is started.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->commodityType_ == nullptr && this->orderList_ == nullptr && this->totalQuota_ == nullptr && this->versionType_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline OrderSummary& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityType Field Functions 
      bool hasCommodityType() const { return this->commodityType_ != nullptr;};
      void deleteCommodityType() { this->commodityType_ = nullptr;};
      inline string getCommodityType() const { DARABONBA_PTR_GET_DEFAULT(commodityType_, "") };
      inline OrderSummary& setCommodityType(string commodityType) { DARABONBA_PTR_SET_VALUE(commodityType_, commodityType) };


      // orderList Field Functions 
      bool hasOrderList() const { return this->orderList_ != nullptr;};
      void deleteOrderList() { this->orderList_ = nullptr;};
      inline const vector<OrderSummary::OrderList> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<OrderSummary::OrderList>) };
      inline vector<OrderSummary::OrderList> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<OrderSummary::OrderList>) };
      inline OrderSummary& setOrderList(const vector<OrderSummary::OrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
      inline OrderSummary& setOrderList(vector<OrderSummary::OrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline int32_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0) };
      inline OrderSummary& setTotalQuota(int32_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // versionType Field Functions 
      bool hasVersionType() const { return this->versionType_ != nullptr;};
      void deleteVersionType() { this->versionType_ = nullptr;};
      inline string getVersionType() const { DARABONBA_PTR_GET_DEFAULT(versionType_, "") };
      inline OrderSummary& setVersionType(string versionType) { DARABONBA_PTR_SET_VALUE(versionType_, versionType) };


    protected:
      // The commodity code of DMS.
      // 
      // *   dms_pre_public_cn: DMS that uses the subscription billing method
      // *   dms_post_public_cn: DMS that uses the pay-as-you-go billing method
      shared_ptr<string> commodityCode_ {};
      // The type of the service.
      // 
      // *   **VersionType**: DMS that supports control modes
      // *   **SensitiveDataProtection**: DMS that supports sensitive data protection
      shared_ptr<string> commodityType_ {};
      // Details about the orders.
      shared_ptr<vector<OrderSummary::OrderList>> orderList_ {};
      // The sum of the number of instances that you can use DMS to manage in all orders.
      shared_ptr<int32_t> totalQuota_ {};
      // The control mode of DMS. Valid values:
      // 
      // *   **stand**: Stable Change
      // *   **safety**: Security Collaboration
      shared_ptr<string> versionType_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->orderSummary_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListEffectiveOrdersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListEffectiveOrdersResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // orderSummary Field Functions 
    bool hasOrderSummary() const { return this->orderSummary_ != nullptr;};
    void deleteOrderSummary() { this->orderSummary_ = nullptr;};
    inline const vector<ListEffectiveOrdersResponseBody::OrderSummary> & getOrderSummary() const { DARABONBA_PTR_GET_CONST(orderSummary_, vector<ListEffectiveOrdersResponseBody::OrderSummary>) };
    inline vector<ListEffectiveOrdersResponseBody::OrderSummary> getOrderSummary() { DARABONBA_PTR_GET(orderSummary_, vector<ListEffectiveOrdersResponseBody::OrderSummary>) };
    inline ListEffectiveOrdersResponseBody& setOrderSummary(const vector<ListEffectiveOrdersResponseBody::OrderSummary> & orderSummary) { DARABONBA_PTR_SET_VALUE(orderSummary_, orderSummary) };
    inline ListEffectiveOrdersResponseBody& setOrderSummary(vector<ListEffectiveOrdersResponseBody::OrderSummary> && orderSummary) { DARABONBA_PTR_SET_RVALUE(orderSummary_, orderSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEffectiveOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEffectiveOrdersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The information about orders.
    shared_ptr<vector<ListEffectiveOrdersResponseBody::OrderSummary>> orderSummary_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
