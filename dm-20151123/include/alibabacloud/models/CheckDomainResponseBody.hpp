// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CheckDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
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
    virtual bool empty() const override { return this->domainStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline int32_t getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, 0) };
    inline CheckDomainResponseBody& setDomainStatus(int32_t domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Domain status. Indicates whether the verification was successful, with values as follows:
    // 
    // - **0**: Available, verified successfully
    // - **1**: Unavailable, verification failed
    shared_ptr<int32_t> domainStatus_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
