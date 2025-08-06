// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODYMEDIASNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODYMEDIASNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSnapshotsResponseBodyMediaSnapshotSnapshots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListSnapshotsResponseBodyMediaSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBodyMediaSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Regular, regular_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBodyMediaSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Regular, regular_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSnapshotsResponseBodyMediaSnapshot() = default ;
    ListSnapshotsResponseBodyMediaSnapshot(const ListSnapshotsResponseBodyMediaSnapshot &) = default ;
    ListSnapshotsResponseBodyMediaSnapshot(ListSnapshotsResponseBodyMediaSnapshot &&) = default ;
    ListSnapshotsResponseBodyMediaSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsResponseBodyMediaSnapshot() = default ;
    ListSnapshotsResponseBodyMediaSnapshot& operator=(const ListSnapshotsResponseBodyMediaSnapshot &) = default ;
    ListSnapshotsResponseBodyMediaSnapshot& operator=(ListSnapshotsResponseBodyMediaSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->jobId_ != nullptr && this->regular_ != nullptr && this->snapshots_ != nullptr && this->total_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListSnapshotsResponseBodyMediaSnapshot& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListSnapshotsResponseBodyMediaSnapshot& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // regular Field Functions 
    bool hasRegular() const { return this->regular_ != nullptr;};
    void deleteRegular() { this->regular_ = nullptr;};
    inline string regular() const { DARABONBA_PTR_GET_DEFAULT(regular_, "") };
    inline ListSnapshotsResponseBodyMediaSnapshot& setRegular(string regular) { DARABONBA_PTR_SET_VALUE(regular_, regular) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots & snapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots) };
    inline Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots snapshots() { DARABONBA_PTR_GET(snapshots_, Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots) };
    inline ListSnapshotsResponseBodyMediaSnapshot& setSnapshots(const Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline ListSnapshotsResponseBodyMediaSnapshot& setSnapshots(Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSnapshotsResponseBodyMediaSnapshot& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The time when the snapshot job was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the snapshot job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The rule used to generate snapshot URLs.
    std::shared_ptr<string> regular_ = nullptr;
    // The details of the snapshot.
    std::shared_ptr<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshots> snapshots_ = nullptr;
    // The total number of snapshots.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
