// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODY_HPP_
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
  class DescribeDedicatedHostClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusters, dedicatedHostClusters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusters, dedicatedHostClusters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDedicatedHostClustersResponseBody() = default ;
    DescribeDedicatedHostClustersResponseBody(const DescribeDedicatedHostClustersResponseBody &) = default ;
    DescribeDedicatedHostClustersResponseBody(DescribeDedicatedHostClustersResponseBody &&) = default ;
    DescribeDedicatedHostClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersResponseBody() = default ;
    DescribeDedicatedHostClustersResponseBody& operator=(const DescribeDedicatedHostClustersResponseBody &) = default ;
    DescribeDedicatedHostClustersResponseBody& operator=(DescribeDedicatedHostClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedHostClusters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHostClusters& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostCluster, dedicatedHostCluster_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHostClusters& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostCluster, dedicatedHostCluster_);
      };
      DedicatedHostClusters() = default ;
      DedicatedHostClusters(const DedicatedHostClusters &) = default ;
      DedicatedHostClusters(DedicatedHostClusters &&) = default ;
      DedicatedHostClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHostClusters() = default ;
      DedicatedHostClusters& operator=(const DedicatedHostClusters &) = default ;
      DedicatedHostClusters& operator=(DedicatedHostClusters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedHostCluster : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedHostCluster& obj) { 
          DARABONBA_PTR_TO_JSON(DedicatedHostClusterCapacity, dedicatedHostClusterCapacity_);
          DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostClusterName, dedicatedHostClusterName_);
          DARABONBA_PTR_TO_JSON(DedicatedHostIds, dedicatedHostIds_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedHostCluster& obj) { 
          DARABONBA_PTR_FROM_JSON(DedicatedHostClusterCapacity, dedicatedHostClusterCapacity_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostClusterName, dedicatedHostClusterName_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostIds, dedicatedHostIds_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DedicatedHostCluster() = default ;
        DedicatedHostCluster(const DedicatedHostCluster &) = default ;
        DedicatedHostCluster(DedicatedHostCluster &&) = default ;
        DedicatedHostCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedHostCluster() = default ;
        DedicatedHostCluster& operator=(const DedicatedHostCluster &) = default ;
        DedicatedHostCluster& operator=(DedicatedHostCluster &&) = default ;
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

        class DedicatedHostIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DedicatedHostIds& obj) { 
            DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
          };
          friend void from_json(const Darabonba::Json& j, DedicatedHostIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
          };
          DedicatedHostIds() = default ;
          DedicatedHostIds(const DedicatedHostIds &) = default ;
          DedicatedHostIds(DedicatedHostIds &&) = default ;
          DedicatedHostIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DedicatedHostIds() = default ;
          DedicatedHostIds& operator=(const DedicatedHostIds &) = default ;
          DedicatedHostIds& operator=(DedicatedHostIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dedicatedHostId_ == nullptr; };
          // dedicatedHostId Field Functions 
          bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
          void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
          inline const vector<string> & getDedicatedHostId() const { DARABONBA_PTR_GET_CONST(dedicatedHostId_, vector<string>) };
          inline vector<string> getDedicatedHostId() { DARABONBA_PTR_GET(dedicatedHostId_, vector<string>) };
          inline DedicatedHostIds& setDedicatedHostId(const vector<string> & dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };
          inline DedicatedHostIds& setDedicatedHostId(vector<string> && dedicatedHostId) { DARABONBA_PTR_SET_RVALUE(dedicatedHostId_, dedicatedHostId) };


        protected:
          shared_ptr<vector<string>> dedicatedHostId_ {};
        };

        class DedicatedHostClusterCapacity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DedicatedHostClusterCapacity& obj) { 
            DARABONBA_PTR_TO_JSON(AvailableInstanceTypes, availableInstanceTypes_);
            DARABONBA_PTR_TO_JSON(AvailableMemory, availableMemory_);
            DARABONBA_PTR_TO_JSON(AvailableVcpus, availableVcpus_);
            DARABONBA_PTR_TO_JSON(LocalStorageCapacities, localStorageCapacities_);
            DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
            DARABONBA_PTR_TO_JSON(TotalVcpus, totalVcpus_);
          };
          friend void from_json(const Darabonba::Json& j, DedicatedHostClusterCapacity& obj) { 
            DARABONBA_PTR_FROM_JSON(AvailableInstanceTypes, availableInstanceTypes_);
            DARABONBA_PTR_FROM_JSON(AvailableMemory, availableMemory_);
            DARABONBA_PTR_FROM_JSON(AvailableVcpus, availableVcpus_);
            DARABONBA_PTR_FROM_JSON(LocalStorageCapacities, localStorageCapacities_);
            DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
            DARABONBA_PTR_FROM_JSON(TotalVcpus, totalVcpus_);
          };
          DedicatedHostClusterCapacity() = default ;
          DedicatedHostClusterCapacity(const DedicatedHostClusterCapacity &) = default ;
          DedicatedHostClusterCapacity(DedicatedHostClusterCapacity &&) = default ;
          DedicatedHostClusterCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DedicatedHostClusterCapacity() = default ;
          DedicatedHostClusterCapacity& operator=(const DedicatedHostClusterCapacity &) = default ;
          DedicatedHostClusterCapacity& operator=(DedicatedHostClusterCapacity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LocalStorageCapacities : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LocalStorageCapacities& obj) { 
              DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
            };
            friend void from_json(const Darabonba::Json& j, LocalStorageCapacities& obj) { 
              DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
            };
            LocalStorageCapacities() = default ;
            LocalStorageCapacities(const LocalStorageCapacities &) = default ;
            LocalStorageCapacities(LocalStorageCapacities &&) = default ;
            LocalStorageCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LocalStorageCapacities() = default ;
            LocalStorageCapacities& operator=(const LocalStorageCapacities &) = default ;
            LocalStorageCapacities& operator=(LocalStorageCapacities &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class LocalStorageCapacity : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const LocalStorageCapacity& obj) { 
                DARABONBA_PTR_TO_JSON(AvailableDisk, availableDisk_);
                DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
                DARABONBA_PTR_TO_JSON(TotalDisk, totalDisk_);
              };
              friend void from_json(const Darabonba::Json& j, LocalStorageCapacity& obj) { 
                DARABONBA_PTR_FROM_JSON(AvailableDisk, availableDisk_);
                DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
                DARABONBA_PTR_FROM_JSON(TotalDisk, totalDisk_);
              };
              LocalStorageCapacity() = default ;
              LocalStorageCapacity(const LocalStorageCapacity &) = default ;
              LocalStorageCapacity(LocalStorageCapacity &&) = default ;
              LocalStorageCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~LocalStorageCapacity() = default ;
              LocalStorageCapacity& operator=(const LocalStorageCapacity &) = default ;
              LocalStorageCapacity& operator=(LocalStorageCapacity &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->availableDisk_ == nullptr
        && this->dataDiskCategory_ == nullptr && this->totalDisk_ == nullptr; };
              // availableDisk Field Functions 
              bool hasAvailableDisk() const { return this->availableDisk_ != nullptr;};
              void deleteAvailableDisk() { this->availableDisk_ = nullptr;};
              inline int32_t getAvailableDisk() const { DARABONBA_PTR_GET_DEFAULT(availableDisk_, 0) };
              inline LocalStorageCapacity& setAvailableDisk(int32_t availableDisk) { DARABONBA_PTR_SET_VALUE(availableDisk_, availableDisk) };


              // dataDiskCategory Field Functions 
              bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
              void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
              inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
              inline LocalStorageCapacity& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


              // totalDisk Field Functions 
              bool hasTotalDisk() const { return this->totalDisk_ != nullptr;};
              void deleteTotalDisk() { this->totalDisk_ = nullptr;};
              inline int32_t getTotalDisk() const { DARABONBA_PTR_GET_DEFAULT(totalDisk_, 0) };
              inline LocalStorageCapacity& setTotalDisk(int32_t totalDisk) { DARABONBA_PTR_SET_VALUE(totalDisk_, totalDisk) };


            protected:
              // The available capacity of the local disk. Unit: GiB
              shared_ptr<int32_t> availableDisk_ {};
              // The category of data disks. Valid values:
              // 
              // *   cloud: basic disk
              // *   cloud_efficiency: ultra disk
              // *   cloud_ssd: standard SSD
              // *   ephemeral_ssd: local SSD
              // *   cloud_essd: Enterprise SSD (ESSD)
              shared_ptr<string> dataDiskCategory_ {};
              // The total capacity of the local disk. Unit: GiB
              shared_ptr<int32_t> totalDisk_ {};
            };

            virtual bool empty() const override { return this->localStorageCapacity_ == nullptr; };
            // localStorageCapacity Field Functions 
            bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
            void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
            inline const vector<LocalStorageCapacities::LocalStorageCapacity> & getLocalStorageCapacity() const { DARABONBA_PTR_GET_CONST(localStorageCapacity_, vector<LocalStorageCapacities::LocalStorageCapacity>) };
            inline vector<LocalStorageCapacities::LocalStorageCapacity> getLocalStorageCapacity() { DARABONBA_PTR_GET(localStorageCapacity_, vector<LocalStorageCapacities::LocalStorageCapacity>) };
            inline LocalStorageCapacities& setLocalStorageCapacity(const vector<LocalStorageCapacities::LocalStorageCapacity> & localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };
            inline LocalStorageCapacities& setLocalStorageCapacity(vector<LocalStorageCapacities::LocalStorageCapacity> && localStorageCapacity) { DARABONBA_PTR_SET_RVALUE(localStorageCapacity_, localStorageCapacity) };


          protected:
            shared_ptr<vector<LocalStorageCapacities::LocalStorageCapacity>> localStorageCapacity_ {};
          };

          class AvailableInstanceTypes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AvailableInstanceTypes& obj) { 
              DARABONBA_PTR_TO_JSON(AvailableInstanceType, availableInstanceType_);
            };
            friend void from_json(const Darabonba::Json& j, AvailableInstanceTypes& obj) { 
              DARABONBA_PTR_FROM_JSON(AvailableInstanceType, availableInstanceType_);
            };
            AvailableInstanceTypes() = default ;
            AvailableInstanceTypes(const AvailableInstanceTypes &) = default ;
            AvailableInstanceTypes(AvailableInstanceTypes &&) = default ;
            AvailableInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AvailableInstanceTypes() = default ;
            AvailableInstanceTypes& operator=(const AvailableInstanceTypes &) = default ;
            AvailableInstanceTypes& operator=(AvailableInstanceTypes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AvailableInstanceType : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AvailableInstanceType& obj) { 
                DARABONBA_PTR_TO_JSON(AvailableInstanceCapacity, availableInstanceCapacity_);
                DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              };
              friend void from_json(const Darabonba::Json& j, AvailableInstanceType& obj) { 
                DARABONBA_PTR_FROM_JSON(AvailableInstanceCapacity, availableInstanceCapacity_);
                DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              };
              AvailableInstanceType() = default ;
              AvailableInstanceType(const AvailableInstanceType &) = default ;
              AvailableInstanceType(AvailableInstanceType &&) = default ;
              AvailableInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AvailableInstanceType() = default ;
              AvailableInstanceType& operator=(const AvailableInstanceType &) = default ;
              AvailableInstanceType& operator=(AvailableInstanceType &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->availableInstanceCapacity_ == nullptr
        && this->instanceType_ == nullptr; };
              // availableInstanceCapacity Field Functions 
              bool hasAvailableInstanceCapacity() const { return this->availableInstanceCapacity_ != nullptr;};
              void deleteAvailableInstanceCapacity() { this->availableInstanceCapacity_ = nullptr;};
              inline int32_t getAvailableInstanceCapacity() const { DARABONBA_PTR_GET_DEFAULT(availableInstanceCapacity_, 0) };
              inline AvailableInstanceType& setAvailableInstanceCapacity(int32_t availableInstanceCapacity) { DARABONBA_PTR_SET_VALUE(availableInstanceCapacity_, availableInstanceCapacity) };


              // instanceType Field Functions 
              bool hasInstanceType() const { return this->instanceType_ != nullptr;};
              void deleteInstanceType() { this->instanceType_ = nullptr;};
              inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
              inline AvailableInstanceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            protected:
              // The available capacity of the ECS instance type.
              shared_ptr<int32_t> availableInstanceCapacity_ {};
              // The ECS instance type.
              shared_ptr<string> instanceType_ {};
            };

            virtual bool empty() const override { return this->availableInstanceType_ == nullptr; };
            // availableInstanceType Field Functions 
            bool hasAvailableInstanceType() const { return this->availableInstanceType_ != nullptr;};
            void deleteAvailableInstanceType() { this->availableInstanceType_ = nullptr;};
            inline const vector<AvailableInstanceTypes::AvailableInstanceType> & getAvailableInstanceType() const { DARABONBA_PTR_GET_CONST(availableInstanceType_, vector<AvailableInstanceTypes::AvailableInstanceType>) };
            inline vector<AvailableInstanceTypes::AvailableInstanceType> getAvailableInstanceType() { DARABONBA_PTR_GET(availableInstanceType_, vector<AvailableInstanceTypes::AvailableInstanceType>) };
            inline AvailableInstanceTypes& setAvailableInstanceType(const vector<AvailableInstanceTypes::AvailableInstanceType> & availableInstanceType) { DARABONBA_PTR_SET_VALUE(availableInstanceType_, availableInstanceType) };
            inline AvailableInstanceTypes& setAvailableInstanceType(vector<AvailableInstanceTypes::AvailableInstanceType> && availableInstanceType) { DARABONBA_PTR_SET_RVALUE(availableInstanceType_, availableInstanceType) };


          protected:
            shared_ptr<vector<AvailableInstanceTypes::AvailableInstanceType>> availableInstanceType_ {};
          };

          virtual bool empty() const override { return this->availableInstanceTypes_ == nullptr
        && this->availableMemory_ == nullptr && this->availableVcpus_ == nullptr && this->localStorageCapacities_ == nullptr && this->totalMemory_ == nullptr && this->totalVcpus_ == nullptr; };
          // availableInstanceTypes Field Functions 
          bool hasAvailableInstanceTypes() const { return this->availableInstanceTypes_ != nullptr;};
          void deleteAvailableInstanceTypes() { this->availableInstanceTypes_ = nullptr;};
          inline const DedicatedHostClusterCapacity::AvailableInstanceTypes & getAvailableInstanceTypes() const { DARABONBA_PTR_GET_CONST(availableInstanceTypes_, DedicatedHostClusterCapacity::AvailableInstanceTypes) };
          inline DedicatedHostClusterCapacity::AvailableInstanceTypes getAvailableInstanceTypes() { DARABONBA_PTR_GET(availableInstanceTypes_, DedicatedHostClusterCapacity::AvailableInstanceTypes) };
          inline DedicatedHostClusterCapacity& setAvailableInstanceTypes(const DedicatedHostClusterCapacity::AvailableInstanceTypes & availableInstanceTypes) { DARABONBA_PTR_SET_VALUE(availableInstanceTypes_, availableInstanceTypes) };
          inline DedicatedHostClusterCapacity& setAvailableInstanceTypes(DedicatedHostClusterCapacity::AvailableInstanceTypes && availableInstanceTypes) { DARABONBA_PTR_SET_RVALUE(availableInstanceTypes_, availableInstanceTypes) };


          // availableMemory Field Functions 
          bool hasAvailableMemory() const { return this->availableMemory_ != nullptr;};
          void deleteAvailableMemory() { this->availableMemory_ = nullptr;};
          inline int32_t getAvailableMemory() const { DARABONBA_PTR_GET_DEFAULT(availableMemory_, 0) };
          inline DedicatedHostClusterCapacity& setAvailableMemory(int32_t availableMemory) { DARABONBA_PTR_SET_VALUE(availableMemory_, availableMemory) };


          // availableVcpus Field Functions 
          bool hasAvailableVcpus() const { return this->availableVcpus_ != nullptr;};
          void deleteAvailableVcpus() { this->availableVcpus_ = nullptr;};
          inline int32_t getAvailableVcpus() const { DARABONBA_PTR_GET_DEFAULT(availableVcpus_, 0) };
          inline DedicatedHostClusterCapacity& setAvailableVcpus(int32_t availableVcpus) { DARABONBA_PTR_SET_VALUE(availableVcpus_, availableVcpus) };


          // localStorageCapacities Field Functions 
          bool hasLocalStorageCapacities() const { return this->localStorageCapacities_ != nullptr;};
          void deleteLocalStorageCapacities() { this->localStorageCapacities_ = nullptr;};
          inline const DedicatedHostClusterCapacity::LocalStorageCapacities & getLocalStorageCapacities() const { DARABONBA_PTR_GET_CONST(localStorageCapacities_, DedicatedHostClusterCapacity::LocalStorageCapacities) };
          inline DedicatedHostClusterCapacity::LocalStorageCapacities getLocalStorageCapacities() { DARABONBA_PTR_GET(localStorageCapacities_, DedicatedHostClusterCapacity::LocalStorageCapacities) };
          inline DedicatedHostClusterCapacity& setLocalStorageCapacities(const DedicatedHostClusterCapacity::LocalStorageCapacities & localStorageCapacities) { DARABONBA_PTR_SET_VALUE(localStorageCapacities_, localStorageCapacities) };
          inline DedicatedHostClusterCapacity& setLocalStorageCapacities(DedicatedHostClusterCapacity::LocalStorageCapacities && localStorageCapacities) { DARABONBA_PTR_SET_RVALUE(localStorageCapacities_, localStorageCapacities) };


          // totalMemory Field Functions 
          bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
          void deleteTotalMemory() { this->totalMemory_ = nullptr;};
          inline int32_t getTotalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0) };
          inline DedicatedHostClusterCapacity& setTotalMemory(int32_t totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


          // totalVcpus Field Functions 
          bool hasTotalVcpus() const { return this->totalVcpus_ != nullptr;};
          void deleteTotalVcpus() { this->totalVcpus_ = nullptr;};
          inline int32_t getTotalVcpus() const { DARABONBA_PTR_GET_DEFAULT(totalVcpus_, 0) };
          inline DedicatedHostClusterCapacity& setTotalVcpus(int32_t totalVcpus) { DARABONBA_PTR_SET_VALUE(totalVcpus_, totalVcpus) };


        protected:
          // The available capacity of ECS instances in the host group.
          shared_ptr<DedicatedHostClusterCapacity::AvailableInstanceTypes> availableInstanceTypes_ {};
          // The size of available memory. Unit: GiB
          shared_ptr<int32_t> availableMemory_ {};
          // The number of available vCPUs.
          shared_ptr<int32_t> availableVcpus_ {};
          // The local storage capacity.
          shared_ptr<DedicatedHostClusterCapacity::LocalStorageCapacities> localStorageCapacities_ {};
          // The total memory size. Unit: GiB
          shared_ptr<int32_t> totalMemory_ {};
          // The total number of vCPUs.
          shared_ptr<int32_t> totalVcpus_ {};
        };

        virtual bool empty() const override { return this->dedicatedHostClusterCapacity_ == nullptr
        && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostClusterName_ == nullptr && this->dedicatedHostIds_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->zoneId_ == nullptr; };
        // dedicatedHostClusterCapacity Field Functions 
        bool hasDedicatedHostClusterCapacity() const { return this->dedicatedHostClusterCapacity_ != nullptr;};
        void deleteDedicatedHostClusterCapacity() { this->dedicatedHostClusterCapacity_ = nullptr;};
        inline const DedicatedHostCluster::DedicatedHostClusterCapacity & getDedicatedHostClusterCapacity() const { DARABONBA_PTR_GET_CONST(dedicatedHostClusterCapacity_, DedicatedHostCluster::DedicatedHostClusterCapacity) };
        inline DedicatedHostCluster::DedicatedHostClusterCapacity getDedicatedHostClusterCapacity() { DARABONBA_PTR_GET(dedicatedHostClusterCapacity_, DedicatedHostCluster::DedicatedHostClusterCapacity) };
        inline DedicatedHostCluster& setDedicatedHostClusterCapacity(const DedicatedHostCluster::DedicatedHostClusterCapacity & dedicatedHostClusterCapacity) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterCapacity_, dedicatedHostClusterCapacity) };
        inline DedicatedHostCluster& setDedicatedHostClusterCapacity(DedicatedHostCluster::DedicatedHostClusterCapacity && dedicatedHostClusterCapacity) { DARABONBA_PTR_SET_RVALUE(dedicatedHostClusterCapacity_, dedicatedHostClusterCapacity) };


        // dedicatedHostClusterId Field Functions 
        bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
        void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
        inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
        inline DedicatedHostCluster& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


        // dedicatedHostClusterName Field Functions 
        bool hasDedicatedHostClusterName() const { return this->dedicatedHostClusterName_ != nullptr;};
        void deleteDedicatedHostClusterName() { this->dedicatedHostClusterName_ = nullptr;};
        inline string getDedicatedHostClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterName_, "") };
        inline DedicatedHostCluster& setDedicatedHostClusterName(string dedicatedHostClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterName_, dedicatedHostClusterName) };


        // dedicatedHostIds Field Functions 
        bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
        void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
        inline const DedicatedHostCluster::DedicatedHostIds & getDedicatedHostIds() const { DARABONBA_PTR_GET_CONST(dedicatedHostIds_, DedicatedHostCluster::DedicatedHostIds) };
        inline DedicatedHostCluster::DedicatedHostIds getDedicatedHostIds() { DARABONBA_PTR_GET(dedicatedHostIds_, DedicatedHostCluster::DedicatedHostIds) };
        inline DedicatedHostCluster& setDedicatedHostIds(const DedicatedHostCluster::DedicatedHostIds & dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };
        inline DedicatedHostCluster& setDedicatedHostIds(DedicatedHostCluster::DedicatedHostIds && dedicatedHostIds) { DARABONBA_PTR_SET_RVALUE(dedicatedHostIds_, dedicatedHostIds) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DedicatedHostCluster& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DedicatedHostCluster& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DedicatedHostCluster& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DedicatedHostCluster::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DedicatedHostCluster::Tags) };
        inline DedicatedHostCluster::Tags getTags() { DARABONBA_PTR_GET(tags_, DedicatedHostCluster::Tags) };
        inline DedicatedHostCluster& setTags(const DedicatedHostCluster::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DedicatedHostCluster& setTags(DedicatedHostCluster::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DedicatedHostCluster& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The capacity of the host group.
        shared_ptr<DedicatedHostCluster::DedicatedHostClusterCapacity> dedicatedHostClusterCapacity_ {};
        // The ID of the host group.
        shared_ptr<string> dedicatedHostClusterId_ {};
        // The name of the host group.
        shared_ptr<string> dedicatedHostClusterName_ {};
        // The IDs of dedicated hosts in the host group.
        shared_ptr<DedicatedHostCluster::DedicatedHostIds> dedicatedHostIds_ {};
        // The description of the host group.
        shared_ptr<string> description_ {};
        // The region ID of the host group.
        shared_ptr<string> regionId_ {};
        // The resource group ID of the host group.
        shared_ptr<string> resourceGroupId_ {};
        // The tags of the host group.
        shared_ptr<DedicatedHostCluster::Tags> tags_ {};
        // The zone ID of the host group.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->dedicatedHostCluster_ == nullptr; };
      // dedicatedHostCluster Field Functions 
      bool hasDedicatedHostCluster() const { return this->dedicatedHostCluster_ != nullptr;};
      void deleteDedicatedHostCluster() { this->dedicatedHostCluster_ = nullptr;};
      inline const vector<DedicatedHostClusters::DedicatedHostCluster> & getDedicatedHostCluster() const { DARABONBA_PTR_GET_CONST(dedicatedHostCluster_, vector<DedicatedHostClusters::DedicatedHostCluster>) };
      inline vector<DedicatedHostClusters::DedicatedHostCluster> getDedicatedHostCluster() { DARABONBA_PTR_GET(dedicatedHostCluster_, vector<DedicatedHostClusters::DedicatedHostCluster>) };
      inline DedicatedHostClusters& setDedicatedHostCluster(const vector<DedicatedHostClusters::DedicatedHostCluster> & dedicatedHostCluster) { DARABONBA_PTR_SET_VALUE(dedicatedHostCluster_, dedicatedHostCluster) };
      inline DedicatedHostClusters& setDedicatedHostCluster(vector<DedicatedHostClusters::DedicatedHostCluster> && dedicatedHostCluster) { DARABONBA_PTR_SET_RVALUE(dedicatedHostCluster_, dedicatedHostCluster) };


    protected:
      shared_ptr<vector<DedicatedHostClusters::DedicatedHostCluster>> dedicatedHostCluster_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostClusters_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dedicatedHostClusters Field Functions 
    bool hasDedicatedHostClusters() const { return this->dedicatedHostClusters_ != nullptr;};
    void deleteDedicatedHostClusters() { this->dedicatedHostClusters_ = nullptr;};
    inline const DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters & getDedicatedHostClusters() const { DARABONBA_PTR_GET_CONST(dedicatedHostClusters_, DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters) };
    inline DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters getDedicatedHostClusters() { DARABONBA_PTR_GET(dedicatedHostClusters_, DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters) };
    inline DescribeDedicatedHostClustersResponseBody& setDedicatedHostClusters(const DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters & dedicatedHostClusters) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusters_, dedicatedHostClusters) };
    inline DescribeDedicatedHostClustersResponseBody& setDedicatedHostClusters(DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters && dedicatedHostClusters) { DARABONBA_PTR_SET_RVALUE(dedicatedHostClusters_, dedicatedHostClusters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedHostClustersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedHostClustersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDedicatedHostClustersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array consisting of host group information.
    shared_ptr<DescribeDedicatedHostClustersResponseBody::DedicatedHostClusters> dedicatedHostClusters_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of dedicated host clusters.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
