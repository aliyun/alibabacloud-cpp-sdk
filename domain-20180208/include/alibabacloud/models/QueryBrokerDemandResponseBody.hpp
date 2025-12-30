// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBROKERDEMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBrokerDemandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBrokerDemandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBrokerDemandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryBrokerDemandResponseBody() = default ;
    QueryBrokerDemandResponseBody(const QueryBrokerDemandResponseBody &) = default ;
    QueryBrokerDemandResponseBody(QueryBrokerDemandResponseBody &&) = default ;
    QueryBrokerDemandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBrokerDemandResponseBody() = default ;
    QueryBrokerDemandResponseBody& operator=(const QueryBrokerDemandResponseBody &) = default ;
    QueryBrokerDemandResponseBody& operator=(QueryBrokerDemandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->bargainSellerMobile_ == nullptr && this->bargainSellerPrice_ == nullptr && this->bizId_ == nullptr && this->demandDomain_ == nullptr && this->demandPrice_ == nullptr
        && this->description_ == nullptr && this->email_ == nullptr && this->mobile_ == nullptr && this->orderType_ == nullptr && this->partnerDomain_ == nullptr
        && this->payDomain_ == nullptr && this->payPrice_ == nullptr && this->payTime_ == nullptr && this->produceType_ == nullptr && this->publishTime_ == nullptr
        && this->purchaseStatus_ == nullptr && this->servicePayPrice_ == nullptr && this->settleBasePrice_ == nullptr && this->status_ == nullptr; };
      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
      inline Data& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // bargainSellerMobile Field Functions 
      bool hasBargainSellerMobile() const { return this->bargainSellerMobile_ != nullptr;};
      void deleteBargainSellerMobile() { this->bargainSellerMobile_ = nullptr;};
      inline string getBargainSellerMobile() const { DARABONBA_PTR_GET_DEFAULT(bargainSellerMobile_, "") };
      inline Data& setBargainSellerMobile(string bargainSellerMobile) { DARABONBA_PTR_SET_VALUE(bargainSellerMobile_, bargainSellerMobile) };


      // bargainSellerPrice Field Functions 
      bool hasBargainSellerPrice() const { return this->bargainSellerPrice_ != nullptr;};
      void deleteBargainSellerPrice() { this->bargainSellerPrice_ = nullptr;};
      inline float getBargainSellerPrice() const { DARABONBA_PTR_GET_DEFAULT(bargainSellerPrice_, 0.0) };
      inline Data& setBargainSellerPrice(float bargainSellerPrice) { DARABONBA_PTR_SET_VALUE(bargainSellerPrice_, bargainSellerPrice) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // demandDomain Field Functions 
      bool hasDemandDomain() const { return this->demandDomain_ != nullptr;};
      void deleteDemandDomain() { this->demandDomain_ = nullptr;};
      inline string getDemandDomain() const { DARABONBA_PTR_GET_DEFAULT(demandDomain_, "") };
      inline Data& setDemandDomain(string demandDomain) { DARABONBA_PTR_SET_VALUE(demandDomain_, demandDomain) };


      // demandPrice Field Functions 
      bool hasDemandPrice() const { return this->demandPrice_ != nullptr;};
      void deleteDemandPrice() { this->demandPrice_ = nullptr;};
      inline float getDemandPrice() const { DARABONBA_PTR_GET_DEFAULT(demandPrice_, 0.0) };
      inline Data& setDemandPrice(float demandPrice) { DARABONBA_PTR_SET_VALUE(demandPrice_, demandPrice) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Data& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
      inline Data& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // partnerDomain Field Functions 
      bool hasPartnerDomain() const { return this->partnerDomain_ != nullptr;};
      void deletePartnerDomain() { this->partnerDomain_ = nullptr;};
      inline string getPartnerDomain() const { DARABONBA_PTR_GET_DEFAULT(partnerDomain_, "") };
      inline Data& setPartnerDomain(string partnerDomain) { DARABONBA_PTR_SET_VALUE(partnerDomain_, partnerDomain) };


      // payDomain Field Functions 
      bool hasPayDomain() const { return this->payDomain_ != nullptr;};
      void deletePayDomain() { this->payDomain_ = nullptr;};
      inline string getPayDomain() const { DARABONBA_PTR_GET_DEFAULT(payDomain_, "") };
      inline Data& setPayDomain(string payDomain) { DARABONBA_PTR_SET_VALUE(payDomain_, payDomain) };


      // payPrice Field Functions 
      bool hasPayPrice() const { return this->payPrice_ != nullptr;};
      void deletePayPrice() { this->payPrice_ = nullptr;};
      inline float getPayPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0.0) };
      inline Data& setPayPrice(float payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline int64_t getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
      inline Data& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // produceType Field Functions 
      bool hasProduceType() const { return this->produceType_ != nullptr;};
      void deleteProduceType() { this->produceType_ = nullptr;};
      inline int32_t getProduceType() const { DARABONBA_PTR_GET_DEFAULT(produceType_, 0) };
      inline Data& setProduceType(int32_t produceType) { DARABONBA_PTR_SET_VALUE(produceType_, produceType) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline int64_t getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
      inline Data& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // purchaseStatus Field Functions 
      bool hasPurchaseStatus() const { return this->purchaseStatus_ != nullptr;};
      void deletePurchaseStatus() { this->purchaseStatus_ = nullptr;};
      inline int32_t getPurchaseStatus() const { DARABONBA_PTR_GET_DEFAULT(purchaseStatus_, 0) };
      inline Data& setPurchaseStatus(int32_t purchaseStatus) { DARABONBA_PTR_SET_VALUE(purchaseStatus_, purchaseStatus) };


      // servicePayPrice Field Functions 
      bool hasServicePayPrice() const { return this->servicePayPrice_ != nullptr;};
      void deleteServicePayPrice() { this->servicePayPrice_ = nullptr;};
      inline float getServicePayPrice() const { DARABONBA_PTR_GET_DEFAULT(servicePayPrice_, 0.0) };
      inline Data& setServicePayPrice(float servicePayPrice) { DARABONBA_PTR_SET_VALUE(servicePayPrice_, servicePayPrice) };


      // settleBasePrice Field Functions 
      bool hasSettleBasePrice() const { return this->settleBasePrice_ != nullptr;};
      void deleteSettleBasePrice() { this->settleBasePrice_ = nullptr;};
      inline float getSettleBasePrice() const { DARABONBA_PTR_GET_DEFAULT(settleBasePrice_, 0.0) };
      inline Data& setSettleBasePrice(float settleBasePrice) { DARABONBA_PTR_SET_VALUE(settleBasePrice_, settleBasePrice) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int32_t> auditStatus_ {};
      shared_ptr<string> bargainSellerMobile_ {};
      shared_ptr<float> bargainSellerPrice_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> demandDomain_ {};
      shared_ptr<float> demandPrice_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<int32_t> orderType_ {};
      shared_ptr<string> partnerDomain_ {};
      shared_ptr<string> payDomain_ {};
      shared_ptr<float> payPrice_ {};
      shared_ptr<int64_t> payTime_ {};
      shared_ptr<int32_t> produceType_ {};
      shared_ptr<int64_t> publishTime_ {};
      shared_ptr<int32_t> purchaseStatus_ {};
      shared_ptr<float> servicePayPrice_ {};
      shared_ptr<float> settleBasePrice_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryBrokerDemandResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryBrokerDemandResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryBrokerDemandResponseBody::Data>) };
    inline vector<QueryBrokerDemandResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryBrokerDemandResponseBody::Data>) };
    inline QueryBrokerDemandResponseBody& setData(const vector<QueryBrokerDemandResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBrokerDemandResponseBody& setData(vector<QueryBrokerDemandResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryBrokerDemandResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBrokerDemandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryBrokerDemandResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryBrokerDemandResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<vector<QueryBrokerDemandResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
