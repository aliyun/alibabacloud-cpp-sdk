// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSRESPONSEBODYMODULEDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUYERDOMAINTRADERECORDSRESPONSEBODYMODULEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBuyerDomainTradeRecordsResponseBodyModuleData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBuyerDomainTradeRecordsResponseBodyModuleData& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PayTime, payTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TradeId, tradeId_);
      DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
      DARABONBA_PTR_TO_JSON(TradeType, tradeType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBuyerDomainTradeRecordsResponseBodyModuleData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TradeId, tradeId_);
      DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
      DARABONBA_PTR_FROM_JSON(TradeType, tradeType_);
    };
    QueryBuyerDomainTradeRecordsResponseBodyModuleData() = default ;
    QueryBuyerDomainTradeRecordsResponseBodyModuleData(const QueryBuyerDomainTradeRecordsResponseBodyModuleData &) = default ;
    QueryBuyerDomainTradeRecordsResponseBodyModuleData(QueryBuyerDomainTradeRecordsResponseBodyModuleData &&) = default ;
    QueryBuyerDomainTradeRecordsResponseBodyModuleData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBuyerDomainTradeRecordsResponseBodyModuleData() = default ;
    QueryBuyerDomainTradeRecordsResponseBodyModuleData& operator=(const QueryBuyerDomainTradeRecordsResponseBodyModuleData &) = default ;
    QueryBuyerDomainTradeRecordsResponseBodyModuleData& operator=(QueryBuyerDomainTradeRecordsResponseBodyModuleData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->currency_ == nullptr && return this->deliveryTime_ == nullptr && return this->domainName_ == nullptr && return this->payTime_ == nullptr && return this->status_ == nullptr
        && return this->tradeId_ == nullptr && return this->tradePrice_ == nullptr && return this->tradeType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline string deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tradeId Field Functions 
    bool hasTradeId() const { return this->tradeId_ != nullptr;};
    void deleteTradeId() { this->tradeId_ = nullptr;};
    inline string tradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float tradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    // tradeType Field Functions 
    bool hasTradeType() const { return this->tradeType_ != nullptr;};
    void deleteTradeType() { this->tradeType_ = nullptr;};
    inline string tradeType() const { DARABONBA_PTR_GET_DEFAULT(tradeType_, "") };
    inline QueryBuyerDomainTradeRecordsResponseBodyModuleData& setTradeType(string tradeType) { DARABONBA_PTR_SET_VALUE(tradeType_, tradeType) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> deliveryTime_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tradeId_ = nullptr;
    std::shared_ptr<float> tradePrice_ = nullptr;
    std::shared_ptr<string> tradeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
