// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICERESPONSEBODYMODULEDOMAINPRICES_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINREALTIMEPRICERESPONSEBODYMODULEDOMAINPRICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainRealTimePriceResponseBodyModuleDomainPrices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainRealTimePriceResponseBodyModuleDomainPrices& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Avail, avail_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainRealTimePriceResponseBodyModuleDomainPrices& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Avail, avail_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    QueryDomainRealTimePriceResponseBodyModuleDomainPrices() = default ;
    QueryDomainRealTimePriceResponseBodyModuleDomainPrices(const QueryDomainRealTimePriceResponseBodyModuleDomainPrices &) = default ;
    QueryDomainRealTimePriceResponseBodyModuleDomainPrices(QueryDomainRealTimePriceResponseBodyModuleDomainPrices &&) = default ;
    QueryDomainRealTimePriceResponseBodyModuleDomainPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainRealTimePriceResponseBodyModuleDomainPrices() = default ;
    QueryDomainRealTimePriceResponseBodyModuleDomainPrices& operator=(const QueryDomainRealTimePriceResponseBodyModuleDomainPrices &) = default ;
    QueryDomainRealTimePriceResponseBodyModuleDomainPrices& operator=(QueryDomainRealTimePriceResponseBodyModuleDomainPrices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->avail_ == nullptr && return this->currency_ == nullptr && return this->domainName_ == nullptr && return this->period_ == nullptr && return this->premium_ == nullptr
        && return this->price_ == nullptr && return this->reason_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // avail Field Functions 
    bool hasAvail() const { return this->avail_ != nullptr;};
    void deleteAvail() { this->avail_ = nullptr;};
    inline int32_t avail() const { DARABONBA_PTR_GET_DEFAULT(avail_, 0) };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setAvail(int32_t avail) { DARABONBA_PTR_SET_VALUE(avail_, avail) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QueryDomainRealTimePriceResponseBodyModuleDomainPrices& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<int32_t> avail_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<bool> premium_ = nullptr;
    std::shared_ptr<double> price_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
