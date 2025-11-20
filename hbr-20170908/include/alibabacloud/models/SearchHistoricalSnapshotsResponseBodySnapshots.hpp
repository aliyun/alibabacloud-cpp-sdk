// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHHISTORICALSNAPSHOTSRESPONSEBODYSNAPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class SearchHistoricalSnapshotsResponseBodySnapshots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchHistoricalSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
    };
    friend void from_json(const Darabonba::Json& j, SearchHistoricalSnapshotsResponseBodySnapshots& obj) { 
      DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
    };
    SearchHistoricalSnapshotsResponseBodySnapshots() = default ;
    SearchHistoricalSnapshotsResponseBodySnapshots(const SearchHistoricalSnapshotsResponseBodySnapshots &) = default ;
    SearchHistoricalSnapshotsResponseBodySnapshots(SearchHistoricalSnapshotsResponseBodySnapshots &&) = default ;
    SearchHistoricalSnapshotsResponseBodySnapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchHistoricalSnapshotsResponseBodySnapshots() = default ;
    SearchHistoricalSnapshotsResponseBodySnapshots& operator=(const SearchHistoricalSnapshotsResponseBodySnapshots &) = default ;
    SearchHistoricalSnapshotsResponseBodySnapshots& operator=(SearchHistoricalSnapshotsResponseBodySnapshots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->snapshot_ == nullptr; };
    // snapshot Field Functions 
    bool hasSnapshot() const { return this->snapshot_ != nullptr;};
    void deleteSnapshot() { this->snapshot_ = nullptr;};
    inline const vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot> & snapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot>) };
    inline vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot> snapshot() { DARABONBA_PTR_GET(snapshot_, vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot>) };
    inline SearchHistoricalSnapshotsResponseBodySnapshots& setSnapshot(const vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
    inline SearchHistoricalSnapshotsResponseBodySnapshots& setSnapshot(vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


  protected:
    std::shared_ptr<vector<Models::SearchHistoricalSnapshotsResponseBodySnapshotsSnapshot>> snapshot_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
