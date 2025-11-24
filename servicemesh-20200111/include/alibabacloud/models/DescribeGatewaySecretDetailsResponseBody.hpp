// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGATEWAYSECRETDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGATEWAYSECRETDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGatewaySecretDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGatewaySecretDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GatewaySecretDetails, gatewaySecretDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGatewaySecretDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GatewaySecretDetails, gatewaySecretDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGatewaySecretDetailsResponseBody() = default ;
    DescribeGatewaySecretDetailsResponseBody(const DescribeGatewaySecretDetailsResponseBody &) = default ;
    DescribeGatewaySecretDetailsResponseBody(DescribeGatewaySecretDetailsResponseBody &&) = default ;
    DescribeGatewaySecretDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGatewaySecretDetailsResponseBody() = default ;
    DescribeGatewaySecretDetailsResponseBody& operator=(const DescribeGatewaySecretDetailsResponseBody &) = default ;
    DescribeGatewaySecretDetailsResponseBody& operator=(DescribeGatewaySecretDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewaySecretDetails_ == nullptr
        && return this->requestId_ == nullptr; };
    // gatewaySecretDetails Field Functions 
    bool hasGatewaySecretDetails() const { return this->gatewaySecretDetails_ != nullptr;};
    void deleteGatewaySecretDetails() { this->gatewaySecretDetails_ = nullptr;};
    inline const vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails> & gatewaySecretDetails() const { DARABONBA_PTR_GET_CONST(gatewaySecretDetails_, vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails>) };
    inline vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails> gatewaySecretDetails() { DARABONBA_PTR_GET(gatewaySecretDetails_, vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails>) };
    inline DescribeGatewaySecretDetailsResponseBody& setGatewaySecretDetails(const vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails> & gatewaySecretDetails) { DARABONBA_PTR_SET_VALUE(gatewaySecretDetails_, gatewaySecretDetails) };
    inline DescribeGatewaySecretDetailsResponseBody& setGatewaySecretDetails(vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails> && gatewaySecretDetails) { DARABONBA_PTR_SET_RVALUE(gatewaySecretDetails_, gatewaySecretDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGatewaySecretDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information about the secret of the ASM gateway.
    std::shared_ptr<vector<DescribeGatewaySecretDetailsResponseBodyGatewaySecretDetails>> gatewaySecretDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
