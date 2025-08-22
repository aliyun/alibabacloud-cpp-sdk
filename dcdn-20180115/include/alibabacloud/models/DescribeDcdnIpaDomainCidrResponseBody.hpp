// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaDomainCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaDomainCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaDomainCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnIpaDomainCidrResponseBody() = default ;
    DescribeDcdnIpaDomainCidrResponseBody(const DescribeDcdnIpaDomainCidrResponseBody &) = default ;
    DescribeDcdnIpaDomainCidrResponseBody(DescribeDcdnIpaDomainCidrResponseBody &&) = default ;
    DescribeDcdnIpaDomainCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaDomainCidrResponseBody() = default ;
    DescribeDcdnIpaDomainCidrResponseBody& operator=(const DescribeDcdnIpaDomainCidrResponseBody &) = default ;
    DescribeDcdnIpaDomainCidrResponseBody& operator=(DescribeDcdnIpaDomainCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->requestId_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline const vector<string> & cidr() const { DARABONBA_PTR_GET_CONST(cidr_, vector<string>) };
    inline vector<string> cidr() { DARABONBA_PTR_GET(cidr_, vector<string>) };
    inline DescribeDcdnIpaDomainCidrResponseBody& setCidr(const vector<string> & cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };
    inline DescribeDcdnIpaDomainCidrResponseBody& setCidr(vector<string> && cidr) { DARABONBA_PTR_SET_RVALUE(cidr_, cidr) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnIpaDomainCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The back-to-origin IPv4 and IPv6 CIDR blocks.
    std::shared_ptr<vector<string>> cidr_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
