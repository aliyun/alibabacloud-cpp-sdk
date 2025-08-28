// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(MinutePeriod, minutePeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(MinutePeriod, minutePeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    DescribeVpnConnectionLogsRequest() = default ;
    DescribeVpnConnectionLogsRequest(const DescribeVpnConnectionLogsRequest &) = default ;
    DescribeVpnConnectionLogsRequest(DescribeVpnConnectionLogsRequest &&) = default ;
    DescribeVpnConnectionLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionLogsRequest() = default ;
    DescribeVpnConnectionLogsRequest& operator=(const DescribeVpnConnectionLogsRequest &) = default ;
    DescribeVpnConnectionLogsRequest& operator=(DescribeVpnConnectionLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->minutePeriod_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->to_ != nullptr && this->tunnelId_ != nullptr
        && this->vpnConnectionId_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline DescribeVpnConnectionLogsRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // minutePeriod Field Functions 
    bool hasMinutePeriod() const { return this->minutePeriod_ != nullptr;};
    void deleteMinutePeriod() { this->minutePeriod_ = nullptr;};
    inline int32_t minutePeriod() const { DARABONBA_PTR_GET_DEFAULT(minutePeriod_, 0) };
    inline DescribeVpnConnectionLogsRequest& setMinutePeriod(int32_t minutePeriod) { DARABONBA_PTR_SET_VALUE(minutePeriod_, minutePeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeVpnConnectionLogsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpnConnectionLogsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnConnectionLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnConnectionLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpnConnectionLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeVpnConnectionLogsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeVpnConnectionLogsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline DescribeVpnConnectionLogsRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string tunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline DescribeVpnConnectionLogsRequest& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline DescribeVpnConnectionLogsRequest& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // The start time of the flow log. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  If you specify **From**, you must specify **To** or **MinutePeriod**.
    std::shared_ptr<int32_t> from_ = nullptr;
    // The interval at which log data is collected. Valid values: **1** to **10**. Unit: minutes.
    // 
    // >  If you do not specify **From** and **To**, you must specify **MinutePeriod**.
    std::shared_ptr<int32_t> minutePeriod_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1** to **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the IPsec-VPN connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The end time of the flow log. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  If you specify **To**, you must specify **From** or **MinutePeriod**.
    std::shared_ptr<int32_t> to_ = nullptr;
    // The ID of the IPsec-VPN connection.
    // 
    // This parameter is available only for a dual-tunnel IPsec-VPN connection.
    std::shared_ptr<string> tunnelId_ = nullptr;
    // The ID of the IPsec-VPN connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
