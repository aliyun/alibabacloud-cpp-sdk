// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDERIMAGEBYPARENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUILDERIMAGEBYPARENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class BuilderImageByParentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuilderImageByParentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Distro, distro_);
      DARABONBA_PTR_TO_JSON(DriverIdList, driverIdList_);
      DARABONBA_PTR_TO_JSON(ImageCreateMode, imageCreateMode_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(ParentImageId, parentImageId_);
      DARABONBA_PTR_TO_JSON(PerformanceType, performanceType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PropertyMap, propertyMap_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, BuilderImageByParentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Distro, distro_);
      DARABONBA_PTR_FROM_JSON(DriverIdList, driverIdList_);
      DARABONBA_PTR_FROM_JSON(ImageCreateMode, imageCreateMode_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(ParentImageId, parentImageId_);
      DARABONBA_PTR_FROM_JSON(PerformanceType, performanceType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PropertyMap, propertyMap_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    BuilderImageByParentRequest() = default ;
    BuilderImageByParentRequest(const BuilderImageByParentRequest &) = default ;
    BuilderImageByParentRequest(BuilderImageByParentRequest &&) = default ;
    BuilderImageByParentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuilderImageByParentRequest() = default ;
    BuilderImageByParentRequest& operator=(const BuilderImageByParentRequest &) = default ;
    BuilderImageByParentRequest& operator=(BuilderImageByParentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourceList() = default ;
      ResourceList(const ResourceList &) = default ;
      ResourceList(ResourceList &&) = default ;
      ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceList() = default ;
      ResourceList& operator=(const ResourceList &) = default ;
      ResourceList& operator=(ResourceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resource_ == nullptr
        && this->resourceType_ == nullptr; };
      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline ResourceList& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The resource content corresponding to ResourceType. For the URL type, enter or return an accessible resource URL.
      shared_ptr<string> resource_ {};
      // The provision method of the resource content. Valid values:
      // 
      // - **HOSTED**: Hosted resource.
      // - **TEXT**: Text resource.
      // - **URL**: Resource provided through a URL.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->distro_ == nullptr && this->driverIdList_ == nullptr && this->imageCreateMode_ == nullptr
        && this->imageName_ == nullptr && this->language_ == nullptr && this->nodeInstanceType_ == nullptr && this->officeSiteId_ == nullptr && this->packageType_ == nullptr
        && this->parentImageId_ == nullptr && this->performanceType_ == nullptr && this->productType_ == nullptr && this->propertyMap_ == nullptr && this->resourceList_ == nullptr
        && this->runMode_ == nullptr && this->sourceRegion_ == nullptr && this->systemDiskSize_ == nullptr && this->vSwitchIdList_ == nullptr && this->versionName_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline BuilderImageByParentRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline BuilderImageByParentRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BuilderImageByParentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distro Field Functions 
    bool hasDistro() const { return this->distro_ != nullptr;};
    void deleteDistro() { this->distro_ = nullptr;};
    inline string getDistro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
    inline BuilderImageByParentRequest& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


    // driverIdList Field Functions 
    bool hasDriverIdList() const { return this->driverIdList_ != nullptr;};
    void deleteDriverIdList() { this->driverIdList_ = nullptr;};
    inline const vector<string> & getDriverIdList() const { DARABONBA_PTR_GET_CONST(driverIdList_, vector<string>) };
    inline vector<string> getDriverIdList() { DARABONBA_PTR_GET(driverIdList_, vector<string>) };
    inline BuilderImageByParentRequest& setDriverIdList(const vector<string> & driverIdList) { DARABONBA_PTR_SET_VALUE(driverIdList_, driverIdList) };
    inline BuilderImageByParentRequest& setDriverIdList(vector<string> && driverIdList) { DARABONBA_PTR_SET_RVALUE(driverIdList_, driverIdList) };


    // imageCreateMode Field Functions 
    bool hasImageCreateMode() const { return this->imageCreateMode_ != nullptr;};
    void deleteImageCreateMode() { this->imageCreateMode_ = nullptr;};
    inline string getImageCreateMode() const { DARABONBA_PTR_GET_DEFAULT(imageCreateMode_, "") };
    inline BuilderImageByParentRequest& setImageCreateMode(string imageCreateMode) { DARABONBA_PTR_SET_VALUE(imageCreateMode_, imageCreateMode) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline BuilderImageByParentRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline BuilderImageByParentRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline BuilderImageByParentRequest& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline BuilderImageByParentRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline BuilderImageByParentRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // parentImageId Field Functions 
    bool hasParentImageId() const { return this->parentImageId_ != nullptr;};
    void deleteParentImageId() { this->parentImageId_ = nullptr;};
    inline string getParentImageId() const { DARABONBA_PTR_GET_DEFAULT(parentImageId_, "") };
    inline BuilderImageByParentRequest& setParentImageId(string parentImageId) { DARABONBA_PTR_SET_VALUE(parentImageId_, parentImageId) };


    // performanceType Field Functions 
    bool hasPerformanceType() const { return this->performanceType_ != nullptr;};
    void deletePerformanceType() { this->performanceType_ = nullptr;};
    inline string getPerformanceType() const { DARABONBA_PTR_GET_DEFAULT(performanceType_, "") };
    inline BuilderImageByParentRequest& setPerformanceType(string performanceType) { DARABONBA_PTR_SET_VALUE(performanceType_, performanceType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline BuilderImageByParentRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // propertyMap Field Functions 
    bool hasPropertyMap() const { return this->propertyMap_ != nullptr;};
    void deletePropertyMap() { this->propertyMap_ = nullptr;};
    inline const map<string, string> & getPropertyMap() const { DARABONBA_PTR_GET_CONST(propertyMap_, map<string, string>) };
    inline map<string, string> getPropertyMap() { DARABONBA_PTR_GET(propertyMap_, map<string, string>) };
    inline BuilderImageByParentRequest& setPropertyMap(const map<string, string> & propertyMap) { DARABONBA_PTR_SET_VALUE(propertyMap_, propertyMap) };
    inline BuilderImageByParentRequest& setPropertyMap(map<string, string> && propertyMap) { DARABONBA_PTR_SET_RVALUE(propertyMap_, propertyMap) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<BuilderImageByParentRequest::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<BuilderImageByParentRequest::ResourceList>) };
    inline vector<BuilderImageByParentRequest::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<BuilderImageByParentRequest::ResourceList>) };
    inline BuilderImageByParentRequest& setResourceList(const vector<BuilderImageByParentRequest::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline BuilderImageByParentRequest& setResourceList(vector<BuilderImageByParentRequest::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline BuilderImageByParentRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline BuilderImageByParentRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline BuilderImageByParentRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // vSwitchIdList Field Functions 
    bool hasVSwitchIdList() const { return this->vSwitchIdList_ != nullptr;};
    void deleteVSwitchIdList() { this->vSwitchIdList_ = nullptr;};
    inline const vector<string> & getVSwitchIdList() const { DARABONBA_PTR_GET_CONST(vSwitchIdList_, vector<string>) };
    inline vector<string> getVSwitchIdList() { DARABONBA_PTR_GET(vSwitchIdList_, vector<string>) };
    inline BuilderImageByParentRequest& setVSwitchIdList(const vector<string> & vSwitchIdList) { DARABONBA_PTR_SET_VALUE(vSwitchIdList_, vSwitchIdList) };
    inline BuilderImageByParentRequest& setVSwitchIdList(vector<string> && vSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vSwitchIdList_, vSwitchIdList) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline BuilderImageByParentRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The business type to which the image belongs. **Required**. Valid values:
    // 
    // - **1**: Basic product.
    // - **2**: Personal cloud.
    // - **3**: Cloud office.
    // - **4**: Cloud Flow.
    // - **10**: Personal edition.
    // - **20**: Business edition.
    // - **60**: Linggou team edition.
    shared_ptr<int32_t> bizType_ {};
    // The capacity of the data cloud disk in the creation environment. Unit: GiB. Specify this parameter when a data cloud disk is required, and ensure that it meets the disk requirements of the selected resource specifications.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The description of the new image, which facilitates subsequent queries and differentiation of images.
    shared_ptr<string> description_ {};
    // The operating system distribution information of the image. Enter the distribution identifier that is consistent with the parent image used.
    shared_ptr<string> distro_ {};
    // The list of driver IDs used when creating the image. A maximum of 200 items are supported. When you need to specify drivers, enter the IDs of existing drivers that are applicable to the target image.
    // 
    // **If PropertyMap.DRIVER_LIST is also specified, this parameter overwrites the driver list in it.**
    shared_ptr<vector<string>> driverIdList_ {};
    // The image creation mode. Use the following mode:
    // 
    // - **BUILDER_MANUAL**: Manually enter the creation environment to install applications and configure the image.
    // 
    // This parameter is required.
    shared_ptr<string> imageCreateMode_ {};
    // The name of the new image. **Required**. The name must start with a letter or a Chinese character, and can contain letters, digits, Chinese characters, colons (:), underscores (_), periods (.), and hyphens (-). It cannot start with http:// or https://. The length is calculated as 3 for each Chinese character and 1 for each other character. The total length must be 2 to 64 characters.
    shared_ptr<string> imageName_ {};
    // The language of the image. Valid values:
    // 
    // - **zh-CN**: Simplified Chinese.
    // - **zh-HK**: Traditional Chinese (Hong Kong).
    // - **en-US**: English.
    // - **ja-JP**: Japanese.
    // - **CN**: Compatible value for Simplified Chinese.
    // - **EN**: Compatible value for English.
    // - **JP**: Compatible value for Japanese.
    // - **CN-HK**: Compatible value for Traditional Chinese (Hong Kong).
    shared_ptr<string> language_ {};
    // The ID of the node specifications for the creation resources. You can invoke ListNodeInstanceType to query the ID. Select a specification that is active in the creation region and under the associated product, and meets the CPU or GPU computing requirements.
    shared_ptr<string> nodeInstanceType_ {};
    // The ID of the office network used by the creation resources. Specify this parameter when a specific office network is required, and ensure that it is consistent with the creation region.
    shared_ptr<string> officeSiteId_ {};
    // The package type of the image. Keep it consistent with the selected parent image and creation scenario. Valid values:
    // 
    // - **Ecs**: ECS instance image.
    // - **Vhd**: VHD application image.
    // - **Container**: Container image.
    // - **Ecs_Container**: ECS and container combined image.
    // - **K8s_Node**: Kubernetes node image.
    // 
    // **This operation does not provide the BaseImageId parameter. You cannot explicitly specify the Vhd or Container type that requires a base image to be configured separately.**
    shared_ptr<string> packageType_ {};
    // The ID of the parent image used to create the new image. **Required**. You can call ListImage to query the ID. An available distribution record of the parent image must exist in the region where the image is created.
    // 
    // This parameter is required.
    shared_ptr<string> parentImageId_ {};
    // The computing type of the creation resources.
    // 
    // - **CPU**: Uses CPU compute resources.
    // - **GPU**: Uses GPU compute resources.
    // 
    // This parameter is required.
    shared_ptr<string> performanceType_ {};
    // The product to which the image belongs. **Required**. Use an activated product and keep it consistent with the selected parent image. Valid values:
    // 
    // - **CloudGame**: Cloud game.
    // - **CloudApp**: Wuying Cloud App.
    // - **CloudBrowser**: Secure browser.
    // - **CloudDesktop**: Wuying Cloud Computer.
    // - **ImageBuilder**: Image creation resource.
    // - **ImageValidate**: Image validation resource.
    // - **AndroidCloud**: Android cloud.
    // - **GpuRender**: GPU rendering.
    // - **AndroidGpuRender**: Android cloud GPU rendering.
    // - **WuyingServer**: Enterprise edition workstation.
    // - **GpuProxy**: GPU remote rendering proxy.
    // - **GpuCache**: GPU remote rendering cache.
    // - **AIAgent**: AI agent service.
    // - **HostedDesktop**: Hosted computer.
    // - **WuyingWorkstation**: Personal edition container workstation.
    // - **WuyingWorkstationBusiness**: Business edition container workstation.
    // - **WuyingWorkstationTeam**: Linggou container workstation team edition.
    shared_ptr<string> productType_ {};
    // The extended properties of the image. Both keys and values are strings. This parameter can be omitted when no extended configuration is required.
    // 
    // The property key for the driver list is DRIVER_LIST, and the value is a JSON string of an array of driver IDs. We recommend that you specify drivers by using DriverIdList. **If both DriverIdList and PropertyMap.DRIVER_LIST are specified, DriverIdList takes precedence.** Specify other extended properties only when their purposes and values are confirmed.
    shared_ptr<map<string, string>> propertyMap_ {};
    // The list of resources required for image creation, such as the download URLs of applications to be installed. A maximum of 100 items are supported. The ResourceType and Resource of each item must correspond to each other.
    shared_ptr<vector<BuilderImageByParentRequest::ResourceList>> resourceList_ {};
    // The running mode of the image creation environment. Valid values:
    // 
    // - **NORMAL**: Normal running mode.
    // - **COMPATIBLE**: Compatible running mode.
    shared_ptr<string> runMode_ {};
    // The ID of the region where the image is created. The selected parent image must have been distributed to this region. Available regions are also affected by the region configurations of the account and product.
    shared_ptr<string> sourceRegion_ {};
    // The capacity of the system cloud disk in the creation environment. Unit: GiB. The capacity cannot be smaller than the system cloud disk capacity required by the parent image, and must meet the disk requirements of the selected resource specifications.
    // 
    // This parameter is required.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The list of vSwitch IDs used by the creation resources. A maximum of 100 items are supported. The vSwitches must belong to the selected office network and be located in the creation region.
    shared_ptr<vector<string>> vSwitchIdList_ {};
    // The display name of the new image version, which is used to differentiate different versions of the same image.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
