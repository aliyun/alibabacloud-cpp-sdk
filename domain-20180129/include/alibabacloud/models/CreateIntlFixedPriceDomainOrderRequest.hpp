// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CreateIntlFixedPriceDomainOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntlFixedPriceDomainOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ExpectedPrice, expectedPrice_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntlFixedPriceDomainOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ExpectedPrice, expectedPrice_);
    };
    CreateIntlFixedPriceDomainOrderRequest() = default ;
    CreateIntlFixedPriceDomainOrderRequest(const CreateIntlFixedPriceDomainOrderRequest &) = default ;
    CreateIntlFixedPriceDomainOrderRequest(CreateIntlFixedPriceDomainOrderRequest &&) = default ;
    CreateIntlFixedPriceDomainOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntlFixedPriceDomainOrderRequest() = default ;
    CreateIntlFixedPriceDomainOrderRequest& operator=(const CreateIntlFixedPriceDomainOrderRequest &) = default ;
    CreateIntlFixedPriceDomainOrderRequest& operator=(CreateIntlFixedPriceDomainOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->contactId_ == nullptr && this->domain_ == nullptr && this->expectedPrice_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateIntlFixedPriceDomainOrderRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline CreateIntlFixedPriceDomainOrderRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateIntlFixedPriceDomainOrderRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // expectedPrice Field Functions 
    bool hasExpectedPrice() const { return this->expectedPrice_ != nullptr;};
    void deleteExpectedPrice() { this->expectedPrice_ = nullptr;};
    inline int64_t getExpectedPrice() const { DARABONBA_PTR_GET_DEFAULT(expectedPrice_, 0L) };
    inline CreateIntlFixedPriceDomainOrderRequest& setExpectedPrice(int64_t expectedPrice) { DARABONBA_PTR_SET_VALUE(expectedPrice_, expectedPrice) };


  protected:
    shared_ptr<bool> autoPay_ {};
    shared_ptr<int64_t> contactId_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<int64_t> expectedPrice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
