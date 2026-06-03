// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class CheckDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Avail, avail_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DynamicCheck, dynamicCheck_);
      DARABONBA_PTR_TO_JSON(Premium, premium_);
      DARABONBA_PTR_TO_JSON(Price, price_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Avail, avail_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DynamicCheck, dynamicCheck_);
      DARABONBA_PTR_FROM_JSON(Premium, premium_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckDomainResponseBody() = default ;
    CheckDomainResponseBody(const CheckDomainResponseBody &) = default ;
    CheckDomainResponseBody(CheckDomainResponseBody &&) = default ;
    CheckDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDomainResponseBody() = default ;
    CheckDomainResponseBody& operator=(const CheckDomainResponseBody &) = default ;
    CheckDomainResponseBody& operator=(CheckDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avail_ == nullptr
        && this->domainName_ == nullptr && this->dynamicCheck_ == nullptr && this->premium_ == nullptr && this->price_ == nullptr && this->reason_ == nullptr
        && this->requestId_ == nullptr; };
    // avail Field Functions 
    bool hasAvail() const { return this->avail_ != nullptr;};
    void deleteAvail() { this->avail_ = nullptr;};
    inline string getAvail() const { DARABONBA_PTR_GET_DEFAULT(avail_, "") };
    inline CheckDomainResponseBody& setAvail(string avail) { DARABONBA_PTR_SET_VALUE(avail_, avail) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CheckDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // dynamicCheck Field Functions 
    bool hasDynamicCheck() const { return this->dynamicCheck_ != nullptr;};
    void deleteDynamicCheck() { this->dynamicCheck_ = nullptr;};
    inline bool getDynamicCheck() const { DARABONBA_PTR_GET_DEFAULT(dynamicCheck_, false) };
    inline CheckDomainResponseBody& setDynamicCheck(bool dynamicCheck) { DARABONBA_PTR_SET_VALUE(dynamicCheck_, dynamicCheck) };


    // premium Field Functions 
    bool hasPremium() const { return this->premium_ != nullptr;};
    void deletePremium() { this->premium_ = nullptr;};
    inline string getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, "") };
    inline CheckDomainResponseBody& setPremium(string premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline CheckDomainResponseBody& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CheckDomainResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> avail_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<bool> dynamicCheck_ {};
    shared_ptr<string> premium_ {};
    shared_ptr<int64_t> price_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
