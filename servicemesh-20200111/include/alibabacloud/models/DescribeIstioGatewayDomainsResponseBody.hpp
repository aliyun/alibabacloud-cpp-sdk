// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewaySecretDetails, gatewaySecretDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewaySecretDetails, gatewaySecretDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIstioGatewayDomainsResponseBody() = default ;
    DescribeIstioGatewayDomainsResponseBody(const DescribeIstioGatewayDomainsResponseBody &) = default ;
    DescribeIstioGatewayDomainsResponseBody(DescribeIstioGatewayDomainsResponseBody &&) = default ;
    DescribeIstioGatewayDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayDomainsResponseBody() = default ;
    DescribeIstioGatewayDomainsResponseBody& operator=(const DescribeIstioGatewayDomainsResponseBody &) = default ;
    DescribeIstioGatewayDomainsResponseBody& operator=(DescribeIstioGatewayDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewaySecretDetails_ == nullptr
        && return this->requestId_ == nullptr; };
    // gatewaySecretDetails Field Functions 
    bool hasGatewaySecretDetails() const { return this->gatewaySecretDetails_ != nullptr;};
    void deleteGatewaySecretDetails() { this->gatewaySecretDetails_ = nullptr;};
    inline const vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails> & gatewaySecretDetails() const { DARABONBA_PTR_GET_CONST(gatewaySecretDetails_, vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails>) };
    inline vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails> gatewaySecretDetails() { DARABONBA_PTR_GET(gatewaySecretDetails_, vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails>) };
    inline DescribeIstioGatewayDomainsResponseBody& setGatewaySecretDetails(const vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails> & gatewaySecretDetails) { DARABONBA_PTR_SET_VALUE(gatewaySecretDetails_, gatewaySecretDetails) };
    inline DescribeIstioGatewayDomainsResponseBody& setGatewaySecretDetails(vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails> && gatewaySecretDetails) { DARABONBA_PTR_SET_RVALUE(gatewaySecretDetails_, gatewaySecretDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIstioGatewayDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain names that are exposed by the ASM gateway.
    std::shared_ptr<vector<DescribeIstioGatewayDomainsResponseBodyGatewaySecretDetails>> gatewaySecretDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
