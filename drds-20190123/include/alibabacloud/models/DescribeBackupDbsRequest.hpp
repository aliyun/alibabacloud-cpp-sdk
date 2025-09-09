// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPDBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupDbsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupDbsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(PreferredRestoreTime, preferredRestoreTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupDbsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PreferredRestoreTime, preferredRestoreTime_);
    };
    DescribeBackupDbsRequest() = default ;
    DescribeBackupDbsRequest(const DescribeBackupDbsRequest &) = default ;
    DescribeBackupDbsRequest(DescribeBackupDbsRequest &&) = default ;
    DescribeBackupDbsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupDbsRequest() = default ;
    DescribeBackupDbsRequest& operator=(const DescribeBackupDbsRequest &) = default ;
    DescribeBackupDbsRequest& operator=(DescribeBackupDbsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->preferredRestoreTime_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeBackupDbsRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeBackupDbsRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // preferredRestoreTime Field Functions 
    bool hasPreferredRestoreTime() const { return this->preferredRestoreTime_ != nullptr;};
    void deletePreferredRestoreTime() { this->preferredRestoreTime_ = nullptr;};
    inline string preferredRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(preferredRestoreTime_, "") };
    inline DescribeBackupDbsRequest& setPreferredRestoreTime(string preferredRestoreTime) { DARABONBA_PTR_SET_VALUE(preferredRestoreTime_, preferredRestoreTime) };


  protected:
    // Query by backup set ID
    std::shared_ptr<string> backupId_ = nullptr;
    // The ID of a DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // Query by restoration time.
    std::shared_ptr<string> preferredRestoreTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
