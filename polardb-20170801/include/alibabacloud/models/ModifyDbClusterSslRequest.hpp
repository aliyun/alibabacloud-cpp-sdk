// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERSSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SSLAutoRotate, SSLAutoRotate_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SSLAutoRotate, SSLAutoRotate_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
    };
    ModifyDBClusterSSLRequest() = default ;
    ModifyDBClusterSSLRequest(const ModifyDBClusterSSLRequest &) = default ;
    ModifyDBClusterSSLRequest(ModifyDBClusterSSLRequest &&) = default ;
    ModifyDBClusterSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterSSLRequest() = default ;
    ModifyDBClusterSSLRequest& operator=(const ModifyDBClusterSSLRequest &) = default ;
    ModifyDBClusterSSLRequest& operator=(ModifyDBClusterSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBEndpointId_ == nullptr && this->netType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->SSLAutoRotate_ == nullptr && this->SSLEnabled_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterSSLRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline ModifyDBClusterSSLRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline ModifyDBClusterSSLRequest& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterSSLRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterSSLRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterSSLRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterSSLRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // SSLAutoRotate Field Functions 
    bool hasSSLAutoRotate() const { return this->SSLAutoRotate_ != nullptr;};
    void deleteSSLAutoRotate() { this->SSLAutoRotate_ = nullptr;};
    inline string getSSLAutoRotate() const { DARABONBA_PTR_GET_DEFAULT(SSLAutoRotate_, "") };
    inline ModifyDBClusterSSLRequest& setSSLAutoRotate(string SSLAutoRotate) { DARABONBA_PTR_SET_VALUE(SSLAutoRotate_, SSLAutoRotate) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline string getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
    inline ModifyDBClusterSSLRequest& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The ID of the endpoint.
    // 
    // > 
    // 
    // *   This parameter is required for PolarDB for MySQL clusters.
    // 
    // *   This parameter is not required for PolarDB for PostgreSQL or PolarDB for PostgreSQL (Compatible with Oracle) clusters. By default, SSL encryption is enabled for all endpoints of the clusters.
    // 
    // *   You can call the [DescribeDBClusterSSL](https://help.aliyun.com/document_detail/2319159.html) operation to view the details of the endpoint.
    shared_ptr<string> DBEndpointId_ {};
    // The network type supported by the endpoint that is specified by **DBEndpointId**. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    // *   **Inner**
    // 
    // > 
    // 
    // *   This parameter is required for a PolarDB for MySQL cluster.
    // 
    // *   This parameter is not required for a PolarDB for Oracle or PolarDB for PostgreSQL cluster. By default, SSL encryption is enabled for all endpoints.
    shared_ptr<string> netType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether automatic rotation of SSL certificates is enabled.
    // 
    // *   **Enable**: The feature is enabled.
    // *   **Disable**: The feature is disabled.
    shared_ptr<string> SSLAutoRotate_ {};
    // The SSL encryption status. Valid values:
    // 
    // *   **Disable**: SSL encryption is disabled.
    // *   **Enable**: SSL encryption is enabled.
    // *   **Update**: The SSL certificate is updated.
    // 
    // > After you enable SSL encryption or update the SSL certificate, you must download and configure the certificate. For more information, see [Configure SSL encryption](https://help.aliyun.com/document_detail/153182.html).
    shared_ptr<string> SSLEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
