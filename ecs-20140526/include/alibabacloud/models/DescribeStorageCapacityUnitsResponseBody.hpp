// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGECAPACITYUNITSRESPONSEBODY_HPP_
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
  class DescribeStorageCapacityUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageCapacityUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageCapacityUnits, storageCapacityUnits_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageCapacityUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnits, storageCapacityUnits_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStorageCapacityUnitsResponseBody() = default ;
    DescribeStorageCapacityUnitsResponseBody(const DescribeStorageCapacityUnitsResponseBody &) = default ;
    DescribeStorageCapacityUnitsResponseBody(DescribeStorageCapacityUnitsResponseBody &&) = default ;
    DescribeStorageCapacityUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageCapacityUnitsResponseBody() = default ;
    DescribeStorageCapacityUnitsResponseBody& operator=(const DescribeStorageCapacityUnitsResponseBody &) = default ;
    DescribeStorageCapacityUnitsResponseBody& operator=(DescribeStorageCapacityUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageCapacityUnits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageCapacityUnits& obj) { 
        DARABONBA_PTR_TO_JSON(StorageCapacityUnit, storageCapacityUnit_);
      };
      friend void from_json(const Darabonba::Json& j, StorageCapacityUnits& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageCapacityUnit, storageCapacityUnit_);
      };
      StorageCapacityUnits() = default ;
      StorageCapacityUnits(const StorageCapacityUnits &) = default ;
      StorageCapacityUnits(StorageCapacityUnits &&) = default ;
      StorageCapacityUnits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageCapacityUnits() = default ;
      StorageCapacityUnits& operator=(const StorageCapacityUnits &) = default ;
      StorageCapacityUnits& operator=(StorageCapacityUnits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StorageCapacityUnit : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageCapacityUnit& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, StorageCapacityUnit& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        StorageCapacityUnit() = default ;
        StorageCapacityUnit(const StorageCapacityUnit &) = default ;
        StorageCapacityUnit(StorageCapacityUnit &&) = default ;
        StorageCapacityUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageCapacityUnit() = default ;
        StorageCapacityUnit& operator=(const StorageCapacityUnit &) = default ;
        StorageCapacityUnit& operator=(StorageCapacityUnit &&) = default ;
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
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The key of tag N.
            shared_ptr<string> tagKey_ {};
            // The value of tag N.
            shared_ptr<string> tagValue_ {};
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

        virtual bool empty() const override { return this->allocationStatus_ == nullptr
        && this->capacity_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->name_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->storageCapacityUnitId_ == nullptr && this->tags_ == nullptr; };
        // allocationStatus Field Functions 
        bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
        void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
        inline string getAllocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
        inline StorageCapacityUnit& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline int32_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0) };
        inline StorageCapacityUnit& setCapacity(int32_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline StorageCapacityUnit& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline StorageCapacityUnit& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline StorageCapacityUnit& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StorageCapacityUnit& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline StorageCapacityUnit& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline StorageCapacityUnit& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StorageCapacityUnit& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageCapacityUnitId Field Functions 
        bool hasStorageCapacityUnitId() const { return this->storageCapacityUnitId_ != nullptr;};
        void deleteStorageCapacityUnitId() { this->storageCapacityUnitId_ = nullptr;};
        inline string getStorageCapacityUnitId() const { DARABONBA_PTR_GET_DEFAULT(storageCapacityUnitId_, "") };
        inline StorageCapacityUnit& setStorageCapacityUnitId(string storageCapacityUnitId) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitId_, storageCapacityUnitId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const StorageCapacityUnit::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, StorageCapacityUnit::Tags) };
        inline StorageCapacityUnit::Tags getTags() { DARABONBA_PTR_GET(tags_, StorageCapacityUnit::Tags) };
        inline StorageCapacityUnit& setTags(const StorageCapacityUnit::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline StorageCapacityUnit& setTags(StorageCapacityUnit::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // Indicates the allocation state of the SCU when the AllocationType parameter is set to Shared. Valid values:
        // 
        // *   allocated: The SCU is allocated to other accounts.
        // *   BeAllocated: The SCU is allocated from another account.
        shared_ptr<string> allocationStatus_ {};
        // The capacity of the SCU.
        shared_ptr<int32_t> capacity_ {};
        // The time when the SCU was created.
        shared_ptr<string> creationTime_ {};
        // The description of the SCU.
        shared_ptr<string> description_ {};
        // The time when the SCU expires.
        shared_ptr<string> expiredTime_ {};
        // The name of the SCU.
        shared_ptr<string> name_ {};
        // The region ID of the SCU.
        shared_ptr<string> regionId_ {};
        // The time when the SCU took effect.
        shared_ptr<string> startTime_ {};
        // The status of the SCU. Valid values:
        // 
        // *   Creating: The SCUs are being created.
        // *   Active: The SCUs are in effect.
        // *   Expired: The SCUs have expired.
        // *   Pending: The SCUs have not taken effect.
        shared_ptr<string> status_ {};
        // The ID of the SCU.
        shared_ptr<string> storageCapacityUnitId_ {};
        // The tag key-value pairs of the SCU.
        shared_ptr<StorageCapacityUnit::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->storageCapacityUnit_ == nullptr; };
      // storageCapacityUnit Field Functions 
      bool hasStorageCapacityUnit() const { return this->storageCapacityUnit_ != nullptr;};
      void deleteStorageCapacityUnit() { this->storageCapacityUnit_ = nullptr;};
      inline const vector<StorageCapacityUnits::StorageCapacityUnit> & getStorageCapacityUnit() const { DARABONBA_PTR_GET_CONST(storageCapacityUnit_, vector<StorageCapacityUnits::StorageCapacityUnit>) };
      inline vector<StorageCapacityUnits::StorageCapacityUnit> getStorageCapacityUnit() { DARABONBA_PTR_GET(storageCapacityUnit_, vector<StorageCapacityUnits::StorageCapacityUnit>) };
      inline StorageCapacityUnits& setStorageCapacityUnit(const vector<StorageCapacityUnits::StorageCapacityUnit> & storageCapacityUnit) { DARABONBA_PTR_SET_VALUE(storageCapacityUnit_, storageCapacityUnit) };
      inline StorageCapacityUnits& setStorageCapacityUnit(vector<StorageCapacityUnits::StorageCapacityUnit> && storageCapacityUnit) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnit_, storageCapacityUnit) };


    protected:
      shared_ptr<vector<StorageCapacityUnits::StorageCapacityUnit>> storageCapacityUnit_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->storageCapacityUnits_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeStorageCapacityUnitsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeStorageCapacityUnitsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStorageCapacityUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageCapacityUnits Field Functions 
    bool hasStorageCapacityUnits() const { return this->storageCapacityUnits_ != nullptr;};
    void deleteStorageCapacityUnits() { this->storageCapacityUnits_ = nullptr;};
    inline const DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits & getStorageCapacityUnits() const { DARABONBA_PTR_GET_CONST(storageCapacityUnits_, DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits) };
    inline DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits getStorageCapacityUnits() { DARABONBA_PTR_GET(storageCapacityUnits_, DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits) };
    inline DescribeStorageCapacityUnitsResponseBody& setStorageCapacityUnits(const DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits & storageCapacityUnits) { DARABONBA_PTR_SET_VALUE(storageCapacityUnits_, storageCapacityUnits) };
    inline DescribeStorageCapacityUnitsResponseBody& setStorageCapacityUnits(DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits && storageCapacityUnits) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnits_, storageCapacityUnits) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeStorageCapacityUnitsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details about the SCUs.
    shared_ptr<DescribeStorageCapacityUnitsResponseBody::StorageCapacityUnits> storageCapacityUnits_ {};
    // The total number of SCUs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
