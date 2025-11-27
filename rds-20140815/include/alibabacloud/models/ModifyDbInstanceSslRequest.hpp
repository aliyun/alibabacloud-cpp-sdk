// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCESSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCESSLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceSSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceSSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ACL, ACL_);
      DARABONBA_PTR_TO_JSON(CAType, CAType_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(ClientCACert, clientCACert_);
      DARABONBA_PTR_TO_JSON(ClientCAEnabled, clientCAEnabled_);
      DARABONBA_PTR_TO_JSON(ClientCertRevocationList, clientCertRevocationList_);
      DARABONBA_PTR_TO_JSON(ClientCrlEnabled, clientCrlEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ForceEncryption, forceEncryption_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PassWord, passWord_);
      DARABONBA_PTR_TO_JSON(ReplicationACL, replicationACL_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_TO_JSON(ServerKey, serverKey_);
      DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceSSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ACL, ACL_);
      DARABONBA_PTR_FROM_JSON(CAType, CAType_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(ClientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(ClientCAEnabled, clientCAEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientCertRevocationList, clientCertRevocationList_);
      DARABONBA_PTR_FROM_JSON(ClientCrlEnabled, clientCrlEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ForceEncryption, forceEncryption_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PassWord, passWord_);
      DARABONBA_PTR_FROM_JSON(ReplicationACL, replicationACL_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_FROM_JSON(ServerKey, serverKey_);
      DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
    };
    ModifyDBInstanceSSLRequest() = default ;
    ModifyDBInstanceSSLRequest(const ModifyDBInstanceSSLRequest &) = default ;
    ModifyDBInstanceSSLRequest(ModifyDBInstanceSSLRequest &&) = default ;
    ModifyDBInstanceSSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceSSLRequest() = default ;
    ModifyDBInstanceSSLRequest& operator=(const ModifyDBInstanceSSLRequest &) = default ;
    ModifyDBInstanceSSLRequest& operator=(ModifyDBInstanceSSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ACL_ == nullptr
        && return this->CAType_ == nullptr && return this->certificate_ == nullptr && return this->clientCACert_ == nullptr && return this->clientCAEnabled_ == nullptr && return this->clientCertRevocationList_ == nullptr
        && return this->clientCrlEnabled_ == nullptr && return this->connectionString_ == nullptr && return this->DBInstanceId_ == nullptr && return this->forceEncryption_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->passWord_ == nullptr && return this->replicationACL_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->SSLEnabled_ == nullptr && return this->serverCert_ == nullptr && return this->serverKey_ == nullptr && return this->tlsVersion_ == nullptr; };
    // ACL Field Functions 
    bool hasACL() const { return this->ACL_ != nullptr;};
    void deleteACL() { this->ACL_ = nullptr;};
    inline string ACL() const { DARABONBA_PTR_GET_DEFAULT(ACL_, "") };
    inline ModifyDBInstanceSSLRequest& setACL(string ACL) { DARABONBA_PTR_SET_VALUE(ACL_, ACL) };


    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string CAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline ModifyDBInstanceSSLRequest& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline ModifyDBInstanceSSLRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string clientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline ModifyDBInstanceSSLRequest& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // clientCAEnabled Field Functions 
    bool hasClientCAEnabled() const { return this->clientCAEnabled_ != nullptr;};
    void deleteClientCAEnabled() { this->clientCAEnabled_ = nullptr;};
    inline int32_t clientCAEnabled() const { DARABONBA_PTR_GET_DEFAULT(clientCAEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setClientCAEnabled(int32_t clientCAEnabled) { DARABONBA_PTR_SET_VALUE(clientCAEnabled_, clientCAEnabled) };


    // clientCertRevocationList Field Functions 
    bool hasClientCertRevocationList() const { return this->clientCertRevocationList_ != nullptr;};
    void deleteClientCertRevocationList() { this->clientCertRevocationList_ = nullptr;};
    inline string clientCertRevocationList() const { DARABONBA_PTR_GET_DEFAULT(clientCertRevocationList_, "") };
    inline ModifyDBInstanceSSLRequest& setClientCertRevocationList(string clientCertRevocationList) { DARABONBA_PTR_SET_VALUE(clientCertRevocationList_, clientCertRevocationList) };


    // clientCrlEnabled Field Functions 
    bool hasClientCrlEnabled() const { return this->clientCrlEnabled_ != nullptr;};
    void deleteClientCrlEnabled() { this->clientCrlEnabled_ = nullptr;};
    inline int32_t clientCrlEnabled() const { DARABONBA_PTR_GET_DEFAULT(clientCrlEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setClientCrlEnabled(int32_t clientCrlEnabled) { DARABONBA_PTR_SET_VALUE(clientCrlEnabled_, clientCrlEnabled) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBInstanceSSLRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceSSLRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // forceEncryption Field Functions 
    bool hasForceEncryption() const { return this->forceEncryption_ != nullptr;};
    void deleteForceEncryption() { this->forceEncryption_ = nullptr;};
    inline string forceEncryption() const { DARABONBA_PTR_GET_DEFAULT(forceEncryption_, "") };
    inline ModifyDBInstanceSSLRequest& setForceEncryption(string forceEncryption) { DARABONBA_PTR_SET_VALUE(forceEncryption_, forceEncryption) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceSSLRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceSSLRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // passWord Field Functions 
    bool hasPassWord() const { return this->passWord_ != nullptr;};
    void deletePassWord() { this->passWord_ = nullptr;};
    inline string passWord() const { DARABONBA_PTR_GET_DEFAULT(passWord_, "") };
    inline ModifyDBInstanceSSLRequest& setPassWord(string passWord) { DARABONBA_PTR_SET_VALUE(passWord_, passWord) };


    // replicationACL Field Functions 
    bool hasReplicationACL() const { return this->replicationACL_ != nullptr;};
    void deleteReplicationACL() { this->replicationACL_ = nullptr;};
    inline string replicationACL() const { DARABONBA_PTR_GET_DEFAULT(replicationACL_, "") };
    inline ModifyDBInstanceSSLRequest& setReplicationACL(string replicationACL) { DARABONBA_PTR_SET_VALUE(replicationACL_, replicationACL) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceSSLRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceSSLRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline int32_t SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setSSLEnabled(int32_t SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string serverCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline ModifyDBInstanceSSLRequest& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string serverKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline ModifyDBInstanceSSLRequest& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


    // tlsVersion Field Functions 
    bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
    void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
    inline string tlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
    inline ModifyDBInstanceSSLRequest& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


  protected:
    // The method that is used to verify the identities of clients. This parameter is supported only when the instance runs PostgreSQL with cloud disks. In addition, this parameter is available only when the public key of the CA that issues client certificates is enabled. Valid values:
    // 
    // *   **cert**
    // *   **prefer**
    // *   **verify-ca**
    // *   **verify-full** (supported only when the instance runs PostgreSQL 12 or later)
    std::shared_ptr<string> ACL_ = nullptr;
    // The type of the server certificate. This parameter is supported only when the instance runs MySQL or PostgreSQL with cloud disks. If you set SSLEnabled to **1**, the default value of this parameter is **aliyun**. Valid values:
    // 
    // *   **aliyun**: a cloud certificate
    // *   **custom**: a custom certificate
    std::shared_ptr<string> CAType_ = nullptr;
    // The custom certificate. The custom certificate is in the `PFX` format.
    // 
    // *   Public endpoint: `oss-<The ID of the region>.aliyuncs.com:<The name of the bucket>:<The name of the certificate file (The file name contains the extension.)>`
    // *   Internal endpoint: `oss-<The ID of the region>-internal.aliyuncs.com:<The name of the bucket>:<The name of the certificate file (The file name contains the extension.)>`
    std::shared_ptr<string> certificate_ = nullptr;
    // The public key of the CA that issues client certificates. This parameter is supported only when the instance runs PostgreSQL with cloud disks. This parameter must be specified when ClientCAEbabled is set to **1**.
    std::shared_ptr<string> clientCACert_ = nullptr;
    // Specifies whether to enable the public key of the CA that issues client certificates. This parameter is supported only when the instance runs PostgreSQL with cloud disks. Valid values:
    // 
    // *   **1**: enables the public key.
    // *   **0**: disables the public key.
    std::shared_ptr<int32_t> clientCAEnabled_ = nullptr;
    // The CRL that contains revoked client certificates. This parameter is supported only when the instance runs PostgreSQL with cloud disks. This parameter must be specified when ClientCrlEnabled is set to **1**.
    std::shared_ptr<string> clientCertRevocationList_ = nullptr;
    // Specifies whether to enable a certificate revocation list (CRL) that contains revoked client certificates. This parameter is supported only when the instance runs PostgreSQL with cloud disks. In addition, this parameter is available only when the public key of the CA that issues client certificates is enabled. Valid values:
    // 
    // *   **1**: enables the CRL.
    // *   **0**: disables the CRL.
    std::shared_ptr<int32_t> clientCrlEnabled_ = nullptr;
    // The internal or public endpoint for which the server certificate needs to be created or updated.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Specifies whether to enable the forceful SSL encryption feature. This parameter is supported only for ApsaraDB RDS for SQL Server instances. For more information, see [Configure the SSL encryption feature](https://help.aliyun.com/document_detail/95715.html). Valid values:
    // 
    // *   **1**: enables the feature.
    // *   **0**: disables the feature.
    std::shared_ptr<string> forceEncryption_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The password of the certificate.
    std::shared_ptr<string> passWord_ = nullptr;
    // The method that is used to verify the replication permission. This parameter is supported only when the instance runs PostgreSQL with cloud disks. In addition, this parameter is available only when the public key of the CA that issues client certificates is enabled. Valid values:
    // 
    // *   **cert**
    // *   **prefer**
    // *   **verify-ca**
    // *   **verify-full** (supported only when the instance runs PostgreSQL 12 or later)
    std::shared_ptr<string> replicationACL_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to enable or disable the SSL encryption feature. Valid values:
    // 
    // *   **1**: enables the feature.
    // *   **0**: disables the feature.
    std::shared_ptr<int32_t> SSLEnabled_ = nullptr;
    // The content of the server certificate. This parameter is supported only when the instance runs PostgreSQL with cloud disks. This parameter must be specified when CAType is set to **custom**.
    std::shared_ptr<string> serverCert_ = nullptr;
    // The private key of the server certificate. This parameter is supported only when the instance runs PostgreSQL with cloud disks. This parameter must be specified when CAType is set to **custom**.
    std::shared_ptr<string> serverKey_ = nullptr;
    // The minimum Transport Layer Security (TLS) version. Valid values: 1.0, 1.1, and 1.2. This parameter is supported only for ApsaraDB RDS for SQL Server instances. For more information, see [Configure the SSL encryption feature](https://help.aliyun.com/document_detail/95715.html).
    std::shared_ptr<string> tlsVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
