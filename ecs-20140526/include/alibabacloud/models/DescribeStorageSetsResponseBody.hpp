// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGESETSRESPONSEBODY_HPP_
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
  class DescribeStorageSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageSets, storageSets_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageSets, storageSets_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageSetsResponseBody() = default ;
    DescribeStorageSetsResponseBody(const DescribeStorageSetsResponseBody &) = default ;
    DescribeStorageSetsResponseBody(DescribeStorageSetsResponseBody &&) = default ;
    DescribeStorageSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageSetsResponseBody() = default ;
    DescribeStorageSetsResponseBody& operator=(const DescribeStorageSetsResponseBody &) = default ;
    DescribeStorageSetsResponseBody& operator=(DescribeStorageSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageSets& obj) { 
        DARABONBA_PTR_TO_JSON(StorageSet, storageSet_);
      };
      friend void from_json(const Darabonba::Json& j, StorageSets& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageSet, storageSet_);
      };
      StorageSets() = default ;
      StorageSets(const StorageSets &) = default ;
      StorageSets(StorageSets &&) = default ;
      StorageSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageSets() = default ;
      StorageSets& operator=(const StorageSets &) = default ;
      StorageSets& operator=(StorageSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StorageSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageSet& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
          DARABONBA_PTR_TO_JSON(StorageSetName, storageSetName_);
          DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, StorageSet& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
          DARABONBA_PTR_FROM_JSON(StorageSetName, storageSetName_);
          DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        StorageSet() = default ;
        StorageSet(const StorageSet &) = default ;
        StorageSet(StorageSet &&) = default ;
        StorageSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageSet() = default ;
        StorageSet& operator=(const StorageSet &) = default ;
        StorageSet& operator=(StorageSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->storageSetId_ == nullptr && this->storageSetName_ == nullptr
        && this->storageSetPartitionNumber_ == nullptr && this->tags_ == nullptr && this->zoneId_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline StorageSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline StorageSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline StorageSet& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline StorageSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // storageSetId Field Functions 
        bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
        void deleteStorageSetId() { this->storageSetId_ = nullptr;};
        inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
        inline StorageSet& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


        // storageSetName Field Functions 
        bool hasStorageSetName() const { return this->storageSetName_ != nullptr;};
        void deleteStorageSetName() { this->storageSetName_ = nullptr;};
        inline string getStorageSetName() const { DARABONBA_PTR_GET_DEFAULT(storageSetName_, "") };
        inline StorageSet& setStorageSetName(string storageSetName) { DARABONBA_PTR_SET_VALUE(storageSetName_, storageSetName) };


        // storageSetPartitionNumber Field Functions 
        bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
        void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
        inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
        inline StorageSet& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const StorageSet::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, StorageSet::Tags) };
        inline StorageSet::Tags getTags() { DARABONBA_PTR_GET(tags_, StorageSet::Tags) };
        inline StorageSet& setTags(const StorageSet::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline StorageSet& setTags(StorageSet::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline StorageSet& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time when the storage set was created.
        shared_ptr<string> creationTime_ {};
        // The description of the storage set.
        shared_ptr<string> description_ {};
        // The ID of the region to which the storage set belongs.
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the storage set.
        shared_ptr<string> storageSetId_ {};
        // The name of the storage set.
        shared_ptr<string> storageSetName_ {};
        // The maximum number of partitions supported by the storage set.
        shared_ptr<int32_t> storageSetPartitionNumber_ {};
        shared_ptr<StorageSet::Tags> tags_ {};
        // The ID of the zone to which the storage set belongs.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->storageSet_ == nullptr; };
      // storageSet Field Functions 
      bool hasStorageSet() const { return this->storageSet_ != nullptr;};
      void deleteStorageSet() { this->storageSet_ = nullptr;};
      inline const vector<StorageSets::StorageSet> & getStorageSet() const { DARABONBA_PTR_GET_CONST(storageSet_, vector<StorageSets::StorageSet>) };
      inline vector<StorageSets::StorageSet> getStorageSet() { DARABONBA_PTR_GET(storageSet_, vector<StorageSets::StorageSet>) };
      inline StorageSets& setStorageSet(const vector<StorageSets::StorageSet> & storageSet) { DARABONBA_PTR_SET_VALUE(storageSet_, storageSet) };
      inline StorageSets& setStorageSet(vector<StorageSets::StorageSet> && storageSet) { DARABONBA_PTR_SET_RVALUE(storageSet_, storageSet) };


    protected:
      shared_ptr<vector<StorageSets::StorageSet>> storageSet_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->storageSets_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageSets Field Functions 
    bool hasStorageSets() const { return this->storageSets_ != nullptr;};
    void deleteStorageSets() { this->storageSets_ = nullptr;};
    inline const DescribeStorageSetsResponseBody::StorageSets & getStorageSets() const { DARABONBA_PTR_GET_CONST(storageSets_, DescribeStorageSetsResponseBody::StorageSets) };
    inline DescribeStorageSetsResponseBody::StorageSets getStorageSets() { DARABONBA_PTR_GET(storageSets_, DescribeStorageSetsResponseBody::StorageSets) };
    inline DescribeStorageSetsResponseBody& setStorageSets(const DescribeStorageSetsResponseBody::StorageSets & storageSets) { DARABONBA_PTR_SET_VALUE(storageSets_, storageSets) };
    inline DescribeStorageSetsResponseBody& setStorageSets(DescribeStorageSetsResponseBody::StorageSets && storageSets) { DARABONBA_PTR_SET_RVALUE(storageSets_, storageSets) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStorageSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details about the storage sets. The value of this parameter is an array that consists of StorageSet data.
    shared_ptr<DescribeStorageSetsResponseBody::StorageSets> storageSets_ {};
    // The total number of storage sets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
