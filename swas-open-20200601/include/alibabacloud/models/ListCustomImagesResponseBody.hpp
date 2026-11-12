// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIMAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIMAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListCustomImagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomImagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomImages, customImages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomImagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomImages, customImages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomImagesResponseBody() = default ;
    ListCustomImagesResponseBody(const ListCustomImagesResponseBody &) = default ;
    ListCustomImagesResponseBody(ListCustomImagesResponseBody &&) = default ;
    ListCustomImagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomImagesResponseBody() = default ;
    ListCustomImagesResponseBody& operator=(const ListCustomImagesResponseBody &) = default ;
    ListCustomImagesResponseBody& operator=(ListCustomImagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomImages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomImages& obj) { 
        DARABONBA_PTR_TO_JSON(CreateInstances, createInstances_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataSnapshotId, dataSnapshotId_);
        DARABONBA_PTR_TO_JSON(DataSnapshotName, dataSnapshotName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InShare, inShare_);
        DARABONBA_PTR_TO_JSON(InShareUser, inShareUser_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RequiredDataDiskSize, requiredDataDiskSize_);
        DARABONBA_PTR_TO_JSON(RequiredSystemDiskSize, requiredSystemDiskSize_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SourceImageName, sourceImageName_);
        DARABONBA_PTR_TO_JSON(SourceImageVersion, sourceImageVersion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SystemSnapshotId, systemSnapshotId_);
        DARABONBA_PTR_TO_JSON(SystemSnapshotName, systemSnapshotName_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, CustomImages& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateInstances, createInstances_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataSnapshotId, dataSnapshotId_);
        DARABONBA_PTR_FROM_JSON(DataSnapshotName, dataSnapshotName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InShare, inShare_);
        DARABONBA_PTR_FROM_JSON(InShareUser, inShareUser_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RequiredDataDiskSize, requiredDataDiskSize_);
        DARABONBA_PTR_FROM_JSON(RequiredSystemDiskSize, requiredSystemDiskSize_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SourceImageName, sourceImageName_);
        DARABONBA_PTR_FROM_JSON(SourceImageVersion, sourceImageVersion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SystemSnapshotId, systemSnapshotId_);
        DARABONBA_PTR_FROM_JSON(SystemSnapshotName, systemSnapshotName_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      CustomImages() = default ;
      CustomImages(const CustomImages &) = default ;
      CustomImages(CustomImages &&) = default ;
      CustomImages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomImages() = default ;
      CustomImages& operator=(const CustomImages &) = default ;
      CustomImages& operator=(CustomImages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
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
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the custom image.
        shared_ptr<string> key_ {};
        // The tag value of the custom image.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->createInstances_ == nullptr
        && this->creationTime_ == nullptr && this->dataSnapshotId_ == nullptr && this->dataSnapshotName_ == nullptr && this->description_ == nullptr && this->imageId_ == nullptr
        && this->inShare_ == nullptr && this->inShareUser_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->name_ == nullptr
        && this->osType_ == nullptr && this->regionId_ == nullptr && this->requiredDataDiskSize_ == nullptr && this->requiredSystemDiskSize_ == nullptr && this->resourceGroupId_ == nullptr
        && this->sourceImageName_ == nullptr && this->sourceImageVersion_ == nullptr && this->status_ == nullptr && this->systemSnapshotId_ == nullptr && this->systemSnapshotName_ == nullptr
        && this->tags_ == nullptr && this->userId_ == nullptr; };
      // createInstances Field Functions 
      bool hasCreateInstances() const { return this->createInstances_ != nullptr;};
      void deleteCreateInstances() { this->createInstances_ = nullptr;};
      inline const vector<string> & getCreateInstances() const { DARABONBA_PTR_GET_CONST(createInstances_, vector<string>) };
      inline vector<string> getCreateInstances() { DARABONBA_PTR_GET(createInstances_, vector<string>) };
      inline CustomImages& setCreateInstances(const vector<string> & createInstances) { DARABONBA_PTR_SET_VALUE(createInstances_, createInstances) };
      inline CustomImages& setCreateInstances(vector<string> && createInstances) { DARABONBA_PTR_SET_RVALUE(createInstances_, createInstances) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline CustomImages& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataSnapshotId Field Functions 
      bool hasDataSnapshotId() const { return this->dataSnapshotId_ != nullptr;};
      void deleteDataSnapshotId() { this->dataSnapshotId_ = nullptr;};
      inline string getDataSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(dataSnapshotId_, "") };
      inline CustomImages& setDataSnapshotId(string dataSnapshotId) { DARABONBA_PTR_SET_VALUE(dataSnapshotId_, dataSnapshotId) };


      // dataSnapshotName Field Functions 
      bool hasDataSnapshotName() const { return this->dataSnapshotName_ != nullptr;};
      void deleteDataSnapshotName() { this->dataSnapshotName_ = nullptr;};
      inline string getDataSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(dataSnapshotName_, "") };
      inline CustomImages& setDataSnapshotName(string dataSnapshotName) { DARABONBA_PTR_SET_VALUE(dataSnapshotName_, dataSnapshotName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CustomImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline CustomImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // inShare Field Functions 
      bool hasInShare() const { return this->inShare_ != nullptr;};
      void deleteInShare() { this->inShare_ = nullptr;};
      inline bool getInShare() const { DARABONBA_PTR_GET_DEFAULT(inShare_, false) };
      inline CustomImages& setInShare(bool inShare) { DARABONBA_PTR_SET_VALUE(inShare_, inShare) };


      // inShareUser Field Functions 
      bool hasInShareUser() const { return this->inShareUser_ != nullptr;};
      void deleteInShareUser() { this->inShareUser_ = nullptr;};
      inline bool getInShareUser() const { DARABONBA_PTR_GET_DEFAULT(inShareUser_, false) };
      inline CustomImages& setInShareUser(bool inShareUser) { DARABONBA_PTR_SET_VALUE(inShareUser_, inShareUser) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CustomImages& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline CustomImages& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomImages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline CustomImages& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline CustomImages& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // requiredDataDiskSize Field Functions 
      bool hasRequiredDataDiskSize() const { return this->requiredDataDiskSize_ != nullptr;};
      void deleteRequiredDataDiskSize() { this->requiredDataDiskSize_ = nullptr;};
      inline int32_t getRequiredDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(requiredDataDiskSize_, 0) };
      inline CustomImages& setRequiredDataDiskSize(int32_t requiredDataDiskSize) { DARABONBA_PTR_SET_VALUE(requiredDataDiskSize_, requiredDataDiskSize) };


      // requiredSystemDiskSize Field Functions 
      bool hasRequiredSystemDiskSize() const { return this->requiredSystemDiskSize_ != nullptr;};
      void deleteRequiredSystemDiskSize() { this->requiredSystemDiskSize_ = nullptr;};
      inline int32_t getRequiredSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(requiredSystemDiskSize_, 0) };
      inline CustomImages& setRequiredSystemDiskSize(int32_t requiredSystemDiskSize) { DARABONBA_PTR_SET_VALUE(requiredSystemDiskSize_, requiredSystemDiskSize) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline CustomImages& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sourceImageName Field Functions 
      bool hasSourceImageName() const { return this->sourceImageName_ != nullptr;};
      void deleteSourceImageName() { this->sourceImageName_ = nullptr;};
      inline string getSourceImageName() const { DARABONBA_PTR_GET_DEFAULT(sourceImageName_, "") };
      inline CustomImages& setSourceImageName(string sourceImageName) { DARABONBA_PTR_SET_VALUE(sourceImageName_, sourceImageName) };


      // sourceImageVersion Field Functions 
      bool hasSourceImageVersion() const { return this->sourceImageVersion_ != nullptr;};
      void deleteSourceImageVersion() { this->sourceImageVersion_ = nullptr;};
      inline string getSourceImageVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceImageVersion_, "") };
      inline CustomImages& setSourceImageVersion(string sourceImageVersion) { DARABONBA_PTR_SET_VALUE(sourceImageVersion_, sourceImageVersion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CustomImages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // systemSnapshotId Field Functions 
      bool hasSystemSnapshotId() const { return this->systemSnapshotId_ != nullptr;};
      void deleteSystemSnapshotId() { this->systemSnapshotId_ = nullptr;};
      inline string getSystemSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(systemSnapshotId_, "") };
      inline CustomImages& setSystemSnapshotId(string systemSnapshotId) { DARABONBA_PTR_SET_VALUE(systemSnapshotId_, systemSnapshotId) };


      // systemSnapshotName Field Functions 
      bool hasSystemSnapshotName() const { return this->systemSnapshotName_ != nullptr;};
      void deleteSystemSnapshotName() { this->systemSnapshotName_ = nullptr;};
      inline string getSystemSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(systemSnapshotName_, "") };
      inline CustomImages& setSystemSnapshotName(string systemSnapshotName) { DARABONBA_PTR_SET_VALUE(systemSnapshotName_, systemSnapshotName) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<CustomImages::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CustomImages::Tags>) };
      inline vector<CustomImages::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CustomImages::Tags>) };
      inline CustomImages& setTags(const vector<CustomImages::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline CustomImages& setTags(vector<CustomImages::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline CustomImages& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The information about instances created from the image.
      shared_ptr<vector<string>> createInstances_ {};
      // The time when the snapshot was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The data cloud disk snapshot ID.
      shared_ptr<string> dataSnapshotId_ {};
      // The name of the data cloud disk snapshot.
      shared_ptr<string> dataSnapshotName_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The custom image ID.
      shared_ptr<string> imageId_ {};
      // Indicates whether the custom image is shared to ECS.
      shared_ptr<bool> inShare_ {};
      // Indicates whether the custom image is shared across accounts.
      shared_ptr<bool> inShareUser_ {};
      // The instance ID of the simple application server from which the image was created.
      shared_ptr<string> instanceId_ {};
      // The name of the simple application server instance.
      shared_ptr<string> instanceName_ {};
      // The name of the custom image.
      shared_ptr<string> name_ {};
      // The operating system type of the image.
      shared_ptr<string> osType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The data cloud disk size of the image. Unit: GiB.
      shared_ptr<int32_t> requiredDataDiskSize_ {};
      // The system cloud disk size of the image. Unit: GiB.
      shared_ptr<int32_t> requiredSystemDiskSize_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The name of the source image.
      shared_ptr<string> sourceImageName_ {};
      // The image version of the source image.
      shared_ptr<string> sourceImageVersion_ {};
      // The status of the custom image. Valid values:
      // 
      // - 0: copying.
      // 
      // - 1: active.
      // - 2: unavailable.
      // - 3: creation failed.
      // - 4: creating.
      shared_ptr<string> status_ {};
      // The system cloud disk snapshot ID.
      shared_ptr<string> systemSnapshotId_ {};
      // The name of the system cloud disk snapshot.
      shared_ptr<string> systemSnapshotName_ {};
      // The tags of the custom images.
      shared_ptr<vector<CustomImages::Tags>> tags_ {};
      // The Alibaba Cloud account ID of the image owner.
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->customImages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // customImages Field Functions 
    bool hasCustomImages() const { return this->customImages_ != nullptr;};
    void deleteCustomImages() { this->customImages_ = nullptr;};
    inline const vector<ListCustomImagesResponseBody::CustomImages> & getCustomImages() const { DARABONBA_PTR_GET_CONST(customImages_, vector<ListCustomImagesResponseBody::CustomImages>) };
    inline vector<ListCustomImagesResponseBody::CustomImages> getCustomImages() { DARABONBA_PTR_GET(customImages_, vector<ListCustomImagesResponseBody::CustomImages>) };
    inline ListCustomImagesResponseBody& setCustomImages(const vector<ListCustomImagesResponseBody::CustomImages> & customImages) { DARABONBA_PTR_SET_VALUE(customImages_, customImages) };
    inline ListCustomImagesResponseBody& setCustomImages(vector<ListCustomImagesResponseBody::CustomImages> && customImages) { DARABONBA_PTR_SET_RVALUE(customImages_, customImages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListCustomImagesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListCustomImagesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomImagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListCustomImagesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The custom images.
    shared_ptr<vector<ListCustomImagesResponseBody::CustomImages>> customImages_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page in Settings for the paged query.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
