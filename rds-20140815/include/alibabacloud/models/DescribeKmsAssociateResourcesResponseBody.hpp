// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSASSOCIATERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeKmsAssociateResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsAssociateResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateDBInstances, associateDBInstances_);
      DARABONBA_PTR_TO_JSON(AssociateStatus, associateStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsAssociateResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateDBInstances, associateDBInstances_);
      DARABONBA_PTR_FROM_JSON(AssociateStatus, associateStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKmsAssociateResourcesResponseBody() = default ;
    DescribeKmsAssociateResourcesResponseBody(const DescribeKmsAssociateResourcesResponseBody &) = default ;
    DescribeKmsAssociateResourcesResponseBody(DescribeKmsAssociateResourcesResponseBody &&) = default ;
    DescribeKmsAssociateResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsAssociateResourcesResponseBody() = default ;
    DescribeKmsAssociateResourcesResponseBody& operator=(const DescribeKmsAssociateResourcesResponseBody &) = default ;
    DescribeKmsAssociateResourcesResponseBody& operator=(DescribeKmsAssociateResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssociateDBInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociateDBInstances& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(KeyUsedBy, keyUsedBy_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AssociateDBInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(KeyUsedBy, keyUsedBy_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AssociateDBInstances() = default ;
      AssociateDBInstances(const AssociateDBInstances &) = default ;
      AssociateDBInstances(AssociateDBInstances &&) = default ;
      AssociateDBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociateDBInstances() = default ;
      AssociateDBInstances& operator=(const AssociateDBInstances &) = default ;
      AssociateDBInstances& operator=(AssociateDBInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->engine_ == nullptr && this->keyUsedBy_ == nullptr && this->status_ == nullptr; };
      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline AssociateDBInstances& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline AssociateDBInstances& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // keyUsedBy Field Functions 
      bool hasKeyUsedBy() const { return this->keyUsedBy_ != nullptr;};
      void deleteKeyUsedBy() { this->keyUsedBy_ = nullptr;};
      inline string getKeyUsedBy() const { DARABONBA_PTR_GET_DEFAULT(keyUsedBy_, "") };
      inline AssociateDBInstances& setKeyUsedBy(string keyUsedBy) { DARABONBA_PTR_SET_VALUE(keyUsedBy_, keyUsedBy) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AssociateDBInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The instance ID.
      shared_ptr<string> DBInstanceName_ {};
      // The database engine. Valid values:
      // 
      // *   **MySQL**
      // *   **SQLServer**
      // *   **PostgreSQL**
      shared_ptr<string> engine_ {};
      // The purpose of the key. Valid values:
      // 
      // *   **DiskEncryption**: cloud disk encryption
      // *   **TDE**: transparent data encryption
      shared_ptr<string> keyUsedBy_ {};
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
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->associateDBInstances_ == nullptr
        && this->associateStatus_ == nullptr && this->requestId_ == nullptr; };
    // associateDBInstances Field Functions 
    bool hasAssociateDBInstances() const { return this->associateDBInstances_ != nullptr;};
    void deleteAssociateDBInstances() { this->associateDBInstances_ = nullptr;};
    inline const vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances> & getAssociateDBInstances() const { DARABONBA_PTR_GET_CONST(associateDBInstances_, vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances>) };
    inline vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances> getAssociateDBInstances() { DARABONBA_PTR_GET(associateDBInstances_, vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances>) };
    inline DescribeKmsAssociateResourcesResponseBody& setAssociateDBInstances(const vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances> & associateDBInstances) { DARABONBA_PTR_SET_VALUE(associateDBInstances_, associateDBInstances) };
    inline DescribeKmsAssociateResourcesResponseBody& setAssociateDBInstances(vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances> && associateDBInstances) { DARABONBA_PTR_SET_RVALUE(associateDBInstances_, associateDBInstances) };


    // associateStatus Field Functions 
    bool hasAssociateStatus() const { return this->associateStatus_ != nullptr;};
    void deleteAssociateStatus() { this->associateStatus_ = nullptr;};
    inline bool getAssociateStatus() const { DARABONBA_PTR_GET_DEFAULT(associateStatus_, false) };
    inline DescribeKmsAssociateResourcesResponseBody& setAssociateStatus(bool associateStatus) { DARABONBA_PTR_SET_VALUE(associateStatus_, associateStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKmsAssociateResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the associated ApsaraDB RDS instances.
    shared_ptr<vector<DescribeKmsAssociateResourcesResponseBody::AssociateDBInstances>> associateDBInstances_ {};
    // Indicates whether an associated RDS instance exists.
    // 
    // - **true**: Yes
    // - **false**: No
    shared_ptr<bool> associateStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
