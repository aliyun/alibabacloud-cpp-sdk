// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
    };
    GetImageInfosRequest() = default ;
    GetImageInfosRequest(const GetImageInfosRequest &) = default ;
    GetImageInfosRequest(GetImageInfosRequest &&) = default ;
    GetImageInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfosRequest() = default ;
    GetImageInfosRequest& operator=(const GetImageInfosRequest &) = default ;
    GetImageInfosRequest& operator=(GetImageInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && return this->imageIds_ == nullptr && return this->outputType_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t authTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetImageInfosRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string imageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline GetImageInfosRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetImageInfosRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


  protected:
    // The time when the image URL expires. Unit: seconds.
    // 
    // *   If the OutputType parameter is set to cdn:
    // 
    //     *   This parameter takes effect only if URL authentication is enabled. Otherwise, the image URL does not expire.
    //     *   Minimum value: 1.
    //     *   Maximum value: unlimited.
    //     *   Default value: The default validity period that is specified in URL authentication is used.
    // 
    // *   If the OutputType parameter is set to oss:
    // 
    //     *   This parameter takes effect only when the ACL of the Object Storage Service (OSS) bucket is private. Otherwise, the image URL does not expire.
    //     *   Minimum value: 1.
    //     *   If you store the image in the VOD bucket, the maximum value of this parameter is **2592000** (30 days). If you store the image in an OSS bucket, the maximum value of this parameter is **129600** (36 hours). The maximum value is limited to reduce security risks of the origin.
    //     *   Default value: 3600.
    std::shared_ptr<int64_t> authTimeout_ = nullptr;
    // The image IDs. Separate multiple IDs with commas (,). You can specify up to 20 image IDs. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/) and choose **Media Files > Images** in the left-side navigation pane.
    // *   Obtain the value of ImageId from the response to the CreateUploadImage operation that you call to obtain the upload URL and credential.
    // *   Obtain the value of ImageId from the response to the [SearchMedia](~~SearchMedia~~) operation after you upload images.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageIds_ = nullptr;
    // The type of the output image URL. Valid values:
    // 
    // *   oss: OSS URL
    // *   cdn: CDN URL
    std::shared_ptr<string> outputType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
