// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Snapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListSnapshotsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(snapshots, snapshots_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(snapshots, snapshots_);
    };
    ListSnapshotsOutput() = default ;
    ListSnapshotsOutput(const ListSnapshotsOutput &) = default ;
    ListSnapshotsOutput(ListSnapshotsOutput &&) = default ;
    ListSnapshotsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsOutput() = default ;
    ListSnapshotsOutput& operator=(const ListSnapshotsOutput &) = default ;
    ListSnapshotsOutput& operator=(ListSnapshotsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->snapshots_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSnapshotsOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<Snapshot> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<Snapshot>) };
    inline vector<Snapshot> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<Snapshot>) };
    inline ListSnapshotsOutput& setSnapshots(const vector<Snapshot> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline ListSnapshotsOutput& setSnapshots(vector<Snapshot> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


  protected:
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<vector<Snapshot>> snapshots_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
