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
    virtual bool empty() const override { return this->definitions_ == nullptr
        && this->formats_ == nullptr && this->mediaIds_ == nullptr && this->resultType_ == nullptr && this->sliceCount_ == nullptr && this->sliceFlag_ == nullptr
        && this->streamType_ == nullptr && this->taskType_ == nullptr && this->userData_ == nullptr; };
    // definitions Field Functions 
    bool hasDefinitions() const { return this->definitions_ != nullptr;};
    void deleteDefinitions() { this->definitions_ = nullptr;};
    inline string getDefinitions() const { DARABONBA_PTR_GET_DEFAULT(definitions_, "") };
    inline RefreshMediaPlayUrlsRequest& setDefinitions(string definitions) { DARABONBA_PTR_SET_VALUE(definitions_, definitions) };


    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline string getFormats() const { DARABONBA_PTR_GET_DEFAULT(formats_, "") };
    inline RefreshMediaPlayUrlsRequest& setFormats(string formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline RefreshMediaPlayUrlsRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline RefreshMediaPlayUrlsRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // sliceCount Field Functions 
    bool hasSliceCount() const { return this->sliceCount_ != nullptr;};
    void deleteSliceCount() { this->sliceCount_ = nullptr;};
    inline int32_t getSliceCount() const { DARABONBA_PTR_GET_DEFAULT(sliceCount_, 0) };
    inline RefreshMediaPlayUrlsRequest& setSliceCount(int32_t sliceCount) { DARABONBA_PTR_SET_VALUE(sliceCount_, sliceCount) };


    // sliceFlag Field Functions 
    bool hasSliceFlag() const { return this->sliceFlag_ != nullptr;};
    void deleteSliceFlag() { this->sliceFlag_ = nullptr;};
    inline bool getSliceFlag() const { DARABONBA_PTR_GET_DEFAULT(sliceFlag_, false) };
    inline RefreshMediaPlayUrlsRequest& setSliceFlag(bool sliceFlag) { DARABONBA_PTR_SET_VALUE(sliceFlag_, sliceFlag) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
    inline RefreshMediaPlayUrlsRequest& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline RefreshMediaPlayUrlsRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RefreshMediaPlayUrlsRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // Specifies the definitions of the streams that you want to purge or prefetch. You can specify multiple definitions. Separate multiple definitions with commas (,). If you do not specify this parameter, **streams in all definitions are purged or prefetched by default**.
    // > The value must be one of the values defined in **Definition** in [Metric description for media assets](https://help.aliyun.com/document_detail/124671.html).
    shared_ptr<string> definitions_ {};
    // The streaming formats that you want to refresh or prefetch. You can specify multiple formats. Separate multiple formats with commas (,). If you do not specify this parameter, **streams in all formats are refreshed or prefetched by default**. Valid values:
    // - **mp4**
    // - **m3u8**
    // - **mp3**
    // - **flv**
    // - **webm**
    // - **ts**
    shared_ptr<string> formats_ {};
    // The IDs of the audio or video files that you want to refresh or prefetch. You can specify one or more IDs. Separate multiple IDs with commas (,). You can specify up to 20 IDs.
    // You can obtain audio or video IDs by using the following methods:
    // - For audio or video files uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the audio or video ID.
    // - When you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential, the audio or video ID is the value of the VideoId response parameter.
    // - After the audio or video file is uploaded, you can call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the audio or video ID, which is the value of the VideoId response parameter.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The result type of the refresh or prefetch task. Valid values:
    // - **Single** (default): Only the latest transcoded stream for each definition and format is refreshed or prefetched.
    // - **Multiple**: All transcoded streams for each definition and format are refreshed or prefetched.
    shared_ptr<string> resultType_ {};
    // The number of TS file playback URLs to refresh or prefetch for M3U8 streams. Only the first N TS file playback URLs of each M3U8 stream are refreshed or prefetched. Valid values: 1 to 20. **Default value: 5**.
    shared_ptr<int32_t> sliceCount_ {};
    // Specifies whether to refresh or prefetch the playback URLs of TS files in M3U8 streams. Valid values:
    // - **false** (default): No.
    // - **true**: Yes.
    shared_ptr<bool> sliceFlag_ {};
    // The types of the streams that you want to refresh or prefetch. You can specify multiple stream types. Separate multiple stream types with commas (,). If you do not specify this parameter, **all stream types are refreshed or prefetched by default**. Valid values:
    // - **video**: video.
    // - **audio**: audio.
    shared_ptr<string> streamType_ {};
    // The type of the task. Valid values:
    // - **Refresh**: purge.
    // - **Preload**: prefetch.
    // 
    // This parameter is required.
    shared_ptr<string> taskType_ {};
    // The custom settings. The value is a JSON string that supports settings such as message callbacks and upload acceleration. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // > - To use message callbacks in this parameter, configure an HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect. For information about how to configure HTTP callbacks in the console, see [Callback settings](https://help.aliyun.com/document_detail/86071.html).
    // > - To use the upload acceleration feature, submit a ticket to activate it. For more information, see [Upload instructions](https://help.aliyun.com/document_detail/55396.html). For information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
