// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSRESPONSEBODY_HPP_
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
  class DescribeDedicatedHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHosts, dedicatedHosts_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHosts, dedicatedHosts_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDedicatedHostsResponseBody() = default ;
    DescribeDedicatedHostsResponseBody(const DescribeDedicatedHostsResponseBody &) = default ;
    DescribeDedicatedHostsResponseBody(DescribeDedicatedHostsResponseBody &&) = default ;
    DescribeDedicatedHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsResponseBody() = default ;
    DescribeDedicatedHostsResponseBody& operator=(const DescribeDedicatedHostsResponseBody &) = default ;
    DescribeDedicatedHostsResponseBody& operator=(DescribeDedicatedHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DedicatedHosts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DedicatedHosts& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHost, dedicatedHost_);
      };
      friend void from_json(const Darabonba::Json& j, DedicatedHosts& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHost, dedicatedHost_);
      };
      DedicatedHosts() = default ;
      DedicatedHosts(const DedicatedHosts &) = default ;
      DedicatedHosts(DedicatedHosts &&) = default ;
      DedicatedHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DedicatedHosts() = default ;
      DedicatedHosts& operator=(const DedicatedHosts &) = default ;
      DedicatedHosts& operator=(DedicatedHosts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DedicatedHost : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedHost& obj) { 
          DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
          DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
          DARABONBA_PTR_TO_JSON(AutoPlacement, autoPlacement_);
          DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
          DARABONBA_PTR_TO_JSON(DedicatedHostOwnerId, dedicatedHostOwnerId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_TO_JSON(HostDetailInfo, hostDetailInfo_);
          DARABONBA_PTR_TO_JSON(Instances, instances_);
          DARABONBA_PTR_TO_JSON(MachineId, machineId_);
          DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
          DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_TO_JSON(PhysicalGpus, physicalGpus_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SaleCycle, saleCycle_);
          DARABONBA_PTR_TO_JSON(Sockets, sockets_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SupportedCustomInstanceTypeFamilies, supportedCustomInstanceTypeFamilies_);
          DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
          DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedHost& obj) { 
          DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
          DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
          DARABONBA_PTR_FROM_JSON(AutoPlacement, autoPlacement_);
          DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostOwnerId, dedicatedHostOwnerId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_FROM_JSON(HostDetailInfo, hostDetailInfo_);
          DARABONBA_PTR_FROM_JSON(Instances, instances_);
          DARABONBA_PTR_FROM_JSON(MachineId, machineId_);
          DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
          DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_FROM_JSON(PhysicalGpus, physicalGpus_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SaleCycle, saleCycle_);
          DARABONBA_PTR_FROM_JSON(Sockets, sockets_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SupportedCustomInstanceTypeFamilies, supportedCustomInstanceTypeFamilies_);
          DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
          DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DedicatedHost() = default ;
        DedicatedHost(const DedicatedHost &) = default ;
        DedicatedHost(DedicatedHost &&) = default ;
        DedicatedHost(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedHost() = default ;
        DedicatedHost& operator=(const DedicatedHost &) = default ;
        DedicatedHost& operator=(DedicatedHost &&) = default ;
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
            // The tag key of the dedicated host.
            shared_ptr<string> tagKey_ {};
            // The tag value of the dedicated host.
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

        class SupportedInstanceTypesList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedInstanceTypesList& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedInstanceTypesList& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
          };
          SupportedInstanceTypesList() = default ;
          SupportedInstanceTypesList(const SupportedInstanceTypesList &) = default ;
          SupportedInstanceTypesList(SupportedInstanceTypesList &&) = default ;
          SupportedInstanceTypesList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedInstanceTypesList() = default ;
          SupportedInstanceTypesList& operator=(const SupportedInstanceTypesList &) = default ;
          SupportedInstanceTypesList& operator=(SupportedInstanceTypesList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedInstanceTypesList_ == nullptr; };
          // supportedInstanceTypesList Field Functions 
          bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
          void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
          inline const vector<string> & getSupportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, vector<string>) };
          inline vector<string> getSupportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, vector<string>) };
          inline SupportedInstanceTypesList& setSupportedInstanceTypesList(const vector<string> & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
          inline SupportedInstanceTypesList& setSupportedInstanceTypesList(vector<string> && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


        protected:
          shared_ptr<vector<string>> supportedInstanceTypesList_ {};
        };

        class SupportedInstanceTypeFamilies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedInstanceTypeFamilies& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamily, supportedInstanceTypeFamily_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedInstanceTypeFamilies& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamily, supportedInstanceTypeFamily_);
          };
          SupportedInstanceTypeFamilies() = default ;
          SupportedInstanceTypeFamilies(const SupportedInstanceTypeFamilies &) = default ;
          SupportedInstanceTypeFamilies(SupportedInstanceTypeFamilies &&) = default ;
          SupportedInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedInstanceTypeFamilies() = default ;
          SupportedInstanceTypeFamilies& operator=(const SupportedInstanceTypeFamilies &) = default ;
          SupportedInstanceTypeFamilies& operator=(SupportedInstanceTypeFamilies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedInstanceTypeFamily_ == nullptr; };
          // supportedInstanceTypeFamily Field Functions 
          bool hasSupportedInstanceTypeFamily() const { return this->supportedInstanceTypeFamily_ != nullptr;};
          void deleteSupportedInstanceTypeFamily() { this->supportedInstanceTypeFamily_ = nullptr;};
          inline const vector<string> & getSupportedInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamily_, vector<string>) };
          inline vector<string> getSupportedInstanceTypeFamily() { DARABONBA_PTR_GET(supportedInstanceTypeFamily_, vector<string>) };
          inline SupportedInstanceTypeFamilies& setSupportedInstanceTypeFamily(const vector<string> & supportedInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };
          inline SupportedInstanceTypeFamilies& setSupportedInstanceTypeFamily(vector<string> && supportedInstanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamily_, supportedInstanceTypeFamily) };


        protected:
          shared_ptr<vector<string>> supportedInstanceTypeFamily_ {};
        };

        class SupportedCustomInstanceTypeFamilies : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedCustomInstanceTypeFamilies& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedCustomInstanceTypeFamily, supportedCustomInstanceTypeFamily_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedCustomInstanceTypeFamilies& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedCustomInstanceTypeFamily, supportedCustomInstanceTypeFamily_);
          };
          SupportedCustomInstanceTypeFamilies() = default ;
          SupportedCustomInstanceTypeFamilies(const SupportedCustomInstanceTypeFamilies &) = default ;
          SupportedCustomInstanceTypeFamilies(SupportedCustomInstanceTypeFamilies &&) = default ;
          SupportedCustomInstanceTypeFamilies(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedCustomInstanceTypeFamilies() = default ;
          SupportedCustomInstanceTypeFamilies& operator=(const SupportedCustomInstanceTypeFamilies &) = default ;
          SupportedCustomInstanceTypeFamilies& operator=(SupportedCustomInstanceTypeFamilies &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedCustomInstanceTypeFamily_ == nullptr; };
          // supportedCustomInstanceTypeFamily Field Functions 
          bool hasSupportedCustomInstanceTypeFamily() const { return this->supportedCustomInstanceTypeFamily_ != nullptr;};
          void deleteSupportedCustomInstanceTypeFamily() { this->supportedCustomInstanceTypeFamily_ = nullptr;};
          inline const vector<string> & getSupportedCustomInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(supportedCustomInstanceTypeFamily_, vector<string>) };
          inline vector<string> getSupportedCustomInstanceTypeFamily() { DARABONBA_PTR_GET(supportedCustomInstanceTypeFamily_, vector<string>) };
          inline SupportedCustomInstanceTypeFamilies& setSupportedCustomInstanceTypeFamily(const vector<string> & supportedCustomInstanceTypeFamily) { DARABONBA_PTR_SET_VALUE(supportedCustomInstanceTypeFamily_, supportedCustomInstanceTypeFamily) };
          inline SupportedCustomInstanceTypeFamilies& setSupportedCustomInstanceTypeFamily(vector<string> && supportedCustomInstanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(supportedCustomInstanceTypeFamily_, supportedCustomInstanceTypeFamily) };


        protected:
          shared_ptr<vector<string>> supportedCustomInstanceTypeFamily_ {};
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
            // The reason why the dedicated host was locked. Valid values:
            // 
            // *   financial: The dedicated host was locked due to overdue payments.
            // *   security: The dedicated host was locked due to security reasons.
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

        class NetworkAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(SlbUdpTimeout, slbUdpTimeout_);
            DARABONBA_PTR_TO_JSON(UdpTimeout, udpTimeout_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(SlbUdpTimeout, slbUdpTimeout_);
            DARABONBA_PTR_FROM_JSON(UdpTimeout, udpTimeout_);
          };
          NetworkAttributes() = default ;
          NetworkAttributes(const NetworkAttributes &) = default ;
          NetworkAttributes(NetworkAttributes &&) = default ;
          NetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkAttributes() = default ;
          NetworkAttributes& operator=(const NetworkAttributes &) = default ;
          NetworkAttributes& operator=(NetworkAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->slbUdpTimeout_ == nullptr
        && this->udpTimeout_ == nullptr; };
          // slbUdpTimeout Field Functions 
          bool hasSlbUdpTimeout() const { return this->slbUdpTimeout_ != nullptr;};
          void deleteSlbUdpTimeout() { this->slbUdpTimeout_ = nullptr;};
          inline int32_t getSlbUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(slbUdpTimeout_, 0) };
          inline NetworkAttributes& setSlbUdpTimeout(int32_t slbUdpTimeout) { DARABONBA_PTR_SET_VALUE(slbUdpTimeout_, slbUdpTimeout) };


          // udpTimeout Field Functions 
          bool hasUdpTimeout() const { return this->udpTimeout_ != nullptr;};
          void deleteUdpTimeout() { this->udpTimeout_ = nullptr;};
          inline int32_t getUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(udpTimeout_, 0) };
          inline NetworkAttributes& setUdpTimeout(int32_t udpTimeout) { DARABONBA_PTR_SET_VALUE(udpTimeout_, udpTimeout) };


        protected:
          // The timeout period of the UDP session that is established between Server Load Balancer (SLB) and the dedicated host. Unit: seconds. Only 60 is returned.
          shared_ptr<int32_t> slbUdpTimeout_ {};
          // The timeout period of the UDP session that is established between a user and an Alibaba Cloud service on the dedicated host. Unit: seconds. Only 60 is returned.
          shared_ptr<int32_t> udpTimeout_ {};
        };

        class Instances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instances& obj) { 
            DARABONBA_PTR_TO_JSON(Instance, instance_);
          };
          friend void from_json(const Darabonba::Json& j, Instances& obj) { 
            DARABONBA_PTR_FROM_JSON(Instance, instance_);
          };
          Instances() = default ;
          Instances(const Instances &) = default ;
          Instances(Instances &&) = default ;
          Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instances() = default ;
          Instances& operator=(const Instances &) = default ;
          Instances& operator=(Instances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Instance : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Instance& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(SocketId, socketId_);
            };
            friend void from_json(const Darabonba::Json& j, Instance& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(SocketId, socketId_);
            };
            Instance() = default ;
            Instance(const Instance &) = default ;
            Instance(Instance &&) = default ;
            Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Instance() = default ;
            Instance& operator=(const Instance &) = default ;
            Instance& operator=(Instance &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceOwnerId_ == nullptr && this->instanceType_ == nullptr && this->socketId_ == nullptr; };
            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // instanceOwnerId Field Functions 
            bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
            void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
            inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
            inline Instance& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // socketId Field Functions 
            bool hasSocketId() const { return this->socketId_ != nullptr;};
            void deleteSocketId() { this->socketId_ = nullptr;};
            inline string getSocketId() const { DARABONBA_PTR_GET_DEFAULT(socketId_, "") };
            inline Instance& setSocketId(string socketId) { DARABONBA_PTR_SET_VALUE(socketId_, socketId) };


          protected:
            // The ID of the ECS instance.
            shared_ptr<string> instanceId_ {};
            // The ID of the ECS instance owner.
            shared_ptr<int64_t> instanceOwnerId_ {};
            // The instance type of the ECS instance that was created on the dedicated host.
            shared_ptr<string> instanceType_ {};
            // The ID of the socket to which the ECS instance belongs.
            shared_ptr<string> socketId_ {};
          };

          virtual bool empty() const override { return this->instance_ == nullptr; };
          // instance Field Functions 
          bool hasInstance() const { return this->instance_ != nullptr;};
          void deleteInstance() { this->instance_ = nullptr;};
          inline const vector<Instances::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Instances::Instance>) };
          inline vector<Instances::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Instances::Instance>) };
          inline Instances& setInstance(const vector<Instances::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
          inline Instances& setInstance(vector<Instances::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


        protected:
          shared_ptr<vector<Instances::Instance>> instance_ {};
        };

        class HostDetailInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HostDetailInfo& obj) { 
            DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
          };
          friend void from_json(const Darabonba::Json& j, HostDetailInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
          };
          HostDetailInfo() = default ;
          HostDetailInfo(const HostDetailInfo &) = default ;
          HostDetailInfo(HostDetailInfo &&) = default ;
          HostDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HostDetailInfo() = default ;
          HostDetailInfo& operator=(const HostDetailInfo &) = default ;
          HostDetailInfo& operator=(HostDetailInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->serialNumber_ == nullptr; };
          // serialNumber Field Functions 
          bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
          void deleteSerialNumber() { this->serialNumber_ = nullptr;};
          inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
          inline HostDetailInfo& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        protected:
          // This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
          shared_ptr<string> serialNumber_ {};
        };

        class Capacity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Capacity& obj) { 
            DARABONBA_PTR_TO_JSON(AvailableInstanceTypes, availableInstanceTypes_);
            DARABONBA_PTR_TO_JSON(AvailableLocalStorage, availableLocalStorage_);
            DARABONBA_PTR_TO_JSON(AvailableMemory, availableMemory_);
            DARABONBA_PTR_TO_JSON(AvailableVcpus, availableVcpus_);
            DARABONBA_PTR_TO_JSON(AvailableVgpus, availableVgpus_);
            DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
            DARABONBA_PTR_TO_JSON(SocketCapacities, socketCapacities_);
            DARABONBA_PTR_TO_JSON(TotalLocalStorage, totalLocalStorage_);
            DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
            DARABONBA_PTR_TO_JSON(TotalVcpus, totalVcpus_);
            DARABONBA_PTR_TO_JSON(TotalVgpus, totalVgpus_);
          };
          friend void from_json(const Darabonba::Json& j, Capacity& obj) { 
            DARABONBA_PTR_FROM_JSON(AvailableInstanceTypes, availableInstanceTypes_);
            DARABONBA_PTR_FROM_JSON(AvailableLocalStorage, availableLocalStorage_);
            DARABONBA_PTR_FROM_JSON(AvailableMemory, availableMemory_);
            DARABONBA_PTR_FROM_JSON(AvailableVcpus, availableVcpus_);
            DARABONBA_PTR_FROM_JSON(AvailableVgpus, availableVgpus_);
            DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
            DARABONBA_PTR_FROM_JSON(SocketCapacities, socketCapacities_);
            DARABONBA_PTR_FROM_JSON(TotalLocalStorage, totalLocalStorage_);
            DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
            DARABONBA_PTR_FROM_JSON(TotalVcpus, totalVcpus_);
            DARABONBA_PTR_FROM_JSON(TotalVgpus, totalVgpus_);
          };
          Capacity() = default ;
          Capacity(const Capacity &) = default ;
          Capacity(Capacity &&) = default ;
          Capacity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Capacity() = default ;
          Capacity& operator=(const Capacity &) = default ;
          Capacity& operator=(Capacity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SocketCapacities : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SocketCapacities& obj) { 
              DARABONBA_PTR_TO_JSON(SocketCapacity, socketCapacity_);
            };
            friend void from_json(const Darabonba::Json& j, SocketCapacities& obj) { 
              DARABONBA_PTR_FROM_JSON(SocketCapacity, socketCapacity_);
            };
            SocketCapacities() = default ;
            SocketCapacities(const SocketCapacities &) = default ;
            SocketCapacities(SocketCapacities &&) = default ;
            SocketCapacities(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SocketCapacities() = default ;
            SocketCapacities& operator=(const SocketCapacities &) = default ;
            SocketCapacities& operator=(SocketCapacities &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SocketCapacity : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SocketCapacity& obj) { 
                DARABONBA_PTR_TO_JSON(AvailableMemory, availableMemory_);
                DARABONBA_PTR_TO_JSON(AvailableVcpu, availableVcpu_);
                DARABONBA_PTR_TO_JSON(SocketId, socketId_);
                DARABONBA_PTR_TO_JSON(TotalMemory, totalMemory_);
                DARABONBA_PTR_TO_JSON(TotalVcpu, totalVcpu_);
              };
              friend void from_json(const Darabonba::Json& j, SocketCapacity& obj) { 
                DARABONBA_PTR_FROM_JSON(AvailableMemory, availableMemory_);
                DARABONBA_PTR_FROM_JSON(AvailableVcpu, availableVcpu_);
                DARABONBA_PTR_FROM_JSON(SocketId, socketId_);
                DARABONBA_PTR_FROM_JSON(TotalMemory, totalMemory_);
                DARABONBA_PTR_FROM_JSON(TotalVcpu, totalVcpu_);
              };
              SocketCapacity() = default ;
              SocketCapacity(const SocketCapacity &) = default ;
              SocketCapacity(SocketCapacity &&) = default ;
              SocketCapacity(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SocketCapacity() = default ;
              SocketCapacity& operator=(const SocketCapacity &) = default ;
              SocketCapacity& operator=(SocketCapacity &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->availableMemory_ == nullptr
        && this->availableVcpu_ == nullptr && this->socketId_ == nullptr && this->totalMemory_ == nullptr && this->totalVcpu_ == nullptr; };
              // availableMemory Field Functions 
              bool hasAvailableMemory() const { return this->availableMemory_ != nullptr;};
              void deleteAvailableMemory() { this->availableMemory_ = nullptr;};
              inline float getAvailableMemory() const { DARABONBA_PTR_GET_DEFAULT(availableMemory_, 0.0) };
              inline SocketCapacity& setAvailableMemory(float availableMemory) { DARABONBA_PTR_SET_VALUE(availableMemory_, availableMemory) };


              // availableVcpu Field Functions 
              bool hasAvailableVcpu() const { return this->availableVcpu_ != nullptr;};
              void deleteAvailableVcpu() { this->availableVcpu_ = nullptr;};
              inline int32_t getAvailableVcpu() const { DARABONBA_PTR_GET_DEFAULT(availableVcpu_, 0) };
              inline SocketCapacity& setAvailableVcpu(int32_t availableVcpu) { DARABONBA_PTR_SET_VALUE(availableVcpu_, availableVcpu) };


              // socketId Field Functions 
              bool hasSocketId() const { return this->socketId_ != nullptr;};
              void deleteSocketId() { this->socketId_ = nullptr;};
              inline int32_t getSocketId() const { DARABONBA_PTR_GET_DEFAULT(socketId_, 0) };
              inline SocketCapacity& setSocketId(int32_t socketId) { DARABONBA_PTR_SET_VALUE(socketId_, socketId) };


              // totalMemory Field Functions 
              bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
              void deleteTotalMemory() { this->totalMemory_ = nullptr;};
              inline float getTotalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0.0) };
              inline SocketCapacity& setTotalMemory(float totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


              // totalVcpu Field Functions 
              bool hasTotalVcpu() const { return this->totalVcpu_ != nullptr;};
              void deleteTotalVcpu() { this->totalVcpu_ = nullptr;};
              inline int32_t getTotalVcpu() const { DARABONBA_PTR_GET_DEFAULT(totalVcpu_, 0) };
              inline SocketCapacity& setTotalVcpu(int32_t totalVcpu) { DARABONBA_PTR_SET_VALUE(totalVcpu_, totalVcpu) };


            protected:
              // The amount of available memory. Unit: GiB.
              shared_ptr<float> availableMemory_ {};
              // The number of available vCPUs.
              shared_ptr<int32_t> availableVcpu_ {};
              // The socket ID.
              shared_ptr<int32_t> socketId_ {};
              // The total amount of memory. Unit: GiB.
              shared_ptr<float> totalMemory_ {};
              // The total number of vCPUs.
              shared_ptr<int32_t> totalVcpu_ {};
            };

            virtual bool empty() const override { return this->socketCapacity_ == nullptr; };
            // socketCapacity Field Functions 
            bool hasSocketCapacity() const { return this->socketCapacity_ != nullptr;};
            void deleteSocketCapacity() { this->socketCapacity_ = nullptr;};
            inline const vector<SocketCapacities::SocketCapacity> & getSocketCapacity() const { DARABONBA_PTR_GET_CONST(socketCapacity_, vector<SocketCapacities::SocketCapacity>) };
            inline vector<SocketCapacities::SocketCapacity> getSocketCapacity() { DARABONBA_PTR_GET(socketCapacity_, vector<SocketCapacities::SocketCapacity>) };
            inline SocketCapacities& setSocketCapacity(const vector<SocketCapacities::SocketCapacity> & socketCapacity) { DARABONBA_PTR_SET_VALUE(socketCapacity_, socketCapacity) };
            inline SocketCapacities& setSocketCapacity(vector<SocketCapacities::SocketCapacity> && socketCapacity) { DARABONBA_PTR_SET_RVALUE(socketCapacity_, socketCapacity) };


          protected:
            shared_ptr<vector<SocketCapacities::SocketCapacity>> socketCapacity_ {};
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
              shared_ptr<int32_t> availableInstanceCapacity_ {};
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
        && this->availableLocalStorage_ == nullptr && this->availableMemory_ == nullptr && this->availableVcpus_ == nullptr && this->availableVgpus_ == nullptr && this->localStorageCategory_ == nullptr
        && this->socketCapacities_ == nullptr && this->totalLocalStorage_ == nullptr && this->totalMemory_ == nullptr && this->totalVcpus_ == nullptr && this->totalVgpus_ == nullptr; };
          // availableInstanceTypes Field Functions 
          bool hasAvailableInstanceTypes() const { return this->availableInstanceTypes_ != nullptr;};
          void deleteAvailableInstanceTypes() { this->availableInstanceTypes_ = nullptr;};
          inline const Capacity::AvailableInstanceTypes & getAvailableInstanceTypes() const { DARABONBA_PTR_GET_CONST(availableInstanceTypes_, Capacity::AvailableInstanceTypes) };
          inline Capacity::AvailableInstanceTypes getAvailableInstanceTypes() { DARABONBA_PTR_GET(availableInstanceTypes_, Capacity::AvailableInstanceTypes) };
          inline Capacity& setAvailableInstanceTypes(const Capacity::AvailableInstanceTypes & availableInstanceTypes) { DARABONBA_PTR_SET_VALUE(availableInstanceTypes_, availableInstanceTypes) };
          inline Capacity& setAvailableInstanceTypes(Capacity::AvailableInstanceTypes && availableInstanceTypes) { DARABONBA_PTR_SET_RVALUE(availableInstanceTypes_, availableInstanceTypes) };


          // availableLocalStorage Field Functions 
          bool hasAvailableLocalStorage() const { return this->availableLocalStorage_ != nullptr;};
          void deleteAvailableLocalStorage() { this->availableLocalStorage_ = nullptr;};
          inline int32_t getAvailableLocalStorage() const { DARABONBA_PTR_GET_DEFAULT(availableLocalStorage_, 0) };
          inline Capacity& setAvailableLocalStorage(int32_t availableLocalStorage) { DARABONBA_PTR_SET_VALUE(availableLocalStorage_, availableLocalStorage) };


          // availableMemory Field Functions 
          bool hasAvailableMemory() const { return this->availableMemory_ != nullptr;};
          void deleteAvailableMemory() { this->availableMemory_ = nullptr;};
          inline float getAvailableMemory() const { DARABONBA_PTR_GET_DEFAULT(availableMemory_, 0.0) };
          inline Capacity& setAvailableMemory(float availableMemory) { DARABONBA_PTR_SET_VALUE(availableMemory_, availableMemory) };


          // availableVcpus Field Functions 
          bool hasAvailableVcpus() const { return this->availableVcpus_ != nullptr;};
          void deleteAvailableVcpus() { this->availableVcpus_ = nullptr;};
          inline int32_t getAvailableVcpus() const { DARABONBA_PTR_GET_DEFAULT(availableVcpus_, 0) };
          inline Capacity& setAvailableVcpus(int32_t availableVcpus) { DARABONBA_PTR_SET_VALUE(availableVcpus_, availableVcpus) };


          // availableVgpus Field Functions 
          bool hasAvailableVgpus() const { return this->availableVgpus_ != nullptr;};
          void deleteAvailableVgpus() { this->availableVgpus_ = nullptr;};
          inline int32_t getAvailableVgpus() const { DARABONBA_PTR_GET_DEFAULT(availableVgpus_, 0) };
          inline Capacity& setAvailableVgpus(int32_t availableVgpus) { DARABONBA_PTR_SET_VALUE(availableVgpus_, availableVgpus) };


          // localStorageCategory Field Functions 
          bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
          void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
          inline string getLocalStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
          inline Capacity& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


          // socketCapacities Field Functions 
          bool hasSocketCapacities() const { return this->socketCapacities_ != nullptr;};
          void deleteSocketCapacities() { this->socketCapacities_ = nullptr;};
          inline const Capacity::SocketCapacities & getSocketCapacities() const { DARABONBA_PTR_GET_CONST(socketCapacities_, Capacity::SocketCapacities) };
          inline Capacity::SocketCapacities getSocketCapacities() { DARABONBA_PTR_GET(socketCapacities_, Capacity::SocketCapacities) };
          inline Capacity& setSocketCapacities(const Capacity::SocketCapacities & socketCapacities) { DARABONBA_PTR_SET_VALUE(socketCapacities_, socketCapacities) };
          inline Capacity& setSocketCapacities(Capacity::SocketCapacities && socketCapacities) { DARABONBA_PTR_SET_RVALUE(socketCapacities_, socketCapacities) };


          // totalLocalStorage Field Functions 
          bool hasTotalLocalStorage() const { return this->totalLocalStorage_ != nullptr;};
          void deleteTotalLocalStorage() { this->totalLocalStorage_ = nullptr;};
          inline int32_t getTotalLocalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalLocalStorage_, 0) };
          inline Capacity& setTotalLocalStorage(int32_t totalLocalStorage) { DARABONBA_PTR_SET_VALUE(totalLocalStorage_, totalLocalStorage) };


          // totalMemory Field Functions 
          bool hasTotalMemory() const { return this->totalMemory_ != nullptr;};
          void deleteTotalMemory() { this->totalMemory_ = nullptr;};
          inline float getTotalMemory() const { DARABONBA_PTR_GET_DEFAULT(totalMemory_, 0.0) };
          inline Capacity& setTotalMemory(float totalMemory) { DARABONBA_PTR_SET_VALUE(totalMemory_, totalMemory) };


          // totalVcpus Field Functions 
          bool hasTotalVcpus() const { return this->totalVcpus_ != nullptr;};
          void deleteTotalVcpus() { this->totalVcpus_ = nullptr;};
          inline int32_t getTotalVcpus() const { DARABONBA_PTR_GET_DEFAULT(totalVcpus_, 0) };
          inline Capacity& setTotalVcpus(int32_t totalVcpus) { DARABONBA_PTR_SET_VALUE(totalVcpus_, totalVcpus) };


          // totalVgpus Field Functions 
          bool hasTotalVgpus() const { return this->totalVgpus_ != nullptr;};
          void deleteTotalVgpus() { this->totalVgpus_ = nullptr;};
          inline int32_t getTotalVgpus() const { DARABONBA_PTR_GET_DEFAULT(totalVgpus_, 0) };
          inline Capacity& setTotalVgpus(int32_t totalVgpus) { DARABONBA_PTR_SET_VALUE(totalVgpus_, totalVgpus) };


        protected:
          shared_ptr<Capacity::AvailableInstanceTypes> availableInstanceTypes_ {};
          // The amount of available space on the local disks. Unit: GiB
          shared_ptr<int32_t> availableLocalStorage_ {};
          // The amount of available memory. Unit: GiB.
          shared_ptr<float> availableMemory_ {};
          // The number of available vCPUs.
          shared_ptr<int32_t> availableVcpus_ {};
          // The number of available vGPUs.
          shared_ptr<int32_t> availableVgpus_ {};
          // The category of local disks.
          shared_ptr<string> localStorageCategory_ {};
          // The socket capacities.
          shared_ptr<Capacity::SocketCapacities> socketCapacities_ {};
          // The total capacity of local disks. Unit: GiB.
          shared_ptr<int32_t> totalLocalStorage_ {};
          // The total amount of memory. Unit: GiB.
          shared_ptr<float> totalMemory_ {};
          // The total number of vCPUs.
          shared_ptr<int32_t> totalVcpus_ {};
          // The total number of vGPUs.
          shared_ptr<int32_t> totalVgpus_ {};
        };

        class SchedulerOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SchedulerOptions& obj) { 
            DARABONBA_PTR_TO_JSON(ManagedPrivateSpaceId, managedPrivateSpaceId_);
          };
          friend void from_json(const Darabonba::Json& j, SchedulerOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(ManagedPrivateSpaceId, managedPrivateSpaceId_);
          };
          SchedulerOptions() = default ;
          SchedulerOptions(const SchedulerOptions &) = default ;
          SchedulerOptions(SchedulerOptions &&) = default ;
          SchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SchedulerOptions() = default ;
          SchedulerOptions& operator=(const SchedulerOptions &) = default ;
          SchedulerOptions& operator=(SchedulerOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->managedPrivateSpaceId_ == nullptr; };
          // managedPrivateSpaceId Field Functions 
          bool hasManagedPrivateSpaceId() const { return this->managedPrivateSpaceId_ != nullptr;};
          void deleteManagedPrivateSpaceId() { this->managedPrivateSpaceId_ = nullptr;};
          inline string getManagedPrivateSpaceId() const { DARABONBA_PTR_GET_DEFAULT(managedPrivateSpaceId_, "") };
          inline SchedulerOptions& setManagedPrivateSpaceId(string managedPrivateSpaceId) { DARABONBA_PTR_SET_VALUE(managedPrivateSpaceId_, managedPrivateSpaceId) };


        protected:
          shared_ptr<string> managedPrivateSpaceId_ {};
        };

        virtual bool empty() const override { return this->schedulerOptions_ == nullptr
        && this->actionOnMaintenance_ == nullptr && this->autoPlacement_ == nullptr && this->autoReleaseTime_ == nullptr && this->capacity_ == nullptr && this->chargeType_ == nullptr
        && this->cores_ == nullptr && this->cpuOverCommitRatio_ == nullptr && this->creationTime_ == nullptr && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostId_ == nullptr
        && this->dedicatedHostName_ == nullptr && this->dedicatedHostOwnerId_ == nullptr && this->dedicatedHostType_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr
        && this->GPUSpec_ == nullptr && this->hostDetailInfo_ == nullptr && this->instances_ == nullptr && this->machineId_ == nullptr && this->networkAttributes_ == nullptr
        && this->operationLocks_ == nullptr && this->physicalGpus_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->saleCycle_ == nullptr
        && this->sockets_ == nullptr && this->status_ == nullptr && this->supportedCustomInstanceTypeFamilies_ == nullptr && this->supportedInstanceTypeFamilies_ == nullptr && this->supportedInstanceTypesList_ == nullptr
        && this->tags_ == nullptr && this->zoneId_ == nullptr; };
        // schedulerOptions Field Functions 
        bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
        void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
        inline const DedicatedHost::SchedulerOptions & getSchedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, DedicatedHost::SchedulerOptions) };
        inline DedicatedHost::SchedulerOptions getSchedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, DedicatedHost::SchedulerOptions) };
        inline DedicatedHost& setSchedulerOptions(const DedicatedHost::SchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
        inline DedicatedHost& setSchedulerOptions(DedicatedHost::SchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


        // actionOnMaintenance Field Functions 
        bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
        void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
        inline string getActionOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(actionOnMaintenance_, "") };
        inline DedicatedHost& setActionOnMaintenance(string actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };


        // autoPlacement Field Functions 
        bool hasAutoPlacement() const { return this->autoPlacement_ != nullptr;};
        void deleteAutoPlacement() { this->autoPlacement_ = nullptr;};
        inline string getAutoPlacement() const { DARABONBA_PTR_GET_DEFAULT(autoPlacement_, "") };
        inline DedicatedHost& setAutoPlacement(string autoPlacement) { DARABONBA_PTR_SET_VALUE(autoPlacement_, autoPlacement) };


        // autoReleaseTime Field Functions 
        bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
        void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
        inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
        inline DedicatedHost& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline const DedicatedHost::Capacity & getCapacity() const { DARABONBA_PTR_GET_CONST(capacity_, DedicatedHost::Capacity) };
        inline DedicatedHost::Capacity getCapacity() { DARABONBA_PTR_GET(capacity_, DedicatedHost::Capacity) };
        inline DedicatedHost& setCapacity(const DedicatedHost::Capacity & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
        inline DedicatedHost& setCapacity(DedicatedHost::Capacity && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline DedicatedHost& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
        inline DedicatedHost& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // cpuOverCommitRatio Field Functions 
        bool hasCpuOverCommitRatio() const { return this->cpuOverCommitRatio_ != nullptr;};
        void deleteCpuOverCommitRatio() { this->cpuOverCommitRatio_ = nullptr;};
        inline float getCpuOverCommitRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuOverCommitRatio_, 0.0) };
        inline DedicatedHost& setCpuOverCommitRatio(float cpuOverCommitRatio) { DARABONBA_PTR_SET_VALUE(cpuOverCommitRatio_, cpuOverCommitRatio) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DedicatedHost& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // dedicatedHostClusterId Field Functions 
        bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
        void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
        inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
        inline DedicatedHost& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


        // dedicatedHostId Field Functions 
        bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
        void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
        inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
        inline DedicatedHost& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


        // dedicatedHostName Field Functions 
        bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
        void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
        inline string getDedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
        inline DedicatedHost& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


        // dedicatedHostOwnerId Field Functions 
        bool hasDedicatedHostOwnerId() const { return this->dedicatedHostOwnerId_ != nullptr;};
        void deleteDedicatedHostOwnerId() { this->dedicatedHostOwnerId_ = nullptr;};
        inline int64_t getDedicatedHostOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostOwnerId_, 0L) };
        inline DedicatedHost& setDedicatedHostOwnerId(int64_t dedicatedHostOwnerId) { DARABONBA_PTR_SET_VALUE(dedicatedHostOwnerId_, dedicatedHostOwnerId) };


        // dedicatedHostType Field Functions 
        bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
        void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
        inline string getDedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
        inline DedicatedHost& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DedicatedHost& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline DedicatedHost& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // GPUSpec Field Functions 
        bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
        void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
        inline string getGPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
        inline DedicatedHost& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


        // hostDetailInfo Field Functions 
        bool hasHostDetailInfo() const { return this->hostDetailInfo_ != nullptr;};
        void deleteHostDetailInfo() { this->hostDetailInfo_ = nullptr;};
        inline const DedicatedHost::HostDetailInfo & getHostDetailInfo() const { DARABONBA_PTR_GET_CONST(hostDetailInfo_, DedicatedHost::HostDetailInfo) };
        inline DedicatedHost::HostDetailInfo getHostDetailInfo() { DARABONBA_PTR_GET(hostDetailInfo_, DedicatedHost::HostDetailInfo) };
        inline DedicatedHost& setHostDetailInfo(const DedicatedHost::HostDetailInfo & hostDetailInfo) { DARABONBA_PTR_SET_VALUE(hostDetailInfo_, hostDetailInfo) };
        inline DedicatedHost& setHostDetailInfo(DedicatedHost::HostDetailInfo && hostDetailInfo) { DARABONBA_PTR_SET_RVALUE(hostDetailInfo_, hostDetailInfo) };


        // instances Field Functions 
        bool hasInstances() const { return this->instances_ != nullptr;};
        void deleteInstances() { this->instances_ = nullptr;};
        inline const DedicatedHost::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DedicatedHost::Instances) };
        inline DedicatedHost::Instances getInstances() { DARABONBA_PTR_GET(instances_, DedicatedHost::Instances) };
        inline DedicatedHost& setInstances(const DedicatedHost::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
        inline DedicatedHost& setInstances(DedicatedHost::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


        // machineId Field Functions 
        bool hasMachineId() const { return this->machineId_ != nullptr;};
        void deleteMachineId() { this->machineId_ = nullptr;};
        inline string getMachineId() const { DARABONBA_PTR_GET_DEFAULT(machineId_, "") };
        inline DedicatedHost& setMachineId(string machineId) { DARABONBA_PTR_SET_VALUE(machineId_, machineId) };


        // networkAttributes Field Functions 
        bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
        void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
        inline const DedicatedHost::NetworkAttributes & getNetworkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, DedicatedHost::NetworkAttributes) };
        inline DedicatedHost::NetworkAttributes getNetworkAttributes() { DARABONBA_PTR_GET(networkAttributes_, DedicatedHost::NetworkAttributes) };
        inline DedicatedHost& setNetworkAttributes(const DedicatedHost::NetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
        inline DedicatedHost& setNetworkAttributes(DedicatedHost::NetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


        // operationLocks Field Functions 
        bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
        void deleteOperationLocks() { this->operationLocks_ = nullptr;};
        inline const DedicatedHost::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DedicatedHost::OperationLocks) };
        inline DedicatedHost::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, DedicatedHost::OperationLocks) };
        inline DedicatedHost& setOperationLocks(const DedicatedHost::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
        inline DedicatedHost& setOperationLocks(DedicatedHost::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


        // physicalGpus Field Functions 
        bool hasPhysicalGpus() const { return this->physicalGpus_ != nullptr;};
        void deletePhysicalGpus() { this->physicalGpus_ = nullptr;};
        inline int32_t getPhysicalGpus() const { DARABONBA_PTR_GET_DEFAULT(physicalGpus_, 0) };
        inline DedicatedHost& setPhysicalGpus(int32_t physicalGpus) { DARABONBA_PTR_SET_VALUE(physicalGpus_, physicalGpus) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DedicatedHost& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline DedicatedHost& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // saleCycle Field Functions 
        bool hasSaleCycle() const { return this->saleCycle_ != nullptr;};
        void deleteSaleCycle() { this->saleCycle_ = nullptr;};
        inline string getSaleCycle() const { DARABONBA_PTR_GET_DEFAULT(saleCycle_, "") };
        inline DedicatedHost& setSaleCycle(string saleCycle) { DARABONBA_PTR_SET_VALUE(saleCycle_, saleCycle) };


        // sockets Field Functions 
        bool hasSockets() const { return this->sockets_ != nullptr;};
        void deleteSockets() { this->sockets_ = nullptr;};
        inline int32_t getSockets() const { DARABONBA_PTR_GET_DEFAULT(sockets_, 0) };
        inline DedicatedHost& setSockets(int32_t sockets) { DARABONBA_PTR_SET_VALUE(sockets_, sockets) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DedicatedHost& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // supportedCustomInstanceTypeFamilies Field Functions 
        bool hasSupportedCustomInstanceTypeFamilies() const { return this->supportedCustomInstanceTypeFamilies_ != nullptr;};
        void deleteSupportedCustomInstanceTypeFamilies() { this->supportedCustomInstanceTypeFamilies_ = nullptr;};
        inline const DedicatedHost::SupportedCustomInstanceTypeFamilies & getSupportedCustomInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(supportedCustomInstanceTypeFamilies_, DedicatedHost::SupportedCustomInstanceTypeFamilies) };
        inline DedicatedHost::SupportedCustomInstanceTypeFamilies getSupportedCustomInstanceTypeFamilies() { DARABONBA_PTR_GET(supportedCustomInstanceTypeFamilies_, DedicatedHost::SupportedCustomInstanceTypeFamilies) };
        inline DedicatedHost& setSupportedCustomInstanceTypeFamilies(const DedicatedHost::SupportedCustomInstanceTypeFamilies & supportedCustomInstanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(supportedCustomInstanceTypeFamilies_, supportedCustomInstanceTypeFamilies) };
        inline DedicatedHost& setSupportedCustomInstanceTypeFamilies(DedicatedHost::SupportedCustomInstanceTypeFamilies && supportedCustomInstanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(supportedCustomInstanceTypeFamilies_, supportedCustomInstanceTypeFamilies) };


        // supportedInstanceTypeFamilies Field Functions 
        bool hasSupportedInstanceTypeFamilies() const { return this->supportedInstanceTypeFamilies_ != nullptr;};
        void deleteSupportedInstanceTypeFamilies() { this->supportedInstanceTypeFamilies_ = nullptr;};
        inline const DedicatedHost::SupportedInstanceTypeFamilies & getSupportedInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamilies_, DedicatedHost::SupportedInstanceTypeFamilies) };
        inline DedicatedHost::SupportedInstanceTypeFamilies getSupportedInstanceTypeFamilies() { DARABONBA_PTR_GET(supportedInstanceTypeFamilies_, DedicatedHost::SupportedInstanceTypeFamilies) };
        inline DedicatedHost& setSupportedInstanceTypeFamilies(const DedicatedHost::SupportedInstanceTypeFamilies & supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };
        inline DedicatedHost& setSupportedInstanceTypeFamilies(DedicatedHost::SupportedInstanceTypeFamilies && supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };


        // supportedInstanceTypesList Field Functions 
        bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
        void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
        inline const DedicatedHost::SupportedInstanceTypesList & getSupportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, DedicatedHost::SupportedInstanceTypesList) };
        inline DedicatedHost::SupportedInstanceTypesList getSupportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, DedicatedHost::SupportedInstanceTypesList) };
        inline DedicatedHost& setSupportedInstanceTypesList(const DedicatedHost::SupportedInstanceTypesList & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
        inline DedicatedHost& setSupportedInstanceTypesList(DedicatedHost::SupportedInstanceTypesList && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const DedicatedHost::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DedicatedHost::Tags) };
        inline DedicatedHost::Tags getTags() { DARABONBA_PTR_GET(tags_, DedicatedHost::Tags) };
        inline DedicatedHost& setTags(const DedicatedHost::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline DedicatedHost& setTags(DedicatedHost::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DedicatedHost& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<DedicatedHost::SchedulerOptions> schedulerOptions_ {};
        // The policy used to migrate the ECS instances deployed on the dedicated host when the dedicated host fails. Valid values:
        // 
        // *   Migrate: The instances are migrated to another physical machine. Instances that are not in the Stopped state when the dedicated host fails are restarted.
        // *   Stop: The instances are stopped. If the dedicated host cannot be repaired, the instances are migrated to another physical machine and then restarted.
        // 
        // If the dedicated host has cloud disks attached, the default value is Migrate. If the dedicated host has local disks attached, the default value is Stop.
        shared_ptr<string> actionOnMaintenance_ {};
        // Indicates whether the dedicated host is added to the resource pool for automatic deployment. Valid values:
        // 
        // *   on: The dedicated host is added to the resource pool for automatic deployment.
        // *   off: The dedicated host is not added to the resource pool for automatic deployment.
        // 
        // For information about automatic deployment, see the "Automatic deployment" section in [Functions and features](https://help.aliyun.com/document_detail/118938.html).
        shared_ptr<string> autoPlacement_ {};
        // The automatic release time of the dedicated host. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> autoReleaseTime_ {};
        // The performance specifications of the dedicated host.
        shared_ptr<DedicatedHost::Capacity> capacity_ {};
        // The billing method of the dedicated host.
        shared_ptr<string> chargeType_ {};
        // The number of physical cores per CPU.
        shared_ptr<int32_t> cores_ {};
        // The CPU overcommit ratio. Valid values: 1 to 5.
        shared_ptr<float> cpuOverCommitRatio_ {};
        // The time when the dedicated host was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The ID of the dedicated host cluster to which the dedicated host belongs.
        shared_ptr<string> dedicatedHostClusterId_ {};
        // The ID of the dedicated host.
        shared_ptr<string> dedicatedHostId_ {};
        // The name of the dedicated host.
        shared_ptr<string> dedicatedHostName_ {};
        // The ID of the dedicated host owner.
        shared_ptr<int64_t> dedicatedHostOwnerId_ {};
        // The type of the dedicated host.
        shared_ptr<string> dedicatedHostType_ {};
        // The description of the dedicated host.
        shared_ptr<string> description_ {};
        // The expiration time of the subscription dedicated host. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mmZ` format. The time is displayed in UTC.
        shared_ptr<string> expiredTime_ {};
        // The GPU model.
        shared_ptr<string> GPUSpec_ {};
        // This parameter will be removed in the future. We recommend that you use other parameters to ensure future compatibility.
        shared_ptr<DedicatedHost::HostDetailInfo> hostDetailInfo_ {};
        // The ECS instances that were created on the dedicated host.
        shared_ptr<DedicatedHost::Instances> instances_ {};
        // The machine code of the dedicated host.
        shared_ptr<string> machineId_ {};
        // The network attributes of the dedicated host.
        shared_ptr<DedicatedHost::NetworkAttributes> networkAttributes_ {};
        // The reasons why the resources of the dedicated host were locked.
        shared_ptr<DedicatedHost::OperationLocks> operationLocks_ {};
        // The number of physical GPUs.
        shared_ptr<int32_t> physicalGpus_ {};
        // The region ID of the dedicated host.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the dedicated host belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The unit of the subscription duration. Valid values:
        // 
        // *   Month
        // *   Year
        shared_ptr<string> saleCycle_ {};
        // The number of physical CPUs.
        shared_ptr<int32_t> sockets_ {};
        // The status of the dedicated host. Valid values:
        // 
        // *   Available: The dedicated host is running as expected.
        // *   UnderAssessment: The dedicated host is available but has potential risks that may cause the ECS instances on the dedicated host to fail.
        // *   PermanentFailure: The dedicated host has permanent failures and is unavailable.
        shared_ptr<string> status_ {};
        // The custom ECS instance families that are supported by the dedicated host.
        shared_ptr<DedicatedHost::SupportedCustomInstanceTypeFamilies> supportedCustomInstanceTypeFamilies_ {};
        // The ECS instance families that are supported by the dedicated host.
        shared_ptr<DedicatedHost::SupportedInstanceTypeFamilies> supportedInstanceTypeFamilies_ {};
        // The ECS instance types that are supported by the dedicated host.
        shared_ptr<DedicatedHost::SupportedInstanceTypesList> supportedInstanceTypesList_ {};
        // The tags of the dedicated host.
        shared_ptr<DedicatedHost::Tags> tags_ {};
        // The zone ID of the dedicated host.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->dedicatedHost_ == nullptr; };
      // dedicatedHost Field Functions 
      bool hasDedicatedHost() const { return this->dedicatedHost_ != nullptr;};
      void deleteDedicatedHost() { this->dedicatedHost_ = nullptr;};
      inline const vector<DedicatedHosts::DedicatedHost> & getDedicatedHost() const { DARABONBA_PTR_GET_CONST(dedicatedHost_, vector<DedicatedHosts::DedicatedHost>) };
      inline vector<DedicatedHosts::DedicatedHost> getDedicatedHost() { DARABONBA_PTR_GET(dedicatedHost_, vector<DedicatedHosts::DedicatedHost>) };
      inline DedicatedHosts& setDedicatedHost(const vector<DedicatedHosts::DedicatedHost> & dedicatedHost) { DARABONBA_PTR_SET_VALUE(dedicatedHost_, dedicatedHost) };
      inline DedicatedHosts& setDedicatedHost(vector<DedicatedHosts::DedicatedHost> && dedicatedHost) { DARABONBA_PTR_SET_RVALUE(dedicatedHost_, dedicatedHost) };


    protected:
      shared_ptr<vector<DedicatedHosts::DedicatedHost>> dedicatedHost_ {};
    };

    virtual bool empty() const override { return this->dedicatedHosts_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dedicatedHosts Field Functions 
    bool hasDedicatedHosts() const { return this->dedicatedHosts_ != nullptr;};
    void deleteDedicatedHosts() { this->dedicatedHosts_ = nullptr;};
    inline const DescribeDedicatedHostsResponseBody::DedicatedHosts & getDedicatedHosts() const { DARABONBA_PTR_GET_CONST(dedicatedHosts_, DescribeDedicatedHostsResponseBody::DedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody::DedicatedHosts getDedicatedHosts() { DARABONBA_PTR_GET(dedicatedHosts_, DescribeDedicatedHostsResponseBody::DedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHosts(const DescribeDedicatedHostsResponseBody::DedicatedHosts & dedicatedHosts) { DARABONBA_PTR_SET_VALUE(dedicatedHosts_, dedicatedHosts) };
    inline DescribeDedicatedHostsResponseBody& setDedicatedHosts(DescribeDedicatedHostsResponseBody::DedicatedHosts && dedicatedHosts) { DARABONBA_PTR_SET_RVALUE(dedicatedHosts_, dedicatedHosts) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedHostsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedHostsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedHostsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDedicatedHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDedicatedHostsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the DDH.
    shared_ptr<DescribeDedicatedHostsResponseBody::DedicatedHosts> dedicatedHosts_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists. If the return value of this parameter is empty when you specify MaxResults and NextToken for a paged query, no more results are to be returned.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of dedicated hosts.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
