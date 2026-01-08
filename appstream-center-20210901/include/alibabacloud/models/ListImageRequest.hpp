// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionIdList, bizRegionIdList_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_TO_JSON(FeatureList, featureList_);
      DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(LanguageType, languageType_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(PlatformNameList, platformNameList_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ProductTypeList, productTypeList_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceType, resourceInstanceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionIdList, bizRegionIdList_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_FROM_JSON(FeatureList, featureList_);
      DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(LanguageType, languageType_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(PlatformNameList, platformNameList_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ProductTypeList, productTypeList_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceType, resourceInstanceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
    };
    ListImageRequest() = default ;
    ListImageRequest(const ListImageRequest &) = default ;
    ListImageRequest(ListImageRequest &&) = default ;
    ListImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRequest() = default ;
    ListImageRequest& operator=(const ListImageRequest &) = default ;
    ListImageRequest& operator=(ListImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagList& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TagList& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TagList() = default ;
      TagList(const TagList &) = default ;
      TagList(TagList &&) = default ;
      TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagList() = default ;
      TagList& operator=(const TagList &) = default ;
      TagList& operator=(TagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TagList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the custom tag.
      shared_ptr<string> key_ {};
      // The value of the custom tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bizRegionIdList_ == nullptr
        && this->bizType_ == nullptr && this->bizTypeList_ == nullptr && this->featureList_ == nullptr && this->fotaVersion_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageType_ == nullptr && this->languageType_ == nullptr && this->osType_ == nullptr && this->packageType_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->platformName_ == nullptr && this->platformNameList_ == nullptr && this->productType_ == nullptr
        && this->productTypeList_ == nullptr && this->protocolType_ == nullptr && this->resourceInstanceType_ == nullptr && this->status_ == nullptr && this->tagList_ == nullptr; };
    // bizRegionIdList Field Functions 
    bool hasBizRegionIdList() const { return this->bizRegionIdList_ != nullptr;};
    void deleteBizRegionIdList() { this->bizRegionIdList_ = nullptr;};
    inline const vector<string> & getBizRegionIdList() const { DARABONBA_PTR_GET_CONST(bizRegionIdList_, vector<string>) };
    inline vector<string> getBizRegionIdList() { DARABONBA_PTR_GET(bizRegionIdList_, vector<string>) };
    inline ListImageRequest& setBizRegionIdList(const vector<string> & bizRegionIdList) { DARABONBA_PTR_SET_VALUE(bizRegionIdList_, bizRegionIdList) };
    inline ListImageRequest& setBizRegionIdList(vector<string> && bizRegionIdList) { DARABONBA_PTR_SET_RVALUE(bizRegionIdList_, bizRegionIdList) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListImageRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // bizTypeList Field Functions 
    bool hasBizTypeList() const { return this->bizTypeList_ != nullptr;};
    void deleteBizTypeList() { this->bizTypeList_ = nullptr;};
    inline const vector<int32_t> & getBizTypeList() const { DARABONBA_PTR_GET_CONST(bizTypeList_, vector<int32_t>) };
    inline vector<int32_t> getBizTypeList() { DARABONBA_PTR_GET(bizTypeList_, vector<int32_t>) };
    inline ListImageRequest& setBizTypeList(const vector<int32_t> & bizTypeList) { DARABONBA_PTR_SET_VALUE(bizTypeList_, bizTypeList) };
    inline ListImageRequest& setBizTypeList(vector<int32_t> && bizTypeList) { DARABONBA_PTR_SET_RVALUE(bizTypeList_, bizTypeList) };


    // featureList Field Functions 
    bool hasFeatureList() const { return this->featureList_ != nullptr;};
    void deleteFeatureList() { this->featureList_ = nullptr;};
    inline const vector<string> & getFeatureList() const { DARABONBA_PTR_GET_CONST(featureList_, vector<string>) };
    inline vector<string> getFeatureList() { DARABONBA_PTR_GET(featureList_, vector<string>) };
    inline ListImageRequest& setFeatureList(const vector<string> & featureList) { DARABONBA_PTR_SET_VALUE(featureList_, featureList) };
    inline ListImageRequest& setFeatureList(vector<string> && featureList) { DARABONBA_PTR_SET_RVALUE(featureList_, featureList) };


    // fotaVersion Field Functions 
    bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
    void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
    inline string getFotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
    inline ListImageRequest& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ListImageRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline ListImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // languageType Field Functions 
    bool hasLanguageType() const { return this->languageType_ != nullptr;};
    void deleteLanguageType() { this->languageType_ = nullptr;};
    inline string getLanguageType() const { DARABONBA_PTR_GET_DEFAULT(languageType_, "") };
    inline ListImageRequest& setLanguageType(string languageType) { DARABONBA_PTR_SET_VALUE(languageType_, languageType) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListImageRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline ListImageRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListImageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListImageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string getPlatformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline ListImageRequest& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // platformNameList Field Functions 
    bool hasPlatformNameList() const { return this->platformNameList_ != nullptr;};
    void deletePlatformNameList() { this->platformNameList_ = nullptr;};
    inline const vector<string> & getPlatformNameList() const { DARABONBA_PTR_GET_CONST(platformNameList_, vector<string>) };
    inline vector<string> getPlatformNameList() { DARABONBA_PTR_GET(platformNameList_, vector<string>) };
    inline ListImageRequest& setPlatformNameList(const vector<string> & platformNameList) { DARABONBA_PTR_SET_VALUE(platformNameList_, platformNameList) };
    inline ListImageRequest& setPlatformNameList(vector<string> && platformNameList) { DARABONBA_PTR_SET_RVALUE(platformNameList_, platformNameList) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // productTypeList Field Functions 
    bool hasProductTypeList() const { return this->productTypeList_ != nullptr;};
    void deleteProductTypeList() { this->productTypeList_ = nullptr;};
    inline const vector<string> & getProductTypeList() const { DARABONBA_PTR_GET_CONST(productTypeList_, vector<string>) };
    inline vector<string> getProductTypeList() { DARABONBA_PTR_GET(productTypeList_, vector<string>) };
    inline ListImageRequest& setProductTypeList(const vector<string> & productTypeList) { DARABONBA_PTR_SET_VALUE(productTypeList_, productTypeList) };
    inline ListImageRequest& setProductTypeList(vector<string> && productTypeList) { DARABONBA_PTR_SET_RVALUE(productTypeList_, productTypeList) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ListImageRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // resourceInstanceType Field Functions 
    bool hasResourceInstanceType() const { return this->resourceInstanceType_ != nullptr;};
    void deleteResourceInstanceType() { this->resourceInstanceType_ = nullptr;};
    inline string getResourceInstanceType() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceType_, "") };
    inline ListImageRequest& setResourceInstanceType(string resourceInstanceType) { DARABONBA_PTR_SET_VALUE(resourceInstanceType_, resourceInstanceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListImageRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<ListImageRequest::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<ListImageRequest::TagList>) };
    inline vector<ListImageRequest::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<ListImageRequest::TagList>) };
    inline ListImageRequest& setTagList(const vector<ListImageRequest::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline ListImageRequest& setTagList(vector<ListImageRequest::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


  protected:
    // The regions that are supported. The EDS images are centralized. Use this parameter to query the regions where the image is deployed.
    shared_ptr<vector<string>> bizRegionIdList_ {};
    // The service type. This parameter is not available publicly.
    // 
    // Valid value:
    // 
    // *   1 (default)
    shared_ptr<int32_t> bizType_ {};
    // The list of all service types. It is not available publicly.
    shared_ptr<vector<int32_t>> bizTypeList_ {};
    // The features supported by the image.
    shared_ptr<vector<string>> featureList_ {};
    // The image version.
    shared_ptr<string> fotaVersion_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The image name. Fuzzy match is supported.
    shared_ptr<string> imageName_ {};
    // The type of the images.
    // 
    // Valid values:
    // 
    // *   User: a custom image.
    // *   Shared: a shared image.
    // *   System: a system image.
    // *   Community: a community image.
    shared_ptr<string> imageType_ {};
    // The language.
    // 
    // Valid values:
    // 
    // *   en-US: English.
    // *   zh-HK: Chinese, Traditional (Hong Kong, China).
    // *   zh-CN: Simplified Chinese.
    // *   ja-JP: Japanese.
    shared_ptr<string> languageType_ {};
    // The OS type of the image.
    // 
    // Valid values:
    // 
    // *   Linux
    // *   Unknown
    // *   Windows
    // *   Android
    shared_ptr<string> osType_ {};
    // The image encapsulation type.
    // 
    // Valid values:
    // 
    // *   Ecs_Container: ECS and Docker image
    // *   Ecs: ECS image
    shared_ptr<string> packageType_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the operating system platform.
    // 
    // Valid values:
    // 
    // *   Ubuntu
    // *   Debian
    // *   Windows Server 2022
    // *   Windows Server 2019
    // *   Windows Server 2016
    // *   Windows 11
    // *   Windows 10
    shared_ptr<string> platformName_ {};
    // The list of supported platform types. For valid values, refer to PlatformName above.
    shared_ptr<vector<string>> platformNameList_ {};
    // The product type.
    // 
    // Valid values:
    // 
    // *   CloudDesktop: Elastic Desktop Service
    // *   CloudApp: App Streaming
    // *   WuyingServer: Workstation
    shared_ptr<string> productType_ {};
    // The list of products that are supported when the image supports multiple products.
    shared_ptr<vector<string>> productTypeList_ {};
    // The protocol type of the image.
    // 
    // Valid values:
    // 
    // *   HDX: the High-definition Experience (HDX) protocol
    // *   ASP: the Alibaba Cloud-developed ASP protocol
    shared_ptr<string> protocolType_ {};
    // Find images with certain fixed specifications.
    shared_ptr<string> resourceInstanceType_ {};
    // The status of the image. You can query images in the specified status. By default, all images in the Not Deleted state are queried.
    // 
    // Valid values:
    // 
    // *   AVAILABLE: The image is available.
    // *   INIT: The image is being initialized.
    // *   CREATE_FAILED: The image failed to be created.
    // *   CREATING: The image is being created.
    shared_ptr<string> status_ {};
    // The tags to query.
    shared_ptr<vector<ListImageRequest::TagList>> tagList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
