// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CreateFixedPriceSelectedOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedPriceSelectedOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExpectedPrice, expectedPrice_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedPriceSelectedOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExpectedPrice, expectedPrice_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    CreateFixedPriceSelectedOrderRequest() = default ;
    CreateFixedPriceSelectedOrderRequest(const CreateFixedPriceSelectedOrderRequest &) = default ;
    CreateFixedPriceSelectedOrderRequest(CreateFixedPriceSelectedOrderRequest &&) = default ;
    CreateFixedPriceSelectedOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedPriceSelectedOrderRequest() = default ;
    CreateFixedPriceSelectedOrderRequest& operator=(const CreateFixedPriceSelectedOrderRequest &) = default ;
    CreateFixedPriceSelectedOrderRequest& operator=(CreateFixedPriceSelectedOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->contactId_ == nullptr && return this->domainName_ == nullptr && return this->expectedPrice_ == nullptr && return this->source_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateFixedPriceSelectedOrderRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline CreateFixedPriceSelectedOrderRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateFixedPriceSelectedOrderRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // expectedPrice Field Functions 
    bool hasExpectedPrice() const { return this->expectedPrice_ != nullptr;};
    void deleteExpectedPrice() { this->expectedPrice_ = nullptr;};
    inline double expectedPrice() const { DARABONBA_PTR_GET_DEFAULT(expectedPrice_, 0.0) };
    inline CreateFixedPriceSelectedOrderRequest& setExpectedPrice(double expectedPrice) { DARABONBA_PTR_SET_VALUE(expectedPrice_, expectedPrice) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateFixedPriceSelectedOrderRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> expectedPrice_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
