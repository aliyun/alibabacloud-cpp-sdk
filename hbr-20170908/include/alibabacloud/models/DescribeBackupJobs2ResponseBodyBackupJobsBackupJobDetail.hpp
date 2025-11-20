// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotErrorMessage, destinationNativeSnapshotErrorMessage_);
      DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotId, destinationNativeSnapshotId_);
      DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotProgress, destinationNativeSnapshotProgress_);
      DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotStatus, destinationNativeSnapshotStatus_);
      DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_TO_JSON(DestinationSnapshotId, destinationSnapshotId_);
      DARABONBA_PTR_TO_JSON(DiskNativeSnapshotIdList, diskNativeSnapshotIdList_);
      DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
      DARABONBA_ANY_TO_JSON(InstanceInfos, instanceInfos_);
      DARABONBA_PTR_TO_JSON(NativeSnapshotId, nativeSnapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotErrorMessage, destinationNativeSnapshotErrorMessage_);
      DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotId, destinationNativeSnapshotId_);
      DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotProgress, destinationNativeSnapshotProgress_);
      DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotStatus, destinationNativeSnapshotStatus_);
      DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
      DARABONBA_PTR_FROM_JSON(DestinationSnapshotId, destinationSnapshotId_);
      DARABONBA_PTR_FROM_JSON(DiskNativeSnapshotIdList, diskNativeSnapshotIdList_);
      DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
      DARABONBA_ANY_FROM_JSON(InstanceInfos, instanceInfos_);
      DARABONBA_PTR_FROM_JSON(NativeSnapshotId, nativeSnapshotId_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& operator=(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& operator=(DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationNativeSnapshotErrorMessage_ == nullptr
        && return this->destinationNativeSnapshotId_ == nullptr && return this->destinationNativeSnapshotProgress_ == nullptr && return this->destinationNativeSnapshotStatus_ == nullptr && return this->destinationRetention_ == nullptr && return this->destinationSnapshotId_ == nullptr
        && return this->diskNativeSnapshotIdList_ == nullptr && return this->doCopy_ == nullptr && return this->instanceInfos_ == nullptr && return this->nativeSnapshotId_ == nullptr; };
    // destinationNativeSnapshotErrorMessage Field Functions 
    bool hasDestinationNativeSnapshotErrorMessage() const { return this->destinationNativeSnapshotErrorMessage_ != nullptr;};
    void deleteDestinationNativeSnapshotErrorMessage() { this->destinationNativeSnapshotErrorMessage_ = nullptr;};
    inline string destinationNativeSnapshotErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotErrorMessage_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDestinationNativeSnapshotErrorMessage(string destinationNativeSnapshotErrorMessage) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotErrorMessage_, destinationNativeSnapshotErrorMessage) };


    // destinationNativeSnapshotId Field Functions 
    bool hasDestinationNativeSnapshotId() const { return this->destinationNativeSnapshotId_ != nullptr;};
    void deleteDestinationNativeSnapshotId() { this->destinationNativeSnapshotId_ = nullptr;};
    inline string destinationNativeSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDestinationNativeSnapshotId(string destinationNativeSnapshotId) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotId_, destinationNativeSnapshotId) };


    // destinationNativeSnapshotProgress Field Functions 
    bool hasDestinationNativeSnapshotProgress() const { return this->destinationNativeSnapshotProgress_ != nullptr;};
    void deleteDestinationNativeSnapshotProgress() { this->destinationNativeSnapshotProgress_ = nullptr;};
    inline int32_t destinationNativeSnapshotProgress() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotProgress_, 0) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDestinationNativeSnapshotProgress(int32_t destinationNativeSnapshotProgress) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotProgress_, destinationNativeSnapshotProgress) };


    // destinationNativeSnapshotStatus Field Functions 
    bool hasDestinationNativeSnapshotStatus() const { return this->destinationNativeSnapshotStatus_ != nullptr;};
    void deleteDestinationNativeSnapshotStatus() { this->destinationNativeSnapshotStatus_ = nullptr;};
    inline string destinationNativeSnapshotStatus() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotStatus_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDestinationNativeSnapshotStatus(string destinationNativeSnapshotStatus) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotStatus_, destinationNativeSnapshotStatus) };


    // destinationRetention Field Functions 
    bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
    void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
    inline int64_t destinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


    // destinationSnapshotId Field Functions 
    bool hasDestinationSnapshotId() const { return this->destinationSnapshotId_ != nullptr;};
    void deleteDestinationSnapshotId() { this->destinationSnapshotId_ = nullptr;};
    inline string destinationSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(destinationSnapshotId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDestinationSnapshotId(string destinationSnapshotId) { DARABONBA_PTR_SET_VALUE(destinationSnapshotId_, destinationSnapshotId) };


    // diskNativeSnapshotIdList Field Functions 
    bool hasDiskNativeSnapshotIdList() const { return this->diskNativeSnapshotIdList_ != nullptr;};
    void deleteDiskNativeSnapshotIdList() { this->diskNativeSnapshotIdList_ = nullptr;};
    inline const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList & diskNativeSnapshotIdList() const { DARABONBA_PTR_GET_CONST(diskNativeSnapshotIdList_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList) };
    inline Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList diskNativeSnapshotIdList() { DARABONBA_PTR_GET(diskNativeSnapshotIdList_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDiskNativeSnapshotIdList(const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList & diskNativeSnapshotIdList) { DARABONBA_PTR_SET_VALUE(diskNativeSnapshotIdList_, diskNativeSnapshotIdList) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDiskNativeSnapshotIdList(Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList && diskNativeSnapshotIdList) { DARABONBA_PTR_SET_RVALUE(diskNativeSnapshotIdList_, diskNativeSnapshotIdList) };


    // doCopy Field Functions 
    bool hasDoCopy() const { return this->doCopy_ != nullptr;};
    void deleteDoCopy() { this->doCopy_ = nullptr;};
    inline bool doCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


    // instanceInfos Field Functions 
    bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
    void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
    inline     const Darabonba::Json & instanceInfos() const { DARABONBA_GET(instanceInfos_) };
    Darabonba::Json & instanceInfos() { DARABONBA_GET(instanceInfos_) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setInstanceInfos(const Darabonba::Json & instanceInfos) { DARABONBA_SET_VALUE(instanceInfos_, instanceInfos) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setInstanceInfos(Darabonba::Json & instanceInfos) { DARABONBA_SET_RVALUE(instanceInfos_, instanceInfos) };


    // nativeSnapshotId Field Functions 
    bool hasNativeSnapshotId() const { return this->nativeSnapshotId_ != nullptr;};
    void deleteNativeSnapshotId() { this->nativeSnapshotId_ = nullptr;};
    inline string nativeSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(nativeSnapshotId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail& setNativeSnapshotId(string nativeSnapshotId) { DARABONBA_PTR_SET_VALUE(nativeSnapshotId_, nativeSnapshotId) };


  protected:
    // The information about the remote replication failure.
    std::shared_ptr<string> destinationNativeSnapshotErrorMessage_ = nullptr;
    // The ID of the remote replication snapshot.
    std::shared_ptr<string> destinationNativeSnapshotId_ = nullptr;
    // The progress of the remote replication.
    std::shared_ptr<int32_t> destinationNativeSnapshotProgress_ = nullptr;
    // The state of the remote replication.
    std::shared_ptr<string> destinationNativeSnapshotStatus_ = nullptr;
    // The retention period of the remote replication backup.
    std::shared_ptr<int64_t> destinationRetention_ = nullptr;
    // The ID of the remote replication backup.
    std::shared_ptr<string> destinationSnapshotId_ = nullptr;
    // The mapping between snapshots and disks.
    std::shared_ptr<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetailDiskNativeSnapshotIdList> diskNativeSnapshotIdList_ = nullptr;
    // Indicates whether remote replication is enabled.
    std::shared_ptr<bool> doCopy_ = nullptr;
    // The ecs instance infos.
    Darabonba::Json instanceInfos_ = nullptr;
    // The ID of the backup snapshot.
    std::shared_ptr<string> nativeSnapshotId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
