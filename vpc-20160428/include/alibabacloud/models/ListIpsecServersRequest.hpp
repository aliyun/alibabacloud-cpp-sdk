// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPSECSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPSECSERVERSREQUEST_HPP_
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
  class ListIpsecServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpsecServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_TO_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpsecServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_FROM_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ListIpsecServersRequest() = default ;
    ListIpsecServersRequest(const ListIpsecServersRequest &) = default ;
    ListIpsecServersRequest(ListIpsecServersRequest &&) = default ;
    ListIpsecServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpsecServersRequest() = default ;
    ListIpsecServersRequest& operator=(const ListIpsecServersRequest &) = default ;
    ListIpsecServersRequest& operator=(ListIpsecServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipsecServerId_ == nullptr
        && this->ipsecServerName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->vpnGatewayId_ == nullptr; };
    // ipsecServerId Field Functions 
    bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
    void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
    inline const vector<string> & getIpsecServerId() const { DARABONBA_PTR_GET_CONST(ipsecServerId_, vector<string>) };
    inline vector<string> getIpsecServerId() { DARABONBA_PTR_GET(ipsecServerId_, vector<string>) };
    inline ListIpsecServersRequest& setIpsecServerId(const vector<string> & ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };
    inline ListIpsecServersRequest& setIpsecServerId(vector<string> && ipsecServerId) { DARABONBA_PTR_SET_RVALUE(ipsecServerId_, ipsecServerId) };


    // ipsecServerName Field Functions 
    bool hasIpsecServerName() const { return this->ipsecServerName_ != nullptr;};
    void deleteIpsecServerName() { this->ipsecServerName_ = nullptr;};
    inline string getIpsecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerName_, "") };
    inline ListIpsecServersRequest& setIpsecServerName(string ipsecServerName) { DARABONBA_PTR_SET_VALUE(ipsecServerName_, ipsecServerName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpsecServersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpsecServersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpsecServersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpsecServersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ListIpsecServersRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The ID of the IPsec server.
    shared_ptr<vector<string>> ipsecServerId_ {};
    // The name of the IPsec server.
    // 
    // The name must be 1 to 100 characters in length.
    shared_ptr<string> ipsecServerName_ {};
    // The number of entries to return on each page. Valid values: **1** to **20**. Default value: **10**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If this is your first request and no next requests are to be performed, you do not need to specify this parameter.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the IPsec server is created.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the IPsec server belongs.
    // 
    // The IPsec server and its associated VPN gateway belong to the same resource group. You can call [DescribeVpnGateway](https://help.aliyun.com/document_detail/2794055.html) to query the ID of the resource group to which the VPN gateway belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
