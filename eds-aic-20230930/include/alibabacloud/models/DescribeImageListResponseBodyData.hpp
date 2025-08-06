// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageListResponseBodyDataImageBizTags.hpp>
#include <map>
#include <alibabacloud/EdsAic20230930.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeImageListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ImageBizTags, imageBizTags_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageRegionDistributeMap, imageRegionDistributeMap_);
      DARABONBA_PTR_TO_JSON(ImageRegionList, imageRegionList_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(RenderingType, renderingType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ImageBizTags, imageBizTags_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageRegionDistributeMap, imageRegionDistributeMap_);
      DARABONBA_PTR_FROM_JSON(ImageRegionList, imageRegionList_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(RenderingType, renderingType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    DescribeImageListResponseBodyData() = default ;
    DescribeImageListResponseBodyData(const DescribeImageListResponseBodyData &) = default ;
    DescribeImageListResponseBodyData(DescribeImageListResponseBodyData &&) = default ;
    DescribeImageListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListResponseBodyData() = default ;
    DescribeImageListResponseBodyData& operator=(const DescribeImageListResponseBodyData &) = default ;
    DescribeImageListResponseBodyData& operator=(DescribeImageListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->imageBizTags_ != nullptr && this->imageId_ != nullptr
        && this->imageName_ != nullptr && this->imageRegionDistributeMap_ != nullptr && this->imageRegionList_ != nullptr && this->imageType_ != nullptr && this->imageVersion_ != nullptr
        && this->language_ != nullptr && this->releaseTime_ != nullptr && this->renderingType_ != nullptr && this->status_ != nullptr && this->systemType_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeImageListResponseBodyData& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageListResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeImageListResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeImageListResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // imageBizTags Field Functions 
    bool hasImageBizTags() const { return this->imageBizTags_ != nullptr;};
    void deleteImageBizTags() { this->imageBizTags_ = nullptr;};
    inline const vector<Models::DescribeImageListResponseBodyDataImageBizTags> & imageBizTags() const { DARABONBA_PTR_GET_CONST(imageBizTags_, vector<Models::DescribeImageListResponseBodyDataImageBizTags>) };
    inline vector<Models::DescribeImageListResponseBodyDataImageBizTags> imageBizTags() { DARABONBA_PTR_GET(imageBizTags_, vector<Models::DescribeImageListResponseBodyDataImageBizTags>) };
    inline DescribeImageListResponseBodyData& setImageBizTags(const vector<Models::DescribeImageListResponseBodyDataImageBizTags> & imageBizTags) { DARABONBA_PTR_SET_VALUE(imageBizTags_, imageBizTags) };
    inline DescribeImageListResponseBodyData& setImageBizTags(vector<Models::DescribeImageListResponseBodyDataImageBizTags> && imageBizTags) { DARABONBA_PTR_SET_RVALUE(imageBizTags_, imageBizTags) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageListResponseBodyData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImageListResponseBodyData& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageRegionDistributeMap Field Functions 
    bool hasImageRegionDistributeMap() const { return this->imageRegionDistributeMap_ != nullptr;};
    void deleteImageRegionDistributeMap() { this->imageRegionDistributeMap_ = nullptr;};
    inline const map<string, Models::DataImageRegionDistributeMapValue> & imageRegionDistributeMap() const { DARABONBA_PTR_GET_CONST(imageRegionDistributeMap_, map<string, Models::DataImageRegionDistributeMapValue>) };
    inline map<string, Models::DataImageRegionDistributeMapValue> imageRegionDistributeMap() { DARABONBA_PTR_GET(imageRegionDistributeMap_, map<string, Models::DataImageRegionDistributeMapValue>) };
    inline DescribeImageListResponseBodyData& setImageRegionDistributeMap(const map<string, Models::DataImageRegionDistributeMapValue> & imageRegionDistributeMap) { DARABONBA_PTR_SET_VALUE(imageRegionDistributeMap_, imageRegionDistributeMap) };
    inline DescribeImageListResponseBodyData& setImageRegionDistributeMap(map<string, Models::DataImageRegionDistributeMapValue> && imageRegionDistributeMap) { DARABONBA_PTR_SET_RVALUE(imageRegionDistributeMap_, imageRegionDistributeMap) };


    // imageRegionList Field Functions 
    bool hasImageRegionList() const { return this->imageRegionList_ != nullptr;};
    void deleteImageRegionList() { this->imageRegionList_ = nullptr;};
    inline const vector<string> & imageRegionList() const { DARABONBA_PTR_GET_CONST(imageRegionList_, vector<string>) };
    inline vector<string> imageRegionList() { DARABONBA_PTR_GET(imageRegionList_, vector<string>) };
    inline DescribeImageListResponseBodyData& setImageRegionList(const vector<string> & imageRegionList) { DARABONBA_PTR_SET_VALUE(imageRegionList_, imageRegionList) };
    inline DescribeImageListResponseBodyData& setImageRegionList(vector<string> && imageRegionList) { DARABONBA_PTR_SET_RVALUE(imageRegionList_, imageRegionList) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeImageListResponseBodyData& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline DescribeImageListResponseBodyData& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeImageListResponseBodyData& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline DescribeImageListResponseBodyData& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // renderingType Field Functions 
    bool hasRenderingType() const { return this->renderingType_ != nullptr;};
    void deleteRenderingType() { this->renderingType_ = nullptr;};
    inline string renderingType() const { DARABONBA_PTR_GET_DEFAULT(renderingType_, "") };
    inline DescribeImageListResponseBodyData& setRenderingType(string renderingType) { DARABONBA_PTR_SET_VALUE(renderingType_, renderingType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImageListResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline DescribeImageListResponseBodyData& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The description of the image.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the image was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the image was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<Models::DescribeImageListResponseBodyDataImageBizTags>> imageBizTags_ = nullptr;
    // The ID of the image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The region where the image is distributed. The key is the region and the value is the distribution information.
    std::shared_ptr<map<string, Models::DataImageRegionDistributeMapValue>> imageRegionDistributeMap_ = nullptr;
    // The list of regions.
    std::shared_ptr<vector<string>> imageRegionList_ = nullptr;
    // The type of the image.
    // 
    // Valid values:
    // 
    // *   User: custom images.
    // *   System: system images.
    std::shared_ptr<string> imageType_ = nullptr;
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The language of the image.
    std::shared_ptr<string> language_ = nullptr;
    // The time when the image was published.
    std::shared_ptr<string> releaseTime_ = nullptr;
    // The rendering type.
    // 
    // Valid values:
    // 
    // *   GPURemote
    // *   CPU
    // *   GPULocal
    std::shared_ptr<string> renderingType_ = nullptr;
    // The state of the image.
    // 
    // Valid values:
    // 
    // *   AVAILABLE: The image is available.
    // *   DELETE: The image is deleted.
    // *   INIT: The image is being initialized.
    // *   CREATE_FAILED: The image failed to be created.
    // *   CREATING: The image is being created.
    std::shared_ptr<string> status_ = nullptr;
    // The OS type of the image.
    std::shared_ptr<string> systemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
