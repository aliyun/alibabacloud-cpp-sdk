// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionsResponseBodyVpnConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBodyVpnConnections& obj) { 
      DARABONBA_PTR_TO_JSON(VpnConnection, vpnConnection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBodyVpnConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(VpnConnection, vpnConnection_);
    };
    DescribeVpnConnectionsResponseBodyVpnConnections() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnections(const DescribeVpnConnectionsResponseBodyVpnConnections &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnections(DescribeVpnConnectionsResponseBodyVpnConnections &&) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBodyVpnConnections() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnections& operator=(const DescribeVpnConnectionsResponseBodyVpnConnections &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnections& operator=(DescribeVpnConnectionsResponseBodyVpnConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpnConnection_ == nullptr; };
    // vpnConnection Field Functions 
    bool hasVpnConnection() const { return this->vpnConnection_ != nullptr;};
    void deleteVpnConnection() { this->vpnConnection_ = nullptr;};
    inline const vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection> & vpnConnection() const { DARABONBA_PTR_GET_CONST(vpnConnection_, vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection>) };
    inline vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection> vpnConnection() { DARABONBA_PTR_GET(vpnConnection_, vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection>) };
    inline DescribeVpnConnectionsResponseBodyVpnConnections& setVpnConnection(const vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection> & vpnConnection) { DARABONBA_PTR_SET_VALUE(vpnConnection_, vpnConnection) };
    inline DescribeVpnConnectionsResponseBodyVpnConnections& setVpnConnection(vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection> && vpnConnection) { DARABONBA_PTR_SET_RVALUE(vpnConnection_, vpnConnection) };


  protected:
    std::shared_ptr<vector<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection>> vpnConnection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
