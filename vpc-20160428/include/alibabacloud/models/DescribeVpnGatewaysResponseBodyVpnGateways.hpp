// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODYVPNGATEWAYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYSRESPONSEBODYVPNGATEWAYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewaysResponseBodyVpnGateways : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewaysResponseBodyVpnGateways& obj) { 
      DARABONBA_PTR_TO_JSON(VpnGateway, vpnGateway_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewaysResponseBodyVpnGateways& obj) { 
      DARABONBA_PTR_FROM_JSON(VpnGateway, vpnGateway_);
    };
    DescribeVpnGatewaysResponseBodyVpnGateways() = default ;
    DescribeVpnGatewaysResponseBodyVpnGateways(const DescribeVpnGatewaysResponseBodyVpnGateways &) = default ;
    DescribeVpnGatewaysResponseBodyVpnGateways(DescribeVpnGatewaysResponseBodyVpnGateways &&) = default ;
    DescribeVpnGatewaysResponseBodyVpnGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewaysResponseBodyVpnGateways() = default ;
    DescribeVpnGatewaysResponseBodyVpnGateways& operator=(const DescribeVpnGatewaysResponseBodyVpnGateways &) = default ;
    DescribeVpnGatewaysResponseBodyVpnGateways& operator=(DescribeVpnGatewaysResponseBodyVpnGateways &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpnGateway_ != nullptr; };
    // vpnGateway Field Functions 
    bool hasVpnGateway() const { return this->vpnGateway_ != nullptr;};
    void deleteVpnGateway() { this->vpnGateway_ = nullptr;};
    inline const vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway> & vpnGateway() const { DARABONBA_PTR_GET_CONST(vpnGateway_, vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway>) };
    inline vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway> vpnGateway() { DARABONBA_PTR_GET(vpnGateway_, vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway>) };
    inline DescribeVpnGatewaysResponseBodyVpnGateways& setVpnGateway(const vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway> & vpnGateway) { DARABONBA_PTR_SET_VALUE(vpnGateway_, vpnGateway) };
    inline DescribeVpnGatewaysResponseBodyVpnGateways& setVpnGateway(vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway> && vpnGateway) { DARABONBA_PTR_SET_RVALUE(vpnGateway_, vpnGateway) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnGatewaysResponseBodyVpnGatewaysVpnGateway>> vpnGateway_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
