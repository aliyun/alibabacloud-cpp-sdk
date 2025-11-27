// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESSLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ACL, ACL_);
      DARABONBA_PTR_TO_JSON(CAType, CAType_);
      DARABONBA_PTR_TO_JSON(ClientCACert, clientCACert_);
      DARABONBA_PTR_TO_JSON(ClientCACertExpireTime, clientCACertExpireTime_);
      DARABONBA_PTR_TO_JSON(ClientCertRevocationList, clientCertRevocationList_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ForceEncryption, forceEncryption_);
      DARABONBA_PTR_TO_JSON(LastModifyStatus, lastModifyStatus_);
      DARABONBA_PTR_TO_JSON(ModifyStatusReason, modifyStatusReason_);
      DARABONBA_PTR_TO_JSON(ReplicationACL, replicationACL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequireUpdate, requireUpdate_);
      DARABONBA_PTR_TO_JSON(RequireUpdateItem, requireUpdateItem_);
      DARABONBA_PTR_TO_JSON(RequireUpdateReason, requireUpdateReason_);
      DARABONBA_PTR_TO_JSON(SSLCreateTime, SSLCreateTime_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(SSLExpireTime, SSLExpireTime_);
      DARABONBA_PTR_TO_JSON(ServerCAUrl, serverCAUrl_);
      DARABONBA_PTR_TO_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_TO_JSON(ServerKey, serverKey_);
      DARABONBA_PTR_TO_JSON(TlsVersion, tlsVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSSLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ACL, ACL_);
      DARABONBA_PTR_FROM_JSON(CAType, CAType_);
      DARABONBA_PTR_FROM_JSON(ClientCACert, clientCACert_);
      DARABONBA_PTR_FROM_JSON(ClientCACertExpireTime, clientCACertExpireTime_);
      DARABONBA_PTR_FROM_JSON(ClientCertRevocationList, clientCertRevocationList_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ForceEncryption, forceEncryption_);
      DARABONBA_PTR_FROM_JSON(LastModifyStatus, lastModifyStatus_);
      DARABONBA_PTR_FROM_JSON(ModifyStatusReason, modifyStatusReason_);
      DARABONBA_PTR_FROM_JSON(ReplicationACL, replicationACL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequireUpdate, requireUpdate_);
      DARABONBA_PTR_FROM_JSON(RequireUpdateItem, requireUpdateItem_);
      DARABONBA_PTR_FROM_JSON(RequireUpdateReason, requireUpdateReason_);
      DARABONBA_PTR_FROM_JSON(SSLCreateTime, SSLCreateTime_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(SSLExpireTime, SSLExpireTime_);
      DARABONBA_PTR_FROM_JSON(ServerCAUrl, serverCAUrl_);
      DARABONBA_PTR_FROM_JSON(ServerCert, serverCert_);
      DARABONBA_PTR_FROM_JSON(ServerKey, serverKey_);
      DARABONBA_PTR_FROM_JSON(TlsVersion, tlsVersion_);
    };
    DescribeDBInstanceSSLResponseBody() = default ;
    DescribeDBInstanceSSLResponseBody(const DescribeDBInstanceSSLResponseBody &) = default ;
    DescribeDBInstanceSSLResponseBody(DescribeDBInstanceSSLResponseBody &&) = default ;
    DescribeDBInstanceSSLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSSLResponseBody() = default ;
    DescribeDBInstanceSSLResponseBody& operator=(const DescribeDBInstanceSSLResponseBody &) = default ;
    DescribeDBInstanceSSLResponseBody& operator=(DescribeDBInstanceSSLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ACL_ == nullptr
        && return this->CAType_ == nullptr && return this->clientCACert_ == nullptr && return this->clientCACertExpireTime_ == nullptr && return this->clientCertRevocationList_ == nullptr && return this->connectionString_ == nullptr
        && return this->forceEncryption_ == nullptr && return this->lastModifyStatus_ == nullptr && return this->modifyStatusReason_ == nullptr && return this->replicationACL_ == nullptr && return this->requestId_ == nullptr
        && return this->requireUpdate_ == nullptr && return this->requireUpdateItem_ == nullptr && return this->requireUpdateReason_ == nullptr && return this->SSLCreateTime_ == nullptr && return this->SSLEnabled_ == nullptr
        && return this->SSLExpireTime_ == nullptr && return this->serverCAUrl_ == nullptr && return this->serverCert_ == nullptr && return this->serverKey_ == nullptr && return this->tlsVersion_ == nullptr; };
    // ACL Field Functions 
    bool hasACL() const { return this->ACL_ != nullptr;};
    void deleteACL() { this->ACL_ = nullptr;};
    inline string ACL() const { DARABONBA_PTR_GET_DEFAULT(ACL_, "") };
    inline DescribeDBInstanceSSLResponseBody& setACL(string ACL) { DARABONBA_PTR_SET_VALUE(ACL_, ACL) };


    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string CAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline DescribeDBInstanceSSLResponseBody& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string clientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline DescribeDBInstanceSSLResponseBody& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // clientCACertExpireTime Field Functions 
    bool hasClientCACertExpireTime() const { return this->clientCACertExpireTime_ != nullptr;};
    void deleteClientCACertExpireTime() { this->clientCACertExpireTime_ = nullptr;};
    inline string clientCACertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(clientCACertExpireTime_, "") };
    inline DescribeDBInstanceSSLResponseBody& setClientCACertExpireTime(string clientCACertExpireTime) { DARABONBA_PTR_SET_VALUE(clientCACertExpireTime_, clientCACertExpireTime) };


    // clientCertRevocationList Field Functions 
    bool hasClientCertRevocationList() const { return this->clientCertRevocationList_ != nullptr;};
    void deleteClientCertRevocationList() { this->clientCertRevocationList_ = nullptr;};
    inline string clientCertRevocationList() const { DARABONBA_PTR_GET_DEFAULT(clientCertRevocationList_, "") };
    inline DescribeDBInstanceSSLResponseBody& setClientCertRevocationList(string clientCertRevocationList) { DARABONBA_PTR_SET_VALUE(clientCertRevocationList_, clientCertRevocationList) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBInstanceSSLResponseBody& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // forceEncryption Field Functions 
    bool hasForceEncryption() const { return this->forceEncryption_ != nullptr;};
    void deleteForceEncryption() { this->forceEncryption_ = nullptr;};
    inline string forceEncryption() const { DARABONBA_PTR_GET_DEFAULT(forceEncryption_, "") };
    inline DescribeDBInstanceSSLResponseBody& setForceEncryption(string forceEncryption) { DARABONBA_PTR_SET_VALUE(forceEncryption_, forceEncryption) };


    // lastModifyStatus Field Functions 
    bool hasLastModifyStatus() const { return this->lastModifyStatus_ != nullptr;};
    void deleteLastModifyStatus() { this->lastModifyStatus_ = nullptr;};
    inline string lastModifyStatus() const { DARABONBA_PTR_GET_DEFAULT(lastModifyStatus_, "") };
    inline DescribeDBInstanceSSLResponseBody& setLastModifyStatus(string lastModifyStatus) { DARABONBA_PTR_SET_VALUE(lastModifyStatus_, lastModifyStatus) };


    // modifyStatusReason Field Functions 
    bool hasModifyStatusReason() const { return this->modifyStatusReason_ != nullptr;};
    void deleteModifyStatusReason() { this->modifyStatusReason_ = nullptr;};
    inline string modifyStatusReason() const { DARABONBA_PTR_GET_DEFAULT(modifyStatusReason_, "") };
    inline DescribeDBInstanceSSLResponseBody& setModifyStatusReason(string modifyStatusReason) { DARABONBA_PTR_SET_VALUE(modifyStatusReason_, modifyStatusReason) };


    // replicationACL Field Functions 
    bool hasReplicationACL() const { return this->replicationACL_ != nullptr;};
    void deleteReplicationACL() { this->replicationACL_ = nullptr;};
    inline string replicationACL() const { DARABONBA_PTR_GET_DEFAULT(replicationACL_, "") };
    inline DescribeDBInstanceSSLResponseBody& setReplicationACL(string replicationACL) { DARABONBA_PTR_SET_VALUE(replicationACL_, replicationACL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requireUpdate Field Functions 
    bool hasRequireUpdate() const { return this->requireUpdate_ != nullptr;};
    void deleteRequireUpdate() { this->requireUpdate_ = nullptr;};
    inline string requireUpdate() const { DARABONBA_PTR_GET_DEFAULT(requireUpdate_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequireUpdate(string requireUpdate) { DARABONBA_PTR_SET_VALUE(requireUpdate_, requireUpdate) };


    // requireUpdateItem Field Functions 
    bool hasRequireUpdateItem() const { return this->requireUpdateItem_ != nullptr;};
    void deleteRequireUpdateItem() { this->requireUpdateItem_ = nullptr;};
    inline string requireUpdateItem() const { DARABONBA_PTR_GET_DEFAULT(requireUpdateItem_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequireUpdateItem(string requireUpdateItem) { DARABONBA_PTR_SET_VALUE(requireUpdateItem_, requireUpdateItem) };


    // requireUpdateReason Field Functions 
    bool hasRequireUpdateReason() const { return this->requireUpdateReason_ != nullptr;};
    void deleteRequireUpdateReason() { this->requireUpdateReason_ = nullptr;};
    inline string requireUpdateReason() const { DARABONBA_PTR_GET_DEFAULT(requireUpdateReason_, "") };
    inline DescribeDBInstanceSSLResponseBody& setRequireUpdateReason(string requireUpdateReason) { DARABONBA_PTR_SET_VALUE(requireUpdateReason_, requireUpdateReason) };


    // SSLCreateTime Field Functions 
    bool hasSSLCreateTime() const { return this->SSLCreateTime_ != nullptr;};
    void deleteSSLCreateTime() { this->SSLCreateTime_ = nullptr;};
    inline string SSLCreateTime() const { DARABONBA_PTR_GET_DEFAULT(SSLCreateTime_, "") };
    inline DescribeDBInstanceSSLResponseBody& setSSLCreateTime(string SSLCreateTime) { DARABONBA_PTR_SET_VALUE(SSLCreateTime_, SSLCreateTime) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline string SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
    inline DescribeDBInstanceSSLResponseBody& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // SSLExpireTime Field Functions 
    bool hasSSLExpireTime() const { return this->SSLExpireTime_ != nullptr;};
    void deleteSSLExpireTime() { this->SSLExpireTime_ = nullptr;};
    inline string SSLExpireTime() const { DARABONBA_PTR_GET_DEFAULT(SSLExpireTime_, "") };
    inline DescribeDBInstanceSSLResponseBody& setSSLExpireTime(string SSLExpireTime) { DARABONBA_PTR_SET_VALUE(SSLExpireTime_, SSLExpireTime) };


    // serverCAUrl Field Functions 
    bool hasServerCAUrl() const { return this->serverCAUrl_ != nullptr;};
    void deleteServerCAUrl() { this->serverCAUrl_ = nullptr;};
    inline string serverCAUrl() const { DARABONBA_PTR_GET_DEFAULT(serverCAUrl_, "") };
    inline DescribeDBInstanceSSLResponseBody& setServerCAUrl(string serverCAUrl) { DARABONBA_PTR_SET_VALUE(serverCAUrl_, serverCAUrl) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string serverCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline DescribeDBInstanceSSLResponseBody& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string serverKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline DescribeDBInstanceSSLResponseBody& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


    // tlsVersion Field Functions 
    bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
    void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
    inline string tlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
    inline DescribeDBInstanceSSLResponseBody& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


  protected:
    // The method that is used to verify the instance. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    // 
    // *   **cert**
    // *   **prefer**
    // *   **verify-ca**
    // *   **verify-full** (supported only when the instance runs PostgreSQL 12 or later)
    std::shared_ptr<string> ACL_ = nullptr;
    // The type of the server certificate. This parameter is supported only when the instance runs PostgreSQL with cloud disks. Valid values:
    // 
    // *   **aliyun**: a cloud certificate
    // *   **custom**: a custom certificate
    std::shared_ptr<string> CAType_ = nullptr;
    // The public key of the CA that issues client certificates. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    std::shared_ptr<string> clientCACert_ = nullptr;
    // The time when the public key of the CA that issues client certificates expires. This parameter is supported only when the instance runs PostgreSQL with cloud disks. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format and must be in UTC.
    // 
    // This parameter is not supported.
    std::shared_ptr<string> clientCACertExpireTime_ = nullptr;
    // The certificate revocation list (CRL) that contains revoked client certificates. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    std::shared_ptr<string> clientCertRevocationList_ = nullptr;
    // The endpoint that is protected by SSL encryption.
    std::shared_ptr<string> connectionString_ = nullptr;
    // Indicates whether the [forceful SSL encryption](https://help.aliyun.com/document_detail/95715.html) feature is enabled. This parameter is supported only for RDS for SQL Server instances.
    // 
    // *   **1**: The feature is enabled.
    // *   **0**: The feature is disabled.
    std::shared_ptr<string> forceEncryption_ = nullptr;
    // The status of the SSL link. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    // 
    // *   **success**: The SSL link is successfully configured.
    // *   **setting**: The SSL link is being configured.
    // *   **failed**: The SSL link failed to be configured.
    std::shared_ptr<string> lastModifyStatus_ = nullptr;
    // The reason why the SSL link stays in the current state. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    std::shared_ptr<string> modifyStatusReason_ = nullptr;
    // The method that is used to verify the replication permission. This parameter is supported only when the instance runs PostgreSQL with cloud disks. Valid values:
    // 
    // *   **cert**
    // *   **prefer**
    // *   **verify-ca**
    // *   **verify-full** (supported only when the instance runs PostgreSQL 12 or later)
    std::shared_ptr<string> replicationACL_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the SSL certificate needs to be updated. Valid values:
    // 
    // >  An SSL certificate remains valid for one year. Before the used SSL certificate expires, you must update the validity period of the SSL certificate. If you do not update the validity period of the SSL certificate, your application or client that uses encrypted network connections cannot connect to your RDS instance.
    // 
    // **RDS instances that run MySQL and SQL Server**
    // 
    // *   **No**: The SSL certificate does not need to be updated.
    // *   **Yes**: The SSL certificate needs to be updated.
    // 
    // **RDS instances that run PostgreSQL**
    // 
    // *   **0**: The SSL certificate does not need to be updated.
    // *   **1**: The SSL certificate needs to be updated.
    std::shared_ptr<string> requireUpdate_ = nullptr;
    // The server certificate that needs to be updated. This parameter is supported only when the instance runs PostgreSQL with cloud disk.
    std::shared_ptr<string> requireUpdateItem_ = nullptr;
    // The reason why the server certificate needs to be updated. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    std::shared_ptr<string> requireUpdateReason_ = nullptr;
    // The time when the server certificate was created. This parameter is supported only when the instance runs PostgreSQL with cloud disks. In addition, this parameter is valid only when the CAType parameter value is aliyun.
    std::shared_ptr<string> SSLCreateTime_ = nullptr;
    // Indicates whether SSL encryption is enabled. Valid values:
    // 
    // **RDS instances that run MySQL and SQL Server**
    // 
    // *   **Yes**: SSL encryption is enabled.
    // *   **No**: SSL encryption is disabled.
    // 
    // **RDS instances that run PostgreSQL**
    // 
    // *   **on**: SSL encryption is enabled.
    // *   **off**: SSL encryption is disabled.
    std::shared_ptr<string> SSLEnabled_ = nullptr;
    // The time when the SSL certificate expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format and must be in UTC.
    std::shared_ptr<string> SSLExpireTime_ = nullptr;
    // The URL of the certificate that is used to issue the server certificate. This parameter is supported only when the instance runs PostgreSQL with cloud disk.
    std::shared_ptr<string> serverCAUrl_ = nullptr;
    // The content of the server certificate. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    std::shared_ptr<string> serverCert_ = nullptr;
    // The private key of the server certificate. This parameter is supported only when the instance runs PostgreSQL with cloud disks.
    std::shared_ptr<string> serverKey_ = nullptr;
    // The [minimum Transport Layer Security (TLS) version](https://help.aliyun.com/document_detail/95715.html). Valid values: 1.0, 1.1, and 1.2. This parameter is supported only for ApsaraDB RDS for SQL Server instances.
    std::shared_ptr<string> tlsVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
