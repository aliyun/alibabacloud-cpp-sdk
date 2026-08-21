// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAIANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAIANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAiAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAiAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(ResultTypes, resultTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAiAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(ResultTypes, resultTypes_);
    };
    GetMediaAiAnalysisRequest() = default ;
    GetMediaAiAnalysisRequest(const GetMediaAiAnalysisRequest &) = default ;
    GetMediaAiAnalysisRequest(GetMediaAiAnalysisRequest &&) = default ;
    GetMediaAiAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAiAnalysisRequest() = default ;
    GetMediaAiAnalysisRequest& operator=(const GetMediaAiAnalysisRequest &) = default ;
    GetMediaAiAnalysisRequest& operator=(GetMediaAiAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->mediaId_ == nullptr && this->outputType_ == nullptr && this->resultTypes_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline string getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, "") };
    inline GetMediaAiAnalysisRequest& setAuthTimeout(string authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline GetMediaAiAnalysisRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetMediaAiAnalysisRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // resultTypes Field Functions 
    bool hasResultTypes() const { return this->resultTypes_ != nullptr;};
    void deleteResultTypes() { this->resultTypes_ = nullptr;};
    inline string getResultTypes() const { DARABONBA_PTR_GET_DEFAULT(resultTypes_, "") };
    inline GetMediaAiAnalysisRequest& setResultTypes(string resultTypes) { DARABONBA_PTR_SET_VALUE(resultTypes_, resultTypes) };


  protected:
    // The expiration time of the image access URL. Unit: seconds.
    // 
    // - If OutputType is set to cdn:
    //     - Only image URLs with URL authentication enabled expire. Otherwise, the URLs are permanently valid.
    //     - Minimum value: 1.
    //     - Maximum value: unlimited.
    //     - Default value: If this parameter is not specified, the default validity period specified in URL authentication settings is used.
    // - If OutputType is set to oss:
    //     - Only image URLs with private storage permissions expire. Otherwise, the URLs are permanently valid.
    //     - Minimum value: 1.
    //     - Maximum value: To reduce security risks to the origin server, the maximum value is **2592000** (30 days) if images are stored in a bucket managed by ApsaraVideo VOD, and **129600** (36 hours) if images are stored in your own OSS bucket.
    //     - Default value: If this parameter is not specified, the value is 3600.
    shared_ptr<string> authTimeout_ {};
    // The audio ID. You can query the audio ID in the ApsaraVideo VOD console or obtain it from the response of the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation.
    shared_ptr<string> mediaId_ {};
    // The type of the output URL. Valid values:
    // 
    // - **oss**: back-to-origin URL.
    // - **cdn** (default): accelerated URL.
    shared_ptr<string> outputType_ {};
    // The type of analysis results. Separate multiple types with commas (,).
    shared_ptr<string> resultTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
