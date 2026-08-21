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
    virtual bool empty() const override { return this->mediaIds_ == nullptr
        && this->restoreDays_ == nullptr && this->restoreTier_ == nullptr && this->scope_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline RestoreMediaRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // restoreDays Field Functions 
    bool hasRestoreDays() const { return this->restoreDays_ != nullptr;};
    void deleteRestoreDays() { this->restoreDays_ = nullptr;};
    inline string getRestoreDays() const { DARABONBA_PTR_GET_DEFAULT(restoreDays_, "") };
    inline RestoreMediaRequest& setRestoreDays(string restoreDays) { DARABONBA_PTR_SET_VALUE(restoreDays_, restoreDays) };


    // restoreTier Field Functions 
    bool hasRestoreTier() const { return this->restoreTier_ != nullptr;};
    void deleteRestoreTier() { this->restoreTier_ = nullptr;};
    inline string getRestoreTier() const { DARABONBA_PTR_GET_DEFAULT(restoreTier_, "") };
    inline RestoreMediaRequest& setRestoreTier(string restoreTier) { DARABONBA_PTR_SET_VALUE(restoreTier_, restoreTier) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline RestoreMediaRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The media IDs, which are audio or video IDs (VideoId). Separate multiple IDs with commas (,). A maximum of 20 IDs are supported. You can obtain the IDs by using the following methods:
    // 
    // - For audio or video files uploaded in the console, log on to the ApsaraVideo VOD console and choose Media Files > Audio/Video to view the audio or video ID.
    // - When you call the CreateUploadVideo operation to obtain the upload URL and credential, the video ID is the value of the VideoId parameter in the response.
    // - After the audio or video file is uploaded, you can call the SearchMedia operation to query the video ID, which is the value of the VideoId parameter in the response.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The restoration duration. Default value: 1 day. Maximum value for Archive media assets: 7 days. Maximum value for Cold Archive media assets: 365 days.
    shared_ptr<string> restoreDays_ {};
    // The restoration priority. This parameter is required only for Cold Archive media assets. If this parameter is not specified, the default value **Standard** is used. Valid values:
    // - **Expedited**: High priority. The restoration is completed within 1 hour.
    // - **Standard** (default): Standard priority. The restoration is completed within 2 to 5 hours.
    // - **Bulk**: Batch priority. The restoration is completed within 5 to 12 hours.
    shared_ptr<string> restoreTier_ {};
    // The scope of the change. If this parameter is not specified, the default value **All** is used. Valid values:
    // - **All** (default): Applies tiered storage to all resources (source files and transcoded streams) of the media asset.
    // - **SourceFile**: Applies tiered storage only to the video source file of the media asset ID. Resources other than the source file use Standard storage.
    shared_ptr<string> scope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
