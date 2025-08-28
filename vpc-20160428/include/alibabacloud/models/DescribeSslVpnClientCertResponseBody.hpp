// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaCert, caCert_);
      DARABONBA_PTR_TO_JSON(ClientCert, clientCert_);
      DARABONBA_PTR_TO_JSON(ClientConfig, clientConfig_);
      DARABONBA_PTR_TO_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SslVpnClientCertId, sslVpnClientCertId_);
      DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCert, caCert_);
      DARABONBA_PTR_FROM_JSON(ClientCert, clientCert_);
      DARABONBA_PTR_FROM_JSON(ClientConfig, clientConfig_);
      DARABONBA_PTR_FROM_JSON(ClientKey, clientKey_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertId, sslVpnClientCertId_);
      DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSslVpnClientCertResponseBody() = default ;
    DescribeSslVpnClientCertResponseBody(const DescribeSslVpnClientCertResponseBody &) = default ;
    DescribeSslVpnClientCertResponseBody(DescribeSslVpnClientCertResponseBody &&) = default ;
    DescribeSslVpnClientCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientCertResponseBody() = default ;
    DescribeSslVpnClientCertResponseBody& operator=(const DescribeSslVpnClientCertResponseBody &) = default ;
    DescribeSslVpnClientCertResponseBody& operator=(DescribeSslVpnClientCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caCert_ != nullptr
        && this->clientCert_ != nullptr && this->clientConfig_ != nullptr && this->clientKey_ != nullptr && this->createTime_ != nullptr && this->endTime_ != nullptr
        && this->name_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->sslVpnClientCertId_ != nullptr
        && this->sslVpnServerId_ != nullptr && this->status_ != nullptr; };
    // caCert Field Functions 
    bool hasCaCert() const { return this->caCert_ != nullptr;};
    void deleteCaCert() { this->caCert_ = nullptr;};
    inline string caCert() const { DARABONBA_PTR_GET_DEFAULT(caCert_, "") };
    inline DescribeSslVpnClientCertResponseBody& setCaCert(string caCert) { DARABONBA_PTR_SET_VALUE(caCert_, caCert) };


    // clientCert Field Functions 
    bool hasClientCert() const { return this->clientCert_ != nullptr;};
    void deleteClientCert() { this->clientCert_ = nullptr;};
    inline string clientCert() const { DARABONBA_PTR_GET_DEFAULT(clientCert_, "") };
    inline DescribeSslVpnClientCertResponseBody& setClientCert(string clientCert) { DARABONBA_PTR_SET_VALUE(clientCert_, clientCert) };


    // clientConfig Field Functions 
    bool hasClientConfig() const { return this->clientConfig_ != nullptr;};
    void deleteClientConfig() { this->clientConfig_ = nullptr;};
    inline string clientConfig() const { DARABONBA_PTR_GET_DEFAULT(clientConfig_, "") };
    inline DescribeSslVpnClientCertResponseBody& setClientConfig(string clientConfig) { DARABONBA_PTR_SET_VALUE(clientConfig_, clientConfig) };


    // clientKey Field Functions 
    bool hasClientKey() const { return this->clientKey_ != nullptr;};
    void deleteClientKey() { this->clientKey_ = nullptr;};
    inline string clientKey() const { DARABONBA_PTR_GET_DEFAULT(clientKey_, "") };
    inline DescribeSslVpnClientCertResponseBody& setClientKey(string clientKey) { DARABONBA_PTR_SET_VALUE(clientKey_, clientKey) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSslVpnClientCertResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSslVpnClientCertResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSslVpnClientCertResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSslVpnClientCertResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSslVpnClientCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSslVpnClientCertResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sslVpnClientCertId Field Functions 
    bool hasSslVpnClientCertId() const { return this->sslVpnClientCertId_ != nullptr;};
    void deleteSslVpnClientCertId() { this->sslVpnClientCertId_ = nullptr;};
    inline string sslVpnClientCertId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnClientCertId_, "") };
    inline DescribeSslVpnClientCertResponseBody& setSslVpnClientCertId(string sslVpnClientCertId) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertId_, sslVpnClientCertId) };


    // sslVpnServerId Field Functions 
    bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
    void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
    inline string sslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
    inline DescribeSslVpnClientCertResponseBody& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSslVpnClientCertResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The CA certificate.
    std::shared_ptr<string> caCert_ = nullptr;
    // The client certificate.
    std::shared_ptr<string> clientCert_ = nullptr;
    // The client configuration.
    std::shared_ptr<string> clientConfig_ = nullptr;
    // The client key.
    std::shared_ptr<string> clientKey_ = nullptr;
    // The timestamp that indicates when the SSL client certificate was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The timestamp that indicates when the SSL client certificate expires. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the SSL client certificate.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region where the SSL client certificate is created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the SSL client certificate belongs.
    // 
    // The SSL client certificate and the SSL server associated with the SSL client certificate belong to the same resource group. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the SSL client certificate.
    std::shared_ptr<string> sslVpnClientCertId_ = nullptr;
    // The ID of the SSL server.
    std::shared_ptr<string> sslVpnServerId_ = nullptr;
    // The status of the SSL client certificate. Valid values:
    // 
    // *   **expiring-soon**
    // *   **normal**
    // *   **expired**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
