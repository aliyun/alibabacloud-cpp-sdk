// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusters, dedicatedBlockStorageClusters_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusters, dedicatedBlockStorageClusters_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDedicatedBlockStorageClustersResponseBody() = default ;
    DescribeDedicatedBlockStorageClustersResponseBody(const DescribeDedicatedBlockStorageClustersResponseBody &) = default ;
    DescribeDedicatedBlockStorageClustersResponseBody(DescribeDedicatedBlockStorageClustersResponseBody &&) = default ;
    DescribeDedicatedBlockStorageClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClustersResponseBody() = default ;
    DescribeDedicatedBlockStorageClustersResponseBody& operator=(const DescribeDedicatedBlockStorageClustersResponseBody &) = default ;
    DescribeDedicatedBlockStorageClustersResponseBody& operator=(DescribeDedicatedBlockStorageClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedBlockStorageClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedBlockStorageClusters& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterCapacity, dedicatedBlockStorageClusterCapacity_);
        DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterId, dedicatedBlockStorageClusterId_);
        DARABONBA_PTR_TO_JSON(DedicatedBlockStorageClusterName, dedicatedBlockStorageClusterName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableThinProvision, enableThinProvision_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SizeOverSoldRatio, sizeOverSoldRatio_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageDomain, storageDomain_);
        DARABONBA_PTR_TO_JSON(SupportedCategory, supportedCategory_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedBlockStorageClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterCapacity, dedicatedBlockStorageClusterCapacity_);
        DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterId, dedicatedBlockStorageClusterId_);
        DARABONBA_PTR_FROM_JSON(DedicatedBlockStorageClusterName, dedicatedBlockStorageClusterName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableThinProvision, enableThinProvision_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SizeOverSoldRatio, sizeOverSoldRatio_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageDomain, storageDomain_);
        DARABONBA_PTR_FROM_JSON(SupportedCategory, supportedCategory_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DedicatedBlockStorageClusters() = default ;
      DedicatedBlockStorageClusters(const DedicatedBlockStorageClusters &) = default ;
      DedicatedBlockStorageClusters(DedicatedBlockStorageClusters &&) = default ;
      DedicatedBlockStorageClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedBlockStorageClusters() = default ;
      DedicatedBlockStorageClusters& operator=(const DedicatedBlockStorageClusters &) = default ;
      DedicatedBlockStorageClusters& operator=(DedicatedBlockStorageClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key of the dedicated block storage cluster.
        shared_ptr<string> tagKey_ {};
        // The tag value of the dedicated block storage cluster.
        shared_ptr<string> tagValue_ {};
      };

      class DedicatedBlockStorageClusterCapacity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedBlockStorageClusterCapacity& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableCapacity, availableCapacity_);
          DARABONBA_PTR_TO_JSON(AvailableDeviceCapacity, availableDeviceCapacity_);
          DARABONBA_PTR_TO_JSON(AvailableSpaceCapacity, availableSpaceCapacity_);
          DARABONBA_PTR_TO_JSON(ClusterAvailableCapacity, clusterAvailableCapacity_);
          DARABONBA_PTR_TO_JSON(ClusterDeliveryCapacity, clusterDeliveryCapacity_);
          DARABONBA_PTR_TO_JSON(DeliveryCapacity, deliveryCapacity_);
          DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
          DARABONBA_PTR_TO_JSON(TotalDeviceCapacity, totalDeviceCapacity_);
          DARABONBA_PTR_TO_JSON(TotalSpaceCapacity, totalSpaceCapacity_);
          DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
          DARABONBA_PTR_TO_JSON(UsedDeviceCapacity, usedDeviceCapacity_);
          DARABONBA_PTR_TO_JSON(UsedSpaceCapacity, usedSpaceCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedBlockStorageClusterCapacity& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableCapacity, availableCapacity_);
          DARABONBA_PTR_FROM_JSON(AvailableDeviceCapacity, availableDeviceCapacity_);
          DARABONBA_PTR_FROM_JSON(AvailableSpaceCapacity, availableSpaceCapacity_);
          DARABONBA_PTR_FROM_JSON(ClusterAvailableCapacity, clusterAvailableCapacity_);
          DARABONBA_PTR_FROM_JSON(ClusterDeliveryCapacity, clusterDeliveryCapacity_);
          DARABONBA_PTR_FROM_JSON(DeliveryCapacity, deliveryCapacity_);
          DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
          DARABONBA_PTR_FROM_JSON(TotalDeviceCapacity, totalDeviceCapacity_);
          DARABONBA_PTR_FROM_JSON(TotalSpaceCapacity, totalSpaceCapacity_);
          DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
          DARABONBA_PTR_FROM_JSON(UsedDeviceCapacity, usedDeviceCapacity_);
          DARABONBA_PTR_FROM_JSON(UsedSpaceCapacity, usedSpaceCapacity_);
        };
        DedicatedBlockStorageClusterCapacity() = default ;
        DedicatedBlockStorageClusterCapacity(const DedicatedBlockStorageClusterCapacity &) = default ;
        DedicatedBlockStorageClusterCapacity(DedicatedBlockStorageClusterCapacity &&) = default ;
        DedicatedBlockStorageClusterCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedBlockStorageClusterCapacity() = default ;
        DedicatedBlockStorageClusterCapacity& operator=(const DedicatedBlockStorageClusterCapacity &) = default ;
        DedicatedBlockStorageClusterCapacity& operator=(DedicatedBlockStorageClusterCapacity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableCapacity_ == nullptr
        && this->availableDeviceCapacity_ == nullptr && this->availableSpaceCapacity_ == nullptr && this->clusterAvailableCapacity_ == nullptr && this->clusterDeliveryCapacity_ == nullptr && this->deliveryCapacity_ == nullptr
        && this->totalCapacity_ == nullptr && this->totalDeviceCapacity_ == nullptr && this->totalSpaceCapacity_ == nullptr && this->usedCapacity_ == nullptr && this->usedDeviceCapacity_ == nullptr
        && this->usedSpaceCapacity_ == nullptr; };
        // availableCapacity Field Functions 
        bool hasAvailableCapacity() const { return this->availableCapacity_ != nullptr;};
        void deleteAvailableCapacity() { this->availableCapacity_ = nullptr;};
        inline int64_t getAvailableCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setAvailableCapacity(int64_t availableCapacity) { DARABONBA_PTR_SET_VALUE(availableCapacity_, availableCapacity) };


        // availableDeviceCapacity Field Functions 
        bool hasAvailableDeviceCapacity() const { return this->availableDeviceCapacity_ != nullptr;};
        void deleteAvailableDeviceCapacity() { this->availableDeviceCapacity_ = nullptr;};
        inline int64_t getAvailableDeviceCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableDeviceCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setAvailableDeviceCapacity(int64_t availableDeviceCapacity) { DARABONBA_PTR_SET_VALUE(availableDeviceCapacity_, availableDeviceCapacity) };


        // availableSpaceCapacity Field Functions 
        bool hasAvailableSpaceCapacity() const { return this->availableSpaceCapacity_ != nullptr;};
        void deleteAvailableSpaceCapacity() { this->availableSpaceCapacity_ = nullptr;};
        inline double getAvailableSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableSpaceCapacity_, 0.0) };
        inline DedicatedBlockStorageClusterCapacity& setAvailableSpaceCapacity(double availableSpaceCapacity) { DARABONBA_PTR_SET_VALUE(availableSpaceCapacity_, availableSpaceCapacity) };


        // clusterAvailableCapacity Field Functions 
        bool hasClusterAvailableCapacity() const { return this->clusterAvailableCapacity_ != nullptr;};
        void deleteClusterAvailableCapacity() { this->clusterAvailableCapacity_ = nullptr;};
        inline int64_t getClusterAvailableCapacity() const { DARABONBA_PTR_GET_DEFAULT(clusterAvailableCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setClusterAvailableCapacity(int64_t clusterAvailableCapacity) { DARABONBA_PTR_SET_VALUE(clusterAvailableCapacity_, clusterAvailableCapacity) };


        // clusterDeliveryCapacity Field Functions 
        bool hasClusterDeliveryCapacity() const { return this->clusterDeliveryCapacity_ != nullptr;};
        void deleteClusterDeliveryCapacity() { this->clusterDeliveryCapacity_ = nullptr;};
        inline int64_t getClusterDeliveryCapacity() const { DARABONBA_PTR_GET_DEFAULT(clusterDeliveryCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setClusterDeliveryCapacity(int64_t clusterDeliveryCapacity) { DARABONBA_PTR_SET_VALUE(clusterDeliveryCapacity_, clusterDeliveryCapacity) };


        // deliveryCapacity Field Functions 
        bool hasDeliveryCapacity() const { return this->deliveryCapacity_ != nullptr;};
        void deleteDeliveryCapacity() { this->deliveryCapacity_ = nullptr;};
        inline int64_t getDeliveryCapacity() const { DARABONBA_PTR_GET_DEFAULT(deliveryCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setDeliveryCapacity(int64_t deliveryCapacity) { DARABONBA_PTR_SET_VALUE(deliveryCapacity_, deliveryCapacity) };


        // totalCapacity Field Functions 
        bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
        void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
        inline int64_t getTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


        // totalDeviceCapacity Field Functions 
        bool hasTotalDeviceCapacity() const { return this->totalDeviceCapacity_ != nullptr;};
        void deleteTotalDeviceCapacity() { this->totalDeviceCapacity_ = nullptr;};
        inline int64_t getTotalDeviceCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalDeviceCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setTotalDeviceCapacity(int64_t totalDeviceCapacity) { DARABONBA_PTR_SET_VALUE(totalDeviceCapacity_, totalDeviceCapacity) };


        // totalSpaceCapacity Field Functions 
        bool hasTotalSpaceCapacity() const { return this->totalSpaceCapacity_ != nullptr;};
        void deleteTotalSpaceCapacity() { this->totalSpaceCapacity_ = nullptr;};
        inline int64_t getTotalSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalSpaceCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setTotalSpaceCapacity(int64_t totalSpaceCapacity) { DARABONBA_PTR_SET_VALUE(totalSpaceCapacity_, totalSpaceCapacity) };


        // usedCapacity Field Functions 
        bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
        void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
        inline int64_t getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


        // usedDeviceCapacity Field Functions 
        bool hasUsedDeviceCapacity() const { return this->usedDeviceCapacity_ != nullptr;};
        void deleteUsedDeviceCapacity() { this->usedDeviceCapacity_ = nullptr;};
        inline int64_t getUsedDeviceCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedDeviceCapacity_, 0L) };
        inline DedicatedBlockStorageClusterCapacity& setUsedDeviceCapacity(int64_t usedDeviceCapacity) { DARABONBA_PTR_SET_VALUE(usedDeviceCapacity_, usedDeviceCapacity) };


        // usedSpaceCapacity Field Functions 
        bool hasUsedSpaceCapacity() const { return this->usedSpaceCapacity_ != nullptr;};
        void deleteUsedSpaceCapacity() { this->usedSpaceCapacity_ = nullptr;};
        inline double getUsedSpaceCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedSpaceCapacity_, 0.0) };
        inline DedicatedBlockStorageClusterCapacity& setUsedSpaceCapacity(double usedSpaceCapacity) { DARABONBA_PTR_SET_VALUE(usedSpaceCapacity_, usedSpaceCapacity) };


      protected:
        // The available capacity of the dedicated block storage cluster. Unit: GiB.
        shared_ptr<int64_t> availableCapacity_ {};
        // The total capacity of the dedicated block storage cluster that was delivered in disk creation orders. Unit: GB.
        shared_ptr<int64_t> availableDeviceCapacity_ {};
        // This parameter is displayed only if Thin Provision is enabled.
        shared_ptr<double> availableSpaceCapacity_ {};
        // The capacity of the dedicated block storage cluster that was delivered in orders. Unit: GB.
        shared_ptr<int64_t> clusterAvailableCapacity_ {};
        // The capacity of the dedicated block storage cluster that is to be delivered in orders. Unit: GB.
        shared_ptr<int64_t> clusterDeliveryCapacity_ {};
        // The capacity to be delivered for the dedicated block storage cluster. Unit: GiB.
        shared_ptr<int64_t> deliveryCapacity_ {};
        // The total capacity of the dedicated block storage cluster. Unit: GiB.
        shared_ptr<int64_t> totalCapacity_ {};
        // The total capacity of the dedicated block storage cluster that is to be delivered in disk creation orders. Unit: GB.
        shared_ptr<int64_t> totalDeviceCapacity_ {};
        // This parameter is displayed only if Thin Provision is enabled.
        shared_ptr<int64_t> totalSpaceCapacity_ {};
        // The used capacity of the dedicated block storage cluster. Unit: GiB.
        shared_ptr<int64_t> usedCapacity_ {};
        // The capacity of the dedicated block storage cluster that was used to create disks. Unit: GB.
        shared_ptr<int64_t> usedDeviceCapacity_ {};
        // This parameter is displayed only if Thin Provision is enabled.
        shared_ptr<double> usedSpaceCapacity_ {};
      };

      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->category_ == nullptr && this->createTime_ == nullptr && this->dedicatedBlockStorageClusterCapacity_ == nullptr && this->dedicatedBlockStorageClusterId_ == nullptr && this->dedicatedBlockStorageClusterName_ == nullptr
        && this->description_ == nullptr && this->enableThinProvision_ == nullptr && this->expiredTime_ == nullptr && this->performanceLevel_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sizeOverSoldRatio_ == nullptr && this->status_ == nullptr && this->storageDomain_ == nullptr && this->supportedCategory_ == nullptr
        && this->tags_ == nullptr && this->type_ == nullptr && this->zoneId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
      inline DedicatedBlockStorageClusters& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DedicatedBlockStorageClusters& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DedicatedBlockStorageClusters& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dedicatedBlockStorageClusterCapacity Field Functions 
      bool hasDedicatedBlockStorageClusterCapacity() const { return this->dedicatedBlockStorageClusterCapacity_ != nullptr;};
      void deleteDedicatedBlockStorageClusterCapacity() { this->dedicatedBlockStorageClusterCapacity_ = nullptr;};
      inline const DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity & getDedicatedBlockStorageClusterCapacity() const { DARABONBA_PTR_GET_CONST(dedicatedBlockStorageClusterCapacity_, DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity) };
      inline DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity getDedicatedBlockStorageClusterCapacity() { DARABONBA_PTR_GET(dedicatedBlockStorageClusterCapacity_, DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity) };
      inline DedicatedBlockStorageClusters& setDedicatedBlockStorageClusterCapacity(const DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity & dedicatedBlockStorageClusterCapacity) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterCapacity_, dedicatedBlockStorageClusterCapacity) };
      inline DedicatedBlockStorageClusters& setDedicatedBlockStorageClusterCapacity(DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity && dedicatedBlockStorageClusterCapacity) { DARABONBA_PTR_SET_RVALUE(dedicatedBlockStorageClusterCapacity_, dedicatedBlockStorageClusterCapacity) };


      // dedicatedBlockStorageClusterId Field Functions 
      bool hasDedicatedBlockStorageClusterId() const { return this->dedicatedBlockStorageClusterId_ != nullptr;};
      void deleteDedicatedBlockStorageClusterId() { this->dedicatedBlockStorageClusterId_ = nullptr;};
      inline string getDedicatedBlockStorageClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedBlockStorageClusterId_, "") };
      inline DedicatedBlockStorageClusters& setDedicatedBlockStorageClusterId(string dedicatedBlockStorageClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterId_, dedicatedBlockStorageClusterId) };


      // dedicatedBlockStorageClusterName Field Functions 
      bool hasDedicatedBlockStorageClusterName() const { return this->dedicatedBlockStorageClusterName_ != nullptr;};
      void deleteDedicatedBlockStorageClusterName() { this->dedicatedBlockStorageClusterName_ = nullptr;};
      inline string getDedicatedBlockStorageClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedBlockStorageClusterName_, "") };
      inline DedicatedBlockStorageClusters& setDedicatedBlockStorageClusterName(string dedicatedBlockStorageClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusterName_, dedicatedBlockStorageClusterName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DedicatedBlockStorageClusters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableThinProvision Field Functions 
      bool hasEnableThinProvision() const { return this->enableThinProvision_ != nullptr;};
      void deleteEnableThinProvision() { this->enableThinProvision_ = nullptr;};
      inline bool getEnableThinProvision() const { DARABONBA_PTR_GET_DEFAULT(enableThinProvision_, false) };
      inline DedicatedBlockStorageClusters& setEnableThinProvision(bool enableThinProvision) { DARABONBA_PTR_SET_VALUE(enableThinProvision_, enableThinProvision) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline DedicatedBlockStorageClusters& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline DedicatedBlockStorageClusters& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DedicatedBlockStorageClusters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DedicatedBlockStorageClusters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sizeOverSoldRatio Field Functions 
      bool hasSizeOverSoldRatio() const { return this->sizeOverSoldRatio_ != nullptr;};
      void deleteSizeOverSoldRatio() { this->sizeOverSoldRatio_ = nullptr;};
      inline double getSizeOverSoldRatio() const { DARABONBA_PTR_GET_DEFAULT(sizeOverSoldRatio_, 0.0) };
      inline DedicatedBlockStorageClusters& setSizeOverSoldRatio(double sizeOverSoldRatio) { DARABONBA_PTR_SET_VALUE(sizeOverSoldRatio_, sizeOverSoldRatio) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DedicatedBlockStorageClusters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageDomain Field Functions 
      bool hasStorageDomain() const { return this->storageDomain_ != nullptr;};
      void deleteStorageDomain() { this->storageDomain_ = nullptr;};
      inline string getStorageDomain() const { DARABONBA_PTR_GET_DEFAULT(storageDomain_, "") };
      inline DedicatedBlockStorageClusters& setStorageDomain(string storageDomain) { DARABONBA_PTR_SET_VALUE(storageDomain_, storageDomain) };


      // supportedCategory Field Functions 
      bool hasSupportedCategory() const { return this->supportedCategory_ != nullptr;};
      void deleteSupportedCategory() { this->supportedCategory_ = nullptr;};
      inline string getSupportedCategory() const { DARABONBA_PTR_GET_DEFAULT(supportedCategory_, "") };
      inline DedicatedBlockStorageClusters& setSupportedCategory(string supportedCategory) { DARABONBA_PTR_SET_VALUE(supportedCategory_, supportedCategory) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DedicatedBlockStorageClusters::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DedicatedBlockStorageClusters::Tags>) };
      inline vector<DedicatedBlockStorageClusters::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DedicatedBlockStorageClusters::Tags>) };
      inline DedicatedBlockStorageClusters& setTags(const vector<DedicatedBlockStorageClusters::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DedicatedBlockStorageClusters& setTags(vector<DedicatedBlockStorageClusters::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DedicatedBlockStorageClusters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DedicatedBlockStorageClusters& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The user ID.
      shared_ptr<string> aliUid_ {};
      // The category of disks that can be created in the dedicated block storage cluster.
      shared_ptr<string> category_ {};
      // The time when the dedicated block storage cluster was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> createTime_ {};
      // Details about the storage capacity of the dedicated block storage cluster.
      shared_ptr<DedicatedBlockStorageClusters::DedicatedBlockStorageClusterCapacity> dedicatedBlockStorageClusterCapacity_ {};
      // The ID of the dedicated block storage cluster.
      shared_ptr<string> dedicatedBlockStorageClusterId_ {};
      // The name of the dedicated block storage cluster.
      shared_ptr<string> dedicatedBlockStorageClusterName_ {};
      // The description of the dedicated block storage cluster.
      shared_ptr<string> description_ {};
      // Indicates whether Thin Provision is enabled.
      shared_ptr<bool> enableThinProvision_ {};
      // The time when the dedicated block storage cluster expires. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<string> expiredTime_ {};
      // The performance level of disks. Valid values:
      // 
      // *   PL0
      // *   PL1
      // *   PL2
      // *   PL3
      // 
      // >  This parameter is valid only when the SupportedCategory value is cloud_essd.
      shared_ptr<string> performanceLevel_ {};
      // The region ID of the dedicated block storage cluster.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the dedicated block storage cluster belongs. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to obtain the ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The capacity oversold ratio.
      shared_ptr<double> sizeOverSoldRatio_ {};
      // The state of the dedicated block storage cluster. Valid values:
      // 
      // *   Preparing
      // *   Running
      // *   Expired
      // *   Offline
      shared_ptr<string> status_ {};
      // StorageDomain
      shared_ptr<string> storageDomain_ {};
      // This parameter is not supported.
      shared_ptr<string> supportedCategory_ {};
      // The tags of the dedicated block storage cluster.
      shared_ptr<vector<DedicatedBlockStorageClusters::Tags>> tags_ {};
      // The type of the dedicated block storage cluster. Valid values:
      // 
      // *   Standard: basic dedicated block storage cluster. ESSDs at performance level 0 (PL0 ESSDs) can be created in basic dedicated block storage clusters.
      // *   Premium: performance dedicated block storage cluster. ESSDs at performance level 1 (PL1 ESSDs) can be created in performance dedicated block storage clusters.
      shared_ptr<string> type_ {};
      // The zone ID of the dedicated block storage cluster.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->dedicatedBlockStorageClusters_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dedicatedBlockStorageClusters Field Functions 
    bool hasDedicatedBlockStorageClusters() const { return this->dedicatedBlockStorageClusters_ != nullptr;};
    void deleteDedicatedBlockStorageClusters() { this->dedicatedBlockStorageClusters_ = nullptr;};
    inline const vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters> & getDedicatedBlockStorageClusters() const { DARABONBA_PTR_GET_CONST(dedicatedBlockStorageClusters_, vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters>) };
    inline vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters> getDedicatedBlockStorageClusters() { DARABONBA_PTR_GET(dedicatedBlockStorageClusters_, vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters>) };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setDedicatedBlockStorageClusters(const vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters> & dedicatedBlockStorageClusters) { DARABONBA_PTR_SET_VALUE(dedicatedBlockStorageClusters_, dedicatedBlockStorageClusters) };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setDedicatedBlockStorageClusters(vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters> && dedicatedBlockStorageClusters) { DARABONBA_PTR_SET_RVALUE(dedicatedBlockStorageClusters_, dedicatedBlockStorageClusters) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDedicatedBlockStorageClustersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the dedicated block storage clusters.
    shared_ptr<vector<DescribeDedicatedBlockStorageClustersResponseBody::DedicatedBlockStorageClusters>> dedicatedBlockStorageClusters_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
