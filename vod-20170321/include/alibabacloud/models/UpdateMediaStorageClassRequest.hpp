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
    // Specifies whether to change the storage class of a media asset that is stored for less than the minimum storage duration. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  If you forcibly change the storage class of a media asset that is stored for less than the minimum storage duration, additional data retrieval fees are incurred.
    shared_ptr<bool> allowUpdateWithoutTimeLimit_ {};
    // The media asset ID. You can specify a maximum of 20 IDs. Separate multiple IDs with commas (,). You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD](https://vod.console.aliyun.com) console. In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, you can view the ID of the media asset. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of the VideoId parameter from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you call to upload media assets.
    // *   Obtain the value of the VideoId parameter from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you call to query the media ID after the media asset is uploaded.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The restoration priority. This parameter is required only when you restore a Cold Archive media asset. Valid values:
    // 
    // *   **Expedited**
    // *   **Standard**
    // *   **Bulk**
    shared_ptr<string> restoreTier_ {};
    // The modification range. Valid values:
    // 
    // *   **All**: modifies the storage classes of all resources including the source files and transcoded streams.
    // *   **SourceFile**: modifies the storage classes of only the source files. The storage class of other resources is Standard.
    shared_ptr<string> scope_ {};
    // The storage class. Valid values:
    // 
    // *   **Standard**
    // *   **IA**
    // *   **Archive**
    // *   **ColdArchive**
    // 
    // This parameter is required.
    shared_ptr<string> storageClass_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
