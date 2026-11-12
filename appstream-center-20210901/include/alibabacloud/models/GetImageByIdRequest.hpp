// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetImageByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(IgnoreFilter, ignoreFilter_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ShowHidden, showHidden_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(IgnoreFilter, ignoreFilter_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ShowHidden, showHidden_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetImageByIdRequest() = default ;
    GetImageByIdRequest(const GetImageByIdRequest &) = default ;
    GetImageByIdRequest(GetImageByIdRequest &&) = default ;
    GetImageByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageByIdRequest() = default ;
    GetImageByIdRequest& operator=(const GetImageByIdRequest &) = default ;
    GetImageByIdRequest& operator=(GetImageByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->ignoreFilter_ == nullptr && this->imageId_ == nullptr && this->productType_ == nullptr && this->showHidden_ == nullptr && this->versionId_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetImageByIdRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // ignoreFilter Field Functions 
    bool hasIgnoreFilter() const { return this->ignoreFilter_ != nullptr;};
    void deleteIgnoreFilter() { this->ignoreFilter_ = nullptr;};
    inline bool getIgnoreFilter() const { DARABONBA_PTR_GET_DEFAULT(ignoreFilter_, false) };
    inline GetImageByIdRequest& setIgnoreFilter(bool ignoreFilter) { DARABONBA_PTR_SET_VALUE(ignoreFilter_, ignoreFilter) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline GetImageByIdRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetImageByIdRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // showHidden Field Functions 
    bool hasShowHidden() const { return this->showHidden_ != nullptr;};
    void deleteShowHidden() { this->showHidden_ = nullptr;};
    inline string getShowHidden() const { DARABONBA_PTR_GET_DEFAULT(showHidden_, "") };
    inline GetImageByIdRequest& setShowHidden(string showHidden) { DARABONBA_PTR_SET_VALUE(showHidden_, showHidden) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetImageByIdRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the business region to query. If you do not specify this parameter, regions are not filtered by this parameter. The returned regions are still subject to the visibility scope of the product and the account.
    shared_ptr<string> bizRegionId_ {};
    // Specifies whether to skip the operating system and adaptation status filtering for adapted applications. Default value: false. If you set this parameter to false, only applications whose operating system matches the image and whose adaptation is complete are retained. If you set this parameter to true, these two filters are skipped. Application type filtering is still controlled by the API operation and the ShowHidden parameter.
    shared_ptr<bool> ignoreFilter_ {};
    // The image ID. You must specify at least one of ImageId and VersionId. If you specify only this parameter, the online version is queried.
    shared_ptr<string> imageId_ {};
    // The product type. Examples: CloudDesktop (Cloud Desktop), CloudApp (Cloud App), and WuyingServer (WUYING Workspace Enterprise Edition workstation).
    shared_ptr<string> productType_ {};
    // The types of virtual applications to include in addition to the default user applications and system applications. Valid values:
    // - VIRTUAL_DESKTOP_APP: desktop virtual applications.
    // - ALL_VIRTUAL_APP: all virtual applications.
    shared_ptr<string> showHidden_ {};
    // The image version ID. You can specify this parameter alone to query a specific version. If you specify both this parameter and ImageId, the version must belong to the specified image.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
