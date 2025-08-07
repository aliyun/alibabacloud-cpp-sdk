// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalRegionIds, additionalRegionIdsShrink_);
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalRegionIds, additionalRegionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
    };
    GetImageShrinkRequest() = default ;
    GetImageShrinkRequest(const GetImageShrinkRequest &) = default ;
    GetImageShrinkRequest(GetImageShrinkRequest &&) = default ;
    GetImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageShrinkRequest() = default ;
    GetImageShrinkRequest& operator=(const GetImageShrinkRequest &) = default ;
    GetImageShrinkRequest& operator=(GetImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalRegionIdsShrink_ != nullptr
        && this->imageCategory_ != nullptr && this->imageId_ != nullptr && this->imageType_ != nullptr; };
    // additionalRegionIdsShrink Field Functions 
    bool hasAdditionalRegionIdsShrink() const { return this->additionalRegionIdsShrink_ != nullptr;};
    void deleteAdditionalRegionIdsShrink() { this->additionalRegionIdsShrink_ = nullptr;};
    inline string additionalRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(additionalRegionIdsShrink_, "") };
    inline GetImageShrinkRequest& setAdditionalRegionIdsShrink(string additionalRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(additionalRegionIdsShrink_, additionalRegionIdsShrink) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline GetImageShrinkRequest& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetImageShrinkRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


  protected:
    std::shared_ptr<string> additionalRegionIdsShrink_ = nullptr;
    std::shared_ptr<string> imageCategory_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> imageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
