// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(InputURL, inputURL_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(ReturnDetailedInfo, returnDetailedInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(InputURL, inputURL_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(ReturnDetailedInfo, returnDetailedInfo_);
    };
    GetMediaInfoRequest() = default ;
    GetMediaInfoRequest(const GetMediaInfoRequest &) = default ;
    GetMediaInfoRequest(GetMediaInfoRequest &&) = default ;
    GetMediaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoRequest() = default ;
    GetMediaInfoRequest& operator=(const GetMediaInfoRequest &) = default ;
    GetMediaInfoRequest& operator=(GetMediaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->inputURL_ == nullptr && this->mediaId_ == nullptr && this->outputType_ == nullptr && this->returnDetailedInfo_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetMediaInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string getInputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline GetMediaInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetMediaInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // returnDetailedInfo Field Functions 
    bool hasReturnDetailedInfo() const { return this->returnDetailedInfo_ != nullptr;};
    void deleteReturnDetailedInfo() { this->returnDetailedInfo_ = nullptr;};
    inline string getReturnDetailedInfo() const { DARABONBA_PTR_GET_DEFAULT(returnDetailedInfo_, "") };
    inline GetMediaInfoRequest& setReturnDetailedInfo(string returnDetailedInfo) { DARABONBA_PTR_SET_VALUE(returnDetailedInfo_, returnDetailedInfo) };


  protected:
    // The validity period of the signed URL, in seconds.
    shared_ptr<int64_t> authTimeout_ {};
    // The address of the media asset to query. You must first register the media asset in the IMS media library and bind it to a `mediaId`.
    // 
    // - Object Storage Service (OSS) URL. Two formats are supported:
    // 
    // `http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4`
    // 
    // `oss://example-bucket/example.mp4`. When you use this format, the OSS region defaults to the service endpoint region.
    shared_ptr<string> inputURL_ {};
    // The ID of the media asset in Intelligent Media Services (IMS). If you omit this parameter, you must specify `InputURL`.
    shared_ptr<string> mediaId_ {};
    // The type of URL to return for the media asset file.
    // 
    // - `oss`: Returns the OSS URL. This is the default value.
    // 
    // - `cdn`: Returns the Content Delivery Network (CDN) URL. A CDN URL is returned only if the media asset was imported from Video on Demand (VOD) and has a CDN domain name configured in VOD.
    shared_ptr<string> outputType_ {};
    // Whether to return detailed information for specific media asset fields. The only supported field is `AiRoughData.StandardSmartTagJob`, which specifies how the result of a tag analysis task is returned.
    // 
    // - `false`: The task result is returned as a URL. This is the default value.
    // 
    // - `true`: The task result is returned as a string.
    shared_ptr<string> returnDetailedInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
