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
        && this->CAType_ == nullptr && this->certificate_ == nullptr && this->clientCACert_ == nullptr && this->clientCAEnabled_ == nullptr && this->clientCertRevocationList_ == nullptr
        && this->clientCrlEnabled_ == nullptr && this->connectionString_ == nullptr && this->DBInstanceId_ == nullptr && this->forceEncryption_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->passWord_ == nullptr && this->replicationACL_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->SSLEnabled_ == nullptr && this->serverCert_ == nullptr && this->serverKey_ == nullptr && this->tlsVersion_ == nullptr; };
    // ACL Field Functions 
    bool hasACL() const { return this->ACL_ != nullptr;};
    void deleteACL() { this->ACL_ = nullptr;};
    inline string getACL() const { DARABONBA_PTR_GET_DEFAULT(ACL_, "") };
    inline ModifyDBInstanceSSLRequest& setACL(string ACL) { DARABONBA_PTR_SET_VALUE(ACL_, ACL) };


    // CAType Field Functions 
    bool hasCAType() const { return this->CAType_ != nullptr;};
    void deleteCAType() { this->CAType_ = nullptr;};
    inline string getCAType() const { DARABONBA_PTR_GET_DEFAULT(CAType_, "") };
    inline ModifyDBInstanceSSLRequest& setCAType(string CAType) { DARABONBA_PTR_SET_VALUE(CAType_, CAType) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline ModifyDBInstanceSSLRequest& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // clientCACert Field Functions 
    bool hasClientCACert() const { return this->clientCACert_ != nullptr;};
    void deleteClientCACert() { this->clientCACert_ = nullptr;};
    inline string getClientCACert() const { DARABONBA_PTR_GET_DEFAULT(clientCACert_, "") };
    inline ModifyDBInstanceSSLRequest& setClientCACert(string clientCACert) { DARABONBA_PTR_SET_VALUE(clientCACert_, clientCACert) };


    // clientCAEnabled Field Functions 
    bool hasClientCAEnabled() const { return this->clientCAEnabled_ != nullptr;};
    void deleteClientCAEnabled() { this->clientCAEnabled_ = nullptr;};
    inline int32_t getClientCAEnabled() const { DARABONBA_PTR_GET_DEFAULT(clientCAEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setClientCAEnabled(int32_t clientCAEnabled) { DARABONBA_PTR_SET_VALUE(clientCAEnabled_, clientCAEnabled) };


    // clientCertRevocationList Field Functions 
    bool hasClientCertRevocationList() const { return this->clientCertRevocationList_ != nullptr;};
    void deleteClientCertRevocationList() { this->clientCertRevocationList_ = nullptr;};
    inline string getClientCertRevocationList() const { DARABONBA_PTR_GET_DEFAULT(clientCertRevocationList_, "") };
    inline ModifyDBInstanceSSLRequest& setClientCertRevocationList(string clientCertRevocationList) { DARABONBA_PTR_SET_VALUE(clientCertRevocationList_, clientCertRevocationList) };


    // clientCrlEnabled Field Functions 
    bool hasClientCrlEnabled() const { return this->clientCrlEnabled_ != nullptr;};
    void deleteClientCrlEnabled() { this->clientCrlEnabled_ = nullptr;};
    inline int32_t getClientCrlEnabled() const { DARABONBA_PTR_GET_DEFAULT(clientCrlEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setClientCrlEnabled(int32_t clientCrlEnabled) { DARABONBA_PTR_SET_VALUE(clientCrlEnabled_, clientCrlEnabled) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline ModifyDBInstanceSSLRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceSSLRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // forceEncryption Field Functions 
    bool hasForceEncryption() const { return this->forceEncryption_ != nullptr;};
    void deleteForceEncryption() { this->forceEncryption_ = nullptr;};
    inline string getForceEncryption() const { DARABONBA_PTR_GET_DEFAULT(forceEncryption_, "") };
    inline ModifyDBInstanceSSLRequest& setForceEncryption(string forceEncryption) { DARABONBA_PTR_SET_VALUE(forceEncryption_, forceEncryption) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceSSLRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceSSLRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // passWord Field Functions 
    bool hasPassWord() const { return this->passWord_ != nullptr;};
    void deletePassWord() { this->passWord_ = nullptr;};
    inline string getPassWord() const { DARABONBA_PTR_GET_DEFAULT(passWord_, "") };
    inline ModifyDBInstanceSSLRequest& setPassWord(string passWord) { DARABONBA_PTR_SET_VALUE(passWord_, passWord) };


    // replicationACL Field Functions 
    bool hasReplicationACL() const { return this->replicationACL_ != nullptr;};
    void deleteReplicationACL() { this->replicationACL_ = nullptr;};
    inline string getReplicationACL() const { DARABONBA_PTR_GET_DEFAULT(replicationACL_, "") };
    inline ModifyDBInstanceSSLRequest& setReplicationACL(string replicationACL) { DARABONBA_PTR_SET_VALUE(replicationACL_, replicationACL) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceSSLRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceSSLRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline int32_t getSSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, 0) };
    inline ModifyDBInstanceSSLRequest& setSSLEnabled(int32_t SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // serverCert Field Functions 
    bool hasServerCert() const { return this->serverCert_ != nullptr;};
    void deleteServerCert() { this->serverCert_ = nullptr;};
    inline string getServerCert() const { DARABONBA_PTR_GET_DEFAULT(serverCert_, "") };
    inline ModifyDBInstanceSSLRequest& setServerCert(string serverCert) { DARABONBA_PTR_SET_VALUE(serverCert_, serverCert) };


    // serverKey Field Functions 
    bool hasServerKey() const { return this->serverKey_ != nullptr;};
    void deleteServerKey() { this->serverKey_ = nullptr;};
    inline string getServerKey() const { DARABONBA_PTR_GET_DEFAULT(serverKey_, "") };
    inline ModifyDBInstanceSSLRequest& setServerKey(string serverKey) { DARABONBA_PTR_SET_VALUE(serverKey_, serverKey) };


    // tlsVersion Field Functions 
    bool hasTlsVersion() const { return this->tlsVersion_ != nullptr;};
    void deleteTlsVersion() { this->tlsVersion_ = nullptr;};
    inline string getTlsVersion() const { DARABONBA_PTR_GET_DEFAULT(tlsVersion_, "") };
    inline ModifyDBInstanceSSLRequest& setTlsVersion(string tlsVersion) { DARABONBA_PTR_SET_VALUE(tlsVersion_, tlsVersion) };


  protected:
    shared_ptr<string> ACL_ {};
    shared_ptr<string> CAType_ {};
    shared_ptr<string> certificate_ {};
    shared_ptr<string> clientCACert_ {};
    shared_ptr<int32_t> clientCAEnabled_ {};
    shared_ptr<string> clientCertRevocationList_ {};
    shared_ptr<int32_t> clientCrlEnabled_ {};
    // This parameter is required.
    shared_ptr<string> connectionString_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> forceEncryption_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> passWord_ {};
    shared_ptr<string> replicationACL_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<int32_t> SSLEnabled_ {};
    shared_ptr<string> serverCert_ {};
    shared_ptr<string> serverKey_ {};
    shared_ptr<string> tlsVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
