// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYSRESPONSEBODYCUSTOMERGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERGATEWAYSRESPONSEBODYCUSTOMERGATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeCustomerGatewaysResponseBodyCustomerGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerGatewaysResponseBodyCustomerGateways& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGateway, customerGateway_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerGatewaysResponseBodyCustomerGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGateway, customerGateway_);
    };
    DescribeCustomerGatewaysResponseBodyCustomerGateways() = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGateways(const DescribeCustomerGatewaysResponseBodyCustomerGateways &) = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGateways(DescribeCustomerGatewaysResponseBodyCustomerGateways &&) = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerGatewaysResponseBodyCustomerGateways() = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGateways& operator=(const DescribeCustomerGatewaysResponseBodyCustomerGateways &) = default ;
    DescribeCustomerGatewaysResponseBodyCustomerGateways& operator=(DescribeCustomerGatewaysResponseBodyCustomerGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerGateway_ == nullptr; };
    // customerGateway Field Functions 
    bool hasCustomerGateway() const { return this->customerGateway_ != nullptr;};
    void deleteCustomerGateway() { this->customerGateway_ = nullptr;};
    inline const vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway> & customerGateway() const { DARABONBA_PTR_GET_CONST(customerGateway_, vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway>) };
    inline vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway> customerGateway() { DARABONBA_PTR_GET(customerGateway_, vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway>) };
    inline DescribeCustomerGatewaysResponseBodyCustomerGateways& setCustomerGateway(const vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway> & customerGateway) { DARABONBA_PTR_SET_VALUE(customerGateway_, customerGateway) };
    inline DescribeCustomerGatewaysResponseBodyCustomerGateways& setCustomerGateway(vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway> && customerGateway) { DARABONBA_PTR_SET_RVALUE(customerGateway_, customerGateway) };


  protected:
    std::shared_ptr<vector<Models::DescribeCustomerGatewaysResponseBodyCustomerGatewaysCustomerGateway>> customerGateway_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
