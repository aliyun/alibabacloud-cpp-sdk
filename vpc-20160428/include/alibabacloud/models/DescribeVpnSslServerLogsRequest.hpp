// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNSSLSERVERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNSSLSERVERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnSslServerLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnSslServerLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(MinutePeriod, minutePeriod_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SslVpnClientCertId, sslVpnClientCertId_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(VpnSslServerId, vpnSslServerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnSslServerLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(MinutePeriod, minutePeriod_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertId, sslVpnClientCertId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(VpnSslServerId, vpnSslServerId_);
    };
    DescribeVpnSslServerLogsRequest() = default ;
    DescribeVpnSslServerLogsRequest(const DescribeVpnSslServerLogsRequest &) = default ;
    DescribeVpnSslServerLogsRequest(DescribeVpnSslServerLogsRequest &&) = default ;
    DescribeVpnSslServerLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnSslServerLogsRequest() = default ;
    DescribeVpnSslServerLogsRequest& operator=(const DescribeVpnSslServerLogsRequest &) = default ;
    DescribeVpnSslServerLogsRequest& operator=(DescribeVpnSslServerLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->minutePeriod_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sslVpnClientCertId_ == nullptr && this->to_ == nullptr
        && this->vpnSslServerId_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline DescribeVpnSslServerLogsRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // minutePeriod Field Functions 
    bool hasMinutePeriod() const { return this->minutePeriod_ != nullptr;};
    void deleteMinutePeriod() { this->minutePeriod_ = nullptr;};
    inline int32_t getMinutePeriod() const { DARABONBA_PTR_GET_DEFAULT(minutePeriod_, 0) };
    inline DescribeVpnSslServerLogsRequest& setMinutePeriod(int32_t minutePeriod) { DARABONBA_PTR_SET_VALUE(minutePeriod_, minutePeriod) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeVpnSslServerLogsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVpnSslServerLogsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnSslServerLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnSslServerLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpnSslServerLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeVpnSslServerLogsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeVpnSslServerLogsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sslVpnClientCertId Field Functions 
    bool hasSslVpnClientCertId() const { return this->sslVpnClientCertId_ != nullptr;};
    void deleteSslVpnClientCertId() { this->sslVpnClientCertId_ = nullptr;};
    inline string getSslVpnClientCertId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnClientCertId_, "") };
    inline DescribeVpnSslServerLogsRequest& setSslVpnClientCertId(string sslVpnClientCertId) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertId_, sslVpnClientCertId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline DescribeVpnSslServerLogsRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // vpnSslServerId Field Functions 
    bool hasVpnSslServerId() const { return this->vpnSslServerId_ != nullptr;};
    void deleteVpnSslServerId() { this->vpnSslServerId_ = nullptr;};
    inline string getVpnSslServerId() const { DARABONBA_PTR_GET_DEFAULT(vpnSslServerId_, "") };
    inline DescribeVpnSslServerLogsRequest& setVpnSslServerId(string vpnSslServerId) { DARABONBA_PTR_SET_VALUE(vpnSslServerId_, vpnSslServerId) };


  protected:
    // The beginning of the time range to query. The value must be a unix timestamp. For example, 1600738962 specifies 09:42:42 (UTC+8) on September 22, 2020.
    // 
    // >  If you specify **From**, you must also specify **To** or **MinutePeriod**.
    shared_ptr<int32_t> from_ {};
    // The interval at which log data is queried. Unit: minutes.
    // 
    // >  If both **From** and **To** are not specified, you must specify **MinutePeriod**.
    shared_ptr<int32_t> minutePeriod_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the SSL server is created. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the SSL client certificate.
    shared_ptr<string> sslVpnClientCertId_ {};
    // The end of the time range to query. The value must be a unix timestamp. For example, 1600738962 specifies 09:42:42 (UTC+8) on September 22, 2020.
    // 
    // >  If you specify **To**, you must also specify **From** or **MinutePeriod**.
    shared_ptr<int32_t> to_ {};
    // The ID of the SSL server.
    // 
    // This parameter is required.
    shared_ptr<string> vpnSslServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
