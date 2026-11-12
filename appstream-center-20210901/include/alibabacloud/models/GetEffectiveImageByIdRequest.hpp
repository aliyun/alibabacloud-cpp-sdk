// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEFFECTIVEIMAGEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEFFECTIVEIMAGEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetEffectiveImageByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEffectiveImageByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_TO_JSON(IgnoreFilter, ignoreFilter_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ShowHidden, showHidden_);
    };
    friend void from_json(const Darabonba::Json& j, GetEffectiveImageByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_FROM_JSON(IgnoreFilter, ignoreFilter_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ShowHidden, showHidden_);
    };
    GetEffectiveImageByIdRequest() = default ;
    GetEffectiveImageByIdRequest(const GetEffectiveImageByIdRequest &) = default ;
    GetEffectiveImageByIdRequest(GetEffectiveImageByIdRequest &&) = default ;
    GetEffectiveImageByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEffectiveImageByIdRequest() = default ;
    GetEffectiveImageByIdRequest& operator=(const GetEffectiveImageByIdRequest &) = default ;
    GetEffectiveImageByIdRequest& operator=(GetEffectiveImageByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->contentLocale_ == nullptr && this->ignoreFilter_ == nullptr && this->imageId_ == nullptr && this->imageType_ == nullptr && this->productType_ == nullptr
        && this->showHidden_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetEffectiveImageByIdRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // contentLocale Field Functions 
    bool hasContentLocale() const { return this->contentLocale_ != nullptr;};
    void deleteContentLocale() { this->contentLocale_ = nullptr;};
    inline string getContentLocale() const { DARABONBA_PTR_GET_DEFAULT(contentLocale_, "") };
    inline GetEffectiveImageByIdRequest& setContentLocale(string contentLocale) { DARABONBA_PTR_SET_VALUE(contentLocale_, contentLocale) };


    // ignoreFilter Field Functions 
    bool hasIgnoreFilter() const { return this->ignoreFilter_ != nullptr;};
    void deleteIgnoreFilter() { this->ignoreFilter_ = nullptr;};
    inline bool getIgnoreFilter() const { DARABONBA_PTR_GET_DEFAULT(ignoreFilter_, false) };
    inline GetEffectiveImageByIdRequest& setIgnoreFilter(bool ignoreFilter) { DARABONBA_PTR_SET_VALUE(ignoreFilter_, ignoreFilter) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetEffectiveImageByIdRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline GetEffectiveImageByIdRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetEffectiveImageByIdRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // showHidden Field Functions 
    bool hasShowHidden() const { return this->showHidden_ != nullptr;};
    void deleteShowHidden() { this->showHidden_ = nullptr;};
    inline string getShowHidden() const { DARABONBA_PTR_GET_DEFAULT(showHidden_, "") };
    inline GetEffectiveImageByIdRequest& setShowHidden(string showHidden) { DARABONBA_PTR_SET_VALUE(showHidden_, showHidden) };


  protected:
    // The ID of the business region to query. If this parameter is not specified, regions are not filtered by this parameter. The returned regions are still constrained by the product and the visible scope of the account.
    shared_ptr<string> bizRegionId_ {};
    // The content language of the community image document in BCP 47 format, such as zh-CN or en-US. Default value: zh-CN.
    shared_ptr<string> contentLocale_ {};
    // Specifies whether to skip filtering by the operating system and adaptation status of applications. Default value: false. A value of false retains only applications that match the image operating system and have completed adaptation. A value of true skips these two filters. Application type filtering is still controlled by the API operation and the ShowHidden parameter.
    shared_ptr<bool> ignoreFilter_ {};
    // The image ID. Required when querying effective versions.
    shared_ptr<string> imageId_ {};
    // The image type. Valid values:
    // - System: System image.
    // - User: Custom image.
    // - Shared: Shared image.
    // - Community: Community image.
    shared_ptr<string> imageType_ {};
    // The product type, such as CloudDesktop, CloudApp, or WuyingServer.
    shared_ptr<string> productType_ {};
    // The additional types of virtual applications to include, in addition to the user and system applications returned by default. Valid values:
    // - VIRTUAL_DESKTOP_APP: Desktop virtual applications.
    // - ALL_VIRTUAL_APP: All virtual applications.
    shared_ptr<string> showHidden_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
