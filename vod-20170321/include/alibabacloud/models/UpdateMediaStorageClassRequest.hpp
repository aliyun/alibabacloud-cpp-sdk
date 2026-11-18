// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIASTORAGECLASSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateMediaStorageClassRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaStorageClassRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowUpdateWithoutTimeLimit, allowUpdateWithoutTimeLimit_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(RestoreTier, restoreTier_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaStorageClassRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowUpdateWithoutTimeLimit, allowUpdateWithoutTimeLimit_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(RestoreTier, restoreTier_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
    };
    UpdateMediaStorageClassRequest() = default ;
    UpdateMediaStorageClassRequest(const UpdateMediaStorageClassRequest &) = default ;
    UpdateMediaStorageClassRequest(UpdateMediaStorageClassRequest &&) = default ;
    UpdateMediaStorageClassRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaStorageClassRequest() = default ;
    UpdateMediaStorageClassRequest& operator=(const UpdateMediaStorageClassRequest &) = default ;
    UpdateMediaStorageClassRequest& operator=(UpdateMediaStorageClassRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowUpdateWithoutTimeLimit_ == nullptr
        && this->mediaIds_ == nullptr && this->restoreTier_ == nullptr && this->scope_ == nullptr && this->storageClass_ == nullptr; };
    // allowUpdateWithoutTimeLimit Field Functions 
    bool hasAllowUpdateWithoutTimeLimit() const { return this->allowUpdateWithoutTimeLimit_ != nullptr;};
    void deleteAllowUpdateWithoutTimeLimit() { this->allowUpdateWithoutTimeLimit_ = nullptr;};
    inline bool getAllowUpdateWithoutTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(allowUpdateWithoutTimeLimit_, false) };
    inline UpdateMediaStorageClassRequest& setAllowUpdateWithoutTimeLimit(bool allowUpdateWithoutTimeLimit) { DARABONBA_PTR_SET_VALUE(allowUpdateWithoutTimeLimit_, allowUpdateWithoutTimeLimit) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline UpdateMediaStorageClassRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // restoreTier Field Functions 
    bool hasRestoreTier() const { return this->restoreTier_ != nullptr;};
    void deleteRestoreTier() { this->restoreTier_ = nullptr;};
    inline string getRestoreTier() const { DARABONBA_PTR_GET_DEFAULT(restoreTier_, "") };
    inline UpdateMediaStorageClassRequest& setRestoreTier(string restoreTier) { DARABONBA_PTR_SET_VALUE(restoreTier_, restoreTier) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline UpdateMediaStorageClassRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline UpdateMediaStorageClassRequest& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


  protected:
    // Specifies whether to allow modifying the storage class of media assets whose storage duration does not meet the minimum requirement. Valid values:
    // 
    // - **true**: allows the modification.
    // - **false** (default): does not allow the modification.
    // 
    // > If the storage duration of a media asset does not meet the minimum requirement and you force the storage class modification, additional data retrieval fees are incurred.
    shared_ptr<bool> allowUpdateWithoutTimeLimit_ {};
    // The media asset IDs, which are the audio or video IDs (VideoId). Separate multiple IDs with commas (,). You can specify up to 20 IDs. You can obtain the IDs by using one of the following methods:
    // - For audio or video files uploaded in the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Assets** > **Audio/Video** to view the audio or video IDs.
    // - When you call the [Obtain the upload URL and credential for audio and video files](https://help.aliyun.com/document_detail/55407.html) operation, the value of the VideoId response parameter is the media asset ID.
    // - After an audio or video file is uploaded, you can call the [Search for media asset information](https://help.aliyun.com/document_detail/86044.html) operation to query the media asset ID. The value of the VideoId response parameter is the media asset ID.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The restoration priority. This parameter is required only for Cold Archive media assets. If you do not specify this parameter, the default value **Standard** is used. Valid values:
    // - **Expedited**: Expedited
    // - **Standard** (default): Standard
    // - **Bulk**: Bulk
    shared_ptr<string> restoreTier_ {};
    // The scope of the modification. If you do not specify this parameter, the default value **All** is used. Valid values:
    // - **All** (default): applies tiered storage to all resources of the media asset, including the source file and transcoded streams.
    // - **SourceFile**: applies tiered storage only to the video source file of the media asset ID. Resources other than the source file are stored in Standard storage.
    shared_ptr<string> scope_ {};
    // The storage class. Valid values:
    // - **Standard**: Standard
    // - **IA**: Infrequent Access (IA)
    // - **Archive**: Archive
    // - **ColdArchive**: Cold Archive
    // 
    // This parameter is required.
    shared_ptr<string> storageClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
