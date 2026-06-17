// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ListOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderList, orderList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderList, orderList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOrdersResponseBody() = default ;
    ListOrdersResponseBody(const ListOrdersResponseBody &) = default ;
    ListOrdersResponseBody(ListOrdersResponseBody &&) = default ;
    ListOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrdersResponseBody() = default ;
    ListOrdersResponseBody& operator=(const ListOrdersResponseBody &) = default ;
    ListOrdersResponseBody& operator=(ListOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OrderList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(ProduceCode, produceCode_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, OrderList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(ProduceCode, produceCode_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
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
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->createdTime_ == nullptr && this->instanceId_ == nullptr && this->orderId_ == nullptr
        && this->orderStatus_ == nullptr && this->orderType_ == nullptr && this->produceCode_ == nullptr && this->region_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline OrderList& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline OrderList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline OrderList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline OrderList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


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


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
      inline OrderList& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline OrderList& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // produceCode Field Functions 
      bool hasProduceCode() const { return this->produceCode_ != nullptr;};
      void deleteProduceCode() { this->produceCode_ = nullptr;};
      inline string getProduceCode() const { DARABONBA_PTR_GET_DEFAULT(produceCode_, "") };
      inline OrderList& setProduceCode(string produceCode) { DARABONBA_PTR_SET_VALUE(produceCode_, produceCode) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline OrderList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<string> aliUid_ {};
      // The billing method of the instance. Valid values:
      // 
      // - **Postpaid**: pay-as-you-go
      // 
      // - **Prepaid**: subscription
      shared_ptr<string> chargeType_ {};
      // The commodity code. Valid values:
      // 
      // - polardb_sub: subscription in the Chinese mainland.
      // 
      // - polardb_sub_intl: subscription in Hong Kong (China) and regions outside China.
      // 
      // - polardb_payg: pay-as-you-go in the Chinese mainland.
      // 
      // - polardb_payg_intl: pay-as-you-go in Hong Kong (China) and regions outside China.
      // 
      // - polardb_sub_jushita: Jushita subscription.
      // 
      // - polardb_payg_jushita: Jushita pay-as-you-go.
      // 
      // - polardb_sub_cainiao: Cainiao subscription.
      // 
      // - polardb_payg_cainiao: Cainiao pay-as-you-go.
      // 
      // > * If you use an Alibaba Cloud account for the China site, you can view only the commodity codes for the Chinese mainland.
      // >
      // > * If you use an Alibaba Cloud international site account, you can view only the commodity codes for regions outside the Chinese mainland.
      // >
      // > * If you use a Jushita account, you can view only the commodity codes for Jushita.
      // >
      // > * If you use a Cainiao account, you can view only the commodity codes for Cainiao.
      shared_ptr<string> commodityCode_ {};
      // The time when the order was created.
      shared_ptr<string> createdTime_ {};
      // The cluster ID.
      shared_ptr<string> instanceId_ {};
      // The order ID.
      shared_ptr<string> orderId_ {};
      // The status of the order.
      // 
      // - **pending**: The task is waiting to start.
      // 
      // - **create**: The order is placed and is being processed.
      // 
      // - **fail**: The instance failed to be created.
      // 
      // - **cancel**: The order is canceled.
      // 
      // - **success**: The instance is created.
      shared_ptr<string> orderStatus_ {};
      // The type of the order. Valid values:
      // 
      // - BUY: The instance is purchased.
      // 
      // - UPGRADE: The instance configuration is changed.
      // 
      // - RENEW: The subscription is renewed.
      // 
      // - CONVERT: The billing method is changed.
      shared_ptr<string> orderType_ {};
      // The product code.
      shared_ptr<string> produceCode_ {};
      // The region information
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->orderList_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOrdersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOrdersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<ListOrdersResponseBody::OrderList> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<ListOrdersResponseBody::OrderList>) };
    inline vector<ListOrdersResponseBody::OrderList> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<ListOrdersResponseBody::OrderList>) };
    inline ListOrdersResponseBody& setOrderList(const vector<ListOrdersResponseBody::OrderList> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline ListOrdersResponseBody& setOrderList(vector<ListOrdersResponseBody::OrderList> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOrdersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrdersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOrdersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned for the current request. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. If the query results are not returned in a single call, this token is returned. Use this token in a subsequent call to retrieve the remaining results.
    shared_ptr<string> nextToken_ {};
    // The list of orders.
    // 
    // This parameter is required.
    shared_ptr<vector<ListOrdersResponseBody::OrderList>> orderList_ {};
    // The page number of the returned page. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Valid values:
    // 
    // - **30**
    // 
    // - **50**
    // 
    // - **100**
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
