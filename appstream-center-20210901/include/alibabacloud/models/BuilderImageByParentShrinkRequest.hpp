// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDERIMAGEBYPARENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BUILDERIMAGEBYPARENTSHRINKREQUEST_HPP_
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
  class BuilderImageByParentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuilderImageByParentShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(PropertyMap, propertyMapShrink_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, BuilderImageByParentShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(PropertyMap, propertyMapShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    BuilderImageByParentShrinkRequest() = default ;
    BuilderImageByParentShrinkRequest(const BuilderImageByParentShrinkRequest &) = default ;
    BuilderImageByParentShrinkRequest(BuilderImageByParentShrinkRequest &&) = default ;
    BuilderImageByParentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuilderImageByParentShrinkRequest() = default ;
    BuilderImageByParentShrinkRequest& operator=(const BuilderImageByParentShrinkRequest &) = default ;
    BuilderImageByParentShrinkRequest& operator=(BuilderImageByParentShrinkRequest &&) = default ;
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
      // The resource content that corresponds to ResourceType. For the URL type, enter or return an accessible resource URL.
      shared_ptr<string> resource_ {};
      // The provision method of the resource content. Valid values:
      // 
      // - **HOSTED**: hosted resource.
      // - **TEXT**: text resource.
      // - **URL**: resource provided by using a URL.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->distro_ == nullptr && this->driverIdList_ == nullptr && this->imageCreateMode_ == nullptr
        && this->imageName_ == nullptr && this->language_ == nullptr && this->nodeInstanceType_ == nullptr && this->officeSiteId_ == nullptr && this->packageType_ == nullptr
        && this->parentImageId_ == nullptr && this->performanceType_ == nullptr && this->productType_ == nullptr && this->propertyMapShrink_ == nullptr && this->resourceList_ == nullptr
        && this->runMode_ == nullptr && this->sourceRegion_ == nullptr && this->systemDiskSize_ == nullptr && this->vSwitchIdList_ == nullptr && this->versionName_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline BuilderImageByParentShrinkRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline BuilderImageByParentShrinkRequest& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BuilderImageByParentShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distro Field Functions 
    bool hasDistro() const { return this->distro_ != nullptr;};
    void deleteDistro() { this->distro_ = nullptr;};
    inline string getDistro() const { DARABONBA_PTR_GET_DEFAULT(distro_, "") };
    inline BuilderImageByParentShrinkRequest& setDistro(string distro) { DARABONBA_PTR_SET_VALUE(distro_, distro) };


    // driverIdList Field Functions 
    bool hasDriverIdList() const { return this->driverIdList_ != nullptr;};
    void deleteDriverIdList() { this->driverIdList_ = nullptr;};
    inline const vector<string> & getDriverIdList() const { DARABONBA_PTR_GET_CONST(driverIdList_, vector<string>) };
    inline vector<string> getDriverIdList() { DARABONBA_PTR_GET(driverIdList_, vector<string>) };
    inline BuilderImageByParentShrinkRequest& setDriverIdList(const vector<string> & driverIdList) { DARABONBA_PTR_SET_VALUE(driverIdList_, driverIdList) };
    inline BuilderImageByParentShrinkRequest& setDriverIdList(vector<string> && driverIdList) { DARABONBA_PTR_SET_RVALUE(driverIdList_, driverIdList) };


    // imageCreateMode Field Functions 
    bool hasImageCreateMode() const { return this->imageCreateMode_ != nullptr;};
    void deleteImageCreateMode() { this->imageCreateMode_ = nullptr;};
    inline string getImageCreateMode() const { DARABONBA_PTR_GET_DEFAULT(imageCreateMode_, "") };
    inline BuilderImageByParentShrinkRequest& setImageCreateMode(string imageCreateMode) { DARABONBA_PTR_SET_VALUE(imageCreateMode_, imageCreateMode) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline BuilderImageByParentShrinkRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline BuilderImageByParentShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline BuilderImageByParentShrinkRequest& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline BuilderImageByParentShrinkRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline BuilderImageByParentShrinkRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // parentImageId Field Functions 
    bool hasParentImageId() const { return this->parentImageId_ != nullptr;};
    void deleteParentImageId() { this->parentImageId_ = nullptr;};
    inline string getParentImageId() const { DARABONBA_PTR_GET_DEFAULT(parentImageId_, "") };
    inline BuilderImageByParentShrinkRequest& setParentImageId(string parentImageId) { DARABONBA_PTR_SET_VALUE(parentImageId_, parentImageId) };


    // performanceType Field Functions 
    bool hasPerformanceType() const { return this->performanceType_ != nullptr;};
    void deletePerformanceType() { this->performanceType_ = nullptr;};
    inline string getPerformanceType() const { DARABONBA_PTR_GET_DEFAULT(performanceType_, "") };
    inline BuilderImageByParentShrinkRequest& setPerformanceType(string performanceType) { DARABONBA_PTR_SET_VALUE(performanceType_, performanceType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline BuilderImageByParentShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // propertyMapShrink Field Functions 
    bool hasPropertyMapShrink() const { return this->propertyMapShrink_ != nullptr;};
    void deletePropertyMapShrink() { this->propertyMapShrink_ = nullptr;};
    inline string getPropertyMapShrink() const { DARABONBA_PTR_GET_DEFAULT(propertyMapShrink_, "") };
    inline BuilderImageByParentShrinkRequest& setPropertyMapShrink(string propertyMapShrink) { DARABONBA_PTR_SET_VALUE(propertyMapShrink_, propertyMapShrink) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<BuilderImageByParentShrinkRequest::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<BuilderImageByParentShrinkRequest::ResourceList>) };
    inline vector<BuilderImageByParentShrinkRequest::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<BuilderImageByParentShrinkRequest::ResourceList>) };
    inline BuilderImageByParentShrinkRequest& setResourceList(const vector<BuilderImageByParentShrinkRequest::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline BuilderImageByParentShrinkRequest& setResourceList(vector<BuilderImageByParentShrinkRequest::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline BuilderImageByParentShrinkRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline BuilderImageByParentShrinkRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline BuilderImageByParentShrinkRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // vSwitchIdList Field Functions 
    bool hasVSwitchIdList() const { return this->vSwitchIdList_ != nullptr;};
    void deleteVSwitchIdList() { this->vSwitchIdList_ = nullptr;};
    inline const vector<string> & getVSwitchIdList() const { DARABONBA_PTR_GET_CONST(vSwitchIdList_, vector<string>) };
    inline vector<string> getVSwitchIdList() { DARABONBA_PTR_GET(vSwitchIdList_, vector<string>) };
    inline BuilderImageByParentShrinkRequest& setVSwitchIdList(const vector<string> & vSwitchIdList) { DARABONBA_PTR_SET_VALUE(vSwitchIdList_, vSwitchIdList) };
    inline BuilderImageByParentShrinkRequest& setVSwitchIdList(vector<string> && vSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vSwitchIdList_, vSwitchIdList) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline BuilderImageByParentShrinkRequest& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The business type to which the image belongs. **Required**. Valid values:
    // 
    // - **1**: basic product
    // - **2**: personal cloud
    // - **3**: cloud office
    // - **4**: cloud flow
    // - **10**: personal edition
    // - **20**: business edition
    // - **60**: Linggou team edition
    shared_ptr<int32_t> bizType_ {};
    // The capacity of the data cloud disk in the creation environment. Unit: GiB. Specify this parameter when a data cloud disk is required and make sure that the capacity meets the cloud disk requirements of the selected resource specifications.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The description of the new image. This helps you query and distinguish images later.
    shared_ptr<string> description_ {};
    // The operating system distribution information of the image. Enter a distribution identifier that is consistent with the parent image used.
    shared_ptr<string> distro_ {};
    // The list of driver IDs used when creating the image. You can specify up to 200 driver IDs. When you need to specify drivers, enter the IDs of existing drivers that are applicable to the target image.
    // 
    // **If PropertyMap.DRIVER_LIST is also specified, this parameter overwrites the driver list in PropertyMap.DRIVER_LIST.**
    shared_ptr<vector<string>> driverIdList_ {};
    // The image creation mode. Use the following mode:
    // 
    // - **BUILDER_MANUAL**: manually enter the creation environment to install applications and configure the image.
    // 
    // This parameter is required.
    shared_ptr<string> imageCreateMode_ {};
    // The name of the new image. **Required**. The name must start with a letter or a Chinese character and can contain letters, digits, Chinese characters, colons (:), underscores (_), periods (.), and hyphens (-). It cannot start with http:// or https://. The name must be 2 to 64 characters in length. Each Chinese character counts as 3 characters, and each other character counts as 1 character.
    shared_ptr<string> imageName_ {};
    // The language of the image. Valid values:
    // 
    // - **zh-CN**: Simplified Chinese
    // - **zh-HK**: Traditional Chinese (Hong Kong)
    // - **en-US**: English
    // - **ja-JP**: Japanese
    // - **CN**: compatible value for Simplified Chinese
    // - **EN**: compatible value for English
    // - **JP**: compatible value for Japanese
    // - **CN-HK**: compatible value for Traditional Chinese (Hong Kong)
    shared_ptr<string> language_ {};
    // The ID of the node specifications for the creation resources. You can call ListNodeInstanceType to query the ID. Select node specifications that are active in the creation region and for the associated product, and that meet the CPU or GPU computing requirements.
    shared_ptr<string> nodeInstanceType_ {};
    // The ID of the office network used by the creation resources. Specify this parameter when a specific office network is required and make sure that the office network is in the creation region.
    shared_ptr<string> officeSiteId_ {};
    // The package type of the image. Make sure that the package type is consistent with the selected parent image and creation scenario. Valid values:
    // 
    // - **Ecs**: ECS instance image.
    // - **Vhd**: VHD application image.
    // - **Container**: container image.
    // - **Ecs_Container**: combined ECS and container image.
    // - **K8s_Node**: Kubernetes node image.
    // 
    // **This operation does not provide the BaseImageId parameter. You cannot explicitly specify the Vhd or Container type that requires a base image to be configured separately.**
    shared_ptr<string> packageType_ {};
    // The ID of the parent image used to create the new image. **Required**. You can call ListImage to query the ID. An available distribution record of the parent image must exist in the creation region.
    // 
    // This parameter is required.
    shared_ptr<string> parentImageId_ {};
    // The computing type of the creation resources. Valid values:
    // 
    // - **CPU**: CPU compute resources.
    // - **GPU**: GPU compute resources.
    // 
    // This parameter is required.
    shared_ptr<string> performanceType_ {};
    // The product to which the image belongs. **Required**. Use an activated product and make sure that it is consistent with the selected parent image. Valid values:
    // 
    // - **CloudGame**: cloud gaming
    // - **CloudApp**: Wuying cloud application
    // - **CloudBrowser**: secure browser
    // - **CloudDesktop**: Wuying cloud desktop
    // - **ImageBuilder**: image creation resource
    // - **ImageValidate**: image validation resource
    // - **AndroidCloud**: Android cloud
    // - **GpuRender**: GPU rendering
    // - **AndroidGpuRender**: Android cloud GPU rendering
    // - **WuyingServer**: enterprise edition workstation
    // - **GpuProxy**: GPU remote rendering proxy
    // - **GpuCache**: GPU remote rendering cache
    // - **AIAgent**: AI agent service
    // - **HostedDesktop**: hosted desktop
    // - **WuyingWorkstation**: personal edition container workstation
    // - **WuyingWorkstationBusiness**: business edition container workstation
    // - **WuyingWorkstationTeam**: Linggou container workstation team edition
    shared_ptr<string> productType_ {};
    // The extended properties of the image. Both keys and values are strings. You can omit this parameter if no extended configuration is required.
    // 
    // The property key for the driver list is DRIVER_LIST, and the value is a JSON string of an array of driver IDs. We recommend that you specify drivers by using DriverIdList. **If both DriverIdList and PropertyMap.DRIVER_LIST are specified, DriverIdList takes precedence.** Specify other extended properties only when you have confirmed their purposes and values.
    shared_ptr<string> propertyMapShrink_ {};
    // The list of resources required for image creation, such as the download URLs of applications to be installed. You can specify up to 100 resources. The ResourceType and Resource of each resource must correspond to each other.
    shared_ptr<vector<BuilderImageByParentShrinkRequest::ResourceList>> resourceList_ {};
    // The running mode of the image creation environment. Valid values:
    // 
    // - **NORMAL**: normal running mode.
    // - **COMPATIBLE**: compatible running mode.
    shared_ptr<string> runMode_ {};
    // The ID of the creation region. The selected parent image must have been distributed to this region. Available regions are also affected by the region configurations of the account and product.
    shared_ptr<string> sourceRegion_ {};
    // The capacity of the system cloud disk in the creation environment. Unit: GiB. The capacity cannot be smaller than the system cloud disk capacity required by the parent image and must meet the cloud disk requirements of the selected resource specifications.
    // 
    // This parameter is required.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The list of vSwitch IDs used by the creation resources. You can specify up to 100 vSwitch IDs. The vSwitches must belong to the selected office network and be located in the creation region.
    shared_ptr<vector<string>> vSwitchIdList_ {};
    // The display name of the new image version. This helps you distinguish different versions of the same image.
    shared_ptr<string> versionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
