// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONRESPONSEBODYTUNNELOPTIONSSPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONRESPONSEBODYTUNNELOPTIONSSPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionResponseBodyTunnelOptionsSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionResponseBodyTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(TunnelOptions, tunnelOptions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionResponseBodyTunnelOptionsSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(TunnelOptions, tunnelOptions_);
    };
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecification() = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecification(const DescribeVpnConnectionResponseBodyTunnelOptionsSpecification &) = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecification(DescribeVpnConnectionResponseBodyTunnelOptionsSpecification &&) = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionResponseBodyTunnelOptionsSpecification() = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecification& operator=(const DescribeVpnConnectionResponseBodyTunnelOptionsSpecification &) = default ;
    DescribeVpnConnectionResponseBodyTunnelOptionsSpecification& operator=(DescribeVpnConnectionResponseBodyTunnelOptionsSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tunnelOptions_ == nullptr; };
    // tunnelOptions Field Functions 
    bool hasTunnelOptions() const { return this->tunnelOptions_ != nullptr;};
    void deleteTunnelOptions() { this->tunnelOptions_ = nullptr;};
    inline const vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions> & tunnelOptions() const { DARABONBA_PTR_GET_CONST(tunnelOptions_, vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions>) };
    inline vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions> tunnelOptions() { DARABONBA_PTR_GET(tunnelOptions_, vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions>) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecification& setTunnelOptions(const vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions> & tunnelOptions) { DARABONBA_PTR_SET_VALUE(tunnelOptions_, tunnelOptions) };
    inline DescribeVpnConnectionResponseBodyTunnelOptionsSpecification& setTunnelOptions(vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions> && tunnelOptions) { DARABONBA_PTR_SET_RVALUE(tunnelOptions_, tunnelOptions) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnConnectionResponseBodyTunnelOptionsSpecificationTunnelOptions>> tunnelOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
