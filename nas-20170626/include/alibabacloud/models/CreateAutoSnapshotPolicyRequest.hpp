// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(RepeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(RepeatWeekdays, repeatWeekdays_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest(CreateAutoSnapshotPolicyRequest &&) = default ;
    CreateAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoSnapshotPolicyRequest() = default ;
    CreateAutoSnapshotPolicyRequest& operator=(const CreateAutoSnapshotPolicyRequest &) = default ;
    CreateAutoSnapshotPolicyRequest& operator=(CreateAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoSnapshotPolicyName_ == nullptr
        && return this->fileSystemType_ == nullptr && return this->repeatWeekdays_ == nullptr && return this->retentionDays_ == nullptr && return this->timePoints_ == nullptr; };
    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string autoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline CreateAutoSnapshotPolicyRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline CreateAutoSnapshotPolicyRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string repeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string timePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline CreateAutoSnapshotPolicyRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The name of the automatic snapshot policy.
    // 
    // Limits:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name must start with a letter.
    // *   The name can contain digits, colons (:), underscores (_), and hyphens (-). It cannot start with `http://` or `https://`.
    // *   This parameter is empty by default.
    std::shared_ptr<string> autoSnapshotPolicyName_ = nullptr;
    // The type of the file system.
    // 
    // Valid value: extreme, which indicates Extreme NAS file systems.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The days of a week on which to create automatic snapshots.
    // 
    // Cycle: week.
    // 
    // Valid values: 1 to 7. The values from 1 to 7 indicate the seven days in a week from Monday to Sunday.
    // 
    // If you want to create multiple auto snapshots within a week, you can specify multiple days from Monday to Sunday and separate the days with commas (,). You can specify a maximum of seven days.
    // 
    // This parameter is required.
    std::shared_ptr<string> repeatWeekdays_ = nullptr;
    // The retention period of auto snapshots.
    // 
    // Unit: days.
    // 
    // Valid values:
    // 
    // *   \\-1 (default). Auto snapshots are permanently retained. After the number of auto snapshots exceeds the upper limit, the earliest auto snapshot is automatically deleted.
    // *   1 to 65536: Auto snapshots are retained for the specified days. After the retention period of auto snapshots expires, the auto snapshots are automatically deleted.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The points in time at which auto snapshots were created.
    // 
    // Unit: hours.
    // 
    // Valid values: 0 to 23. The values from 0 to 23 indicate a total of 24 hours from 00:00 to 23:00. For example, the value 1 indicates 01:00.
    // 
    // If you want to create multiple auto snapshots within a day, you can specify multiple points in time and separate the points in time with commas (,). You can specify a maximum of 24 points in time.
    // 
    // This parameter is required.
    std::shared_ptr<string> timePoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
