// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODY_HPP_
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
  class DescribeCapacityReservationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationSet, capacityReservationSet_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationSet, capacityReservationSet_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCapacityReservationsResponseBody() = default ;
    DescribeCapacityReservationsResponseBody(const DescribeCapacityReservationsResponseBody &) = default ;
    DescribeCapacityReservationsResponseBody(DescribeCapacityReservationsResponseBody &&) = default ;
    DescribeCapacityReservationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationsResponseBody() = default ;
    DescribeCapacityReservationsResponseBody& operator=(const DescribeCapacityReservationsResponseBody &) = default ;
    DescribeCapacityReservationsResponseBody& operator=(DescribeCapacityReservationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CapacityReservationSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CapacityReservationSet& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityReservationItem, capacityReservationItem_);
      };
      friend void from_json(const Darabonba::Json& j, CapacityReservationSet& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityReservationItem, capacityReservationItem_);
      };
      CapacityReservationSet() = default ;
      CapacityReservationSet(const CapacityReservationSet &) = default ;
      CapacityReservationSet(CapacityReservationSet &&) = default ;
      CapacityReservationSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CapacityReservationSet() = default ;
      CapacityReservationSet& operator=(const CapacityReservationSet &) = default ;
      CapacityReservationSet& operator=(CapacityReservationSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CapacityReservationItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CapacityReservationItem& obj) { 
          DARABONBA_PTR_TO_JSON(AllocatedResources, allocatedResources_);
          DARABONBA_PTR_TO_JSON(CapacityReservationOwnerId, capacityReservationOwnerId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EndTimeType, endTimeType_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SavingPlanId, savingPlanId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TimeSlot, timeSlot_);
        };
        friend void from_json(const Darabonba::Json& j, CapacityReservationItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocatedResources, allocatedResources_);
          DARABONBA_PTR_FROM_JSON(CapacityReservationOwnerId, capacityReservationOwnerId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EndTimeType, endTimeType_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SavingPlanId, savingPlanId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TimeSlot, timeSlot_);
        };
        CapacityReservationItem() = default ;
        CapacityReservationItem(const CapacityReservationItem &) = default ;
        CapacityReservationItem(CapacityReservationItem &&) = default ;
        CapacityReservationItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CapacityReservationItem() = default ;
        CapacityReservationItem& operator=(const CapacityReservationItem &) = default ;
        CapacityReservationItem& operator=(CapacityReservationItem &&) = default ;
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

        class AllocatedResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AllocatedResources& obj) { 
            DARABONBA_PTR_TO_JSON(AllocatedResource, allocatedResource_);
          };
          friend void from_json(const Darabonba::Json& j, AllocatedResources& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocatedResource, allocatedResource_);
          };
          AllocatedResources() = default ;
          AllocatedResources(const AllocatedResources &) = default ;
          AllocatedResources(AllocatedResources &&) = default ;
          AllocatedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AllocatedResources() = default ;
          AllocatedResources& operator=(const AllocatedResources &) = default ;
          AllocatedResources& operator=(AllocatedResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AllocatedResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AllocatedResource& obj) { 
              DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_TO_JSON(CapacityReservationUsages, capacityReservationUsages_);
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
              DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, AllocatedResource& obj) { 
              DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_FROM_JSON(CapacityReservationUsages, capacityReservationUsages_);
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
              DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
            };
            AllocatedResource() = default ;
            AllocatedResource(const AllocatedResource &) = default ;
            AllocatedResource(AllocatedResource &&) = default ;
            AllocatedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AllocatedResource() = default ;
            AllocatedResource& operator=(const AllocatedResource &) = default ;
            AllocatedResource& operator=(AllocatedResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class CapacityReservationUsages : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CapacityReservationUsages& obj) { 
                DARABONBA_PTR_TO_JSON(CapacityReservationUsage, capacityReservationUsage_);
              };
              friend void from_json(const Darabonba::Json& j, CapacityReservationUsages& obj) { 
                DARABONBA_PTR_FROM_JSON(CapacityReservationUsage, capacityReservationUsage_);
              };
              CapacityReservationUsages() = default ;
              CapacityReservationUsages(const CapacityReservationUsages &) = default ;
              CapacityReservationUsages(CapacityReservationUsages &&) = default ;
              CapacityReservationUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CapacityReservationUsages() = default ;
              CapacityReservationUsages& operator=(const CapacityReservationUsages &) = default ;
              CapacityReservationUsages& operator=(CapacityReservationUsages &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class CapacityReservationUsage : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const CapacityReservationUsage& obj) { 
                  DARABONBA_PTR_TO_JSON(AccountId, accountId_);
                  DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
                  DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
                };
                friend void from_json(const Darabonba::Json& j, CapacityReservationUsage& obj) { 
                  DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
                  DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
                  DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
                };
                CapacityReservationUsage() = default ;
                CapacityReservationUsage(const CapacityReservationUsage &) = default ;
                CapacityReservationUsage(CapacityReservationUsage &&) = default ;
                CapacityReservationUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~CapacityReservationUsage() = default ;
                CapacityReservationUsage& operator=(const CapacityReservationUsage &) = default ;
                CapacityReservationUsage& operator=(CapacityReservationUsage &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->accountId_ == nullptr
        && this->serviceName_ == nullptr && this->usedAmount_ == nullptr; };
                // accountId Field Functions 
                bool hasAccountId() const { return this->accountId_ != nullptr;};
                void deleteAccountId() { this->accountId_ = nullptr;};
                inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
                inline CapacityReservationUsage& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


                // serviceName Field Functions 
                bool hasServiceName() const { return this->serviceName_ != nullptr;};
                void deleteServiceName() { this->serviceName_ = nullptr;};
                inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
                inline CapacityReservationUsage& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


                // usedAmount Field Functions 
                bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
                void deleteUsedAmount() { this->usedAmount_ = nullptr;};
                inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
                inline CapacityReservationUsage& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


              protected:
                // The ID of the Alibaba Cloud account.
                shared_ptr<string> accountId_ {};
                // The name of the Alibaba Cloud service.
                shared_ptr<string> serviceName_ {};
                // The number of instances that are used by the Alibaba Cloud account or service.
                shared_ptr<int32_t> usedAmount_ {};
              };

              virtual bool empty() const override { return this->capacityReservationUsage_ == nullptr; };
              // capacityReservationUsage Field Functions 
              bool hasCapacityReservationUsage() const { return this->capacityReservationUsage_ != nullptr;};
              void deleteCapacityReservationUsage() { this->capacityReservationUsage_ = nullptr;};
              inline const vector<CapacityReservationUsages::CapacityReservationUsage> & getCapacityReservationUsage() const { DARABONBA_PTR_GET_CONST(capacityReservationUsage_, vector<CapacityReservationUsages::CapacityReservationUsage>) };
              inline vector<CapacityReservationUsages::CapacityReservationUsage> getCapacityReservationUsage() { DARABONBA_PTR_GET(capacityReservationUsage_, vector<CapacityReservationUsages::CapacityReservationUsage>) };
              inline CapacityReservationUsages& setCapacityReservationUsage(const vector<CapacityReservationUsages::CapacityReservationUsage> & capacityReservationUsage) { DARABONBA_PTR_SET_VALUE(capacityReservationUsage_, capacityReservationUsage) };
              inline CapacityReservationUsages& setCapacityReservationUsage(vector<CapacityReservationUsages::CapacityReservationUsage> && capacityReservationUsage) { DARABONBA_PTR_SET_RVALUE(capacityReservationUsage_, capacityReservationUsage) };


            protected:
              shared_ptr<vector<CapacityReservationUsages::CapacityReservationUsage>> capacityReservationUsage_ {};
            };

            virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->capacityReservationUsages_ == nullptr && this->instanceType_ == nullptr && this->totalAmount_ == nullptr && this->usedAmount_ == nullptr && this->zoneId_ == nullptr; };
            // availableAmount Field Functions 
            bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
            void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
            inline int32_t getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
            inline AllocatedResource& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


            // capacityReservationUsages Field Functions 
            bool hasCapacityReservationUsages() const { return this->capacityReservationUsages_ != nullptr;};
            void deleteCapacityReservationUsages() { this->capacityReservationUsages_ = nullptr;};
            inline const AllocatedResource::CapacityReservationUsages & getCapacityReservationUsages() const { DARABONBA_PTR_GET_CONST(capacityReservationUsages_, AllocatedResource::CapacityReservationUsages) };
            inline AllocatedResource::CapacityReservationUsages getCapacityReservationUsages() { DARABONBA_PTR_GET(capacityReservationUsages_, AllocatedResource::CapacityReservationUsages) };
            inline AllocatedResource& setCapacityReservationUsages(const AllocatedResource::CapacityReservationUsages & capacityReservationUsages) { DARABONBA_PTR_SET_VALUE(capacityReservationUsages_, capacityReservationUsages) };
            inline AllocatedResource& setCapacityReservationUsages(AllocatedResource::CapacityReservationUsages && capacityReservationUsages) { DARABONBA_PTR_SET_RVALUE(capacityReservationUsages_, capacityReservationUsages) };


            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline AllocatedResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // totalAmount Field Functions 
            bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
            void deleteTotalAmount() { this->totalAmount_ = nullptr;};
            inline int32_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0) };
            inline AllocatedResource& setTotalAmount(int32_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


            // usedAmount Field Functions 
            bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
            void deleteUsedAmount() { this->usedAmount_ = nullptr;};
            inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
            inline AllocatedResource& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline AllocatedResource& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The number of available instances.
            shared_ptr<int32_t> availableAmount_ {};
            // Details of instance usage.
            shared_ptr<AllocatedResource::CapacityReservationUsages> capacityReservationUsages_ {};
            // The instance type of the instances.
            shared_ptr<string> instanceType_ {};
            // The total number of instances for which the capacity of an instance type is reserved.
            shared_ptr<int32_t> totalAmount_ {};
            // The number of instances that have used the capacity reservation.
            shared_ptr<int32_t> usedAmount_ {};
            // The zone ID.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->allocatedResource_ == nullptr; };
          // allocatedResource Field Functions 
          bool hasAllocatedResource() const { return this->allocatedResource_ != nullptr;};
          void deleteAllocatedResource() { this->allocatedResource_ = nullptr;};
          inline const vector<AllocatedResources::AllocatedResource> & getAllocatedResource() const { DARABONBA_PTR_GET_CONST(allocatedResource_, vector<AllocatedResources::AllocatedResource>) };
          inline vector<AllocatedResources::AllocatedResource> getAllocatedResource() { DARABONBA_PTR_GET(allocatedResource_, vector<AllocatedResources::AllocatedResource>) };
          inline AllocatedResources& setAllocatedResource(const vector<AllocatedResources::AllocatedResource> & allocatedResource) { DARABONBA_PTR_SET_VALUE(allocatedResource_, allocatedResource) };
          inline AllocatedResources& setAllocatedResource(vector<AllocatedResources::AllocatedResource> && allocatedResource) { DARABONBA_PTR_SET_RVALUE(allocatedResource_, allocatedResource) };


        protected:
          shared_ptr<vector<AllocatedResources::AllocatedResource>> allocatedResource_ {};
        };

        virtual bool empty() const override { return this->allocatedResources_ == nullptr
        && this->capacityReservationOwnerId_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->endTimeType_ == nullptr && this->instanceChargeType_ == nullptr
        && this->platform_ == nullptr && this->privatePoolOptionsId_ == nullptr && this->privatePoolOptionsMatchCriteria_ == nullptr && this->privatePoolOptionsName_ == nullptr && this->regionId_ == nullptr
        && this->reservedInstanceId_ == nullptr && this->resourceGroupId_ == nullptr && this->savingPlanId_ == nullptr && this->startTime_ == nullptr && this->startTimeType_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->timeSlot_ == nullptr; };
        // allocatedResources Field Functions 
        bool hasAllocatedResources() const { return this->allocatedResources_ != nullptr;};
        void deleteAllocatedResources() { this->allocatedResources_ = nullptr;};
        inline const CapacityReservationItem::AllocatedResources & getAllocatedResources() const { DARABONBA_PTR_GET_CONST(allocatedResources_, CapacityReservationItem::AllocatedResources) };
        inline CapacityReservationItem::AllocatedResources getAllocatedResources() { DARABONBA_PTR_GET(allocatedResources_, CapacityReservationItem::AllocatedResources) };
        inline CapacityReservationItem& setAllocatedResources(const CapacityReservationItem::AllocatedResources & allocatedResources) { DARABONBA_PTR_SET_VALUE(allocatedResources_, allocatedResources) };
        inline CapacityReservationItem& setAllocatedResources(CapacityReservationItem::AllocatedResources && allocatedResources) { DARABONBA_PTR_SET_RVALUE(allocatedResources_, allocatedResources) };


        // capacityReservationOwnerId Field Functions 
        bool hasCapacityReservationOwnerId() const { return this->capacityReservationOwnerId_ != nullptr;};
        void deleteCapacityReservationOwnerId() { this->capacityReservationOwnerId_ = nullptr;};
        inline string getCapacityReservationOwnerId() const { DARABONBA_PTR_GET_DEFAULT(capacityReservationOwnerId_, "") };
        inline CapacityReservationItem& setCapacityReservationOwnerId(string capacityReservationOwnerId) { DARABONBA_PTR_SET_VALUE(capacityReservationOwnerId_, capacityReservationOwnerId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CapacityReservationItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline CapacityReservationItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // endTimeType Field Functions 
        bool hasEndTimeType() const { return this->endTimeType_ != nullptr;};
        void deleteEndTimeType() { this->endTimeType_ = nullptr;};
        inline string getEndTimeType() const { DARABONBA_PTR_GET_DEFAULT(endTimeType_, "") };
        inline CapacityReservationItem& setEndTimeType(string endTimeType) { DARABONBA_PTR_SET_VALUE(endTimeType_, endTimeType) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline CapacityReservationItem& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline CapacityReservationItem& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // privatePoolOptionsId Field Functions 
        bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
        void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
        inline string getPrivatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
        inline CapacityReservationItem& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


        // privatePoolOptionsMatchCriteria Field Functions 
        bool hasPrivatePoolOptionsMatchCriteria() const { return this->privatePoolOptionsMatchCriteria_ != nullptr;};
        void deletePrivatePoolOptionsMatchCriteria() { this->privatePoolOptionsMatchCriteria_ = nullptr;};
        inline string getPrivatePoolOptionsMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsMatchCriteria_, "") };
        inline CapacityReservationItem& setPrivatePoolOptionsMatchCriteria(string privatePoolOptionsMatchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsMatchCriteria_, privatePoolOptionsMatchCriteria) };


        // privatePoolOptionsName Field Functions 
        bool hasPrivatePoolOptionsName() const { return this->privatePoolOptionsName_ != nullptr;};
        void deletePrivatePoolOptionsName() { this->privatePoolOptionsName_ = nullptr;};
        inline string getPrivatePoolOptionsName() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsName_, "") };
        inline CapacityReservationItem& setPrivatePoolOptionsName(string privatePoolOptionsName) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsName_, privatePoolOptionsName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CapacityReservationItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reservedInstanceId Field Functions 
        bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
        void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
        inline string getReservedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(reservedInstanceId_, "") };
        inline CapacityReservationItem& setReservedInstanceId(string reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline CapacityReservationItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // savingPlanId Field Functions 
        bool hasSavingPlanId() const { return this->savingPlanId_ != nullptr;};
        void deleteSavingPlanId() { this->savingPlanId_ = nullptr;};
        inline string getSavingPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingPlanId_, "") };
        inline CapacityReservationItem& setSavingPlanId(string savingPlanId) { DARABONBA_PTR_SET_VALUE(savingPlanId_, savingPlanId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline CapacityReservationItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // startTimeType Field Functions 
        bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
        void deleteStartTimeType() { this->startTimeType_ = nullptr;};
        inline string getStartTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, "") };
        inline CapacityReservationItem& setStartTimeType(string startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CapacityReservationItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const CapacityReservationItem::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CapacityReservationItem::Tags) };
        inline CapacityReservationItem::Tags getTags() { DARABONBA_PTR_GET(tags_, CapacityReservationItem::Tags) };
        inline CapacityReservationItem& setTags(const CapacityReservationItem::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CapacityReservationItem& setTags(CapacityReservationItem::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // timeSlot Field Functions 
        bool hasTimeSlot() const { return this->timeSlot_ != nullptr;};
        void deleteTimeSlot() { this->timeSlot_ = nullptr;};
        inline string getTimeSlot() const { DARABONBA_PTR_GET_DEFAULT(timeSlot_, "") };
        inline CapacityReservationItem& setTimeSlot(string timeSlot) { DARABONBA_PTR_SET_VALUE(timeSlot_, timeSlot) };


      protected:
        // Details of the allocated resources.
        shared_ptr<CapacityReservationItem::AllocatedResources> allocatedResources_ {};
        // The ID of the capacity reservation owner.
        shared_ptr<string> capacityReservationOwnerId_ {};
        // The description of the capacity reservation.
        shared_ptr<string> description_ {};
        // The time when the capacity reservation expires.
        shared_ptr<string> endTime_ {};
        // The release mode of the capacity reservation. Valid values:
        // 
        // *   Limited: The capacity reservation is automatically released at a specified time.
        // *   Unlimited: The capacity reservation is manually released. You can release the capacity reservation anytime.
        shared_ptr<string> endTimeType_ {};
        // The billing method of the instances created by using the capacity reservation. Valid values:
        // 
        // *   PostPaid: pay-as-you-go.
        // *   PrePaid: subscription.
        shared_ptr<string> instanceChargeType_ {};
        // The operating system type of the instances created by using the capacity reservation. Valid values:
        // 
        // *   windows
        // *   linux
        shared_ptr<string> platform_ {};
        // The ID of the capacity reservation.
        shared_ptr<string> privatePoolOptionsId_ {};
        // The type of the private pool generated after the capacity reservation takes effect. Valid values:
        // 
        // *   Open: open private pool. If you use the capacity reservation to create Elastic Compute Service (ECS) instances, the open private pool that is associated with the capacity reservation is automatically matched. If no capacity is available in the open private pool, resources in the public pool are automatically used to create the instances.
        // *   Target: targeted private pool. If you use the capacity reservation to create ECS instances, the targeted private pool that is associated with the capacity reservation is automatically matched. If no capacity is available in the private pool, the instances fail to be created.
        shared_ptr<string> privatePoolOptionsMatchCriteria_ {};
        // The name of the capacity reservation.
        shared_ptr<string> privatePoolOptionsName_ {};
        // The region ID of the capacity reservation.
        shared_ptr<string> regionId_ {};
        // The ID of the reserved instance used with the capacity reservation.
        shared_ptr<string> reservedInstanceId_ {};
        // The ID of the resource group to which the capacity reservation belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the savings plan used with the capacity reservation.
        shared_ptr<string> savingPlanId_ {};
        // The time when the capacity reservation takes effect.
        shared_ptr<string> startTime_ {};
        // The mode in which the capacity reservation takes effect. Valid values:
        // 
        // *   Now: The capacity reservation takes effect immediately after it is created.
        // *   Later: The capacity reservation takes effect at a specified time.
        shared_ptr<string> startTimeType_ {};
        // The status of the capacity reservation. Valid values:
        // 
        // *   Pending: The capacity reservation is being initialized.
        // *   Preparing: The capacity reservation is being prepared.
        // *   Prepared: The capacity reservation is to take effect.
        // *   Active: The capacity reservation is in effect.
        // *   Released: The capacity reservation has been released manually or automatically when it expired.
        shared_ptr<string> status_ {};
        // The tags that are added to the capacity reservation.
        shared_ptr<CapacityReservationItem::Tags> tags_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<string> timeSlot_ {};
      };

      virtual bool empty() const override { return this->capacityReservationItem_ == nullptr; };
      // capacityReservationItem Field Functions 
      bool hasCapacityReservationItem() const { return this->capacityReservationItem_ != nullptr;};
      void deleteCapacityReservationItem() { this->capacityReservationItem_ = nullptr;};
      inline const vector<CapacityReservationSet::CapacityReservationItem> & getCapacityReservationItem() const { DARABONBA_PTR_GET_CONST(capacityReservationItem_, vector<CapacityReservationSet::CapacityReservationItem>) };
      inline vector<CapacityReservationSet::CapacityReservationItem> getCapacityReservationItem() { DARABONBA_PTR_GET(capacityReservationItem_, vector<CapacityReservationSet::CapacityReservationItem>) };
      inline CapacityReservationSet& setCapacityReservationItem(const vector<CapacityReservationSet::CapacityReservationItem> & capacityReservationItem) { DARABONBA_PTR_SET_VALUE(capacityReservationItem_, capacityReservationItem) };
      inline CapacityReservationSet& setCapacityReservationItem(vector<CapacityReservationSet::CapacityReservationItem> && capacityReservationItem) { DARABONBA_PTR_SET_RVALUE(capacityReservationItem_, capacityReservationItem) };


    protected:
      shared_ptr<vector<CapacityReservationSet::CapacityReservationItem>> capacityReservationItem_ {};
    };

    virtual bool empty() const override { return this->capacityReservationSet_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // capacityReservationSet Field Functions 
    bool hasCapacityReservationSet() const { return this->capacityReservationSet_ != nullptr;};
    void deleteCapacityReservationSet() { this->capacityReservationSet_ = nullptr;};
    inline const DescribeCapacityReservationsResponseBody::CapacityReservationSet & getCapacityReservationSet() const { DARABONBA_PTR_GET_CONST(capacityReservationSet_, DescribeCapacityReservationsResponseBody::CapacityReservationSet) };
    inline DescribeCapacityReservationsResponseBody::CapacityReservationSet getCapacityReservationSet() { DARABONBA_PTR_GET(capacityReservationSet_, DescribeCapacityReservationsResponseBody::CapacityReservationSet) };
    inline DescribeCapacityReservationsResponseBody& setCapacityReservationSet(const DescribeCapacityReservationsResponseBody::CapacityReservationSet & capacityReservationSet) { DARABONBA_PTR_SET_VALUE(capacityReservationSet_, capacityReservationSet) };
    inline DescribeCapacityReservationsResponseBody& setCapacityReservationSet(DescribeCapacityReservationsResponseBody::CapacityReservationSet && capacityReservationSet) { DARABONBA_PTR_SET_RVALUE(capacityReservationSet_, capacityReservationSet) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCapacityReservationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCapacityReservationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCapacityReservationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCapacityReservationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the capacity reservations.
    shared_ptr<DescribeCapacityReservationsResponseBody::CapacityReservationSet> capacityReservationSet_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
