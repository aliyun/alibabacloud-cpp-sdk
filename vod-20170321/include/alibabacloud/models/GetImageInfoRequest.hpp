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
    // The validity period of the image access URL. Unit: seconds.
    // 
    // - If OutputType is set to cdn:
    //     - The image URL expires only if URL signing is enabled. Otherwise, the URL is permanently valid.
    //     - Minimum value: 1.
    //     - Maximum value: unlimited.
    //     - Default value: If this parameter is not specified, the default validity period specified in URL signing is used.
    // - If OutputType is set to oss:
    //     - The playback URL expires only if the storage permission is set to private. Otherwise, the URL is permanently valid.
    //     - Minimum value: 1.
    //     - Maximum value: To reduce security risks to the origin server, the maximum value is **2592000** (30 days) if the image is stored in a VOD system bucket, and **129600** (36 hours) if the image is stored in your own OSS bucket.
    //     - Default value: If this parameter is not specified, the value is 3600.
    shared_ptr<int64_t> authTimeout_ {};
    // The image ID. You can obtain the image ID by using one of the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/) and choose **Media Files > Images** to view the ID.
    // - Obtain the ID from the response of the [CreateUploadImage](~~CreateUploadImage~~) operation when you retrieve the upload URL and credential.
    // - Obtain the ID from the response of the [SearchMedia](~~SearchMedia~~) operation when you query images.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The type of the image access URL to return. Valid values:
    // 
    // - oss: the origin URL.
    // - cdn (default): the accelerated URL.
    shared_ptr<string> outputType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
