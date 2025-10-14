// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDOMAINOFDNSPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDOMAINOFDNSPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ChangeDomainOfDnsProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDomainOfDnsProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OriginalDomain, originalDomain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDomainOfDnsProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginalDomain, originalDomain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeDomainOfDnsProductResponseBody() = default ;
    ChangeDomainOfDnsProductResponseBody(const ChangeDomainOfDnsProductResponseBody &) = default ;
    ChangeDomainOfDnsProductResponseBody(ChangeDomainOfDnsProductResponseBody &&) = default ;
    ChangeDomainOfDnsProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDomainOfDnsProductResponseBody() = default ;
    ChangeDomainOfDnsProductResponseBody& operator=(const ChangeDomainOfDnsProductResponseBody &) = default ;
    ChangeDomainOfDnsProductResponseBody& operator=(ChangeDomainOfDnsProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originalDomain_ == nullptr
        && return this->requestId_ == nullptr; };
    // originalDomain Field Functions 
    bool hasOriginalDomain() const { return this->originalDomain_ != nullptr;};
    void deleteOriginalDomain() { this->originalDomain_ = nullptr;};
    inline string originalDomain() const { DARABONBA_PTR_GET_DEFAULT(originalDomain_, "") };
    inline ChangeDomainOfDnsProductResponseBody& setOriginalDomain(string originalDomain) { DARABONBA_PTR_SET_VALUE(originalDomain_, originalDomain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeDomainOfDnsProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain name that is originally bound to the instance. If no value is returned for this parameter, the instance is bound to a domain name for the first time.
    std::shared_ptr<string> originalDomain_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
