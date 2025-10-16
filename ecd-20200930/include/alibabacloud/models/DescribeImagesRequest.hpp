// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopInstanceType, desktopInstanceType_);
      DARABONBA_PTR_TO_JSON(FotaVersion, fotaVersion_);
      DARABONBA_PTR_TO_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_TO_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageStatus, imageStatus_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(LanguageType, languageType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SessionType, sessionType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopInstanceType, desktopInstanceType_);
      DARABONBA_PTR_FROM_JSON(FotaVersion, fotaVersion_);
      DARABONBA_PTR_FROM_JSON(GpuCategory, gpuCategory_);
      DARABONBA_PTR_FROM_JSON(GpuDriverVersion, gpuDriverVersion_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageStatus, imageStatus_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(LanguageType, languageType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SessionType, sessionType_);
    };
    DescribeImagesRequest() = default ;
    DescribeImagesRequest(const DescribeImagesRequest &) = default ;
    DescribeImagesRequest(DescribeImagesRequest &&) = default ;
    DescribeImagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesRequest() = default ;
    DescribeImagesRequest& operator=(const DescribeImagesRequest &) = default ;
    DescribeImagesRequest& operator=(DescribeImagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopInstanceType_ == nullptr
        && return this->fotaVersion_ == nullptr && return this->gpuCategory_ == nullptr && return this->gpuDriverVersion_ == nullptr && return this->imageId_ == nullptr && return this->imageName_ == nullptr
        && return this->imageStatus_ == nullptr && return this->imageType_ == nullptr && return this->languageType_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->osType_ == nullptr && return this->protocolType_ == nullptr && return this->regionId_ == nullptr && return this->sessionType_ == nullptr; };
    // desktopInstanceType Field Functions 
    bool hasDesktopInstanceType() const { return this->desktopInstanceType_ != nullptr;};
    void deleteDesktopInstanceType() { this->desktopInstanceType_ = nullptr;};
    inline string desktopInstanceType() const { DARABONBA_PTR_GET_DEFAULT(desktopInstanceType_, "") };
    inline DescribeImagesRequest& setDesktopInstanceType(string desktopInstanceType) { DARABONBA_PTR_SET_VALUE(desktopInstanceType_, desktopInstanceType) };


    // fotaVersion Field Functions 
    bool hasFotaVersion() const { return this->fotaVersion_ != nullptr;};
    void deleteFotaVersion() { this->fotaVersion_ = nullptr;};
    inline string fotaVersion() const { DARABONBA_PTR_GET_DEFAULT(fotaVersion_, "") };
    inline DescribeImagesRequest& setFotaVersion(string fotaVersion) { DARABONBA_PTR_SET_VALUE(fotaVersion_, fotaVersion) };


    // gpuCategory Field Functions 
    bool hasGpuCategory() const { return this->gpuCategory_ != nullptr;};
    void deleteGpuCategory() { this->gpuCategory_ = nullptr;};
    inline bool gpuCategory() const { DARABONBA_PTR_GET_DEFAULT(gpuCategory_, false) };
    inline DescribeImagesRequest& setGpuCategory(bool gpuCategory) { DARABONBA_PTR_SET_VALUE(gpuCategory_, gpuCategory) };


    // gpuDriverVersion Field Functions 
    bool hasGpuDriverVersion() const { return this->gpuDriverVersion_ != nullptr;};
    void deleteGpuDriverVersion() { this->gpuDriverVersion_ = nullptr;};
    inline string gpuDriverVersion() const { DARABONBA_PTR_GET_DEFAULT(gpuDriverVersion_, "") };
    inline DescribeImagesRequest& setGpuDriverVersion(string gpuDriverVersion) { DARABONBA_PTR_SET_VALUE(gpuDriverVersion_, gpuDriverVersion) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline const vector<string> & imageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
    inline vector<string> imageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
    inline DescribeImagesRequest& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
    inline DescribeImagesRequest& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImagesRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageStatus Field Functions 
    bool hasImageStatus() const { return this->imageStatus_ != nullptr;};
    void deleteImageStatus() { this->imageStatus_ = nullptr;};
    inline string imageStatus() const { DARABONBA_PTR_GET_DEFAULT(imageStatus_, "") };
    inline DescribeImagesRequest& setImageStatus(string imageStatus) { DARABONBA_PTR_SET_VALUE(imageStatus_, imageStatus) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string imageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DescribeImagesRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // languageType Field Functions 
    bool hasLanguageType() const { return this->languageType_ != nullptr;};
    void deleteLanguageType() { this->languageType_ = nullptr;};
    inline string languageType() const { DARABONBA_PTR_GET_DEFAULT(languageType_, "") };
    inline DescribeImagesRequest& setLanguageType(string languageType) { DARABONBA_PTR_SET_VALUE(languageType_, languageType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeImagesRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeImagesRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessionType Field Functions 
    bool hasSessionType() const { return this->sessionType_ != nullptr;};
    void deleteSessionType() { this->sessionType_ = nullptr;};
    inline string sessionType() const { DARABONBA_PTR_GET_DEFAULT(sessionType_, "") };
    inline DescribeImagesRequest& setSessionType(string sessionType) { DARABONBA_PTR_SET_VALUE(sessionType_, sessionType) };


  protected:
    // The instance type of the cloud computer. You can call the [DescribeDesktopTypes](https://help.aliyun.com/document_detail/436816.html) operation to obtain the parameter value.
    std::shared_ptr<string> desktopInstanceType_ = nullptr;
    // The image version.
    std::shared_ptr<string> fotaVersion_ = nullptr;
    // Specifies whether the images are GPU-accelerated images.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> gpuCategory_ = nullptr;
    // The version of the GPU driver.
    std::shared_ptr<string> gpuDriverVersion_ = nullptr;
    // The IDs of the images. You can specify one or more image IDs.
    std::shared_ptr<vector<string>> imageId_ = nullptr;
    // The image name.
    std::shared_ptr<string> imageName_ = nullptr;
    // The state of the image.
    std::shared_ptr<string> imageStatus_ = nullptr;
    // The type of the image.
    std::shared_ptr<string> imageType_ = nullptr;
    // The language of the OS.
    std::shared_ptr<string> languageType_ = nullptr;
    // The maximum number of entries to return on each page.
    // 
    // *   Maximum value: 100.
    // *   Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. If you do not specify this parameter, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The type of the operating system of the images. Default value: `null`.
    // 
    // Valid values:
    // 
    // *   Linux
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Windows
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> osType_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX: High-definition Experience (HDX) protocol
    // *   ASP: in-house Adaptive Streaming Protocol (ASP) (recommended)
    std::shared_ptr<string> protocolType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The session type.
    std::shared_ptr<string> sessionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
