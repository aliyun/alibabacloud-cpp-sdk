// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeMediaInfo, includeMediaInfo_);
      DARABONBA_PTR_TO_JSON(IncludePlayList, includePlayList_);
      DARABONBA_PTR_TO_JSON(IncludeSnapshotList, includeSnapshotList_);
      DARABONBA_PTR_TO_JSON(IncludeSummaryList, includeSummaryList_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeMediaInfo, includeMediaInfo_);
      DARABONBA_PTR_FROM_JSON(IncludePlayList, includePlayList_);
      DARABONBA_PTR_FROM_JSON(IncludeSnapshotList, includeSnapshotList_);
      DARABONBA_PTR_FROM_JSON(IncludeSummaryList, includeSummaryList_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryMediaListRequest() = default ;
    QueryMediaListRequest(const QueryMediaListRequest &) = default ;
    QueryMediaListRequest(QueryMediaListRequest &&) = default ;
    QueryMediaListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListRequest() = default ;
    QueryMediaListRequest& operator=(const QueryMediaListRequest &) = default ;
    QueryMediaListRequest& operator=(QueryMediaListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeMediaInfo_ == nullptr
        && this->includePlayList_ == nullptr && this->includeSnapshotList_ == nullptr && this->includeSummaryList_ == nullptr && this->mediaIds_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // includeMediaInfo Field Functions 
    bool hasIncludeMediaInfo() const { return this->includeMediaInfo_ != nullptr;};
    void deleteIncludeMediaInfo() { this->includeMediaInfo_ = nullptr;};
    inline bool getIncludeMediaInfo() const { DARABONBA_PTR_GET_DEFAULT(includeMediaInfo_, false) };
    inline QueryMediaListRequest& setIncludeMediaInfo(bool includeMediaInfo) { DARABONBA_PTR_SET_VALUE(includeMediaInfo_, includeMediaInfo) };


    // includePlayList Field Functions 
    bool hasIncludePlayList() const { return this->includePlayList_ != nullptr;};
    void deleteIncludePlayList() { this->includePlayList_ = nullptr;};
    inline bool getIncludePlayList() const { DARABONBA_PTR_GET_DEFAULT(includePlayList_, false) };
    inline QueryMediaListRequest& setIncludePlayList(bool includePlayList) { DARABONBA_PTR_SET_VALUE(includePlayList_, includePlayList) };


    // includeSnapshotList Field Functions 
    bool hasIncludeSnapshotList() const { return this->includeSnapshotList_ != nullptr;};
    void deleteIncludeSnapshotList() { this->includeSnapshotList_ = nullptr;};
    inline bool getIncludeSnapshotList() const { DARABONBA_PTR_GET_DEFAULT(includeSnapshotList_, false) };
    inline QueryMediaListRequest& setIncludeSnapshotList(bool includeSnapshotList) { DARABONBA_PTR_SET_VALUE(includeSnapshotList_, includeSnapshotList) };


    // includeSummaryList Field Functions 
    bool hasIncludeSummaryList() const { return this->includeSummaryList_ != nullptr;};
    void deleteIncludeSummaryList() { this->includeSummaryList_ = nullptr;};
    inline bool getIncludeSummaryList() const { DARABONBA_PTR_GET_DEFAULT(includeSummaryList_, false) };
    inline QueryMediaListRequest& setIncludeSummaryList(bool includeSummaryList) { DARABONBA_PTR_SET_VALUE(includeSummaryList_, includeSummaryList) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline QueryMediaListRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryMediaListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryMediaListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryMediaListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryMediaListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to include media information in the returned result.
    // 
    // *   Valid values: true and false.
    // *   Default value: **false**.
    shared_ptr<bool> includeMediaInfo_ {};
    // Specifies whether to include playback information in the returned result.
    // 
    // *   Valid values: true and false.
    // *   Default value: **false**.
    shared_ptr<bool> includePlayList_ {};
    // Specifies whether to include snapshot information in the returned result.
    // 
    // *   Valid values: true and false.
    // *   Default value: **false**.
    shared_ptr<bool> includeSnapshotList_ {};
    // Specifies whether to include summaries in the returned result.
    // 
    // *   Valid values: true and false.
    // *   Default value: **false**.
    shared_ptr<bool> includeSummaryList_ {};
    // The IDs of the media files. To obtain the ID of a media file, you can perform the following operations in the ApsaraVideo Media Processing (MPS) console: In the left-side navigation pane, choose **Media Management** > **Media List**. Find the required video and click Manage. The ID of the video is displayed on the Basics tab. Separate multiple IDs with commas (,). You can query up to 10 media files at a time.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
