// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCONVERTIMAGETOWORDJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCONVERTIMAGETOWORDJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitConvertImageToWordJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitConvertImageToWordJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageNameExtension, imageNameExtension_);
      DARABONBA_PTR_TO_JSON(ImageNames, imageNamesShrink_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrlsShrink_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitConvertImageToWordJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageNameExtension, imageNameExtension_);
      DARABONBA_PTR_FROM_JSON(ImageNames, imageNamesShrink_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrlsShrink_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
    };
    SubmitConvertImageToWordJobShrinkRequest() = default ;
    SubmitConvertImageToWordJobShrinkRequest(const SubmitConvertImageToWordJobShrinkRequest &) = default ;
    SubmitConvertImageToWordJobShrinkRequest(SubmitConvertImageToWordJobShrinkRequest &&) = default ;
    SubmitConvertImageToWordJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitConvertImageToWordJobShrinkRequest() = default ;
    SubmitConvertImageToWordJobShrinkRequest& operator=(const SubmitConvertImageToWordJobShrinkRequest &) = default ;
    SubmitConvertImageToWordJobShrinkRequest& operator=(SubmitConvertImageToWordJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageNameExtension_ == nullptr
        && return this->imageNamesShrink_ == nullptr && return this->imageUrlsShrink_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr; };
    // imageNameExtension Field Functions 
    bool hasImageNameExtension() const { return this->imageNameExtension_ != nullptr;};
    void deleteImageNameExtension() { this->imageNameExtension_ = nullptr;};
    inline string imageNameExtension() const { DARABONBA_PTR_GET_DEFAULT(imageNameExtension_, "") };
    inline SubmitConvertImageToWordJobShrinkRequest& setImageNameExtension(string imageNameExtension) { DARABONBA_PTR_SET_VALUE(imageNameExtension_, imageNameExtension) };


    // imageNamesShrink Field Functions 
    bool hasImageNamesShrink() const { return this->imageNamesShrink_ != nullptr;};
    void deleteImageNamesShrink() { this->imageNamesShrink_ = nullptr;};
    inline string imageNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(imageNamesShrink_, "") };
    inline SubmitConvertImageToWordJobShrinkRequest& setImageNamesShrink(string imageNamesShrink) { DARABONBA_PTR_SET_VALUE(imageNamesShrink_, imageNamesShrink) };


    // imageUrlsShrink Field Functions 
    bool hasImageUrlsShrink() const { return this->imageUrlsShrink_ != nullptr;};
    void deleteImageUrlsShrink() { this->imageUrlsShrink_ = nullptr;};
    inline string imageUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(imageUrlsShrink_, "") };
    inline SubmitConvertImageToWordJobShrinkRequest& setImageUrlsShrink(string imageUrlsShrink) { DARABONBA_PTR_SET_VALUE(imageUrlsShrink_, imageUrlsShrink) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitConvertImageToWordJobShrinkRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitConvertImageToWordJobShrinkRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


  protected:
    std::shared_ptr<string> imageNameExtension_ = nullptr;
    std::shared_ptr<string> imageNamesShrink_ = nullptr;
    std::shared_ptr<string> imageUrlsShrink_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif
