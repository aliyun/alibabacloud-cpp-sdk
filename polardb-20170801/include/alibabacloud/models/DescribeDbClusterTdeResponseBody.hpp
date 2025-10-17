// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERTDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERTDERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterTDEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterTDEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EncryptNewTables, encryptNewTables_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(TDERegion, TDERegion_);
      DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterTDEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EncryptNewTables, encryptNewTables_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(TDERegion, TDERegion_);
      DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
    };
    DescribeDBClusterTDEResponseBody() = default ;
    DescribeDBClusterTDEResponseBody(const DescribeDBClusterTDEResponseBody &) = default ;
    DescribeDBClusterTDEResponseBody(DescribeDBClusterTDEResponseBody &&) = default ;
    DescribeDBClusterTDEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterTDEResponseBody() = default ;
    DescribeDBClusterTDEResponseBody& operator=(const DescribeDBClusterTDEResponseBody &) = default ;
    DescribeDBClusterTDEResponseBody& operator=(DescribeDBClusterTDEResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->automaticRotation_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->encryptNewTables_ == nullptr && return this->encryptionKey_ == nullptr && return this->encryptionKeyStatus_ == nullptr && return this->requestId_ == nullptr
        && return this->rotationInterval_ == nullptr && return this->TDERegion_ == nullptr && return this->TDEStatus_ == nullptr; };
    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string automaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline DescribeDBClusterTDEResponseBody& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterTDEResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // encryptNewTables Field Functions 
    bool hasEncryptNewTables() const { return this->encryptNewTables_ != nullptr;};
    void deleteEncryptNewTables() { this->encryptNewTables_ = nullptr;};
    inline string encryptNewTables() const { DARABONBA_PTR_GET_DEFAULT(encryptNewTables_, "") };
    inline DescribeDBClusterTDEResponseBody& setEncryptNewTables(string encryptNewTables) { DARABONBA_PTR_SET_VALUE(encryptNewTables_, encryptNewTables) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBClusterTDEResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyStatus Field Functions 
    bool hasEncryptionKeyStatus() const { return this->encryptionKeyStatus_ != nullptr;};
    void deleteEncryptionKeyStatus() { this->encryptionKeyStatus_ = nullptr;};
    inline string encryptionKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyStatus_, "") };
    inline DescribeDBClusterTDEResponseBody& setEncryptionKeyStatus(string encryptionKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionKeyStatus_, encryptionKeyStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterTDEResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline DescribeDBClusterTDEResponseBody& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // TDERegion Field Functions 
    bool hasTDERegion() const { return this->TDERegion_ != nullptr;};
    void deleteTDERegion() { this->TDERegion_ = nullptr;};
    inline string TDERegion() const { DARABONBA_PTR_GET_DEFAULT(TDERegion_, "") };
    inline DescribeDBClusterTDEResponseBody& setTDERegion(string TDERegion) { DARABONBA_PTR_SET_VALUE(TDERegion_, TDERegion) };


    // TDEStatus Field Functions 
    bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
    void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
    inline string TDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
    inline DescribeDBClusterTDEResponseBody& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


  protected:
    // Indicates whether automatic key rotation is allowed. Valid values:
    // 
    // *   **Enabled**: Automatic key rotation is allowed.
    // *   **Disabled**: Automatic key rotation is not allowed.
    // 
    // >  This parameter is returned only for a PolarDB for PostgreSQL or PolarDB for PostgreSQL (Compatible with Oracle) cluster.
    std::shared_ptr<string> automaticRotation_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Indicates whether automatic encryption is enabled for new tables. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    // 
    // >  This parameter is returned only for a PolarDB for MySQL cluster.
    std::shared_ptr<string> encryptNewTables_ = nullptr;
    // The ID of the custom key.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    std::shared_ptr<string> encryptionKeyStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The automatic key rotation period configured in Key Management Service (KMS). If no automatic key rotation period is configured, 0s is returned. Unit: seconds.
    // 
    // For example, if the rotation period is set to 7 days, 604800s is returned.
    // 
    // >  This parameter is returned only for a PolarDB for PostgreSQL or PolarDB for PostgreSQL (Compatible with Oracle) cluster whose AutomaticRotation parameter is set to Enabled.
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The region where the TDE key resides.
    std::shared_ptr<string> TDERegion_ = nullptr;
    // Indicates whether TDE encryption is enabled. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> TDEStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
