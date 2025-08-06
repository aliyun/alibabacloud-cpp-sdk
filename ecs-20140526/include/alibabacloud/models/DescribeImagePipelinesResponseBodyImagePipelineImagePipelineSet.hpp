// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccounts, addAccounts_);
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_TO_JSON(BaseImage, baseImage_);
      DARABONBA_PTR_TO_JSON(BaseImageType, baseImageType_);
      DARABONBA_PTR_TO_JSON(BuildContent, buildContent_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_TO_JSON(ImportImageOptions, importImageOptions_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_TO_JSON(RepairMode, repairMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TestContent, testContent_);
      DARABONBA_PTR_TO_JSON(ToRegionIds, toRegionIds_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccounts, addAccounts_);
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_FROM_JSON(BaseImage, baseImage_);
      DARABONBA_PTR_FROM_JSON(BaseImageType, baseImageType_);
      DARABONBA_PTR_FROM_JSON(BuildContent, buildContent_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(ImagePipelineId, imagePipelineId_);
      DARABONBA_PTR_FROM_JSON(ImportImageOptions, importImageOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_FROM_JSON(RepairMode, repairMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TestContent, testContent_);
      DARABONBA_PTR_FROM_JSON(ToRegionIds, toRegionIds_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addAccounts_ != nullptr
        && this->advancedOptions_ != nullptr && this->baseImage_ != nullptr && this->baseImageType_ != nullptr && this->buildContent_ != nullptr && this->creationTime_ != nullptr
        && this->deleteInstanceOnFailure_ != nullptr && this->description_ != nullptr && this->imageFamily_ != nullptr && this->imageName_ != nullptr && this->imageOptions_ != nullptr
        && this->imagePipelineId_ != nullptr && this->importImageOptions_ != nullptr && this->instanceType_ != nullptr && this->internetMaxBandwidthOut_ != nullptr && this->name_ != nullptr
        && this->nvmeSupport_ != nullptr && this->repairMode_ != nullptr && this->resourceGroupId_ != nullptr && this->systemDiskSize_ != nullptr && this->tags_ != nullptr
        && this->testContent_ != nullptr && this->toRegionIds_ != nullptr && this->vSwitchId_ != nullptr; };
    // addAccounts Field Functions 
    bool hasAddAccounts() const { return this->addAccounts_ != nullptr;};
    void deleteAddAccounts() { this->addAccounts_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts & addAccounts() const { DARABONBA_PTR_GET_CONST(addAccounts_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts addAccounts() { DARABONBA_PTR_GET(addAccounts_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setAddAccounts(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts & addAccounts) { DARABONBA_PTR_SET_VALUE(addAccounts_, addAccounts) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setAddAccounts(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts && addAccounts) { DARABONBA_PTR_SET_RVALUE(addAccounts_, addAccounts) };


    // advancedOptions Field Functions 
    bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
    void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions & advancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions advancedOptions() { DARABONBA_PTR_GET(advancedOptions_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setAdvancedOptions(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setAdvancedOptions(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


    // baseImage Field Functions 
    bool hasBaseImage() const { return this->baseImage_ != nullptr;};
    void deleteBaseImage() { this->baseImage_ = nullptr;};
    inline string baseImage() const { DARABONBA_PTR_GET_DEFAULT(baseImage_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setBaseImage(string baseImage) { DARABONBA_PTR_SET_VALUE(baseImage_, baseImage) };


    // baseImageType Field Functions 
    bool hasBaseImageType() const { return this->baseImageType_ != nullptr;};
    void deleteBaseImageType() { this->baseImageType_ = nullptr;};
    inline string baseImageType() const { DARABONBA_PTR_GET_DEFAULT(baseImageType_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setBaseImageType(string baseImageType) { DARABONBA_PTR_SET_VALUE(baseImageType_, baseImageType) };


    // buildContent Field Functions 
    bool hasBuildContent() const { return this->buildContent_ != nullptr;};
    void deleteBuildContent() { this->buildContent_ = nullptr;};
    inline string buildContent() const { DARABONBA_PTR_GET_DEFAULT(buildContent_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setBuildContent(string buildContent) { DARABONBA_PTR_SET_VALUE(buildContent_, buildContent) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteInstanceOnFailure Field Functions 
    bool hasDeleteInstanceOnFailure() const { return this->deleteInstanceOnFailure_ != nullptr;};
    void deleteDeleteInstanceOnFailure() { this->deleteInstanceOnFailure_ = nullptr;};
    inline bool deleteInstanceOnFailure() const { DARABONBA_PTR_GET_DEFAULT(deleteInstanceOnFailure_, false) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setDeleteInstanceOnFailure(bool deleteInstanceOnFailure) { DARABONBA_PTR_SET_VALUE(deleteInstanceOnFailure_, deleteInstanceOnFailure) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions & imageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions imageOptions() { DARABONBA_PTR_GET(imageOptions_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImageOptions(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImageOptions(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // imagePipelineId Field Functions 
    bool hasImagePipelineId() const { return this->imagePipelineId_ != nullptr;};
    void deleteImagePipelineId() { this->imagePipelineId_ = nullptr;};
    inline string imagePipelineId() const { DARABONBA_PTR_GET_DEFAULT(imagePipelineId_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImagePipelineId(string imagePipelineId) { DARABONBA_PTR_SET_VALUE(imagePipelineId_, imagePipelineId) };


    // importImageOptions Field Functions 
    bool hasImportImageOptions() const { return this->importImageOptions_ != nullptr;};
    void deleteImportImageOptions() { this->importImageOptions_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions & importImageOptions() const { DARABONBA_PTR_GET_CONST(importImageOptions_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions importImageOptions() { DARABONBA_PTR_GET(importImageOptions_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImportImageOptions(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions & importImageOptions) { DARABONBA_PTR_SET_VALUE(importImageOptions_, importImageOptions) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setImportImageOptions(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions && importImageOptions) { DARABONBA_PTR_SET_RVALUE(importImageOptions_, importImageOptions) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


    // repairMode Field Functions 
    bool hasRepairMode() const { return this->repairMode_ != nullptr;};
    void deleteRepairMode() { this->repairMode_ = nullptr;};
    inline string repairMode() const { DARABONBA_PTR_GET_DEFAULT(repairMode_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setRepairMode(string repairMode) { DARABONBA_PTR_SET_VALUE(repairMode_, repairMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setTags(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setTags(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // testContent Field Functions 
    bool hasTestContent() const { return this->testContent_ != nullptr;};
    void deleteTestContent() { this->testContent_ = nullptr;};
    inline string testContent() const { DARABONBA_PTR_GET_DEFAULT(testContent_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setTestContent(string testContent) { DARABONBA_PTR_SET_VALUE(testContent_, testContent) };


    // toRegionIds Field Functions 
    bool hasToRegionIds() const { return this->toRegionIds_ != nullptr;};
    void deleteToRegionIds() { this->toRegionIds_ = nullptr;};
    inline const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds & toRegionIds() const { DARABONBA_PTR_GET_CONST(toRegionIds_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds) };
    inline Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds toRegionIds() { DARABONBA_PTR_GET(toRegionIds_, Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setToRegionIds(const Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds & toRegionIds) { DARABONBA_PTR_SET_VALUE(toRegionIds_, toRegionIds) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setToRegionIds(Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds && toRegionIds) { DARABONBA_PTR_SET_RVALUE(toRegionIds_, toRegionIds) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSet& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IDs of Alibaba Cloud accounts to which to share the image that will be created based on the image template.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts> addAccounts_ = nullptr;
    // The advanced settings.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAdvancedOptions> advancedOptions_ = nullptr;
    // The source image.
    // 
    // *   When `BaseImageType` is set to IMAGE, the value of this parameter is the ID of a custom image.
    // *   When `BaseImageType` is set to IMAGE_FAMILY, the value of this parameter is the name of an image family.
    std::shared_ptr<string> baseImage_ = nullptr;
    // The type of the source image. Valid values:
    // 
    // *   IMAGE: custom image
    // *   IMAGE_FAMILY: image family
    std::shared_ptr<string> baseImageType_ = nullptr;
    // The content of the image template.
    std::shared_ptr<string> buildContent_ = nullptr;
    // The time when the image template was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether to release the intermediate instance when the image fails to be created.
    std::shared_ptr<bool> deleteInstanceOnFailure_ = nullptr;
    // The description of the image template.
    std::shared_ptr<string> description_ = nullptr;
    // The family of the image created based on the image template.
    // 
    // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageFamily.
    std::shared_ptr<string> imageFamily_ = nullptr;
    // The name prefix of the image created based on the image template.
    // 
    // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageName.
    std::shared_ptr<string> imageName_ = nullptr;
    // The attributes of the image created based on the image template.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImageOptions> imageOptions_ = nullptr;
    // The ID of the image template.
    std::shared_ptr<string> imagePipelineId_ = nullptr;
    // The attributes and settings of the imported image.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetImportImageOptions> importImageOptions_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The size of the outbound public bandwidth for the intermediate instance. Unit: Mbit/s.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The name of the image template.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether the image created based on the image template supports the Non-Volatile Memory Express (NVMe) protocol.
    // 
    // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageFeatures.NvmeSupport.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
    // The repair mode of the image template.
    // 
    // Valid values:
    // 
    // *   Standard: the standard mode
    std::shared_ptr<string> repairMode_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The system disk size of the intermediate instance. Unit: GiB
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The tags of the image template.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetTags> tags_ = nullptr;
    // The content of the image test template.
    std::shared_ptr<string> testContent_ = nullptr;
    // The IDs of regions to which to distribute the image that will be created based on the image template.
    std::shared_ptr<Models::DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetToRegionIds> toRegionIds_ = nullptr;
    // The ID of the vSwitch in the virtual private cloud (VPC).
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
