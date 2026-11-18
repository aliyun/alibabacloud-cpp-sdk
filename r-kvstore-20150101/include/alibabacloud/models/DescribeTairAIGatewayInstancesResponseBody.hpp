// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRAIGATEWAYINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairAIGatewayInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairAIGatewayInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairAIGatewayInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTairAIGatewayInstancesResponseBody() = default ;
    DescribeTairAIGatewayInstancesResponseBody(const DescribeTairAIGatewayInstancesResponseBody &) = default ;
    DescribeTairAIGatewayInstancesResponseBody(DescribeTairAIGatewayInstancesResponseBody &&) = default ;
    DescribeTairAIGatewayInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairAIGatewayInstancesResponseBody() = default ;
    DescribeTairAIGatewayInstancesResponseBody& operator=(const DescribeTairAIGatewayInstancesResponseBody &) = default ;
    DescribeTairAIGatewayInstancesResponseBody& operator=(DescribeTairAIGatewayInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(TairSemanticCacheInstances, tairSemanticCacheInstances_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(TairSemanticCacheInstances, tairSemanticCacheInstances_);
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
      class TairSemanticCacheInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TairSemanticCacheInstances& obj) { 
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, TairSemanticCacheInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        TairSemanticCacheInstances() = default ;
        TairSemanticCacheInstances(const TairSemanticCacheInstances &) = default ;
        TairSemanticCacheInstances(TairSemanticCacheInstances &&) = default ;
        TairSemanticCacheInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TairSemanticCacheInstances() = default ;
        TairSemanticCacheInstances& operator=(const TairSemanticCacheInstances &) = default ;
        TairSemanticCacheInstances& operator=(TairSemanticCacheInstances &&) = default ;
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

        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->createTime_ == nullptr && this->endTime_ == nullptr && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline TairSemanticCacheInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline TairSemanticCacheInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline TairSemanticCacheInstances& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceClass Field Functions 
        bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
        void deleteInstanceClass() { this->instanceClass_ = nullptr;};
        inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
        inline TairSemanticCacheInstances& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline TairSemanticCacheInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline TairSemanticCacheInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // instanceStatus Field Functions 
        bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
        void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
        inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
        inline TairSemanticCacheInstances& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline TairSemanticCacheInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline TairSemanticCacheInstances& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline TairSemanticCacheInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline TairSemanticCacheInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const TairSemanticCacheInstances::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, TairSemanticCacheInstances::Tags) };
        inline TairSemanticCacheInstances::Tags getTags() { DARABONBA_PTR_GET(tags_, TairSemanticCacheInstances::Tags) };
        inline TairSemanticCacheInstances& setTags(const TairSemanticCacheInstances::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline TairSemanticCacheInstances& setTags(TairSemanticCacheInstances::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline TairSemanticCacheInstances& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline TairSemanticCacheInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline TairSemanticCacheInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> instanceClass_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> instanceStatus_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<TairSemanticCacheInstances::Tags> tags_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->tairSemanticCacheInstances_ == nullptr; };
      // tairSemanticCacheInstances Field Functions 
      bool hasTairSemanticCacheInstances() const { return this->tairSemanticCacheInstances_ != nullptr;};
      void deleteTairSemanticCacheInstances() { this->tairSemanticCacheInstances_ = nullptr;};
      inline const vector<Instances::TairSemanticCacheInstances> & getTairSemanticCacheInstances() const { DARABONBA_PTR_GET_CONST(tairSemanticCacheInstances_, vector<Instances::TairSemanticCacheInstances>) };
      inline vector<Instances::TairSemanticCacheInstances> getTairSemanticCacheInstances() { DARABONBA_PTR_GET(tairSemanticCacheInstances_, vector<Instances::TairSemanticCacheInstances>) };
      inline Instances& setTairSemanticCacheInstances(const vector<Instances::TairSemanticCacheInstances> & tairSemanticCacheInstances) { DARABONBA_PTR_SET_VALUE(tairSemanticCacheInstances_, tairSemanticCacheInstances) };
      inline Instances& setTairSemanticCacheInstances(vector<Instances::TairSemanticCacheInstances> && tairSemanticCacheInstances) { DARABONBA_PTR_SET_RVALUE(tairSemanticCacheInstances_, tairSemanticCacheInstances) };


    protected:
      shared_ptr<vector<Instances::TairSemanticCacheInstances>> tairSemanticCacheInstances_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const DescribeTairAIGatewayInstancesResponseBody::Instances & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, DescribeTairAIGatewayInstancesResponseBody::Instances) };
    inline DescribeTairAIGatewayInstancesResponseBody::Instances getInstances() { DARABONBA_PTR_GET(instances_, DescribeTairAIGatewayInstancesResponseBody::Instances) };
    inline DescribeTairAIGatewayInstancesResponseBody& setInstances(const DescribeTairAIGatewayInstancesResponseBody::Instances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeTairAIGatewayInstancesResponseBody& setInstances(DescribeTairAIGatewayInstancesResponseBody::Instances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTairAIGatewayInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTairAIGatewayInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairAIGatewayInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTairAIGatewayInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeTairAIGatewayInstancesResponseBody::Instances> instances_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instance records for batch instance creation. This parameter is not returned when a single instance is created.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
