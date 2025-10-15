// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDomainResponseBodyDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDomainResponseBody() = default ;
    GetDomainResponseBody(const GetDomainResponseBody &) = default ;
    GetDomainResponseBody(GetDomainResponseBody &&) = default ;
    GetDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainResponseBody() = default ;
    GetDomainResponseBody& operator=(const GetDomainResponseBody &) = default ;
    GetDomainResponseBody& operator=(GetDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->requestId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline const GetDomainResponseBodyDomain & domain() const { DARABONBA_PTR_GET_CONST(domain_, GetDomainResponseBodyDomain) };
    inline GetDomainResponseBodyDomain domain() { DARABONBA_PTR_GET(domain_, GetDomainResponseBodyDomain) };
    inline GetDomainResponseBody& setDomain(const GetDomainResponseBodyDomain & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
    inline GetDomainResponseBody& setDomain(GetDomainResponseBodyDomain && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain name.
    std::shared_ptr<GetDomainResponseBodyDomain> domain_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
