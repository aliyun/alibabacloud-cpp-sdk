// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHMEDIAPLAYURLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHMEDIAPLAYURLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RefreshMediaPlayUrlsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshMediaPlayUrlsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definitions, definitions_);
      DARABONBA_PTR_TO_JSON(Formats, formats_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(SliceCount, sliceCount_);
      DARABONBA_PTR_TO_JSON(SliceFlag, sliceFlag_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshMediaPlayUrlsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definitions, definitions_);
      DARABONBA_PTR_FROM_JSON(Formats, formats_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(SliceCount, sliceCount_);
      DARABONBA_PTR_FROM_JSON(SliceFlag, sliceFlag_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    RefreshMediaPlayUrlsRequest() = default ;
    RefreshMediaPlayUrlsRequest(const RefreshMediaPlayUrlsRequest &) = default ;
    RefreshMediaPlayUrlsRequest(RefreshMediaPlayUrlsRequest &&) = default ;
    RefreshMediaPlayUrlsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshMediaPlayUrlsRequest() = default ;
    RefreshMediaPlayUrlsRequest& operator=(const RefreshMediaPlayUrlsRequest &) = default ;
    RefreshMediaPlayUrlsRequest& operator=(RefreshMediaPlayUrlsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->definitions_ != nullptr
        && this->formats_ != nullptr && this->mediaIds_ != nullptr && this->resultType_ != nullptr && this->sliceCount_ != nullptr && this->sliceFlag_ != nullptr
        && this->streamType_ != nullptr && this->taskType_ != nullptr && this->userData_ != nullptr; };
    // definitions Field Functions 
    bool hasDefinitions() const { return this->definitions_ != nullptr;};
    void deleteDefinitions() { this->definitions_ = nullptr;};
    inline string definitions() const { DARABONBA_PTR_GET_DEFAULT(definitions_, "") };
    inline RefreshMediaPlayUrlsRequest& setDefinitions(string definitions) { DARABONBA_PTR_SET_VALUE(definitions_, definitions) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline string formats() const { DARABONBA_PTR_GET_DEFAULT(formats_, "") };
    inline RefreshMediaPlayUrlsRequest& setFormats(string formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline RefreshMediaPlayUrlsRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline RefreshMediaPlayUrlsRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // sliceCount Field Functions 
    bool hasSliceCount() const { return this->sliceCount_ != nullptr;};
    void deleteSliceCount() { this->sliceCount_ = nullptr;};
    inline int32_t sliceCount() const { DARABONBA_PTR_GET_DEFAULT(sliceCount_, 0) };
    inline RefreshMediaPlayUrlsRequest& setSliceCount(int32_t sliceCount) { DARABONBA_PTR_SET_VALUE(sliceCount_, sliceCount) };


    // sliceFlag Field Functions 
    bool hasSliceFlag() const { return this->sliceFlag_ != nullptr;};
    void deleteSliceFlag() { this->sliceFlag_ = nullptr;};
    inline bool sliceFlag() const { DARABONBA_PTR_GET_DEFAULT(sliceFlag_, false) };
    inline RefreshMediaPlayUrlsRequest& setSliceFlag(bool sliceFlag) { DARABONBA_PTR_SET_VALUE(sliceFlag_, sliceFlag) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string streamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline RefreshMediaPlayUrlsRequest& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline RefreshMediaPlayUrlsRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RefreshMediaPlayUrlsRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies the resolutions of the media streams you want to refresh or prefetch. You can specify multiple resolutions. Separate multiple resolutions with commas (,). If you leave this parameter empty, media streams in all resolutions are refreshed or prefetched by default.
    // 
    // >  The value must be supported in the **Definition** section in [Parameters for media assets](https://help.aliyun.com/document_detail/124671.html).
    std::shared_ptr<string> definitions_ = nullptr;
    // The formats of the media streams you want to refresh or prefetch. You can specify multiple formats. Separate multiple formats with commas (,). If you leave this parameter empty, media streams in all formats are refreshed or prefetched by default. Valid values:
    // 
    // *   **mp4**
    // *   **m3u8**
    // *   **mp3**
    // *   **flv**
    // *   **webm**
    // *   **ts**
    std::shared_ptr<string> formats_ = nullptr;
    // The IDs of the media files that you want to refresh or prefetch. You can specify a maximum of 20 IDs. Separate multiple IDs with commas (,). You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD](https://vod.console.aliyun.com) console. In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the audio or video file. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of VideoId from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you call to upload media files.
    // *   Obtain the value of VideoId from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you call to query the media ID after the media file is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaIds_ = nullptr;
    // Specifies the type of the refresh or prefetch operation. Default value: Single. Valid values:
    // 
    // *   **Single**: Only one latest transcoded stream is refreshed or prefetched for each resolution and format.
    // *   **Multiple**: All transcoded streams are refreshed or prefetched for each resolution and format.
    std::shared_ptr<string> resultType_ = nullptr;
    // Specifies the number of the playback URLs of the TS files for the M3U8 media stream you want to refresh or prefetch. After you set this parameter, only the playback URLs of the first N TS files will be refreshed or prefetched. Valid values: 1 to 20. Default value: 5.
    std::shared_ptr<int32_t> sliceCount_ = nullptr;
    // Specifies whether to refresh or prefetch the playback URLs of the TS files of the M3U8 media stream. Default value: false. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> sliceFlag_ = nullptr;
    // Specifies the types of media streams you want to refresh or prefetch. You can specify multiple types. Separate multiple types with commas (,). If you leave this parameter empty, media streams in all types are refreshed or prefetched by default. Valid values:
    // 
    // *   **video**
    // *   **audio**
    std::shared_ptr<string> streamType_ = nullptr;
    // The type of the task that you want to create. Valid values:
    // 
    // *   **Refresh**
    // *   **Preload**
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
    // The custom configurations such as callback configurations and upload acceleration configurations. The value must be a JSON string. For more information, see the "UserData: specifies the custom configurations for media upload" section in the [Request parameter](https://help.aliyun.com/document_detail/86952.html) topic.
    // 
    // >*   The callback configurations take effect only after you specify the HTTP callback URL and select specific callback events in the ApsaraVideo VOD console. For more information about how to configure HTTP callback settings in the ApsaraVideo VOD console, see [Configure callback settings](https://help.aliyun.com/document_detail/86071.html).
    // >*   To enable the upload acceleration feature, submit a ticket. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html). For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
