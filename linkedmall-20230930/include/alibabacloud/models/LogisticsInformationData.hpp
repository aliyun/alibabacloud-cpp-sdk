// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGISTICSINFORMATIONDATA_HPP_
#define ALIBABACLOUD_MODELS_LOGISTICSINFORMATIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class LogisticsInformationData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogisticsInformationData& obj) { 
      DARABONBA_PTR_TO_JSON(logisticsStatus, logisticsStatus_);
      DARABONBA_PTR_TO_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_TO_JSON(outerPurchaseOrderId, outerPurchaseOrderId_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(trackingCompanyCode, trackingCompanyCode_);
      DARABONBA_PTR_TO_JSON(trackingCompanyName, trackingCompanyName_);
      DARABONBA_PTR_TO_JSON(trackingNumber, trackingNumber_);
    };
    friend void from_json(const Darabonba::Json& j, LogisticsInformationData& obj) { 
      DARABONBA_PTR_FROM_JSON(logisticsStatus, logisticsStatus_);
      DARABONBA_PTR_FROM_JSON(modifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_FROM_JSON(outerPurchaseOrderId, outerPurchaseOrderId_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(trackingCompanyCode, trackingCompanyCode_);
      DARABONBA_PTR_FROM_JSON(trackingCompanyName, trackingCompanyName_);
      DARABONBA_PTR_FROM_JSON(trackingNumber, trackingNumber_);
    };
    LogisticsInformationData() = default ;
    LogisticsInformationData(const LogisticsInformationData &) = default ;
    LogisticsInformationData(LogisticsInformationData &&) = default ;
    LogisticsInformationData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogisticsInformationData() = default ;
    LogisticsInformationData& operator=(const LogisticsInformationData &) = default ;
    LogisticsInformationData& operator=(LogisticsInformationData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logisticsStatus_ == nullptr
        && this->modifiedTime_ == nullptr && this->orderId_ == nullptr && this->orderLineId_ == nullptr && this->outerPurchaseOrderId_ == nullptr && this->purchaserId_ == nullptr
        && this->trackingCompanyCode_ == nullptr && this->trackingCompanyName_ == nullptr && this->trackingNumber_ == nullptr; };
    // logisticsStatus Field Functions 
    bool hasLogisticsStatus() const { return this->logisticsStatus_ != nullptr;};
    void deleteLogisticsStatus() { this->logisticsStatus_ = nullptr;};
    inline string getLogisticsStatus() const { DARABONBA_PTR_GET_DEFAULT(logisticsStatus_, "") };
    inline LogisticsInformationData& setLogisticsStatus(string logisticsStatus) { DARABONBA_PTR_SET_VALUE(logisticsStatus_, logisticsStatus) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline LogisticsInformationData& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline LogisticsInformationData& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline LogisticsInformationData& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


    // outerPurchaseOrderId Field Functions 
    bool hasOuterPurchaseOrderId() const { return this->outerPurchaseOrderId_ != nullptr;};
    void deleteOuterPurchaseOrderId() { this->outerPurchaseOrderId_ = nullptr;};
    inline string getOuterPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(outerPurchaseOrderId_, "") };
    inline LogisticsInformationData& setOuterPurchaseOrderId(string outerPurchaseOrderId) { DARABONBA_PTR_SET_VALUE(outerPurchaseOrderId_, outerPurchaseOrderId) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline LogisticsInformationData& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // trackingCompanyCode Field Functions 
    bool hasTrackingCompanyCode() const { return this->trackingCompanyCode_ != nullptr;};
    void deleteTrackingCompanyCode() { this->trackingCompanyCode_ = nullptr;};
    inline string getTrackingCompanyCode() const { DARABONBA_PTR_GET_DEFAULT(trackingCompanyCode_, "") };
    inline LogisticsInformationData& setTrackingCompanyCode(string trackingCompanyCode) { DARABONBA_PTR_SET_VALUE(trackingCompanyCode_, trackingCompanyCode) };


    // trackingCompanyName Field Functions 
    bool hasTrackingCompanyName() const { return this->trackingCompanyName_ != nullptr;};
    void deleteTrackingCompanyName() { this->trackingCompanyName_ = nullptr;};
    inline string getTrackingCompanyName() const { DARABONBA_PTR_GET_DEFAULT(trackingCompanyName_, "") };
    inline LogisticsInformationData& setTrackingCompanyName(string trackingCompanyName) { DARABONBA_PTR_SET_VALUE(trackingCompanyName_, trackingCompanyName) };


    // trackingNumber Field Functions 
    bool hasTrackingNumber() const { return this->trackingNumber_ != nullptr;};
    void deleteTrackingNumber() { this->trackingNumber_ = nullptr;};
    inline string getTrackingNumber() const { DARABONBA_PTR_GET_DEFAULT(trackingNumber_, "") };
    inline LogisticsInformationData& setTrackingNumber(string trackingNumber) { DARABONBA_PTR_SET_VALUE(trackingNumber_, trackingNumber) };


  protected:
    shared_ptr<string> logisticsStatus_ {};
    shared_ptr<string> modifiedTime_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> orderLineId_ {};
    shared_ptr<string> outerPurchaseOrderId_ {};
    shared_ptr<string> purchaserId_ {};
    shared_ptr<string> trackingCompanyCode_ {};
    shared_ptr<string> trackingCompanyName_ {};
    shared_ptr<string> trackingNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
