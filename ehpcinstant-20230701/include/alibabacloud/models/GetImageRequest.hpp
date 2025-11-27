// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalRegionIds, additionalRegionIds_);
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalRegionIds, additionalRegionIds_);
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
    };
    GetImageRequest() = default ;
    GetImageRequest(const GetImageRequest &) = default ;
    GetImageRequest(GetImageRequest &&) = default ;
    GetImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageRequest() = default ;
    GetImageRequest& operator=(const GetImageRequest &) = default ;
    GetImageRequest& operator=(GetImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalRegionIds_ == nullptr
        && return this->imageCategory_ == nullptr && return this->imageId_ == nullptr && return this->imageType_ == nullptr; };
    // additionalRegionIds Field Functions 
    bool hasAdditionalRegionIds() const { return this->additionalRegionIds_ != nullptr;};
    void deleteAdditionalRegionIds() { this->additionalRegionIds_ = nullptr;};
    inline const vector<string> & additionalRegionIds() const { DARABONBA_PTR_GET_CONST(additionalRegionIds_, vector<string>) };
    inline vector<string> additionalRegionIds() { DARABONBA_PTR_GET(additionalRegionIds_, vector<string>) };
    inline GetImageRequest& setAdditionalRegionIds(const vector<string> & additionalRegionIds) { DARABONBA_PTR_SET_VALUE(additionalRegionIds_, additionalRegionIds) };
    inline GetImageRequest& setAdditionalRegionIds(vector<string> && additionalRegionIds) { DARABONBA_PTR_SET_RVALUE(additionalRegionIds_, additionalRegionIds) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline GetImageRequest& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


  protected:
    std::shared_ptr<vector<string>> additionalRegionIds_ = nullptr;
    // The source of the image. Valid values:
    // 
    // *   Public: public images provided by Alibaba Cloud.
    // *   Custom: the custom image that you added.
    std::shared_ptr<string> imageCategory_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The type of the images. Valid values:
    // 
    // *   VM: virtual machine image.
    // *   Container: the container image.
    // 
    // Default value: VM
    std::shared_ptr<string> imageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
