// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASNAPSHOTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIASNAPSHOTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaSnapshotList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaSnapshotList& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaSnapshotList& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    QueryMediaListResponseBodyMediaListMediaSnapshotList() = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotList(const QueryMediaListResponseBodyMediaListMediaSnapshotList &) = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotList(QueryMediaListResponseBodyMediaListMediaSnapshotList &&) = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaSnapshotList() = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotList& operator=(const QueryMediaListResponseBodyMediaListMediaSnapshotList &) = default ;
    QueryMediaListResponseBodyMediaListMediaSnapshotList& operator=(QueryMediaListResponseBodyMediaListMediaSnapshotList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshot_ == nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot>) };
    inline vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot>) };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotList& setSnapshot(const vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline QueryMediaListResponseBodyMediaListMediaSnapshotList& setSnapshot(vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListResponseBodyMediaListMediaSnapshotListSnapshot>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
