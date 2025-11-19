// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSnapshotsResponseBodyMediaSnapshot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaSnapshot, mediaSnapshot_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaSnapshot, mediaSnapshot_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->mediaSnapshot_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaSnapshot Field Functions 
    bool hasMediaSnapshot() const { return this->mediaSnapshot_ != nullptr;};
    void deleteMediaSnapshot() { this->mediaSnapshot_ = nullptr;};
    inline const ListSnapshotsResponseBodyMediaSnapshot & mediaSnapshot() const { DARABONBA_PTR_GET_CONST(mediaSnapshot_, ListSnapshotsResponseBodyMediaSnapshot) };
    inline ListSnapshotsResponseBodyMediaSnapshot mediaSnapshot() { DARABONBA_PTR_GET(mediaSnapshot_, ListSnapshotsResponseBodyMediaSnapshot) };
    inline ListSnapshotsResponseBody& setMediaSnapshot(const ListSnapshotsResponseBodyMediaSnapshot & mediaSnapshot) { DARABONBA_PTR_SET_VALUE(mediaSnapshot_, mediaSnapshot) };
    inline ListSnapshotsResponseBody& setMediaSnapshot(ListSnapshotsResponseBodyMediaSnapshot && mediaSnapshot) { DARABONBA_PTR_SET_RVALUE(mediaSnapshot_, mediaSnapshot) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the snapshot.
    std::shared_ptr<ListSnapshotsResponseBodyMediaSnapshot> mediaSnapshot_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
