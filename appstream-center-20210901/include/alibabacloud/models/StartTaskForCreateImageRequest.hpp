// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTASKFORCREATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTTASKFORCREATEIMAGEREQUEST_HPP_
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
  class StartTaskForCreateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTaskForCreateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCreateMode, imageCreateMode_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JumpStep, jumpStep_);
      DARABONBA_PTR_TO_JSON(PerformanceType, performanceType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_TO_JSON(RetryType, retryType_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_TO_JSON(SubInstanceId, subInstanceId_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartTaskForCreateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCreateMode, imageCreateMode_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JumpStep, jumpStep_);
      DARABONBA_PTR_FROM_JSON(PerformanceType, performanceType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
      DARABONBA_PTR_FROM_JSON(RetryType, retryType_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(SourceRegion, sourceRegion_);
      DARABONBA_PTR_FROM_JSON(SubInstanceId, subInstanceId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    StartTaskForCreateImageRequest() = default ;
    StartTaskForCreateImageRequest(const StartTaskForCreateImageRequest &) = default ;
    StartTaskForCreateImageRequest(StartTaskForCreateImageRequest &&) = default ;
    StartTaskForCreateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTaskForCreateImageRequest() = default ;
    StartTaskForCreateImageRequest& operator=(const StartTaskForCreateImageRequest &) = default ;
    StartTaskForCreateImageRequest& operator=(StartTaskForCreateImageRequest &&) = default ;
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
      // The resource information.
      shared_ptr<string> resource_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->imageCreateMode_ == nullptr
        && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->jumpStep_ == nullptr && this->performanceType_ == nullptr && this->productType_ == nullptr
        && this->resourceList_ == nullptr && this->retryType_ == nullptr && this->runMode_ == nullptr && this->sourceRegion_ == nullptr && this->subInstanceId_ == nullptr
        && this->systemDiskSize_ == nullptr && this->versionId_ == nullptr; };
    // imageCreateMode Field Functions 
    bool hasImageCreateMode() const { return this->imageCreateMode_ != nullptr;};
    void deleteImageCreateMode() { this->imageCreateMode_ = nullptr;};
    inline string getImageCreateMode() const { DARABONBA_PTR_GET_DEFAULT(imageCreateMode_, "") };
    inline StartTaskForCreateImageRequest& setImageCreateMode(string imageCreateMode) { DARABONBA_PTR_SET_VALUE(imageCreateMode_, imageCreateMode) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline StartTaskForCreateImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartTaskForCreateImageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jumpStep Field Functions 
    bool hasJumpStep() const { return this->jumpStep_ != nullptr;};
    void deleteJumpStep() { this->jumpStep_ = nullptr;};
    inline string getJumpStep() const { DARABONBA_PTR_GET_DEFAULT(jumpStep_, "") };
    inline StartTaskForCreateImageRequest& setJumpStep(string jumpStep) { DARABONBA_PTR_SET_VALUE(jumpStep_, jumpStep) };


    // performanceType Field Functions 
    bool hasPerformanceType() const { return this->performanceType_ != nullptr;};
    void deletePerformanceType() { this->performanceType_ = nullptr;};
    inline string getPerformanceType() const { DARABONBA_PTR_GET_DEFAULT(performanceType_, "") };
    inline StartTaskForCreateImageRequest& setPerformanceType(string performanceType) { DARABONBA_PTR_SET_VALUE(performanceType_, performanceType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline StartTaskForCreateImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<StartTaskForCreateImageRequest::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<StartTaskForCreateImageRequest::ResourceList>) };
    inline vector<StartTaskForCreateImageRequest::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<StartTaskForCreateImageRequest::ResourceList>) };
    inline StartTaskForCreateImageRequest& setResourceList(const vector<StartTaskForCreateImageRequest::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline StartTaskForCreateImageRequest& setResourceList(vector<StartTaskForCreateImageRequest::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


    // retryType Field Functions 
    bool hasRetryType() const { return this->retryType_ != nullptr;};
    void deleteRetryType() { this->retryType_ = nullptr;};
    inline string getRetryType() const { DARABONBA_PTR_GET_DEFAULT(retryType_, "") };
    inline StartTaskForCreateImageRequest& setRetryType(string retryType) { DARABONBA_PTR_SET_VALUE(retryType_, retryType) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline StartTaskForCreateImageRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // sourceRegion Field Functions 
    bool hasSourceRegion() const { return this->sourceRegion_ != nullptr;};
    void deleteSourceRegion() { this->sourceRegion_ = nullptr;};
    inline string getSourceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceRegion_, "") };
    inline StartTaskForCreateImageRequest& setSourceRegion(string sourceRegion) { DARABONBA_PTR_SET_VALUE(sourceRegion_, sourceRegion) };


    // subInstanceId Field Functions 
    bool hasSubInstanceId() const { return this->subInstanceId_ != nullptr;};
    void deleteSubInstanceId() { this->subInstanceId_ = nullptr;};
    inline string getSubInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subInstanceId_, "") };
    inline StartTaskForCreateImageRequest& setSubInstanceId(string subInstanceId) { DARABONBA_PTR_SET_VALUE(subInstanceId_, subInstanceId) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline StartTaskForCreateImageRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline StartTaskForCreateImageRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The image creation mode. Use the following mode:
    // 
    // - **BUILDER_MANUAL**: Manually enter the creation environment to install applications and configure the image.
    shared_ptr<string> imageCreateMode_ {};
    // The ID of the image. This parameter is not exposed by default.
    shared_ptr<string> imageId_ {};
    // The WUYING instance ID. The instance can be a cloud desktop instance or a workstation instance. To ensure data consistency in the image, stop the instance before starting the image creation task.
    shared_ptr<string> instanceId_ {};
    // The step to jump to.
    shared_ptr<string> jumpStep_ {};
    // The resource type.
    shared_ptr<string> performanceType_ {};
    // The product type. Set this parameter to the following value when you call this operation:
    // 
    // - `CloudApp`: WUYING Cloud App.
    shared_ptr<string> productType_ {};
    // The list of resources required for image creation, such as the download URLs of applications to be installed. You can specify up to 100 items. The ResourceType and Resource of each item must correspond to each other.
    shared_ptr<vector<StartTaskForCreateImageRequest::ResourceList>> resourceList_ {};
    // The retry type.
    shared_ptr<string> retryType_ {};
    // The running mode of the image creation environment. Valid values:
    // 
    // - **NORMAL**: Normal running mode.
    // - **COMPATIBLE**: Compatible running mode.
    shared_ptr<string> runMode_ {};
    // The source region where the image is created. If you do not specify this parameter, a region is randomly selected.
    shared_ptr<string> sourceRegion_ {};
    // The sub-instance ID. This parameter is not applicable to cloud desktop scenarios. In workstation scenarios, you must specify the persistent session ID to locate a specific instance.
    shared_ptr<string> subInstanceId_ {};
    // The size of the system cloud disk. Unit: GB.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The ID of the image version. This parameter is not exposed.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
