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
    virtual bool empty() const override { this->authTimeout_ != nullptr
        && this->inputURL_ != nullptr && this->mediaId_ != nullptr && this->outputType_ != nullptr && this->returnDetailedInfo_ != nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetMediaInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // inputURL Field Functions 
    bool hasInputURL() const { return this->inputURL_ != nullptr;};
    void deleteInputURL() { this->inputURL_ = nullptr;};
    inline string inputURL() const { DARABONBA_PTR_GET_DEFAULT(inputURL_, "") };
    inline GetMediaInfoRequest& setInputURL(string inputURL) { DARABONBA_PTR_SET_VALUE(inputURL_, inputURL) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaInfoRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetMediaInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // returnDetailedInfo Field Functions 
    bool hasReturnDetailedInfo() const { return this->returnDetailedInfo_ != nullptr;};
    void deleteReturnDetailedInfo() { this->returnDetailedInfo_ = nullptr;};
    inline string returnDetailedInfo() const { DARABONBA_PTR_GET_DEFAULT(returnDetailedInfo_, "") };
    inline GetMediaInfoRequest& setReturnDetailedInfo(string returnDetailedInfo) { DARABONBA_PTR_SET_VALUE(returnDetailedInfo_, returnDetailedInfo) };


  protected:
    std::shared_ptr<int64_t> authTimeout_ = nullptr;
    // The input URL of the media asset in another service. The URL must be registered in the IMS content library and bound to the ID of the media asset in IMS.
    // 
    // *   For a media asset from Object Storage Service (OSS), the URL may have one of the following formats:
    // 
    // http(s)://example-bucket.oss-cn-shanghai.aliyuncs.com/example.mp4 or
    // 
    // oss://example-bucket/example.mp4. The second format indicates that the region in which the OSS bucket of the media asset resides is the same as the region in which OSS is activated.
    std::shared_ptr<string> inputURL_ = nullptr;
    // The ID of the media asset in IMS. If this parameter is left empty, the InputURL parameter must be specified.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The type of the URL of the media asset to return in the response. Valid values:
    // 
    // *   oss (default): an OSS URL.
    // *   cdn: a CDN URL. A CDN URL is returned only if the media asset is imported from ApsaraVideo VOD and the relevant domain name is an accelerated domain name in ApsaraVideo VOD.
    std::shared_ptr<string> outputType_ = nullptr;
    // Specifies whether to return detailed information for specific media asset attributes. Supported attributes: AiRoughData.StandardSmartTagJob, which specifies whether to return detailed tag information if a tagging job has been submitted for the media asset. Valid values for the attribute:
    // 
    // *   false (default): The job result is returned as a URL.
    // *   true: The job result is returned as text.
    std::shared_ptr<string> returnDetailedInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
