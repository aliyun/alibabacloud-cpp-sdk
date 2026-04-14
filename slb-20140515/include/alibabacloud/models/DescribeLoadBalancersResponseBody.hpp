// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadBalancersResponseBody() = default ;
    DescribeLoadBalancersResponseBody(const DescribeLoadBalancersResponseBody &) = default ;
    DescribeLoadBalancersResponseBody(DescribeLoadBalancersResponseBody &&) = default ;
    DescribeLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancersResponseBody() = default ;
    DescribeLoadBalancersResponseBody& operator=(const DescribeLoadBalancersResponseBody &) = default ;
    DescribeLoadBalancersResponseBody& operator=(DescribeLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadBalancers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
        DARABONBA_PTR_TO_JSON(LoadBalancer, loadBalancer_);
      };
      friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
        DARABONBA_PTR_FROM_JSON(LoadBalancer, loadBalancer_);
      };
      LoadBalancers() = default ;
      LoadBalancers(const LoadBalancers &) = default ;
      LoadBalancers(LoadBalancers &&) = default ;
      LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadBalancers() = default ;
      LoadBalancers& operator=(const LoadBalancers &) = default ;
      LoadBalancers& operator=(LoadBalancers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LoadBalancer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancer& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
          DARABONBA_PTR_TO_JSON(AddressType, addressType_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(InternetChargeTypeAlias, internetChargeTypeAlias_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
          DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_TO_JSON(ModificationProtectionReason, modificationProtectionReason_);
          DARABONBA_PTR_TO_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RegionIdAlias, regionIdAlias_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancer& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeTypeAlias, internetChargeTypeAlias_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_FROM_JSON(ModificationProtectionReason, modificationProtectionReason_);
          DARABONBA_PTR_FROM_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RegionIdAlias, regionIdAlias_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        LoadBalancer() = default ;
        LoadBalancer(const LoadBalancer &) = default ;
        LoadBalancer(LoadBalancer &&) = default ;
        LoadBalancer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancer() = default ;
        LoadBalancer& operator=(const LoadBalancer &) = default ;
        LoadBalancer& operator=(LoadBalancer &&) = default ;
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
            shared_ptr<string> tagKey_ {};
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

        virtual bool empty() const override { return this->address_ == nullptr
        && this->addressIPVersion_ == nullptr && this->addressType_ == nullptr && this->bandwidth_ == nullptr && this->createTime_ == nullptr && this->createTimeStamp_ == nullptr
        && this->deleteProtection_ == nullptr && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->internetChargeTypeAlias_ == nullptr && this->loadBalancerId_ == nullptr
        && this->loadBalancerName_ == nullptr && this->loadBalancerSpec_ == nullptr && this->loadBalancerStatus_ == nullptr && this->masterZoneId_ == nullptr && this->modificationProtectionReason_ == nullptr
        && this->modificationProtectionStatus_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr && this->regionIdAlias_ == nullptr
        && this->resourceGroupId_ == nullptr && this->slaveZoneId_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline LoadBalancer& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // addressIPVersion Field Functions 
        bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
        void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
        inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
        inline LoadBalancer& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline LoadBalancer& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline LoadBalancer& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LoadBalancer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimeStamp Field Functions 
        bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
        void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
        inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
        inline LoadBalancer& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


        // deleteProtection Field Functions 
        bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
        void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
        inline string getDeleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
        inline LoadBalancer& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline LoadBalancer& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline LoadBalancer& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // internetChargeTypeAlias Field Functions 
        bool hasInternetChargeTypeAlias() const { return this->internetChargeTypeAlias_ != nullptr;};
        void deleteInternetChargeTypeAlias() { this->internetChargeTypeAlias_ = nullptr;};
        inline string getInternetChargeTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(internetChargeTypeAlias_, "") };
        inline LoadBalancer& setInternetChargeTypeAlias(string internetChargeTypeAlias) { DARABONBA_PTR_SET_VALUE(internetChargeTypeAlias_, internetChargeTypeAlias) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline LoadBalancer& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // loadBalancerName Field Functions 
        bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
        void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
        inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
        inline LoadBalancer& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


        // loadBalancerSpec Field Functions 
        bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
        void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
        inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
        inline LoadBalancer& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


        // loadBalancerStatus Field Functions 
        bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
        void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
        inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
        inline LoadBalancer& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


        // masterZoneId Field Functions 
        bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
        void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
        inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
        inline LoadBalancer& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


        // modificationProtectionReason Field Functions 
        bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
        void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
        inline string getModificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
        inline LoadBalancer& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


        // modificationProtectionStatus Field Functions 
        bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
        void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
        inline string getModificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
        inline LoadBalancer& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline LoadBalancer& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline LoadBalancer& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline LoadBalancer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // regionIdAlias Field Functions 
        bool hasRegionIdAlias() const { return this->regionIdAlias_ != nullptr;};
        void deleteRegionIdAlias() { this->regionIdAlias_ = nullptr;};
        inline string getRegionIdAlias() const { DARABONBA_PTR_GET_DEFAULT(regionIdAlias_, "") };
        inline LoadBalancer& setRegionIdAlias(string regionIdAlias) { DARABONBA_PTR_SET_VALUE(regionIdAlias_, regionIdAlias) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline LoadBalancer& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // slaveZoneId Field Functions 
        bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
        void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
        inline string getSlaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
        inline LoadBalancer& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const LoadBalancer::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, LoadBalancer::Tags) };
        inline LoadBalancer::Tags getTags() { DARABONBA_PTR_GET(tags_, LoadBalancer::Tags) };
        inline LoadBalancer& setTags(const LoadBalancer::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline LoadBalancer& setTags(LoadBalancer::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline LoadBalancer& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline LoadBalancer& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> addressIPVersion_ {};
        shared_ptr<string> addressType_ {};
        shared_ptr<int32_t> bandwidth_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimeStamp_ {};
        shared_ptr<string> deleteProtection_ {};
        shared_ptr<string> instanceChargeType_ {};
        shared_ptr<string> internetChargeType_ {};
        shared_ptr<string> internetChargeTypeAlias_ {};
        shared_ptr<string> loadBalancerId_ {};
        shared_ptr<string> loadBalancerName_ {};
        shared_ptr<string> loadBalancerSpec_ {};
        shared_ptr<string> loadBalancerStatus_ {};
        shared_ptr<string> masterZoneId_ {};
        shared_ptr<string> modificationProtectionReason_ {};
        shared_ptr<string> modificationProtectionStatus_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> regionIdAlias_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> slaveZoneId_ {};
        shared_ptr<LoadBalancer::Tags> tags_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->loadBalancer_ == nullptr; };
      // loadBalancer Field Functions 
      bool hasLoadBalancer() const { return this->loadBalancer_ != nullptr;};
      void deleteLoadBalancer() { this->loadBalancer_ = nullptr;};
      inline const vector<LoadBalancers::LoadBalancer> & getLoadBalancer() const { DARABONBA_PTR_GET_CONST(loadBalancer_, vector<LoadBalancers::LoadBalancer>) };
      inline vector<LoadBalancers::LoadBalancer> getLoadBalancer() { DARABONBA_PTR_GET(loadBalancer_, vector<LoadBalancers::LoadBalancer>) };
      inline LoadBalancers& setLoadBalancer(const vector<LoadBalancers::LoadBalancer> & loadBalancer) { DARABONBA_PTR_SET_VALUE(loadBalancer_, loadBalancer) };
      inline LoadBalancers& setLoadBalancer(vector<LoadBalancers::LoadBalancer> && loadBalancer) { DARABONBA_PTR_SET_RVALUE(loadBalancer_, loadBalancer) };


    protected:
      shared_ptr<vector<LoadBalancers::LoadBalancer>> loadBalancer_ {};
    };

    virtual bool empty() const override { return this->loadBalancers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // loadBalancers Field Functions 
    bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
    void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
    inline const DescribeLoadBalancersResponseBody::LoadBalancers & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, DescribeLoadBalancersResponseBody::LoadBalancers) };
    inline DescribeLoadBalancersResponseBody::LoadBalancers getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, DescribeLoadBalancersResponseBody::LoadBalancers) };
    inline DescribeLoadBalancersResponseBody& setLoadBalancers(const DescribeLoadBalancersResponseBody::LoadBalancers & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
    inline DescribeLoadBalancersResponseBody& setLoadBalancers(DescribeLoadBalancersResponseBody::LoadBalancers && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLoadBalancersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLoadBalancersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLoadBalancersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeLoadBalancersResponseBody::LoadBalancers> loadBalancers_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of instances returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
