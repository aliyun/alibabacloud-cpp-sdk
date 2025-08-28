// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODYSSLVPNCLIENTCERTKEYSSSLVPNCLIENTCERTKEY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODYSSLVPNCLIENTCERTKEYSSSLVPNCLIENTCERTKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SslVpnClientCertId, sslVpnClientCertId_);
      DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertId, sslVpnClientCertId_);
      DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey() = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey(const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey &) = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey(DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey &&) = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey() = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& operator=(const DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey &) = default ;
    DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& operator=(DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->endTime_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->sslVpnClientCertId_ != nullptr
        && this->sslVpnServerId_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sslVpnClientCertId Field Functions 
    bool hasSslVpnClientCertId() const { return this->sslVpnClientCertId_ != nullptr;};
    void deleteSslVpnClientCertId() { this->sslVpnClientCertId_ = nullptr;};
    inline string sslVpnClientCertId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnClientCertId_, "") };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setSslVpnClientCertId(string sslVpnClientCertId) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertId_, sslVpnClientCertId) };


    // sslVpnServerId Field Functions 
    bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
    void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
    inline string sslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSslVpnClientCertsResponseBodySslVpnClientCertKeysSslVpnClientCertKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The timestamp generated when the SSL client certificate was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The timestamp generated when the SSL client certificate expires. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the SSL client certificate.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID of the SSL client certificate.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the SSL client certificate belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the SSL client certificate.
    std::shared_ptr<string> sslVpnClientCertId_ = nullptr;
    // The ID of the SSL server.
    std::shared_ptr<string> sslVpnServerId_ = nullptr;
    // The status of the SSL client certificate. Valid values:
    // 
    // *   **expiring-soon**: The certificate expires in one week.
    // *   **normal**
    // *   **expired**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
