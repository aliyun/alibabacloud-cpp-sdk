// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCNATGATEWAYIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODYVPCSVPCNATGATEWAYIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcsResponseBodyVpcsVpcNatGatewayIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBodyVpcsVpcNatGatewayIds& obj) { 
      DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBodyVpcsVpcNatGatewayIds& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
    };
    DescribeVpcsResponseBodyVpcsVpcNatGatewayIds() = default ;
    DescribeVpcsResponseBodyVpcsVpcNatGatewayIds(const DescribeVpcsResponseBodyVpcsVpcNatGatewayIds &) = default ;
    DescribeVpcsResponseBodyVpcsVpcNatGatewayIds(DescribeVpcsResponseBodyVpcsVpcNatGatewayIds &&) = default ;
    DescribeVpcsResponseBodyVpcsVpcNatGatewayIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBodyVpcsVpcNatGatewayIds() = default ;
    DescribeVpcsResponseBodyVpcsVpcNatGatewayIds& operator=(const DescribeVpcsResponseBodyVpcsVpcNatGatewayIds &) = default ;
    DescribeVpcsResponseBodyVpcsVpcNatGatewayIds& operator=(DescribeVpcsResponseBodyVpcsVpcNatGatewayIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->natGatewayIds_ != nullptr; };
    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const vector<string> & natGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, vector<string>) };
    inline vector<string> natGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, vector<string>) };
    inline DescribeVpcsResponseBodyVpcsVpcNatGatewayIds& setNatGatewayIds(const vector<string> & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeVpcsResponseBodyVpcsVpcNatGatewayIds& setNatGatewayIds(vector<string> && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


  protected:
    std::shared_ptr<vector<string>> natGatewayIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
