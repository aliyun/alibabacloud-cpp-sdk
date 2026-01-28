// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINTLFIXPRICEDOMAINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINTLFIXPRICEDOMAINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckIntlFixPriceDomainStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckIntlFixPriceDomainStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckIntlFixPriceDomainStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckIntlFixPriceDomainStatusResponseBody() = default ;
    CheckIntlFixPriceDomainStatusResponseBody(const CheckIntlFixPriceDomainStatusResponseBody &) = default ;
    CheckIntlFixPriceDomainStatusResponseBody(CheckIntlFixPriceDomainStatusResponseBody &&) = default ;
    CheckIntlFixPriceDomainStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckIntlFixPriceDomainStatusResponseBody() = default ;
    CheckIntlFixPriceDomainStatusResponseBody& operator=(const CheckIntlFixPriceDomainStatusResponseBody &) = default ;
    CheckIntlFixPriceDomainStatusResponseBody& operator=(CheckIntlFixPriceDomainStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DeadDate, deadDate_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Premium, premium_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(RegDate, regDate_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DeadDate, deadDate_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Premium, premium_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currency_ == nullptr
        && this->deadDate_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->premium_ == nullptr && this->price_ == nullptr
        && this->regDate_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Module& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // deadDate Field Functions 
      bool hasDeadDate() const { return this->deadDate_ != nullptr;};
      void deleteDeadDate() { this->deadDate_ = nullptr;};
      inline int64_t getDeadDate() const { DARABONBA_PTR_GET_DEFAULT(deadDate_, 0L) };
      inline Module& setDeadDate(int64_t deadDate) { DARABONBA_PTR_SET_VALUE(deadDate_, deadDate) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Module& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Module& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // premium Field Functions 
      bool hasPremium() const { return this->premium_ != nullptr;};
      void deletePremium() { this->premium_ = nullptr;};
      inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
      inline Module& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline Module& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // regDate Field Functions 
      bool hasRegDate() const { return this->regDate_ != nullptr;};
      void deleteRegDate() { this->regDate_ = nullptr;};
      inline int64_t getRegDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, 0L) };
      inline Module& setRegDate(int64_t regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


    protected:
      shared_ptr<string> currency_ {};
      shared_ptr<int64_t> deadDate_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<bool> premium_ {};
      shared_ptr<int64_t> price_ {};
      shared_ptr<int64_t> regDate_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CheckIntlFixPriceDomainStatusResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CheckIntlFixPriceDomainStatusResponseBody::Module) };
    inline CheckIntlFixPriceDomainStatusResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CheckIntlFixPriceDomainStatusResponseBody::Module) };
    inline CheckIntlFixPriceDomainStatusResponseBody& setModule(const CheckIntlFixPriceDomainStatusResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CheckIntlFixPriceDomainStatusResponseBody& setModule(CheckIntlFixPriceDomainStatusResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckIntlFixPriceDomainStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CheckIntlFixPriceDomainStatusResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
