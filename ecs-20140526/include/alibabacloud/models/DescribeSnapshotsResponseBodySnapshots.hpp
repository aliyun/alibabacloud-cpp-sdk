// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnapshotsResponseBodySnapshotsSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    DescribeSnapshotsResponseBodySnapshots() = default ;
    DescribeSnapshotsResponseBodySnapshots(const DescribeSnapshotsResponseBodySnapshots &) = default ;
    DescribeSnapshotsResponseBodySnapshots(DescribeSnapshotsResponseBodySnapshots &&) = default ;
    DescribeSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBodySnapshots() = default ;
    DescribeSnapshotsResponseBodySnapshots& operator=(const DescribeSnapshotsResponseBodySnapshots &) = default ;
    DescribeSnapshotsResponseBodySnapshots& operator=(DescribeSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->snapshot_ != nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot>) };
    inline vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot>) };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshot(const vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline DescribeSnapshotsResponseBodySnapshots& setSnapshot(vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<Models::DescribeSnapshotsResponseBodySnapshotsSnapshot>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
