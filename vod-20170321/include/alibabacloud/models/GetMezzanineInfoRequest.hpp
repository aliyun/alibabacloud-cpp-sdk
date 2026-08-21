// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEZZANINEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEZZANINEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMezzanineInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMezzanineInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionType, additionType_);
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMezzanineInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionType, additionType_);
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    GetMezzanineInfoRequest() = default ;
    GetMezzanineInfoRequest(const GetMezzanineInfoRequest &) = default ;
    GetMezzanineInfoRequest(GetMezzanineInfoRequest &&) = default ;
    GetMezzanineInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMezzanineInfoRequest() = default ;
    GetMezzanineInfoRequest& operator=(const GetMezzanineInfoRequest &) = default ;
    GetMezzanineInfoRequest& operator=(GetMezzanineInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionType_ == nullptr
        && this->authTimeout_ == nullptr && this->outputType_ == nullptr && this->referenceId_ == nullptr && this->videoId_ == nullptr; };
    // additionType Field Functions 
    bool hasAdditionType() const { return this->additionType_ != nullptr;};
    void deleteAdditionType() { this->additionType_ = nullptr;};
    inline string getAdditionType() const { DARABONBA_PTR_GET_DEFAULT(additionType_, "") };
    inline GetMezzanineInfoRequest& setAdditionType(string additionType) { DARABONBA_PTR_SET_VALUE(additionType_, additionType) };


    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetMezzanineInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetMezzanineInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline GetMezzanineInfoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline GetMezzanineInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The type of additional information. Separate multiple values with commas (,). By default, only basic information is returned. Valid values:
    // 
    // - **video**: video stream information.
    // - **audio**: audio stream information.
    shared_ptr<string> additionType_ {};
    // The validity period of the signature for FileURL (source file URL). Unit: seconds. Default value: **3600**. The minimum value is **1**.
    //  - If OutputType is set to **cdn**:
    //     - FileURL expires periodically only if URL signing is enabled. Otherwise, FileURL is permanently valid.
    //     - Minimum value: **1**.
    //     - Maximum value: unlimited.
    //     - Default value: **3600** if this parameter is not specified.
    // - If OutputType is set to **oss**:
    //     - FileURL expires periodically only if the storage permission is set to private. Otherwise, FileURL is permanently valid.
    //     - Minimum value: **1**.
    //     - Maximum value: To reduce security risks to the origin server, the maximum value is **2592000** (30 days) when the audio or video file is stored in a bucket managed by ApsaraVideo VOD, and **129600** (36 hours) when the file is stored in your own OSS bucket.
    //     - Default value: **3600** if this parameter is not specified.
    shared_ptr<int64_t> authTimeout_ {};
    // The type of the output URL. Valid values:
    // 
    // - **oss**: back-to-origin URL.
    // - **cdn** (default): CDN URL.
    // 
    // > If the bucket type of the source file is in, only the OSS URL is returned.
    shared_ptr<string> outputType_ {};
    // The custom ID. Only lowercase letters, uppercase letters, digits, hyphens (-), and underscores (_) are supported. The value must be 6 to 64 characters in length and is unique at the user level.
    shared_ptr<string> referenceId_ {};
    // The audio or video ID. You can obtain the ID by using one of the following methods:
    // - For audio or video files uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the video ID.
    // - Obtain the video ID from the VideoId parameter returned by the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation when you request an upload URL and credential.
    // - After the video is uploaded, call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the audio or video ID, which is the value of VideoId in the response.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
