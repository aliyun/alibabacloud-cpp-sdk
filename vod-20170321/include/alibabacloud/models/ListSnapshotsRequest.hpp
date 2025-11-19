// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ListSnapshotsRequest() = default ;
    ListSnapshotsRequest(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest(ListSnapshotsRequest &&) = default ;
    ListSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSnapshotsRequest() = default ;
    ListSnapshotsRequest& operator=(const ListSnapshotsRequest &) = default ;
    ListSnapshotsRequest& operator=(ListSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->snapshotType_ == nullptr && return this->videoId_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline string authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, "") };
    inline ListSnapshotsRequest& setAuthTimeout(string authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline ListSnapshotsRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSnapshotsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // snapshotType Field Functions 
    bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
    void deleteSnapshotType() { this->snapshotType_ = nullptr;};
    inline string snapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
    inline ListSnapshotsRequest& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListSnapshotsRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The validity period of the snapshot URL. Default value: **3600**. Minimum value: **3600**. Unit: seconds.
    // 
    // *   This parameter takes effect only when you enable URL signing. For more information, see [Configure URL signing](https://help.aliyun.com/document_detail/57007.html).
    // *   If you specify a value smaller than **3,600 seconds**, **3600** is used by default.
    // *   If the snapshot URL is an Object Storage Service (OSS) URL, the maximum value for this parameter is **2592000** (30 days). This reduces risks on the origin.
    std::shared_ptr<string> authTimeout_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: **20**. Maximum value: **100**.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The type of snapshots to return. Valid values:
    // 
    // *   **CoverSnapshot**: thumbnail snapshot
    // *   **NormalSnapshot**: regular snapshot
    // *   **SpriteSnapshot**: sprite snapshot
    // *   **SpriteOriginSnapshot**: sprite source snapshot
    // *   **WebVttSnapshot**: WebVTT snapshot
    std::shared_ptr<string> snapshotType_ = nullptr;
    // The ID of the video. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video** to view the video ID.
    // *   Obtain the video ID from the response to the [CreateUploadVideo](~~CreateUploadVideo~~) operation that you call to obtain the upload URL and credential.
    // *   Obtain the video ID from the response to the [SearchMedia](~~SearchMedia~~) operation that you call to query videos.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
