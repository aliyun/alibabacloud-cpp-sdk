// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESRESPONSEBODYASSOCIATEDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESRESPONSEBODYASSOCIATEDBINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(KeyUsedBy, keyUsedBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(KeyUsedBy, keyUsedBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances() = default ;
    DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances(const DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances &) = default ;
    DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances(DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances &&) = default ;
    DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances() = default ;
    DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& operator=(const DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances &) = default ;
    DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& operator=(DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->engine_ == nullptr && return this->keyUsedBy_ == nullptr && return this->status_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // keyUsedBy Field Functions 
    bool hasKeyUsedBy() const { return this->keyUsedBy_ != nullptr;};
    void deleteKeyUsedBy() { this->keyUsedBy_ = nullptr;};
    inline string keyUsedBy() const { DARABONBA_PTR_GET_DEFAULT(keyUsedBy_, "") };
    inline DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& setKeyUsedBy(string keyUsedBy) { DARABONBA_PTR_SET_VALUE(keyUsedBy_, keyUsedBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeKmsAssociateResourcesResponseBodyAssociateDBInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The database engine. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    std::shared_ptr<string> engine_ = nullptr;
    // The purpose of the key. Valid values:
    // 
    // *   **DiskEncryption**: cloud disk encryption
    // *   **TDE**: transparent data encryption
    std::shared_ptr<string> keyUsedBy_ = nullptr;
    // The state of the instance. Valid values:
    // 
    // *   **CREATING**: The instance is being created.
    // *   **ACTIVATION**: The instance is running.
    // *   **DELETING**: The instance is being deleted.
    // *   **RESTARTING**: The instance is being restarted.
    // *   **INS_MAINTAINING**: The configuration of the instance is being changed.
    // *   **INS_MAINTAINING**: The instance is being maintained.
    // *   **BACKUP_RECOVERING**: The instance is being restored.
    // *   **NET_MODIFYING**: The network type of the instance is being changed.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
