// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIASNAPSHOTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIASNAPSHOTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaSnapshotList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaSnapshotList& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaSnapshotList& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaSnapshotList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSnapshotList(const QueryMediaListByURLResponseBodyMediaListMediaSnapshotList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSnapshotList(QueryMediaListByURLResponseBodyMediaListMediaSnapshotList &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSnapshotList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaSnapshotList() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSnapshotList& operator=(const QueryMediaListByURLResponseBodyMediaListMediaSnapshotList &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaSnapshotList& operator=(QueryMediaListByURLResponseBodyMediaListMediaSnapshotList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshot_ == nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot>) };
    inline vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot>) };
    inline QueryMediaListByURLResponseBodyMediaListMediaSnapshotList& setSnapshot(const vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline QueryMediaListByURLResponseBodyMediaListMediaSnapshotList& setSnapshot(vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<Models::QueryMediaListByURLResponseBodyMediaListMediaSnapshotListSnapshot>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
