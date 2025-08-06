// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RestoreMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(RestoreDays, restoreDays_);
      DARABONBA_PTR_TO_JSON(RestoreTier, restoreTier_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(RestoreDays, restoreDays_);
      DARABONBA_PTR_FROM_JSON(RestoreTier, restoreTier_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    RestoreMediaRequest() = default ;
    RestoreMediaRequest(const RestoreMediaRequest &) = default ;
    RestoreMediaRequest(RestoreMediaRequest &&) = default ;
    RestoreMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreMediaRequest() = default ;
    RestoreMediaRequest& operator=(const RestoreMediaRequest &) = default ;
    RestoreMediaRequest& operator=(RestoreMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaIds_ != nullptr
        && this->restoreDays_ != nullptr && this->restoreTier_ != nullptr && this->scope_ != nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline RestoreMediaRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // restoreDays Field Functions 
    bool hasRestoreDays() const { return this->restoreDays_ != nullptr;};
    void deleteRestoreDays() { this->restoreDays_ = nullptr;};
    inline string restoreDays() const { DARABONBA_PTR_GET_DEFAULT(restoreDays_, "") };
    inline RestoreMediaRequest& setRestoreDays(string restoreDays) { DARABONBA_PTR_SET_VALUE(restoreDays_, restoreDays) };


    // restoreTier Field Functions 
    bool hasRestoreTier() const { return this->restoreTier_ != nullptr;};
    void deleteRestoreTier() { this->restoreTier_ = nullptr;};
    inline string restoreTier() const { DARABONBA_PTR_GET_DEFAULT(restoreTier_, "") };
    inline RestoreMediaRequest& setRestoreTier(string restoreTier) { DARABONBA_PTR_SET_VALUE(restoreTier_, restoreTier) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline RestoreMediaRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The ID of the media asset (VideoId). Separate multiple IDs with commas (,). You can specify a maximum of 20 IDs. You can use one of the following methods to obtain the ID of the media asset:
    // 
    // *   Log on to the ApsaraVideo VOD console. In the left-side navigation pane, choose Media Files > Audio/Video. On the Video and Audio page, view the ID of the media asset. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of VideoId from the response to the CreateUploadVideo operation that you call to upload media assets.
    // *   Obtain the value of VideoId from the response to the SearchMedia operation that you call to query the media ID after the media asset is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaIds_ = nullptr;
    // The number of days during which media assets remain in the restored state. Default value: 1. The maximum validity period of a restored Archive media asset is 7 days and the maximum validity period of a restored Cold Archive media asset is 365 days.
    std::shared_ptr<string> restoreDays_ = nullptr;
    // The restoration priority. This parameter is required only when you restore a Cold Archive media file. Valid values:
    // 
    // *   **Expedited**: The file is restored within 1 hour.
    // *   **Standard**: The file is restored within 2 to 5 hours.
    // *   **Bulk**: The file is restored within 5 to 12 hours.
    std::shared_ptr<string> restoreTier_ = nullptr;
    // The modification range. Valid values:
    // 
    // *   **All**: restores all resources, including the source files and transcoded streams.
    // *   **SourceFile**: restores only the source files.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
