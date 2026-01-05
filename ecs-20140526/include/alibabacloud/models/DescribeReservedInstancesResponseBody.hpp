// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESERVEDINSTANCESRESPONSEBODY_HPP_
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
  class DescribeReservedInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReservedInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedInstances, reservedInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReservedInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstances, reservedInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeReservedInstancesResponseBody() = default ;
    DescribeReservedInstancesResponseBody(const DescribeReservedInstancesResponseBody &) = default ;
    DescribeReservedInstancesResponseBody(DescribeReservedInstancesResponseBody &&) = default ;
    DescribeReservedInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReservedInstancesResponseBody() = default ;
    DescribeReservedInstancesResponseBody& operator=(const DescribeReservedInstancesResponseBody &) = default ;
    DescribeReservedInstancesResponseBody& operator=(DescribeReservedInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReservedInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReservedInstances& obj) { 
        DARABONBA_PTR_TO_JSON(ReservedInstance, reservedInstance_);
      };
      friend void from_json(const Darabonba::Json& j, ReservedInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(ReservedInstance, reservedInstance_);
      };
      ReservedInstances() = default ;
      ReservedInstances(const ReservedInstances &) = default ;
      ReservedInstances(ReservedInstances &&) = default ;
      ReservedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReservedInstances() = default ;
      ReservedInstances& operator=(const ReservedInstances &) = default ;
      ReservedInstances& operator=(ReservedInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReservedInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReservedInstance& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(OfferingType, offeringType_);
          DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
          DARABONBA_PTR_TO_JSON(ReservedInstanceName, reservedInstanceName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ReservedInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(OfferingType, offeringType_);
          DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
          DARABONBA_PTR_FROM_JSON(ReservedInstanceName, reservedInstanceName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ReservedInstance() = default ;
        ReservedInstance(const ReservedInstance &) = default ;
        ReservedInstance(ReservedInstance &&) = default ;
        ReservedInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReservedInstance() = default ;
        ReservedInstance& operator=(const ReservedInstance &) = default ;
        ReservedInstance& operator=(ReservedInstance &&) = default ;
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
            // The tag key.
            shared_ptr<string> tagKey_ {};
            // The tag value.
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

        class OperationLocks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
            DARABONBA_PTR_TO_JSON(OperationLock, operationLock_);
          };
          friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
            DARABONBA_PTR_FROM_JSON(OperationLock, operationLock_);
          };
          OperationLocks() = default ;
          OperationLocks(const OperationLocks &) = default ;
          OperationLocks(OperationLocks &&) = default ;
          OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationLocks() = default ;
          OperationLocks& operator=(const OperationLocks &) = default ;
          OperationLocks& operator=(OperationLocks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OperationLock : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OperationLock& obj) { 
              DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
            };
            friend void from_json(const Darabonba::Json& j, OperationLock& obj) { 
              DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
            };
            OperationLock() = default ;
            OperationLock(const OperationLock &) = default ;
            OperationLock(OperationLock &&) = default ;
            OperationLock(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OperationLock() = default ;
            OperationLock& operator=(const OperationLock &) = default ;
            OperationLock& operator=(OperationLock &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->lockReason_ == nullptr; };
            // lockReason Field Functions 
            bool hasLockReason() const { return this->lockReason_ != nullptr;};
            void deleteLockReason() { this->lockReason_ = nullptr;};
            inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
            inline OperationLock& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


          protected:
            // The reason why the instance is locked.
            shared_ptr<string> lockReason_ {};
          };

          virtual bool empty() const override { return this->operationLock_ == nullptr; };
          // operationLock Field Functions 
          bool hasOperationLock() const { return this->operationLock_ != nullptr;};
          void deleteOperationLock() { this->operationLock_ = nullptr;};
          inline const vector<OperationLocks::OperationLock> & getOperationLock() const { DARABONBA_PTR_GET_CONST(operationLock_, vector<OperationLocks::OperationLock>) };
          inline vector<OperationLocks::OperationLock> getOperationLock() { DARABONBA_PTR_GET(operationLock_, vector<OperationLocks::OperationLock>) };
          inline OperationLocks& setOperationLock(const vector<OperationLocks::OperationLock> & operationLock) { DARABONBA_PTR_SET_VALUE(operationLock_, operationLock) };
          inline OperationLocks& setOperationLock(vector<OperationLocks::OperationLock> && operationLock) { DARABONBA_PTR_SET_RVALUE(operationLock_, operationLock) };


        protected:
          shared_ptr<vector<OperationLocks::OperationLock>> operationLock_ {};
        };

        virtual bool empty() const override { return this->allocationStatus_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr && this->instanceAmount_ == nullptr && this->instanceType_ == nullptr
        && this->offeringType_ == nullptr && this->operationLocks_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr && this->reservedInstanceId_ == nullptr
        && this->reservedInstanceName_ == nullptr && this->resourceGroupId_ == nullptr && this->scope_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->zoneId_ == nullptr; };
        // allocationStatus Field Functions 
        bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
        void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
        inline string getAllocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
        inline ReservedInstance& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline ReservedInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ReservedInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline ReservedInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // instanceAmount Field Functions 
        bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
        void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
        inline int32_t getInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
        inline ReservedInstance& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ReservedInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // offeringType Field Functions 
        bool hasOfferingType() const { return this->offeringType_ != nullptr;};
        void deleteOfferingType() { this->offeringType_ = nullptr;};
        inline string getOfferingType() const { DARABONBA_PTR_GET_DEFAULT(offeringType_, "") };
        inline ReservedInstance& setOfferingType(string offeringType) { DARABONBA_PTR_SET_VALUE(offeringType_, offeringType) };


        // operationLocks Field Functions 
        bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
        void deleteOperationLocks() { this->operationLocks_ = nullptr;};
        inline const ReservedInstance::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, ReservedInstance::OperationLocks) };
        inline ReservedInstance::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, ReservedInstance::OperationLocks) };
        inline ReservedInstance& setOperationLocks(const ReservedInstance::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
        inline ReservedInstance& setOperationLocks(ReservedInstance::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline ReservedInstance& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ReservedInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reservedInstanceId Field Functions 
        bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
        void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
        inline string getReservedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceId_, "") };
        inline ReservedInstance& setReservedInstanceId(string reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };


        // reservedInstanceName Field Functions 
        bool hasReservedInstanceName() const { return this->reservedInstanceName_ != nullptr;};
        void deleteReservedInstanceName() { this->reservedInstanceName_ = nullptr;};
        inline string getReservedInstanceName() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceName_, "") };
        inline ReservedInstance& setReservedInstanceName(string reservedInstanceName) { DARABONBA_PTR_SET_VALUE(reservedInstanceName_, reservedInstanceName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ReservedInstance& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline ReservedInstance& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ReservedInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ReservedInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ReservedInstance::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ReservedInstance::Tags) };
        inline ReservedInstance::Tags getTags() { DARABONBA_PTR_GET(tags_, ReservedInstance::Tags) };
        inline ReservedInstance& setTags(const ReservedInstance::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ReservedInstance& setTags(ReservedInstance::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ReservedInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // Indicates the sharing status of the reserved instance when the AllocationType parameter is set to Shared. Valid values:
        // 
        // *   allocated: The reserved instance is allocated to another account.
        // *   beAllocated: The reserved instance is allocated by another account.
        shared_ptr<string> allocationStatus_ {};
        // The creation time.
        shared_ptr<string> creationTime_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The expiration time.
        shared_ptr<string> expiredTime_ {};
        // The number of pay-as-you-go instances that are of the same instance type as the reserved instance and can be matched to the reserved instance.
        shared_ptr<int32_t> instanceAmount_ {};
        // The instance type of the pay-as-you-go instances that can be matched to the reserved instance.
        shared_ptr<string> instanceType_ {};
        // The payment option.
        shared_ptr<string> offeringType_ {};
        // Details about the lock status of the reserved instance.
        shared_ptr<ReservedInstance::OperationLocks> operationLocks_ {};
        // The operating system of the image used by the instance. Valid values:
        // 
        // *   Windows
        // *   Linux
        shared_ptr<string> platform_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The reserved instance ID.
        shared_ptr<string> reservedInstanceId_ {};
        // The name.
        shared_ptr<string> reservedInstanceName_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The scope.
        shared_ptr<string> scope_ {};
        // The effective time.
        shared_ptr<string> startTime_ {};
        // The status.
        shared_ptr<string> status_ {};
        // The tags of the reserved instance.
        shared_ptr<ReservedInstance::Tags> tags_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->reservedInstance_ == nullptr; };
      // reservedInstance Field Functions 
      bool hasReservedInstance() const { return this->reservedInstance_ != nullptr;};
      void deleteReservedInstance() { this->reservedInstance_ = nullptr;};
      inline const vector<ReservedInstances::ReservedInstance> & getReservedInstance() const { DARABONBA_PTR_GET_CONST(reservedInstance_, vector<ReservedInstances::ReservedInstance>) };
      inline vector<ReservedInstances::ReservedInstance> getReservedInstance() { DARABONBA_PTR_GET(reservedInstance_, vector<ReservedInstances::ReservedInstance>) };
      inline ReservedInstances& setReservedInstance(const vector<ReservedInstances::ReservedInstance> & reservedInstance) { DARABONBA_PTR_SET_VALUE(reservedInstance_, reservedInstance) };
      inline ReservedInstances& setReservedInstance(vector<ReservedInstances::ReservedInstance> && reservedInstance) { DARABONBA_PTR_SET_RVALUE(reservedInstance_, reservedInstance) };


    protected:
      shared_ptr<vector<ReservedInstances::ReservedInstance>> reservedInstance_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->reservedInstances_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeReservedInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeReservedInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReservedInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstances Field Functions 
    bool hasReservedInstances() const { return this->reservedInstances_ != nullptr;};
    void deleteReservedInstances() { this->reservedInstances_ = nullptr;};
    inline const DescribeReservedInstancesResponseBody::ReservedInstances & getReservedInstances() const { DARABONBA_PTR_GET_CONST(reservedInstances_, DescribeReservedInstancesResponseBody::ReservedInstances) };
    inline DescribeReservedInstancesResponseBody::ReservedInstances getReservedInstances() { DARABONBA_PTR_GET(reservedInstances_, DescribeReservedInstancesResponseBody::ReservedInstances) };
    inline DescribeReservedInstancesResponseBody& setReservedInstances(const DescribeReservedInstancesResponseBody::ReservedInstances & reservedInstances) { DARABONBA_PTR_SET_VALUE(reservedInstances_, reservedInstances) };
    inline DescribeReservedInstancesResponseBody& setReservedInstances(DescribeReservedInstancesResponseBody::ReservedInstances && reservedInstances) { DARABONBA_PTR_SET_RVALUE(reservedInstances_, reservedInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeReservedInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Details about the reserved instances.
    shared_ptr<DescribeReservedInstancesResponseBody::ReservedInstances> reservedInstances_ {};
    // The total number of reserved instances.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
