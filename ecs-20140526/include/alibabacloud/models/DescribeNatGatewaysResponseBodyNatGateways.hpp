// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODYNATGATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatGatewaysResponseBodyNatGatewaysNatGateway.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNatGatewaysResponseBodyNatGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBodyNatGateways& obj) { 
      DARABONBA_PTR_TO_JSON(NatGateway, natGateway_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBodyNatGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGateway, natGateway_);
    };
    DescribeNatGatewaysResponseBodyNatGateways() = default ;
    DescribeNatGatewaysResponseBodyNatGateways(const DescribeNatGatewaysResponseBodyNatGateways &) = default ;
    DescribeNatGatewaysResponseBodyNatGateways(DescribeNatGatewaysResponseBodyNatGateways &&) = default ;
    DescribeNatGatewaysResponseBodyNatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBodyNatGateways() = default ;
    DescribeNatGatewaysResponseBodyNatGateways& operator=(const DescribeNatGatewaysResponseBodyNatGateways &) = default ;
    DescribeNatGatewaysResponseBodyNatGateways& operator=(DescribeNatGatewaysResponseBodyNatGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natGateway_ != nullptr; };
    // natGateway Field Functions 
    bool hasNatGateway() const { return this->natGateway_ != nullptr;};
    void deleteNatGateway() { this->natGateway_ = nullptr;};
    inline const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway> & natGateway() const { DARABONBA_PTR_GET_CONST(natGateway_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway>) };
    inline vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway> natGateway() { DARABONBA_PTR_GET(natGateway_, vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway>) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setNatGateway(const vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway> & natGateway) { DARABONBA_PTR_SET_VALUE(natGateway_, natGateway) };
    inline DescribeNatGatewaysResponseBodyNatGateways& setNatGateway(vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway> && natGateway) { DARABONBA_PTR_SET_RVALUE(natGateway_, natGateway) };


  protected:
    std::shared_ptr<vector<Models::DescribeNatGatewaysResponseBodyNatGatewaysNatGateway>> natGateway_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
