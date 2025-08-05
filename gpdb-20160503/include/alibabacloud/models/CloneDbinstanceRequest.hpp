// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDBINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEDBINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CloneDBInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDBInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(SrcDbInstanceName, srcDbInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDBInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SrcDbInstanceName, srcDbInstanceName_);
    };
    CloneDBInstanceRequest() = default ;
    CloneDBInstanceRequest(const CloneDBInstanceRequest &) = default ;
    CloneDBInstanceRequest(CloneDBInstanceRequest &&) = default ;
    CloneDBInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDBInstanceRequest() = default ;
    CloneDBInstanceRequest& operator=(const CloneDBInstanceRequest &) = default ;
    CloneDBInstanceRequest& operator=(CloneDBInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->DBInstanceId_ != nullptr && this->srcDbInstanceName_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CloneDBInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CloneDBInstanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // srcDbInstanceName Field Functions 
    bool hasSrcDbInstanceName() const { return this->srcDbInstanceName_ != nullptr;};
    void deleteSrcDbInstanceName() { this->srcDbInstanceName_ = nullptr;};
    inline string srcDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(srcDbInstanceName_, "") };
    inline CloneDBInstanceRequest& setSrcDbInstanceName(string srcDbInstanceName) { DARABONBA_PTR_SET_VALUE(srcDbInstanceName_, srcDbInstanceName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> backupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> srcDbInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
