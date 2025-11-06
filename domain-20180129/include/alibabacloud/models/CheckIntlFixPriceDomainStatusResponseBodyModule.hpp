// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINTLFIXPRICEDOMAINSTATUSRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CHECKINTLFIXPRICEDOMAINSTATUSRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckIntlFixPriceDomainStatusResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckIntlFixPriceDomainStatusResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeadDate, deadDate_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(RegDate, regDate_);
    };
    friend void from_json(const Darabonba::Json& j, CheckIntlFixPriceDomainStatusResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeadDate, deadDate_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
    };
    CheckIntlFixPriceDomainStatusResponseBodyModule() = default ;
    CheckIntlFixPriceDomainStatusResponseBodyModule(const CheckIntlFixPriceDomainStatusResponseBodyModule &) = default ;
    CheckIntlFixPriceDomainStatusResponseBodyModule(CheckIntlFixPriceDomainStatusResponseBodyModule &&) = default ;
    CheckIntlFixPriceDomainStatusResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckIntlFixPriceDomainStatusResponseBodyModule() = default ;
    CheckIntlFixPriceDomainStatusResponseBodyModule& operator=(const CheckIntlFixPriceDomainStatusResponseBodyModule &) = default ;
    CheckIntlFixPriceDomainStatusResponseBodyModule& operator=(CheckIntlFixPriceDomainStatusResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->deadDate_ == nullptr && return this->domain_ == nullptr && return this->endTime_ == nullptr && return this->premium_ == nullptr && return this->price_ == nullptr
        && return this->regDate_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deadDate Field Functions 
    bool hasDeadDate() const { return this->deadDate_ != nullptr;};
    void deleteDeadDate() { this->deadDate_ = nullptr;};
    inline int64_t deadDate() const { DARABONBA_PTR_GET_DEFAULT(deadDate_, 0L) };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setDeadDate(int64_t deadDate) { DARABONBA_PTR_SET_VALUE(deadDate_, deadDate) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline bool premium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // regDate Field Functions 
    bool hasRegDate() const { return this->regDate_ != nullptr;};
    void deleteRegDate() { this->regDate_ = nullptr;};
    inline int64_t regDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, 0L) };
    inline CheckIntlFixPriceDomainStatusResponseBodyModule& setRegDate(int64_t regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


  protected:
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<int64_t> deadDate_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<bool> premium_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<int64_t> regDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
