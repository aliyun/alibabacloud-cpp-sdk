// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRestoreOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDbNames, backupDbNames_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupLevel, backupLevel_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
    };
    DescribeRestoreOrderRequest() = default ;
    DescribeRestoreOrderRequest(const DescribeRestoreOrderRequest &) = default ;
    DescribeRestoreOrderRequest(DescribeRestoreOrderRequest &&) = default ;
    DescribeRestoreOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreOrderRequest() = default ;
    DescribeRestoreOrderRequest& operator=(const DescribeRestoreOrderRequest &) = default ;
    DescribeRestoreOrderRequest& operator=(DescribeRestoreOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupDbNames_ != nullptr
        && this->backupId_ != nullptr && this->backupLevel_ != nullptr && this->backupMode_ != nullptr && this->drdsInstanceId_ != nullptr && this->preferredBackupTime_ != nullptr; };
    // backupDbNames Field Functions 
    bool hasBackupDbNames() const { return this->backupDbNames_ != nullptr;};
    void deleteBackupDbNames() { this->backupDbNames_ = nullptr;};
    inline string backupDbNames() const { DARABONBA_PTR_GET_DEFAULT(backupDbNames_, "") };
    inline DescribeRestoreOrderRequest& setBackupDbNames(string backupDbNames) { DARABONBA_PTR_SET_VALUE(backupDbNames_, backupDbNames) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeRestoreOrderRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupLevel Field Functions 
    bool hasBackupLevel() const { return this->backupLevel_ != nullptr;};
    void deleteBackupLevel() { this->backupLevel_ = nullptr;};
    inline string backupLevel() const { DARABONBA_PTR_GET_DEFAULT(backupLevel_, "") };
    inline DescribeRestoreOrderRequest& setBackupLevel(string backupLevel) { DARABONBA_PTR_SET_VALUE(backupLevel_, backupLevel) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeRestoreOrderRequest& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeRestoreOrderRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string preferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeRestoreOrderRequest& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


  protected:
    // The name of the database involved in the backup.
    std::shared_ptr<string> backupDbNames_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupId_ = nullptr;
    // The level of the backup. Valid values:
    // 
    // *   **DB**: The database Level
    // *   **instance **: instance level
    std::shared_ptr<string> backupLevel_ = nullptr;
    // The backup mode. Valid values: **logic** or **phy**.
    std::shared_ptr<string> backupMode_ = nullptr;
    // The ID of the instance for which to modify the backup policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The preferred backup time.
    std::shared_ptr<string> preferredBackupTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
