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
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->mediaIds_ == nullptr && this->outputType_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetAttachedMediaInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline GetAttachedMediaInfoRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetAttachedMediaInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


  protected:
    // The validity period of the auxiliary media asset URL. Unit: seconds.
    // 
    //  - If OutputType is set to **cdn**:
    //     - The URL expires only if URL authentication is enabled. Otherwise, the URL is permanently valid.
    //     - Minimum value: **1**.
    //     - Maximum value: unlimited.
    //     - Default value: If you do not specify this parameter, the default validity period specified in URL authentication is used.
    // - If OutputType is set to **oss**:
    //     - The URL expires only if the storage permission is set to private. Otherwise, the URL is permanently valid.
    //     - Minimum value: **1**.
    //     - Maximum value: To reduce security risks to the origin server, the maximum value is **2592000** (30 days) if the auxiliary media asset is stored in a bucket managed by ApsaraVideo VOD, and **129600** (36 hours) if the auxiliary media asset is stored in your own OSS bucket.
    //     - Default value: If you do not specify this parameter, the value is **3600**.
    shared_ptr<int64_t> authTimeout_ {};
    // The auxiliary media asset IDs.
    // - Separate multiple IDs with commas (,). You can specify up to 20 IDs.
    // - The IDs are returned after you call the [CreateUploadAttachedMedia](~~CreateUploadAttachedMedia~~) operation to obtain the upload URL and credential for the auxiliary media asset.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The type of the output URL. Valid values:
    // 
    // - **oss**: the back-to-origin URL.
    // - **cdn** (default): the CDN-accelerated URL.
    shared_ptr<string> outputType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
