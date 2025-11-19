// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODYMEDIASNAPSHOTSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODYMEDIASNAPSHOTSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListSnapshotsResponseBodyMediaSnapshotSnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBodyMediaSnapshotSnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBodyMediaSnapshotSnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    ListSnapshotsResponseBodyMediaSnapshotSnapshots() = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshots(const ListSnapshotsResponseBodyMediaSnapshotSnapshots &) = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshots(ListSnapshotsResponseBodyMediaSnapshotSnapshots &&) = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsResponseBodyMediaSnapshotSnapshots() = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshots& operator=(const ListSnapshotsResponseBodyMediaSnapshotSnapshots &) = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshots& operator=(ListSnapshotsResponseBodyMediaSnapshotSnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshot_ == nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot>) };
    inline vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot>) };
    inline ListSnapshotsResponseBodyMediaSnapshotSnapshots& setSnapshot(const vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline ListSnapshotsResponseBodyMediaSnapshotSnapshots& setSnapshot(vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<Models::ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
