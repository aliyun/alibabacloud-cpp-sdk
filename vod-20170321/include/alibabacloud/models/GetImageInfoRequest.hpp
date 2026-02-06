// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthTimeout, authTimeout_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
    };
    GetImageInfoRequest() = default ;
    GetImageInfoRequest(const GetImageInfoRequest &) = default ;
    GetImageInfoRequest(GetImageInfoRequest &&) = default ;
    GetImageInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfoRequest() = default ;
    GetImageInfoRequest& operator=(const GetImageInfoRequest &) = default ;
    GetImageInfoRequest& operator=(GetImageInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authTimeout_ == nullptr
        && this->imageId_ == nullptr && this->outputType_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetImageInfoRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageInfoRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetImageInfoRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


  protected:
    // The time when the image URL expires. Unit: seconds.
    // 
    // *   If you set OutputType to cdn:
    // 
    //     *   This parameter takes effect only if URL authentication is enabled. Otherwise, the image URL does not expire.
    //     *   Minimum value: 1.
    //     *   Maximum value: unlimited.
    //     *   Default value: If you leave this parameter empty, the default validity period that is specified in URL signing is used.
    // 
    // *   If you set OutputType to oss:
    // 
    //     *   This parameter takes effect only when the ACL of the Object Storage Service (OSS) bucket is private. Otherwise, the image URL does not expire.
    //     *   Minimum value: 1.
    //     *   If you store the image in the VOD bucket, the maximum value of this parameter is **2592000** (30 days). If you store the image in an OSS bucket, the maximum value of this parameter is **129600** (36 hours). The maximum value is limited to reduce security risks of the origin.
    //     *   Default value: 3600.
    shared_ptr<int64_t> authTimeout_ {};
    // The ID of the image. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/). In the left-side navigation pane, choose Media Files > Image. On the Image page, view the image ID.
    // *   Obtain the image ID from the response to the [CreateUploadImage](~~CreateUploadImage~~) operation that you call to obtain the upload URL and credential.
    // *   Obtain the image ID from the response to the [SearchMedia](~~SearchMedia~~) operation that you call to query the image.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The type of the output image URL. Valid values:
    // 
    // *   oss: OSS URL
    // *   cdn: CDN URL
    shared_ptr<string> outputType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
