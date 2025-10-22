// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBrokerDemandResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBrokerDemandResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(BargainSellerMobile, bargainSellerMobile_);
      DARABONBA_PTR_TO_JSON(BargainSellerPrice, bargainSellerPrice_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DemandDomain, demandDomain_);
      DARABONBA_PTR_TO_JSON(DemandPrice, demandPrice_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PartnerDomain, partnerDomain_);
      DARABONBA_PTR_TO_JSON(PayDomain, payDomain_);
      DARABONBA_PTR_TO_JSON(PayPrice, payPrice_);
      DARABONBA_PTR_TO_JSON(PayTime, payTime_);
      DARABONBA_PTR_TO_JSON(ProduceType, produceType_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(PurchaseStatus, purchaseStatus_);
      DARABONBA_PTR_TO_JSON(ServicePayPrice, servicePayPrice_);
      DARABONBA_PTR_TO_JSON(SettleBasePrice, settleBasePrice_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBrokerDemandResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(BargainSellerMobile, bargainSellerMobile_);
      DARABONBA_PTR_FROM_JSON(BargainSellerPrice, bargainSellerPrice_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DemandDomain, demandDomain_);
      DARABONBA_PTR_FROM_JSON(DemandPrice, demandPrice_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PartnerDomain, partnerDomain_);
      DARABONBA_PTR_FROM_JSON(PayDomain, payDomain_);
      DARABONBA_PTR_FROM_JSON(PayPrice, payPrice_);
      DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
      DARABONBA_PTR_FROM_JSON(ProduceType, produceType_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(PurchaseStatus, purchaseStatus_);
      DARABONBA_PTR_FROM_JSON(ServicePayPrice, servicePayPrice_);
      DARABONBA_PTR_FROM_JSON(SettleBasePrice, settleBasePrice_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryBrokerDemandResponseBodyData() = default ;
    QueryBrokerDemandResponseBodyData(const QueryBrokerDemandResponseBodyData &) = default ;
    QueryBrokerDemandResponseBodyData(QueryBrokerDemandResponseBodyData &&) = default ;
    QueryBrokerDemandResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBrokerDemandResponseBodyData() = default ;
    QueryBrokerDemandResponseBodyData& operator=(const QueryBrokerDemandResponseBodyData &) = default ;
    QueryBrokerDemandResponseBodyData& operator=(QueryBrokerDemandResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && return this->bargainSellerMobile_ == nullptr && return this->bargainSellerPrice_ == nullptr && return this->bizId_ == nullptr && return this->demandDomain_ == nullptr && return this->demandPrice_ == nullptr
        && return this->description_ == nullptr && return this->email_ == nullptr && return this->mobile_ == nullptr && return this->orderType_ == nullptr && return this->partnerDomain_ == nullptr
        && return this->payDomain_ == nullptr && return this->payPrice_ == nullptr && return this->payTime_ == nullptr && return this->produceType_ == nullptr && return this->publishTime_ == nullptr
        && return this->purchaseStatus_ == nullptr && return this->servicePayPrice_ == nullptr && return this->settleBasePrice_ == nullptr && return this->status_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline QueryBrokerDemandResponseBodyData& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // bargainSellerMobile Field Functions 
    bool hasBargainSellerMobile() const { return this->bargainSellerMobile_ != nullptr;};
    void deleteBargainSellerMobile() { this->bargainSellerMobile_ = nullptr;};
    inline string bargainSellerMobile() const { DARABONBA_PTR_GET_DEFAULT(bargainSellerMobile_, "") };
    inline QueryBrokerDemandResponseBodyData& setBargainSellerMobile(string bargainSellerMobile) { DARABONBA_PTR_SET_VALUE(bargainSellerMobile_, bargainSellerMobile) };


    // bargainSellerPrice Field Functions 
    bool hasBargainSellerPrice() const { return this->bargainSellerPrice_ != nullptr;};
    void deleteBargainSellerPrice() { this->bargainSellerPrice_ = nullptr;};
    inline float bargainSellerPrice() const { DARABONBA_PTR_GET_DEFAULT(bargainSellerPrice_, 0.0) };
    inline QueryBrokerDemandResponseBodyData& setBargainSellerPrice(float bargainSellerPrice) { DARABONBA_PTR_SET_VALUE(bargainSellerPrice_, bargainSellerPrice) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryBrokerDemandResponseBodyData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // demandDomain Field Functions 
    bool hasDemandDomain() const { return this->demandDomain_ != nullptr;};
    void deleteDemandDomain() { this->demandDomain_ = nullptr;};
    inline string demandDomain() const { DARABONBA_PTR_GET_DEFAULT(demandDomain_, "") };
    inline QueryBrokerDemandResponseBodyData& setDemandDomain(string demandDomain) { DARABONBA_PTR_SET_VALUE(demandDomain_, demandDomain) };


    // demandPrice Field Functions 
    bool hasDemandPrice() const { return this->demandPrice_ != nullptr;};
    void deleteDemandPrice() { this->demandPrice_ = nullptr;};
    inline float demandPrice() const { DARABONBA_PTR_GET_DEFAULT(demandPrice_, 0.0) };
    inline QueryBrokerDemandResponseBodyData& setDemandPrice(float demandPrice) { DARABONBA_PTR_SET_VALUE(demandPrice_, demandPrice) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline QueryBrokerDemandResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryBrokerDemandResponseBodyData& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline QueryBrokerDemandResponseBodyData& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline int32_t orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
    inline QueryBrokerDemandResponseBodyData& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // partnerDomain Field Functions 
    bool hasPartnerDomain() const { return this->partnerDomain_ != nullptr;};
    void deletePartnerDomain() { this->partnerDomain_ = nullptr;};
    inline string partnerDomain() const { DARABONBA_PTR_GET_DEFAULT(partnerDomain_, "") };
    inline QueryBrokerDemandResponseBodyData& setPartnerDomain(string partnerDomain) { DARABONBA_PTR_SET_VALUE(partnerDomain_, partnerDomain) };


    // payDomain Field Functions 
    bool hasPayDomain() const { return this->payDomain_ != nullptr;};
    void deletePayDomain() { this->payDomain_ = nullptr;};
    inline string payDomain() const { DARABONBA_PTR_GET_DEFAULT(payDomain_, "") };
    inline QueryBrokerDemandResponseBodyData& setPayDomain(string payDomain) { DARABONBA_PTR_SET_VALUE(payDomain_, payDomain) };


    // payPrice Field Functions 
    bool hasPayPrice() const { return this->payPrice_ != nullptr;};
    void deletePayPrice() { this->payPrice_ = nullptr;};
    inline float payPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0.0) };
    inline QueryBrokerDemandResponseBodyData& setPayPrice(float payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline QueryBrokerDemandResponseBodyData& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // produceType Field Functions 
    bool hasProduceType() const { return this->produceType_ != nullptr;};
    void deleteProduceType() { this->produceType_ = nullptr;};
    inline int32_t produceType() const { DARABONBA_PTR_GET_DEFAULT(produceType_, 0) };
    inline QueryBrokerDemandResponseBodyData& setProduceType(int32_t produceType) { DARABONBA_PTR_SET_VALUE(produceType_, produceType) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline QueryBrokerDemandResponseBodyData& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // purchaseStatus Field Functions 
    bool hasPurchaseStatus() const { return this->purchaseStatus_ != nullptr;};
    void deletePurchaseStatus() { this->purchaseStatus_ = nullptr;};
    inline int32_t purchaseStatus() const { DARABONBA_PTR_GET_DEFAULT(purchaseStatus_, 0) };
    inline QueryBrokerDemandResponseBodyData& setPurchaseStatus(int32_t purchaseStatus) { DARABONBA_PTR_SET_VALUE(purchaseStatus_, purchaseStatus) };


    // servicePayPrice Field Functions 
    bool hasServicePayPrice() const { return this->servicePayPrice_ != nullptr;};
    void deleteServicePayPrice() { this->servicePayPrice_ = nullptr;};
    inline float servicePayPrice() const { DARABONBA_PTR_GET_DEFAULT(servicePayPrice_, 0.0) };
    inline QueryBrokerDemandResponseBodyData& setServicePayPrice(float servicePayPrice) { DARABONBA_PTR_SET_VALUE(servicePayPrice_, servicePayPrice) };


    // settleBasePrice Field Functions 
    bool hasSettleBasePrice() const { return this->settleBasePrice_ != nullptr;};
    void deleteSettleBasePrice() { this->settleBasePrice_ = nullptr;};
    inline float settleBasePrice() const { DARABONBA_PTR_GET_DEFAULT(settleBasePrice_, 0.0) };
    inline QueryBrokerDemandResponseBodyData& setSettleBasePrice(float settleBasePrice) { DARABONBA_PTR_SET_VALUE(settleBasePrice_, settleBasePrice) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryBrokerDemandResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> auditStatus_ = nullptr;
    std::shared_ptr<string> bargainSellerMobile_ = nullptr;
    std::shared_ptr<float> bargainSellerPrice_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> demandDomain_ = nullptr;
    std::shared_ptr<float> demandPrice_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<int32_t> orderType_ = nullptr;
    std::shared_ptr<string> partnerDomain_ = nullptr;
    std::shared_ptr<string> payDomain_ = nullptr;
    std::shared_ptr<float> payPrice_ = nullptr;
    std::shared_ptr<int64_t> payTime_ = nullptr;
    std::shared_ptr<int32_t> produceType_ = nullptr;
    std::shared_ptr<int64_t> publishTime_ = nullptr;
    std::shared_ptr<int32_t> purchaseStatus_ = nullptr;
    std::shared_ptr<float> servicePayPrice_ = nullptr;
    std::shared_ptr<float> settleBasePrice_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
