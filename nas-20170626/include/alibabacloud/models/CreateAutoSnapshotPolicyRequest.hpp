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
        && this->fileSystemType_ == nullptr && this->repeatWeekdays_ == nullptr && this->retentionDays_ == nullptr && this->timePoints_ == nullptr; };
    // autoSnapshotPolicyName Field Functions 
    bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
    void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
    inline string getAutoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
    inline CreateAutoSnapshotPolicyRequest& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline CreateAutoSnapshotPolicyRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // repeatWeekdays Field Functions 
    bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
    void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
    inline string getRepeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
    inline CreateAutoSnapshotPolicyRequest& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateAutoSnapshotPolicyRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
    inline CreateAutoSnapshotPolicyRequest& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


  protected:
    // The name of the automatic snapshot policy.
    // 
    // Limits:
    // 
    // - The name must be 2 to 128 characters in length.
    // - The name must start with a letter or a Chinese character.
    // - The name can contain digits, colons (:), underscores (_), or hyphens (-). It cannot start with `http://` or `https://`.
    // - Default value: empty.
    shared_ptr<string> autoSnapshotPolicyName_ {};
    // The type of the file system.
    // 
    // Valid values: extreme (Extreme NAS).
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemType_ {};
    // The days of the week on which automatic snapshots are created.
    // 
    // Cycle: week.
    // 
    // Valid values: 1 to 7, which represent Monday through Sunday.
    // 
    // To create automatic snapshots on multiple days in a week, specify multiple values separated by commas (,). You can specify a maximum of 7 values.
    // 
    // This parameter is required.
    shared_ptr<string> repeatWeekdays_ {};
    // The retention period of automatic snapshots.
    // 
    // Unit: days.
    // 
    // Valid values:
    // 
    // - -1 (default): Automatic snapshots are permanently retained. When the snapshot quota is reached, the earliest automatic snapshots are automatically deleted.
    // - 1 to 65536: Automatic snapshots are retained for the specified number of days. Snapshots are subject to automatic release after the retention period expires.
    shared_ptr<int32_t> retentionDays_ {};
    // The time points at which automatic snapshots are created.
    // 
    // Unit: hours.
    // 
    // Valid values: 0 to 23, which represent the 24 time points from 00:00 to 23:00. For example, 1 indicates 01:00.
    // 
    // To create multiple automatic snapshots within a day, specify multiple time points separated by commas (,). You can specify a maximum of 24 time points.
    // 
    // This parameter is required.
    shared_ptr<string> timePoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
