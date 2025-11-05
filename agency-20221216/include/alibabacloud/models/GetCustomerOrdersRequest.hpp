// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMERORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMERORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCustomerOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomerOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerAccount, customerAccount_);
      DARABONBA_PTR_TO_JSON(CustomerManager, customerManager_);
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderSource, orderSource_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomerOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerAccount, customerAccount_);
      DARABONBA_PTR_FROM_JSON(CustomerManager, customerManager_);
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderSource, orderSource_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
    };
    GetCustomerOrdersRequest() = default ;
    GetCustomerOrdersRequest(const GetCustomerOrdersRequest &) = default ;
    GetCustomerOrdersRequest(GetCustomerOrdersRequest &&) = default ;
    GetCustomerOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomerOrdersRequest() = default ;
    GetCustomerOrdersRequest& operator=(const GetCustomerOrdersRequest &) = default ;
    GetCustomerOrdersRequest& operator=(GetCustomerOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerAccount_ == nullptr
        && return this->customerManager_ == nullptr && return this->customerUid_ == nullptr && return this->endDate_ == nullptr && return this->orderId_ == nullptr && return this->orderSource_ == nullptr
        && return this->orderStatus_ == nullptr && return this->orderType_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->productType_ == nullptr
        && return this->startDate_ == nullptr && return this->timeType_ == nullptr; };
    // customerAccount Field Functions 
    bool hasCustomerAccount() const { return this->customerAccount_ != nullptr;};
    void deleteCustomerAccount() { this->customerAccount_ = nullptr;};
    inline string customerAccount() const { DARABONBA_PTR_GET_DEFAULT(customerAccount_, "") };
    inline GetCustomerOrdersRequest& setCustomerAccount(string customerAccount) { DARABONBA_PTR_SET_VALUE(customerAccount_, customerAccount) };


    // customerManager Field Functions 
    bool hasCustomerManager() const { return this->customerManager_ != nullptr;};
    void deleteCustomerManager() { this->customerManager_ = nullptr;};
    inline string customerManager() const { DARABONBA_PTR_GET_DEFAULT(customerManager_, "") };
    inline GetCustomerOrdersRequest& setCustomerManager(string customerManager) { DARABONBA_PTR_SET_VALUE(customerManager_, customerManager) };


    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline int64_t customerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, 0L) };
    inline GetCustomerOrdersRequest& setCustomerUid(int64_t customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetCustomerOrdersRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetCustomerOrdersRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderSource Field Functions 
    bool hasOrderSource() const { return this->orderSource_ != nullptr;};
    void deleteOrderSource() { this->orderSource_ = nullptr;};
    inline int32_t orderSource() const { DARABONBA_PTR_GET_DEFAULT(orderSource_, 0) };
    inline GetCustomerOrdersRequest& setOrderSource(int32_t orderSource) { DARABONBA_PTR_SET_VALUE(orderSource_, orderSource) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline GetCustomerOrdersRequest& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetCustomerOrdersRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetCustomerOrdersRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCustomerOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetCustomerOrdersRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetCustomerOrdersRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline int32_t timeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, 0) };
    inline GetCustomerOrdersRequest& setTimeType(int32_t timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


  protected:
    std::shared_ptr<string> customerAccount_ = nullptr;
    std::shared_ptr<string> customerManager_ = nullptr;
    std::shared_ptr<int64_t> customerUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int32_t> orderSource_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> timeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
