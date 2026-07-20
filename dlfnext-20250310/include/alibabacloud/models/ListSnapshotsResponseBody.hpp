// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Snapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(snapshots, snapshots_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(snapshots, snapshots_);
    };
    ListSnapshotsResponseBody() = default ;
    ListSnapshotsResponseBody(const ListSnapshotsResponseBody &) = default ;
    ListSnapshotsResponseBody(ListSnapshotsResponseBody &&) = default ;
    ListSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsResponseBody() = default ;
    ListSnapshotsResponseBody& operator=(const ListSnapshotsResponseBody &) = default ;
    ListSnapshotsResponseBody& operator=(ListSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && this->snapshots_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListSnapshotsResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<Snapshot> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<Snapshot>) };
    inline vector<Snapshot> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<Snapshot>) };
    inline ListSnapshotsResponseBody& setSnapshots(const vector<Snapshot> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline ListSnapshotsResponseBody& setSnapshots(vector<Snapshot> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


  protected:
    shared_ptr<string> nextPageToken_ {};
    shared_ptr<vector<Snapshot>> snapshots_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
