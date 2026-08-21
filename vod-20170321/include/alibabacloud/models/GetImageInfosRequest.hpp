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
        && this->imageIds_ == nullptr && this->outputType_ == nullptr; };
    // authTimeout Field Functions 
    bool hasAuthTimeout() const { return this->authTimeout_ != nullptr;};
    void deleteAuthTimeout() { this->authTimeout_ = nullptr;};
    inline int64_t getAuthTimeout() const { DARABONBA_PTR_GET_DEFAULT(authTimeout_, 0L) };
    inline GetImageInfosRequest& setAuthTimeout(int64_t authTimeout) { DARABONBA_PTR_SET_VALUE(authTimeout_, authTimeout) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string getImageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline GetImageInfosRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline GetImageInfosRequest& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


  protected:
    // The validity period of the image access URL. Unit: seconds.
    // 
    // - If OutputType is set to cdn:
    //     - The image URL expires only if URL signing is enabled. Otherwise, the URL is permanently valid.
    //     - Minimum value: 1.
    //     - Maximum value: unlimited.
    //     - Default value: If this parameter is not specified, the default validity period specified in URL signing is used.
    // - If OutputType is set to oss:
    //     - The image URL expires only if the storage permission is set to private. Otherwise, the URL is permanently valid.
    //     - Minimum value: 1.
    //     - Maximum value: To reduce security risks to the origin server, the maximum value is **2592000** (30 days) if the image is stored in a bucket managed by ApsaraVideo VOD, and **129600** (36 hours) if the image is stored in your own OSS bucket.
    //     - Default value: If this parameter is not specified, the value is 3600.
    shared_ptr<int64_t> authTimeout_ {};
    // The list of image IDs. Separate multiple IDs with commas (,). A maximum of 20 IDs are supported. You can obtain image IDs by using the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/) and choose **Media Files > Images** to view the IDs.
    // - Obtain the IDs from the response when you call [CreateUploadImage](~~CreateUploadImage~~) to obtain the upload URL and credential.
    // - Obtain the IDs from the response when you call [SearchMedia](~~SearchMedia~~) to query images.
    // 
    // This parameter is required.
    shared_ptr<string> imageIds_ {};
    // The type of the image access URL to return. Valid values:
    // 
    // - oss: the storage address.
    // - cdn (default): the CDN-accelerated URL.
    shared_ptr<string> outputType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
