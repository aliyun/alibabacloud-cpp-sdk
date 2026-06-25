// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class CompareSimilarByImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareSimilarByImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PrimaryPicContent, primaryPicContent_);
      DARABONBA_PTR_TO_JSON(SecondaryPicContent, secondaryPicContent_);
    };
    friend void from_json(const Darabonba::Json& j, CompareSimilarByImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryPicContent, primaryPicContent_);
      DARABONBA_PTR_FROM_JSON(SecondaryPicContent, secondaryPicContent_);
    };
    CompareSimilarByImageRequest() = default ;
    CompareSimilarByImageRequest(const CompareSimilarByImageRequest &) = default ;
    CompareSimilarByImageRequest(CompareSimilarByImageRequest &&) = default ;
    CompareSimilarByImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareSimilarByImageRequest() = default ;
    CompareSimilarByImageRequest& operator=(const CompareSimilarByImageRequest &) = default ;
    CompareSimilarByImageRequest& operator=(CompareSimilarByImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->primaryPicContent_ == nullptr && this->secondaryPicContent_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CompareSimilarByImageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // primaryPicContent Field Functions 
    bool hasPrimaryPicContent() const { return this->primaryPicContent_ != nullptr;};
    void deletePrimaryPicContent() { this->primaryPicContent_ = nullptr;};
    inline string getPrimaryPicContent() const { DARABONBA_PTR_GET_DEFAULT(primaryPicContent_, "") };
    inline CompareSimilarByImageRequest& setPrimaryPicContent(string primaryPicContent) { DARABONBA_PTR_SET_VALUE(primaryPicContent_, primaryPicContent) };


    // secondaryPicContent Field Functions 
    bool hasSecondaryPicContent() const { return this->secondaryPicContent_ != nullptr;};
    void deleteSecondaryPicContent() { this->secondaryPicContent_ = nullptr;};
    inline string getSecondaryPicContent() const { DARABONBA_PTR_GET_DEFAULT(secondaryPicContent_, "") };
    inline CompareSimilarByImageRequest& setSecondaryPicContent(string secondaryPicContent) { DARABONBA_PTR_SET_VALUE(secondaryPicContent_, secondaryPicContent) };


  protected:
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the <props="intl">[Image Search console](https://imagesearch.console.alibabacloud.com)<props="china">[Image Search console](https://imagesearch.console.aliyun.com) to view the instance name.
    // If you have not purchased an Image Search instance, refer to [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Make sure you distinguish between them.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The image content.
    // 
    // - The image size must not exceed 4 MB.
    // - Image formats: PNG, JPG, JPEG, BMP, GIF, WEBP, TIFF, and PPM.
    // - The transmission wait time must not exceed 5 seconds.
    // <props="china">
    // - If the service type is product image search, generic image search, furniture image search, or industrial hardware image search, the image width and height must be at least 100 px and at most 4096 px.
    // 
    // <props="china">
    // - If the service type is trademark image search, the image width and height must be at least 200 px and less than 4096 px.
    // 
    // <props="china">
    // - If the service type is fabric image search, the image width and height must be at least 448 px and at most 4096 px.
    // 
    // <props="intl">
    // - If the service type is product image search or generic image search, the image width and height must be at least 100 px and at most 4096 px.
    // 
    // - The image must not contain rotation information.
    // 
    // > **When calling by using an SDK:**- Only V3 SDKs are supported. You do not need to set the PrimaryPicContent field. The SDK encapsulates this field as PrimaryPicContentObject and automatically converts it to Base64 encoding. For examples, refer to [JAVA SDK](https://help.aliyun.com/document_detail/179188.html).- The SDK does not support passing image URLs directly. V3 SDKs provide an alternative way to upload images by URL. For examples, refer to [JAVA SDK](https://help.aliyun.com/document_detail/179188.html).
    // 
    // This parameter is required.
    shared_ptr<string> primaryPicContent_ {};
    // The image content.
    // 
    // - The image size must not exceed 4 MB.
    // - Image formats: PNG, JPG, JPEG, BMP, GIF, WEBP, TIFF, and PPM.
    // - The transmission wait time must not exceed 5 seconds.
    // <props="china">
    // - If the service type is product image search, generic image search, furniture image search, or industrial hardware image search, the image width and height must be at least 100 px and at most 4096 px.
    // 
    // <props="china">
    // - If the service type is trademark image search, the image width and height must be at least 200 px and less than 4096 px.
    // 
    // <props="china">
    // - If the service type is fabric image search, the image width and height must be at least 448 px and at most 4096 px.
    // 
    // <props="intl">
    // - If the service type is product image search or generic image search, the image width and height must be at least 100 px and at most 4096 px.
    // 
    // - The image must not contain rotation information.
    // 
    // > **When calling by using an SDK:**- Only V3 SDKs are supported. You do not need to set the PrimaryPicContent field. The SDK encapsulates this field as PrimaryPicContentObject and automatically converts it to Base64 encoding. For examples, refer to [JAVA SDK](https://help.aliyun.com/document_detail/179188.html).- The SDK does not support passing image URLs directly. V3 SDKs provide an alternative way to upload images by URL. For examples, refer to [JAVA SDK](https://help.aliyun.com/document_detail/179188.html).
    // 
    // This parameter is required.
    shared_ptr<string> secondaryPicContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
