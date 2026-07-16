// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(ImageOwnerId, imageOwnerId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_TO_JSON(IsSupportCloudinit, isSupportCloudinit_);
      DARABONBA_PTR_TO_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShowExpired, showExpired_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Usable, usable_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerId, imageOwnerId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsPublic, isPublic_);
      DARABONBA_PTR_FROM_JSON(IsSupportCloudinit, isSupportCloudinit_);
      DARABONBA_PTR_FROM_JSON(IsSupportIoOptimized, isSupportIoOptimized_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShowExpired, showExpired_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Usable, usable_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the image. Valid values of N: 1 to 20.
      // 
      // When you use a single tag to filter resources, the resource count with this tag cannot exceed 1000. When you use multiple tags to filter resources, the resource count of resources that have all specified tags attached cannot exceed 1000. If the resource count exceeds 1000, use the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
      shared_ptr<string> key_ {};
      // The tag value of the image. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
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
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The filter key for querying resources. Valid values:
      // 
      // - When this parameter is set to `CreationStartTime`, you can query resources created after the time specified by `Filter.N.Value`.
      // - When this parameter is set to `CreationEndTime`, you can query resources created before the time specified by `Filter.N.Value`.
      // - When this parameter is set to `NetworkType`, you can query resources of the specified network type.
      // - When this parameter is set to `CpuOnlineUpgrade`, `CpuOnlineDowngrade`, `MemoryOnlineUpgrade`, or `MemoryOnlineDowngrade`, you can query the CPU or memory hot-plugging support of the specified image.
      // 
      // Default value: null.
      shared_ptr<string> key_ {};
      // The filter value for querying resources.
      // - When `Filter.N.Key` is `CreationStartTime` or `CreationEndTime`, the format is `yyyy-MM-ddTHH:mmZ` in UTC+0.
      // - When `Filter.N.Key` is `NetworkType`, valid values for the network type include `vpc` and `classic`.
      // 
      // - When `Filter.N.Key` is `CpuOnlineUpgrade`, `CpuOnlineDowngrade`, `MemoryOnlineUpgrade`, or `MemoryOnlineDowngrade`, valid values are `supported` and `unsupported`.
      // 
      // Default value: null.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->architecture_ == nullptr && this->dryRun_ == nullptr && this->filter_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageOwnerAlias_ == nullptr && this->imageOwnerId_ == nullptr && this->instanceType_ == nullptr && this->isPublic_ == nullptr
        && this->isSupportCloudinit_ == nullptr && this->isSupportIoOptimized_ == nullptr && this->OSType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->showExpired_ == nullptr && this->snapshotId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->usable_ == nullptr && this->usage_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline DescribeImagesRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline DescribeImagesRequest& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeImagesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeImagesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeImagesRequest::Filter>) };
    inline vector<DescribeImagesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<DescribeImagesRequest::Filter>) };
    inline DescribeImagesRequest& setFilter(const vector<DescribeImagesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeImagesRequest& setFilter(vector<DescribeImagesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline DescribeImagesRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImagesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline DescribeImagesRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline DescribeImagesRequest& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // imageOwnerId Field Functions 
    bool hasImageOwnerId() const { return this->imageOwnerId_ != nullptr;};
    void deleteImageOwnerId() { this->imageOwnerId_ = nullptr;};
    inline int64_t getImageOwnerId() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerId_, 0L) };
    inline DescribeImagesRequest& setImageOwnerId(int64_t imageOwnerId) { DARABONBA_PTR_SET_VALUE(imageOwnerId_, imageOwnerId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeImagesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isPublic Field Functions 
    bool hasIsPublic() const { return this->isPublic_ != nullptr;};
    void deleteIsPublic() { this->isPublic_ = nullptr;};
    inline bool getIsPublic() const { DARABONBA_PTR_GET_DEFAULT(isPublic_, false) };
    inline DescribeImagesRequest& setIsPublic(bool isPublic) { DARABONBA_PTR_SET_VALUE(isPublic_, isPublic) };


    // isSupportCloudinit Field Functions 
    bool hasIsSupportCloudinit() const { return this->isSupportCloudinit_ != nullptr;};
    void deleteIsSupportCloudinit() { this->isSupportCloudinit_ = nullptr;};
    inline bool getIsSupportCloudinit() const { DARABONBA_PTR_GET_DEFAULT(isSupportCloudinit_, false) };
    inline DescribeImagesRequest& setIsSupportCloudinit(bool isSupportCloudinit) { DARABONBA_PTR_SET_VALUE(isSupportCloudinit_, isSupportCloudinit) };


    // isSupportIoOptimized Field Functions 
    bool hasIsSupportIoOptimized() const { return this->isSupportIoOptimized_ != nullptr;};
    void deleteIsSupportIoOptimized() { this->isSupportIoOptimized_ = nullptr;};
    inline bool getIsSupportIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(isSupportIoOptimized_, false) };
    inline DescribeImagesRequest& setIsSupportIoOptimized(bool isSupportIoOptimized) { DARABONBA_PTR_SET_VALUE(isSupportIoOptimized_, isSupportIoOptimized) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline DescribeImagesRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeImagesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeImagesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeImagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeImagesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeImagesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeImagesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // showExpired Field Functions 
    bool hasShowExpired() const { return this->showExpired_ != nullptr;};
    void deleteShowExpired() { this->showExpired_ = nullptr;};
    inline bool getShowExpired() const { DARABONBA_PTR_GET_DEFAULT(showExpired_, false) };
    inline DescribeImagesRequest& setShowExpired(bool showExpired) { DARABONBA_PTR_SET_VALUE(showExpired_, showExpired) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeImagesRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImagesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeImagesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeImagesRequest::Tag>) };
    inline vector<DescribeImagesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeImagesRequest::Tag>) };
    inline DescribeImagesRequest& setTag(const vector<DescribeImagesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeImagesRequest& setTag(vector<DescribeImagesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // usable Field Functions 
    bool hasUsable() const { return this->usable_ != nullptr;};
    void deleteUsable() { this->usable_ = nullptr;};
    inline bool getUsable() const { DARABONBA_PTR_GET_DEFAULT(usable_, false) };
    inline DescribeImagesRequest& setUsable(bool usable) { DARABONBA_PTR_SET_VALUE(usable_, usable) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeImagesRequest& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The scenario in which the image is used. Valid values:
    // 
    // - CreateEcs (default): instance creation.
    // - ChangeOS: replacement of the system disk or operating system.
    shared_ptr<string> actionType_ {};
    // The architecture of the image. Valid values:
    // 
    // - i386.
    // - x86_64.
    // - arm64.
    shared_ptr<string> architecture_ {};
    // Specifies whether to perform only a dry run.
    //          
    // - true: Sends a check request without querying resource status. The check items include whether the AccessKey pair is valid, whether the Resource Access Management (RAM) user has the required authorization, and whether required parameters are specified. If the check fails, the corresponding error is returned. If the check succeeds, the DryRunOperation error code is returned.  
    // - false: Sends a normal request. After the check succeeds, a 2XX HTTP status code is returned and the resource status is queried. 
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // The list of filter conditions for querying resources.
    shared_ptr<vector<DescribeImagesRequest::Filter>> filter_ {};
    // The name of the image family. You can set this parameter to filter images that belong to the specified image family.
    // 
    // Default value: empty.
    // > For information about image families associated with Alibaba Cloud official images, see [Overview of public images](https://help.aliyun.com/document_detail/108393.html).
    shared_ptr<string> imageFamily_ {};
    // The image ID.
    // 
    // <details>
    // <summary>Naming rules for image IDs</summary>
    // 
    // - Public images: Named by operating system version, architecture, language, and release date. For example, the image ID of Windows Server 2008 R2 Enterprise Edition, 64-bit English system is win2008r2_64_ent_sp1_en-us_40G_alibase_20190318.vhd.
    // 
    // - Custom images, shared images, Alibaba Cloud Marketplace images, and community images: Start with m.
    // 
    // </details>
    shared_ptr<string> imageId_ {};
    // The image name. Fuzzy search is supported.
    shared_ptr<string> imageName_ {};
    // The source of the image. Valid values:
    // 
    // - system: Public images provided by Alibaba Cloud that are not published through Alibaba Cloud Marketplace. This is different from the concept of "Public Image" in the console.
    // - self: Custom images that you created.
    // - others: Includes shared images (images directly shared by other Alibaba Cloud users) and community images (custom images that are fully shared publicly by any Alibaba Cloud user). Note:
    //     - To query community images, IsPublic must be set to true.
    //     - To query shared images, IsPublic must be set to false or left empty.
    // - marketplace: Images published by Alibaba Cloud or third-party independent software vendors (ISVs) in Alibaba Cloud Marketplace. These images must be purchased together with ECS. Note the billing details of Alibaba Cloud Marketplace images.
    // 
    // Default value: empty.
    // 
    // > An empty value indicates that images with system, self, and others values are returned.
    shared_ptr<string> imageOwnerAlias_ {};
    // The Alibaba Cloud account ID of the image owner. This parameter takes effect only when you query shared images or community images.
    shared_ptr<int64_t> imageOwnerId_ {};
    // The instance type for which available images are queried.
    shared_ptr<string> instanceType_ {};
    // Specifies whether to query published community images. Valid values:
    // 
    // - true: Queries published community images. When you set this parameter to true, ImageOwnerAlias must be set to others.
    // - false: Queries image types other than community images. The specific types depend on the ImageOwnerAlias parameter value.
    // 
    // Default value: false.
    shared_ptr<bool> isPublic_ {};
    // Specifies whether the image supports cloud-init.
    shared_ptr<bool> isSupportCloudinit_ {};
    // Specifies whether the image can run on I/O optimized instances.
    shared_ptr<bool> isSupportIoOptimized_ {};
    // The operating system type of the image. Valid values:
    // 
    // - windows.
    // - linux.
    shared_ptr<string> OSType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number of the resources.
    // 
    // Start value: 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for paging.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the image. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the custom image belongs. When you use this parameter to filter resources, the resource count cannot exceed 1000.
    // 
    // > Filtering by the default resource group is not supported.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether the subscription image has expired.
    shared_ptr<bool> showExpired_ {};
    // The ID of the snapshot used to create the custom image.
    shared_ptr<string> snapshotId_ {};
    // The status of the image. If you do not specify this parameter, only images in the Available state are returned. Valid values:
    // 
    // - Creating: The image is being created.
    // - Waiting: The image is waiting in a multi-task queue.
    // - Available (default): The image is available for use.
    // - UnAvailable: The image is unavailable.
    // - CreateFailed: The image failed to be created.
    // - Deprecated: The image is deprecated.
    // 
    // Default value: Available. This parameter supports multiple values separated by commas (,).
    shared_ptr<string> status_ {};
    // The list of tags.
    shared_ptr<vector<DescribeImagesRequest::Tag>> tag_ {};
    shared_ptr<bool> usable_ {};
    // Specifies whether the image is running on ECS instances. Valid values:
    // 
    // - instance: The image is in use and associated with ECS instances.
    // - none: The image is idle and not associated with any ECS instances.
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
