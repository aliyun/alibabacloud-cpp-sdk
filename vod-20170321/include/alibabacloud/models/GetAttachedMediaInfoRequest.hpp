// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACHEDMEDIAINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACHEDMEDIAINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAttachedMediaInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttachedMediaInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttachedMediaInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
    };
    GetAttachedMediaInfoRequest() = default ;
    GetAttachedMediaInfoRequest(const GetAttachedMediaInfoRequest &) = default ;
    GetAttachedMediaInfoRequest(GetAttachedMediaInfoRequest &&) = default ;
    GetAttachedMediaInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttachedMediaInfoRequest() = default ;
    GetAttachedMediaInfoRequest& operator=(const GetAttachedMediaInfoRequest &) = default ;
    GetAttachedMediaInfoRequest& operator=(GetAttachedMediaInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authTimeout_ != nullptr
        && this->mediaIds_ != nullptr && this->outputType_ != nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetAttachedMediaInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string mediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline GetAttachedMediaInfoRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetAttachedMediaInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


  protected:
    // The validity period of the URL. Unit: seconds.
    // 
    // *   If you set the OutputType parameter to **cdn**:
    // 
    //     *   The URL of the auxiliary media asset has a validity period only if URL signing is enabled. Otherwise, the URL of the auxiliary media asset is permanently valid.
    //     *   Minimum value: **1**.
    //     *   Maximum value: unlimited.
    //     *   Default value: If you do not set this parameter, the default validity period that is specified in URL signing is used.
    // 
    // *   If you set the OutputType parameter to **oss**:
    // 
    //     *   The URL of the auxiliary media asset has a validity period only if the permissions on the Object Storage Service (OSS) bucket are private. Otherwise, the URL of the auxiliary media asset is permanently valid.
    //     *   Minimum value: **1**.
    //     *   The maximum value for a media asset stored in the VOD bucket is **2592000** (30 days) and the maximum value for a media asset stored in an OSS bucket is **129600** (36 hours). The maximum value is limited to reduce security risks of the origin.
    //     *   Default value: If you do not set this parameter, the default value **3600** is used.
    std::shared_ptr<int64_t> authTimeout_ = nullptr;
    // The ID of the auxiliary media asset.
    // 
    // *   Separate multiple IDs with commas (,). You can specify up to 20 IDs.
    // *   You can obtain the ID from the response to the [CreateUploadAttachedMedia](~~CreateUploadAttachedMedia~~) operation that you call to obtain the upload URL and credential.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaIds_ = nullptr;
    // The type of the media asset URL. Valid values:
    // 
    // *   **oss**
    // *   **cdn** (default)
    std::shared_ptr<string> outputType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
