// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEVPNCONNECTIONSREQUEST_HPP_
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
  class DiagnoseVpnConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseVpnConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TunnelIds, tunnelIds_);
      DARABONBA_PTR_TO_JSON(VpnConnectionIds, vpnConnectionIds_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseVpnConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TunnelIds, tunnelIds_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionIds, vpnConnectionIds_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DiagnoseVpnConnectionsRequest() = default ;
    DiagnoseVpnConnectionsRequest(const DiagnoseVpnConnectionsRequest &) = default ;
    DiagnoseVpnConnectionsRequest(DiagnoseVpnConnectionsRequest &&) = default ;
    DiagnoseVpnConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseVpnConnectionsRequest() = default ;
    DiagnoseVpnConnectionsRequest& operator=(const DiagnoseVpnConnectionsRequest &) = default ;
    DiagnoseVpnConnectionsRequest& operator=(DiagnoseVpnConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr && this->tunnelIds_ == nullptr && this->vpnConnectionIds_ == nullptr
        && this->vpnGatewayId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DiagnoseVpnConnectionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DiagnoseVpnConnectionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DiagnoseVpnConnectionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DiagnoseVpnConnectionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tunnelIds Field Functions 
    bool hasTunnelIds() const { return this->tunnelIds_ != nullptr;};
    void deleteTunnelIds() { this->tunnelIds_ = nullptr;};
    inline const vector<string> & getTunnelIds() const { DARABONBA_PTR_GET_CONST(tunnelIds_, vector<string>) };
    inline vector<string> getTunnelIds() { DARABONBA_PTR_GET(tunnelIds_, vector<string>) };
    inline DiagnoseVpnConnectionsRequest& setTunnelIds(const vector<string> & tunnelIds) { DARABONBA_PTR_SET_VALUE(tunnelIds_, tunnelIds) };
    inline DiagnoseVpnConnectionsRequest& setTunnelIds(vector<string> && tunnelIds) { DARABONBA_PTR_SET_RVALUE(tunnelIds_, tunnelIds) };


    // vpnConnectionIds Field Functions 
    bool hasVpnConnectionIds() const { return this->vpnConnectionIds_ != nullptr;};
    void deleteVpnConnectionIds() { this->vpnConnectionIds_ = nullptr;};
    inline const vector<string> & getVpnConnectionIds() const { DARABONBA_PTR_GET_CONST(vpnConnectionIds_, vector<string>) };
    inline vector<string> getVpnConnectionIds() { DARABONBA_PTR_GET(vpnConnectionIds_, vector<string>) };
    inline DiagnoseVpnConnectionsRequest& setVpnConnectionIds(const vector<string> & vpnConnectionIds) { DARABONBA_PTR_SET_VALUE(vpnConnectionIds_, vpnConnectionIds) };
    inline DiagnoseVpnConnectionsRequest& setVpnConnectionIds(vector<string> && vpnConnectionIds) { DARABONBA_PTR_SET_RVALUE(vpnConnectionIds_, vpnConnectionIds) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DiagnoseVpnConnectionsRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The page number. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the IPsec-VPN connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of tunnel IDs.
    shared_ptr<vector<string>> tunnelIds_ {};
    // The IDs of IPsec-VPN connections.
    shared_ptr<vector<string>> vpnConnectionIds_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
