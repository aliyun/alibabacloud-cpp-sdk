// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPARESIMILARBYIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class CompareSimilarByImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareSimilarByImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      // primaryPicContentObject_ is stream
      // secondaryPicContentObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, CompareSimilarByImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      // primaryPicContentObject_ is stream
      // secondaryPicContentObject_ is stream
    };
    CompareSimilarByImageAdvanceRequest() = default ;
    CompareSimilarByImageAdvanceRequest(const CompareSimilarByImageAdvanceRequest &) = default ;
    CompareSimilarByImageAdvanceRequest(CompareSimilarByImageAdvanceRequest &&) = default ;
    CompareSimilarByImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareSimilarByImageAdvanceRequest() = default ;
    CompareSimilarByImageAdvanceRequest& operator=(const CompareSimilarByImageAdvanceRequest &) = default ;
    CompareSimilarByImageAdvanceRequest& operator=(CompareSimilarByImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->primaryPicContentObject_ == nullptr && this->secondaryPicContentObject_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CompareSimilarByImageAdvanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // primaryPicContentObject Field Functions 
    bool hasPrimaryPicContentObject() const { return this->primaryPicContentObject_ != nullptr;};
    void deletePrimaryPicContentObject() { this->primaryPicContentObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getPrimaryPicContentObject() const { DARABONBA_GET(primaryPicContentObject_) };
    inline CompareSimilarByImageAdvanceRequest& setPrimaryPicContentObject(shared_ptr<Darabonba::IStream> primaryPicContentObject) { DARABONBA_SET_VALUE(primaryPicContentObject_, primaryPicContentObject) };


    // secondaryPicContentObject Field Functions 
    bool hasSecondaryPicContentObject() const { return this->secondaryPicContentObject_ != nullptr;};
    void deleteSecondaryPicContentObject() { this->secondaryPicContentObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getSecondaryPicContentObject() const { DARABONBA_GET(secondaryPicContentObject_) };
    inline CompareSimilarByImageAdvanceRequest& setSecondaryPicContentObject(shared_ptr<Darabonba::IStream> secondaryPicContentObject) { DARABONBA_SET_VALUE(secondaryPicContentObject_, secondaryPicContentObject) };


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
    shared_ptr<Darabonba::IStream> primaryPicContentObject_ {};
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
    shared_ptr<Darabonba::IStream> secondaryPicContentObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
