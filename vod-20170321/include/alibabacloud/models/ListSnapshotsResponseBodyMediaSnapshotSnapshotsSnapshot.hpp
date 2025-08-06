// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODYMEDIASNAPSHOTSNAPSHOTSSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODYMEDIASNAPSHOTSNAPSHOTSSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot() = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot(const ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot &) = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot(ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot &&) = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot() = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot& operator=(const ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot &) = default ;
    ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot& operator=(ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->url_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListSnapshotsResponseBodyMediaSnapshotSnapshotsSnapshot& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The index of the snapshot.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The URL of the snapshot.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
