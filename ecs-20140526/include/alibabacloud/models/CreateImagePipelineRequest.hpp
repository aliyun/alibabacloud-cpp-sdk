// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateImagePipelineRequestAdvancedOptions.hpp>
#include <alibabacloud/models/CreateImagePipelineRequestImageOptions.hpp>
#include <alibabacloud/models/CreateImagePipelineRequestImportImageOptions.hpp>
#include <alibabacloud/models/CreateImagePipelineRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImagePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImagePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_TO_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_TO_JSON(BaseImage, baseImage_);
      DARABONBA_PTR_TO_JSON(BaseImageType, baseImageType_);
      DARABONBA_PTR_TO_JSON(BuildContent, buildContent_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(ImportImageOptions, importImageOptions_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepairMode, repairMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TestContent, testContent_);
      DARABONBA_PTR_TO_JSON(ToRegionId, toRegionId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImagePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_FROM_JSON(AdvancedOptions, advancedOptions_);
      DARABONBA_PTR_FROM_JSON(BaseImage, baseImage_);
      DARABONBA_PTR_FROM_JSON(BaseImageType, baseImageType_);
      DARABONBA_PTR_FROM_JSON(BuildContent, buildContent_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DeleteInstanceOnFailure, deleteInstanceOnFailure_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(ImportImageOptions, importImageOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepairMode, repairMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TestContent, testContent_);
      DARABONBA_PTR_FROM_JSON(ToRegionId, toRegionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateImagePipelineRequest() = default ;
    CreateImagePipelineRequest(const CreateImagePipelineRequest &) = default ;
    CreateImagePipelineRequest(CreateImagePipelineRequest &&) = default ;
    CreateImagePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImagePipelineRequest() = default ;
    CreateImagePipelineRequest& operator=(const CreateImagePipelineRequest &) = default ;
    CreateImagePipelineRequest& operator=(CreateImagePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAccount_ == nullptr
        && return this->advancedOptions_ == nullptr && return this->baseImage_ == nullptr && return this->baseImageType_ == nullptr && return this->buildContent_ == nullptr && return this->clientToken_ == nullptr
        && return this->deleteInstanceOnFailure_ == nullptr && return this->description_ == nullptr && return this->imageFamily_ == nullptr && return this->imageName_ == nullptr && return this->imageOptions_ == nullptr
        && return this->importImageOptions_ == nullptr && return this->instanceType_ == nullptr && return this->internetMaxBandwidthOut_ == nullptr && return this->name_ == nullptr && return this->nvmeSupport_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->repairMode_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->systemDiskSize_ == nullptr && return this->tag_ == nullptr && return this->testContent_ == nullptr
        && return this->toRegionId_ == nullptr && return this->vSwitchId_ == nullptr; };
    // addAccount Field Functions 
    bool hasAddAccount() const { return this->addAccount_ != nullptr;};
    void deleteAddAccount() { this->addAccount_ = nullptr;};
    inline const vector<int64_t> & addAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<int64_t>) };
    inline vector<int64_t> addAccount() { DARABONBA_PTR_GET(addAccount_, vector<int64_t>) };
    inline CreateImagePipelineRequest& setAddAccount(const vector<int64_t> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
    inline CreateImagePipelineRequest& setAddAccount(vector<int64_t> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


    // advancedOptions Field Functions 
    bool hasAdvancedOptions() const { return this->advancedOptions_ != nullptr;};
    void deleteAdvancedOptions() { this->advancedOptions_ = nullptr;};
    inline const CreateImagePipelineRequestAdvancedOptions & advancedOptions() const { DARABONBA_PTR_GET_CONST(advancedOptions_, CreateImagePipelineRequestAdvancedOptions) };
    inline CreateImagePipelineRequestAdvancedOptions advancedOptions() { DARABONBA_PTR_GET(advancedOptions_, CreateImagePipelineRequestAdvancedOptions) };
    inline CreateImagePipelineRequest& setAdvancedOptions(const CreateImagePipelineRequestAdvancedOptions & advancedOptions) { DARABONBA_PTR_SET_VALUE(advancedOptions_, advancedOptions) };
    inline CreateImagePipelineRequest& setAdvancedOptions(CreateImagePipelineRequestAdvancedOptions && advancedOptions) { DARABONBA_PTR_SET_RVALUE(advancedOptions_, advancedOptions) };


    // baseImage Field Functions 
    bool hasBaseImage() const { return this->baseImage_ != nullptr;};
    void deleteBaseImage() { this->baseImage_ = nullptr;};
    inline string baseImage() const { DARABONBA_PTR_GET_DEFAULT(baseImage_, "") };
    inline CreateImagePipelineRequest& setBaseImage(string baseImage) { DARABONBA_PTR_SET_VALUE(baseImage_, baseImage) };


    // baseImageType Field Functions 
    bool hasBaseImageType() const { return this->baseImageType_ != nullptr;};
    void deleteBaseImageType() { this->baseImageType_ = nullptr;};
    inline string baseImageType() const { DARABONBA_PTR_GET_DEFAULT(baseImageType_, "") };
    inline CreateImagePipelineRequest& setBaseImageType(string baseImageType) { DARABONBA_PTR_SET_VALUE(baseImageType_, baseImageType) };


    // buildContent Field Functions 
    bool hasBuildContent() const { return this->buildContent_ != nullptr;};
    void deleteBuildContent() { this->buildContent_ = nullptr;};
    inline string buildContent() const { DARABONBA_PTR_GET_DEFAULT(buildContent_, "") };
    inline CreateImagePipelineRequest& setBuildContent(string buildContent) { DARABONBA_PTR_SET_VALUE(buildContent_, buildContent) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImagePipelineRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteInstanceOnFailure Field Functions 
    bool hasDeleteInstanceOnFailure() const { return this->deleteInstanceOnFailure_ != nullptr;};
    void deleteDeleteInstanceOnFailure() { this->deleteInstanceOnFailure_ = nullptr;};
    inline bool deleteInstanceOnFailure() const { DARABONBA_PTR_GET_DEFAULT(deleteInstanceOnFailure_, false) };
    inline CreateImagePipelineRequest& setDeleteInstanceOnFailure(bool deleteInstanceOnFailure) { DARABONBA_PTR_SET_VALUE(deleteInstanceOnFailure_, deleteInstanceOnFailure) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImagePipelineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string imageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateImagePipelineRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateImagePipelineRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const CreateImagePipelineRequestImageOptions & imageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, CreateImagePipelineRequestImageOptions) };
    inline CreateImagePipelineRequestImageOptions imageOptions() { DARABONBA_PTR_GET(imageOptions_, CreateImagePipelineRequestImageOptions) };
    inline CreateImagePipelineRequest& setImageOptions(const CreateImagePipelineRequestImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateImagePipelineRequest& setImageOptions(CreateImagePipelineRequestImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // importImageOptions Field Functions 
    bool hasImportImageOptions() const { return this->importImageOptions_ != nullptr;};
    void deleteImportImageOptions() { this->importImageOptions_ = nullptr;};
    inline const CreateImagePipelineRequestImportImageOptions & importImageOptions() const { DARABONBA_PTR_GET_CONST(importImageOptions_, CreateImagePipelineRequestImportImageOptions) };
    inline CreateImagePipelineRequestImportImageOptions importImageOptions() { DARABONBA_PTR_GET(importImageOptions_, CreateImagePipelineRequestImportImageOptions) };
    inline CreateImagePipelineRequest& setImportImageOptions(const CreateImagePipelineRequestImportImageOptions & importImageOptions) { DARABONBA_PTR_SET_VALUE(importImageOptions_, importImageOptions) };
    inline CreateImagePipelineRequest& setImportImageOptions(CreateImagePipelineRequestImportImageOptions && importImageOptions) { DARABONBA_PTR_SET_RVALUE(importImageOptions_, importImageOptions) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateImagePipelineRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t internetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateImagePipelineRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImagePipelineRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline CreateImagePipelineRequest& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateImagePipelineRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateImagePipelineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImagePipelineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repairMode Field Functions 
    bool hasRepairMode() const { return this->repairMode_ != nullptr;};
    void deleteRepairMode() { this->repairMode_ = nullptr;};
    inline string repairMode() const { DARABONBA_PTR_GET_DEFAULT(repairMode_, "") };
    inline CreateImagePipelineRequest& setRepairMode(string repairMode) { DARABONBA_PTR_SET_VALUE(repairMode_, repairMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImagePipelineRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateImagePipelineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateImagePipelineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateImagePipelineRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateImagePipelineRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateImagePipelineRequestTag>) };
    inline vector<CreateImagePipelineRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateImagePipelineRequestTag>) };
    inline CreateImagePipelineRequest& setTag(const vector<CreateImagePipelineRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateImagePipelineRequest& setTag(vector<CreateImagePipelineRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // testContent Field Functions 
    bool hasTestContent() const { return this->testContent_ != nullptr;};
    void deleteTestContent() { this->testContent_ = nullptr;};
    inline string testContent() const { DARABONBA_PTR_GET_DEFAULT(testContent_, "") };
    inline CreateImagePipelineRequest& setTestContent(string testContent) { DARABONBA_PTR_SET_VALUE(testContent_, testContent) };


    // toRegionId Field Functions 
    bool hasToRegionId() const { return this->toRegionId_ != nullptr;};
    void deleteToRegionId() { this->toRegionId_ = nullptr;};
    inline const vector<string> & toRegionId() const { DARABONBA_PTR_GET_CONST(toRegionId_, vector<string>) };
    inline vector<string> toRegionId() { DARABONBA_PTR_GET(toRegionId_, vector<string>) };
    inline CreateImagePipelineRequest& setToRegionId(const vector<string> & toRegionId) { DARABONBA_PTR_SET_VALUE(toRegionId_, toRegionId) };
    inline CreateImagePipelineRequest& setToRegionId(vector<string> && toRegionId) { DARABONBA_PTR_SET_RVALUE(toRegionId_, toRegionId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateImagePipelineRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IDs of Alibaba Cloud accounts to which to share the image that will be created based on the image template. You can specify up to 20 account IDs.
    std::shared_ptr<vector<int64_t>> addAccount_ = nullptr;
    // The advanced settings.
    std::shared_ptr<CreateImagePipelineRequestAdvancedOptions> advancedOptions_ = nullptr;
    // The source image.
    // 
    // *   If you set `BaseImageType` to IMAGE, set BaseImage to the ID of a custom image.
    // *   If you set `BaseImageType` to IMAGE_FAMILY, set BaseImage to the name of an image family.
    // *   If you set `BaseImageType` to OSS, you do not need to specify BaseImage.
    std::shared_ptr<string> baseImage_ = nullptr;
    // The type of the source image. Valid values:
    // 
    // *   IMAGE: image
    // *   IMAGE_FAMILY: image family
    // *   OSS: Object Storage Service (OSS) object
    // 
    // This parameter is required.
    std::shared_ptr<string> baseImageType_ = nullptr;
    // The build content in the image template. The content cannot exceed 16 KB in size. For information about the commands supported by Image Builder, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
    std::shared_ptr<string> buildContent_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.**** For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to release the intermediate instance when the image cannot be created. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: true.
    // 
    // > If the intermediate instance cannot be started, the instance is released by default.
    std::shared_ptr<bool> deleteInstanceOnFailure_ = nullptr;
    // The description of the image template. The description must be 2 to 256 characters in length. It cannot start with `http://` or `https://`.
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
    std::shared_ptr<CreateImagePipelineRequestImageOptions> imageOptions_ = nullptr;
    // The attributes and settings of the image that you want to import. If you set `BaseImageType` to OSS, you must specify this parameter.
    std::shared_ptr<CreateImagePipelineRequestImportImageOptions> importImageOptions_ = nullptr;
    // The instance type. You can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query instance types.
    // 
    // If you do not configure this parameter, an instance type that provides the fewest vCPUs and memory resources is automatically selected. This configuration is subject to resource availability of instance types. For example, the ecs.g6.large instance type is automatically selected. If available ecs.g6.large resources are insufficient, the ecs.g6.xlarge instance type is selected.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The size of the outbound public bandwidth for the intermediate instance. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    std::shared_ptr<int32_t> internetMaxBandwidthOut_ = nullptr;
    // The name of the launch template. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // >  If you do not specify `Name`, the return value of `ImagePipelineId` is used.
    std::shared_ptr<string> name_ = nullptr;
    // Specifies whether the image created based on the image template supports the NVMe protocol.
    // 
    // >  This parameter is no longer used. We recommend that you use ImageOptions.ImageFeatures.NvmeSupport.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The repair mode of the image template.
    // 
    // Valid values:
    // 
    // *   Standard: the standard mode.
    // 
    //     Supported check items in Linux operating systems:
    // 
    //     *   GUESTOS.CloudInit
    //     *   GUESTOS.Dhcp
    //     *   GUESTOS.Virtio
    //     *   GUESTOS.OnlineResizeFS
    //     *   GUESTOS.Grub
    //     *   GUESTOS.Fstab
    // 
    //     Supported check items in Windows operating systems:
    // 
    //     *   GUESTOS.Virtio
    //     *   GUESTOS.Update
    //     *   GUESTOS.Hotfix
    //     *   GUESTOS.Server
    // 
    // >  As the check and repair capabilities continue to improve, the number of check items may increase. For more information about check items, see [Overview of image check](https://help.aliyun.com/document_detail/439819.html).
    std::shared_ptr<string> repairMode_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The system disk size of the intermediate instance. Unit: GiB. Valid values: 20 to 500.
    // 
    // Default value: 40.
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    // The tags to add to the template.
    std::shared_ptr<vector<CreateImagePipelineRequestTag>> tag_ = nullptr;
    // The test content in the image template. The content cannot exceed 16 KB in size. For information about the commands supported by Image Builder, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
    std::shared_ptr<string> testContent_ = nullptr;
    // The IDs of regions to which you want to distribute the image that is created based on the image template. You can specify up to 20 region IDs.
    // 
    // If you do not specify this parameter, the image is created only in the current region.
    std::shared_ptr<vector<string>> toRegionId_ = nullptr;
    // The ID of the vSwitch.
    // 
    // If you do not specify this parameter, a new VPC and vSwitch are created. Make sure that the VPC quota in your account is sufficient. For more information, see [Limits and quotas](https://help.aliyun.com/document_detail/27750.html).
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
