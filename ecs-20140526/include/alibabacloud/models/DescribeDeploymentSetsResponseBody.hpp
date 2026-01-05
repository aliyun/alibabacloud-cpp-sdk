// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTSETSRESPONSEBODY_HPP_
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
  class DescribeDeploymentSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSets, deploymentSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeploymentSetsResponseBody() = default ;
    DescribeDeploymentSetsResponseBody(const DescribeDeploymentSetsResponseBody &) = default ;
    DescribeDeploymentSetsResponseBody(DescribeDeploymentSetsResponseBody &&) = default ;
    DescribeDeploymentSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentSetsResponseBody() = default ;
    DescribeDeploymentSetsResponseBody& operator=(const DescribeDeploymentSetsResponseBody &) = default ;
    DescribeDeploymentSetsResponseBody& operator=(DescribeDeploymentSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeploymentSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeploymentSets& obj) { 
        DARABONBA_PTR_TO_JSON(DeploymentSet, deploymentSet_);
      };
      friend void from_json(const Darabonba::Json& j, DeploymentSets& obj) { 
        DARABONBA_PTR_FROM_JSON(DeploymentSet, deploymentSet_);
      };
      DeploymentSets() = default ;
      DeploymentSets(const DeploymentSets &) = default ;
      DeploymentSets(DeploymentSets &&) = default ;
      DeploymentSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeploymentSets() = default ;
      DeploymentSets& operator=(const DeploymentSets &) = default ;
      DeploymentSets& operator=(DeploymentSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeploymentSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeploymentSet& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(Capacities, capacities_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeploymentSetDescription, deploymentSetDescription_);
          DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
          DARABONBA_PTR_TO_JSON(DeploymentSetName, deploymentSetName_);
          DARABONBA_PTR_TO_JSON(DeploymentStrategy, deploymentStrategy_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Granularity, granularity_);
          DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_TO_JSON(InstanceAmount, instanceAmount_);
          DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
        };
        friend void from_json(const Darabonba::Json& j, DeploymentSet& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(Capacities, capacities_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetDescription, deploymentSetDescription_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
          DARABONBA_PTR_FROM_JSON(DeploymentSetName, deploymentSetName_);
          DARABONBA_PTR_FROM_JSON(DeploymentStrategy, deploymentStrategy_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
          DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_FROM_JSON(InstanceAmount, instanceAmount_);
          DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
        };
        DeploymentSet() = default ;
        DeploymentSet(const DeploymentSet &) = default ;
        DeploymentSet(DeploymentSet &&) = default ;
        DeploymentSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeploymentSet() = default ;
        DeploymentSet& operator=(const DeploymentSet &) = default ;
        DeploymentSet& operator=(DeploymentSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InstanceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceIds& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          };
          InstanceIds() = default ;
          InstanceIds(const InstanceIds &) = default ;
          InstanceIds(InstanceIds &&) = default ;
          InstanceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceIds() = default ;
          InstanceIds& operator=(const InstanceIds &) = default ;
          InstanceIds& operator=(InstanceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceId_ == nullptr; };
          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
          inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
          inline InstanceIds& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
          inline InstanceIds& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        protected:
          shared_ptr<vector<string>> instanceId_ {};
        };

        class Capacities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Capacities& obj) { 
            DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          };
          friend void from_json(const Darabonba::Json& j, Capacities& obj) { 
            DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          };
          Capacities() = default ;
          Capacities(const Capacities &) = default ;
          Capacities(Capacities &&) = default ;
          Capacities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Capacities() = default ;
          Capacities& operator=(const Capacities &) = default ;
          Capacities& operator=(Capacities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Capacity : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Capacity& obj) { 
              DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, Capacity& obj) { 
              DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
            virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->usedAmount_ == nullptr && this->zoneId_ == nullptr; };
            // availableAmount Field Functions 
            bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
            void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
            inline int32_t getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
            inline Capacity& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


            // usedAmount Field Functions 
            bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
            void deleteUsedAmount() { this->usedAmount_ = nullptr;};
            inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
            inline Capacity& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline Capacity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // The number of ECS instances that can be added to the deployment set within the zone.
            shared_ptr<int32_t> availableAmount_ {};
            // The number of ECS instances that reside in the zone in the deployment set.
            shared_ptr<int32_t> usedAmount_ {};
            // The ID of the zone. Only the zone IDs of existing ECS instances in the deployment set are returned.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->capacity_ == nullptr; };
          // capacity Field Functions 
          bool hasCapacity() const { return this->capacity_ != nullptr;};
          void deleteCapacity() { this->capacity_ = nullptr;};
          inline const vector<Capacities::Capacity> & getCapacity() const { DARABONBA_PTR_GET_CONST(capacity_, vector<Capacities::Capacity>) };
          inline vector<Capacities::Capacity> getCapacity() { DARABONBA_PTR_GET(capacity_, vector<Capacities::Capacity>) };
          inline Capacities& setCapacity(const vector<Capacities::Capacity> & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
          inline Capacities& setCapacity(vector<Capacities::Capacity> && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


        protected:
          shared_ptr<vector<Capacities::Capacity>> capacity_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->capacities_ == nullptr && this->creationTime_ == nullptr && this->deploymentSetDescription_ == nullptr && this->deploymentSetId_ == nullptr && this->deploymentSetName_ == nullptr
        && this->deploymentStrategy_ == nullptr && this->domain_ == nullptr && this->granularity_ == nullptr && this->groupCount_ == nullptr && this->instanceAmount_ == nullptr
        && this->instanceIds_ == nullptr && this->strategy_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline DeploymentSet& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // capacities Field Functions 
        bool hasCapacities() const { return this->capacities_ != nullptr;};
        void deleteCapacities() { this->capacities_ = nullptr;};
        inline const DeploymentSet::Capacities & getCapacities() const { DARABONBA_PTR_GET_CONST(capacities_, DeploymentSet::Capacities) };
        inline DeploymentSet::Capacities getCapacities() { DARABONBA_PTR_GET(capacities_, DeploymentSet::Capacities) };
        inline DeploymentSet& setCapacities(const DeploymentSet::Capacities & capacities) { DARABONBA_PTR_SET_VALUE(capacities_, capacities) };
        inline DeploymentSet& setCapacities(DeploymentSet::Capacities && capacities) { DARABONBA_PTR_SET_RVALUE(capacities_, capacities) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline DeploymentSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deploymentSetDescription Field Functions 
        bool hasDeploymentSetDescription() const { return this->deploymentSetDescription_ != nullptr;};
        void deleteDeploymentSetDescription() { this->deploymentSetDescription_ = nullptr;};
        inline string getDeploymentSetDescription() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetDescription_, "") };
        inline DeploymentSet& setDeploymentSetDescription(string deploymentSetDescription) { DARABONBA_PTR_SET_VALUE(deploymentSetDescription_, deploymentSetDescription) };


        // deploymentSetId Field Functions 
        bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
        void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
        inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
        inline DeploymentSet& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


        // deploymentSetName Field Functions 
        bool hasDeploymentSetName() const { return this->deploymentSetName_ != nullptr;};
        void deleteDeploymentSetName() { this->deploymentSetName_ = nullptr;};
        inline string getDeploymentSetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetName_, "") };
        inline DeploymentSet& setDeploymentSetName(string deploymentSetName) { DARABONBA_PTR_SET_VALUE(deploymentSetName_, deploymentSetName) };


        // deploymentStrategy Field Functions 
        bool hasDeploymentStrategy() const { return this->deploymentStrategy_ != nullptr;};
        void deleteDeploymentStrategy() { this->deploymentStrategy_ = nullptr;};
        inline string getDeploymentStrategy() const { DARABONBA_PTR_GET_DEFAULT(deploymentStrategy_, "") };
        inline DeploymentSet& setDeploymentStrategy(string deploymentStrategy) { DARABONBA_PTR_SET_VALUE(deploymentStrategy_, deploymentStrategy) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DeploymentSet& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // granularity Field Functions 
        bool hasGranularity() const { return this->granularity_ != nullptr;};
        void deleteGranularity() { this->granularity_ = nullptr;};
        inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
        inline DeploymentSet& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


        // groupCount Field Functions 
        bool hasGroupCount() const { return this->groupCount_ != nullptr;};
        void deleteGroupCount() { this->groupCount_ = nullptr;};
        inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
        inline DeploymentSet& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


        // instanceAmount Field Functions 
        bool hasInstanceAmount() const { return this->instanceAmount_ != nullptr;};
        void deleteInstanceAmount() { this->instanceAmount_ = nullptr;};
        inline int32_t getInstanceAmount() const { DARABONBA_PTR_GET_DEFAULT(instanceAmount_, 0) };
        inline DeploymentSet& setInstanceAmount(int32_t instanceAmount) { DARABONBA_PTR_SET_VALUE(instanceAmount_, instanceAmount) };


        // instanceIds Field Functions 
        bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
        void deleteInstanceIds() { this->instanceIds_ = nullptr;};
        inline const DeploymentSet::InstanceIds & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DeploymentSet::InstanceIds) };
        inline DeploymentSet::InstanceIds getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, DeploymentSet::InstanceIds) };
        inline DeploymentSet& setInstanceIds(const DeploymentSet::InstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
        inline DeploymentSet& setInstanceIds(DeploymentSet::InstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline DeploymentSet& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


      protected:
        shared_ptr<int64_t> accountId_ {};
        // Details of the capacities of the deployment set. This parameter is valid only when the deployment set contains ECS instances. The value contains information about the capacities of the deployment set in different zones.
        shared_ptr<DeploymentSet::Capacities> capacities_ {};
        // The time when the deployment set was created.
        shared_ptr<string> creationTime_ {};
        // The description of the deployment set.
        shared_ptr<string> deploymentSetDescription_ {};
        // The ID of the deployment set.
        shared_ptr<string> deploymentSetId_ {};
        // The name of the deployment set.
        shared_ptr<string> deploymentSetName_ {};
        // The deployment strategy. The return value of this parameter is the value of the `Strategy` request parameter.
        shared_ptr<string> deploymentStrategy_ {};
        // The deployment domain.
        shared_ptr<string> domain_ {};
        // The deployment granularity.
        shared_ptr<string> granularity_ {};
        // The number of deployment set groups in the deployment set.
        // 
        // >  This parameter is valid only when the Strategy request parameter is set to AvailabilityGroup.
        shared_ptr<int32_t> groupCount_ {};
        // The number of instances in the deployment set.
        shared_ptr<int32_t> instanceAmount_ {};
        // The IDs of the Elastic Compute Service (ECS) instances in the deployment set.
        shared_ptr<DeploymentSet::InstanceIds> instanceIds_ {};
        // The deployment strategy.
        shared_ptr<string> strategy_ {};
      };

      virtual bool empty() const override { return this->deploymentSet_ == nullptr; };
      // deploymentSet Field Functions 
      bool hasDeploymentSet() const { return this->deploymentSet_ != nullptr;};
      void deleteDeploymentSet() { this->deploymentSet_ = nullptr;};
      inline const vector<DeploymentSets::DeploymentSet> & getDeploymentSet() const { DARABONBA_PTR_GET_CONST(deploymentSet_, vector<DeploymentSets::DeploymentSet>) };
      inline vector<DeploymentSets::DeploymentSet> getDeploymentSet() { DARABONBA_PTR_GET(deploymentSet_, vector<DeploymentSets::DeploymentSet>) };
      inline DeploymentSets& setDeploymentSet(const vector<DeploymentSets::DeploymentSet> & deploymentSet) { DARABONBA_PTR_SET_VALUE(deploymentSet_, deploymentSet) };
      inline DeploymentSets& setDeploymentSet(vector<DeploymentSets::DeploymentSet> && deploymentSet) { DARABONBA_PTR_SET_RVALUE(deploymentSet_, deploymentSet) };


    protected:
      shared_ptr<vector<DeploymentSets::DeploymentSet>> deploymentSet_ {};
    };

    virtual bool empty() const override { return this->deploymentSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deploymentSets Field Functions 
    bool hasDeploymentSets() const { return this->deploymentSets_ != nullptr;};
    void deleteDeploymentSets() { this->deploymentSets_ = nullptr;};
    inline const DescribeDeploymentSetsResponseBody::DeploymentSets & getDeploymentSets() const { DARABONBA_PTR_GET_CONST(deploymentSets_, DescribeDeploymentSetsResponseBody::DeploymentSets) };
    inline DescribeDeploymentSetsResponseBody::DeploymentSets getDeploymentSets() { DARABONBA_PTR_GET(deploymentSets_, DescribeDeploymentSetsResponseBody::DeploymentSets) };
    inline DescribeDeploymentSetsResponseBody& setDeploymentSets(const DescribeDeploymentSetsResponseBody::DeploymentSets & deploymentSets) { DARABONBA_PTR_SET_VALUE(deploymentSets_, deploymentSets) };
    inline DescribeDeploymentSetsResponseBody& setDeploymentSets(DescribeDeploymentSetsResponseBody::DeploymentSets && deploymentSets) { DARABONBA_PTR_SET_RVALUE(deploymentSets_, deploymentSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDeploymentSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeploymentSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDeploymentSetsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeploymentSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeploymentSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the deployment sets.
    shared_ptr<DescribeDeploymentSetsResponseBody::DeploymentSets> deploymentSets_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of queried deployment sets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
