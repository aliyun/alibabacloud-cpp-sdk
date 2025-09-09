// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNetworkDomainResponseBodyNetworkDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetNetworkDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkDomain, networkDomain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkDomain, networkDomain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNetworkDomainResponseBody() = default ;
    GetNetworkDomainResponseBody(const GetNetworkDomainResponseBody &) = default ;
    GetNetworkDomainResponseBody(GetNetworkDomainResponseBody &&) = default ;
    GetNetworkDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkDomainResponseBody() = default ;
    GetNetworkDomainResponseBody& operator=(const GetNetworkDomainResponseBody &) = default ;
    GetNetworkDomainResponseBody& operator=(GetNetworkDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkDomain_ != nullptr
        && this->requestId_ != nullptr; };
    // networkDomain Field Functions 
    bool hasNetworkDomain() const { return this->networkDomain_ != nullptr;};
    void deleteNetworkDomain() { this->networkDomain_ = nullptr;};
    inline const GetNetworkDomainResponseBodyNetworkDomain & networkDomain() const { DARABONBA_PTR_GET_CONST(networkDomain_, GetNetworkDomainResponseBodyNetworkDomain) };
    inline GetNetworkDomainResponseBodyNetworkDomain networkDomain() { DARABONBA_PTR_GET(networkDomain_, GetNetworkDomainResponseBodyNetworkDomain) };
    inline GetNetworkDomainResponseBody& setNetworkDomain(const GetNetworkDomainResponseBodyNetworkDomain & networkDomain) { DARABONBA_PTR_SET_VALUE(networkDomain_, networkDomain) };
    inline GetNetworkDomainResponseBody& setNetworkDomain(GetNetworkDomainResponseBodyNetworkDomain && networkDomain) { DARABONBA_PTR_SET_RVALUE(networkDomain_, networkDomain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNetworkDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the network domain.
    std::shared_ptr<GetNetworkDomainResponseBodyNetworkDomain> networkDomain_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
