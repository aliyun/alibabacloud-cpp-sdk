// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODYSNAPSHOTGROUPSSNAPSHOTGROUPSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTGROUPSRESPONSEBODYSNAPSHOTGROUPSSNAPSHOTGROUPSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots() = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots(const DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots &) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots(DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots &&) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots() = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots& operator=(const DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots &) = default ;
    DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots& operator=(DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshot_ != nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot>) };
    inline vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot>) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots& setSnapshot(const vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshots& setSnapshot(vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotGroupsResponseBodySnapshotGroupsSnapshotGroupSnapshotsSnapshot>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
