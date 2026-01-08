// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRiskEventGroupResponseBody() = default ;
    DescribeRiskEventGroupResponseBody(const DescribeRiskEventGroupResponseBody &) = default ;
    DescribeRiskEventGroupResponseBody(DescribeRiskEventGroupResponseBody &&) = default ;
    DescribeRiskEventGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventGroupResponseBody() = default ;
    DescribeRiskEventGroupResponseBody& operator=(const DescribeRiskEventGroupResponseBody &) = default ;
    DescribeRiskEventGroupResponseBody& operator=(DescribeRiskEventGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(FirstEventTime, firstEventTime_);
        DARABONBA_PTR_TO_JSON(IPLocationInfo, IPLocationInfo_);
        DARABONBA_PTR_TO_JSON(LastEventTime, lastEventTime_);
        DARABONBA_PTR_TO_JSON(ResourcePrivateIPList, resourcePrivateIPList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
        DARABONBA_PTR_TO_JSON(RuleSource, ruleSource_);
        DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_TO_JSON(SrcIPTag, srcIPTag_);
        DARABONBA_PTR_TO_JSON(SrcIPTags, srcIPTags_);
        DARABONBA_PTR_TO_JSON(SrcPrivateIPList, srcPrivateIPList_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(VpcDstInfo, vpcDstInfo_);
        DARABONBA_PTR_TO_JSON(VpcSrcInfo, vpcSrcInfo_);
        DARABONBA_PTR_TO_JSON(VulLevel, vulLevel_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(FirstEventTime, firstEventTime_);
        DARABONBA_PTR_FROM_JSON(IPLocationInfo, IPLocationInfo_);
        DARABONBA_PTR_FROM_JSON(LastEventTime, lastEventTime_);
        DARABONBA_PTR_FROM_JSON(ResourcePrivateIPList, resourcePrivateIPList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
        DARABONBA_PTR_FROM_JSON(RuleSource, ruleSource_);
        DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
        DARABONBA_PTR_FROM_JSON(SrcIPTag, srcIPTag_);
        DARABONBA_PTR_FROM_JSON(SrcIPTags, srcIPTags_);
        DARABONBA_PTR_FROM_JSON(SrcPrivateIPList, srcPrivateIPList_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(VpcDstInfo, vpcDstInfo_);
        DARABONBA_PTR_FROM_JSON(VpcSrcInfo, vpcSrcInfo_);
        DARABONBA_PTR_FROM_JSON(VulLevel, vulLevel_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcSrcInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcSrcInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_TO_JSON(EcsInstanceName, ecsInstanceName_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, VpcSrcInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_FROM_JSON(EcsInstanceName, ecsInstanceName_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        VpcSrcInfo() = default ;
        VpcSrcInfo(const VpcSrcInfo &) = default ;
        VpcSrcInfo(VpcSrcInfo &&) = default ;
        VpcSrcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcSrcInfo() = default ;
        VpcSrcInfo& operator=(const VpcSrcInfo &) = default ;
        VpcSrcInfo& operator=(VpcSrcInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && this->ecsInstanceName_ == nullptr && this->networkInstanceId_ == nullptr && this->networkInstanceName_ == nullptr && this->regionNo_ == nullptr; };
        // ecsInstanceId Field Functions 
        bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
        void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
        inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
        inline VpcSrcInfo& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


        // ecsInstanceName Field Functions 
        bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
        void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
        inline string getEcsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
        inline VpcSrcInfo& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


        // networkInstanceId Field Functions 
        bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
        void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
        inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
        inline VpcSrcInfo& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


        // networkInstanceName Field Functions 
        bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
        void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
        inline string getNetworkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
        inline VpcSrcInfo& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline VpcSrcInfo& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        // The ID of the ECS instance.
        shared_ptr<string> ecsInstanceId_ {};
        // The name of the ECS instance.
        shared_ptr<string> ecsInstanceName_ {};
        // The ID of the VPC.
        shared_ptr<string> networkInstanceId_ {};
        // The name of the VPC.
        shared_ptr<string> networkInstanceName_ {};
        // The ID of the region in which the source VPC resides.
        shared_ptr<string> regionNo_ {};
      };

      class VpcDstInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcDstInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_TO_JSON(EcsInstanceName, ecsInstanceName_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
          DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        };
        friend void from_json(const Darabonba::Json& j, VpcDstInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_FROM_JSON(EcsInstanceName, ecsInstanceName_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        };
        VpcDstInfo() = default ;
        VpcDstInfo(const VpcDstInfo &) = default ;
        VpcDstInfo(VpcDstInfo &&) = default ;
        VpcDstInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcDstInfo() = default ;
        VpcDstInfo& operator=(const VpcDstInfo &) = default ;
        VpcDstInfo& operator=(VpcDstInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && this->ecsInstanceName_ == nullptr && this->networkInstanceId_ == nullptr && this->networkInstanceName_ == nullptr && this->regionNo_ == nullptr; };
        // ecsInstanceId Field Functions 
        bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
        void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
        inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
        inline VpcDstInfo& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


        // ecsInstanceName Field Functions 
        bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
        void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
        inline string getEcsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
        inline VpcDstInfo& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


        // networkInstanceId Field Functions 
        bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
        void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
        inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
        inline VpcDstInfo& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


        // networkInstanceName Field Functions 
        bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
        void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
        inline string getNetworkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
        inline VpcDstInfo& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline VpcDstInfo& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      protected:
        // The ID of the ECS instance.
        shared_ptr<string> ecsInstanceId_ {};
        // The name of the ECS instance.
        shared_ptr<string> ecsInstanceName_ {};
        // The ID of the VPC.
        shared_ptr<string> networkInstanceId_ {};
        // The name of the VPC.
        shared_ptr<string> networkInstanceName_ {};
        // The ID of the region in which the destination VPC resides.
        shared_ptr<string> regionNo_ {};
      };

      class ResourcePrivateIPList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePrivateIPList& obj) { 
          DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
          DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
          DARABONBA_PTR_TO_JSON(ResourcePrivateIP, resourcePrivateIP_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePrivateIPList& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
          DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
          DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
          DARABONBA_PTR_FROM_JSON(ResourcePrivateIP, resourcePrivateIP_);
        };
        ResourcePrivateIPList() = default ;
        ResourcePrivateIPList(const ResourcePrivateIPList &) = default ;
        ResourcePrivateIPList(ResourcePrivateIPList &&) = default ;
        ResourcePrivateIPList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePrivateIPList() = default ;
        ResourcePrivateIPList& operator=(const ResourcePrivateIPList &) = default ;
        ResourcePrivateIPList& operator=(ResourcePrivateIPList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionNo_ == nullptr
        && this->resourceInstanceId_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourcePrivateIP_ == nullptr; };
        // regionNo Field Functions 
        bool hasRegionNo() const { return this->regionNo_ != nullptr;};
        void deleteRegionNo() { this->regionNo_ = nullptr;};
        inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
        inline ResourcePrivateIPList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


        // resourceInstanceId Field Functions 
        bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
        void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
        inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
        inline ResourcePrivateIPList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


        // resourceInstanceName Field Functions 
        bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
        void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
        inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
        inline ResourcePrivateIPList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


        // resourcePrivateIP Field Functions 
        bool hasResourcePrivateIP() const { return this->resourcePrivateIP_ != nullptr;};
        void deleteResourcePrivateIP() { this->resourcePrivateIP_ = nullptr;};
        inline string getResourcePrivateIP() const { DARABONBA_PTR_GET_DEFAULT(resourcePrivateIP_, "") };
        inline ResourcePrivateIPList& setResourcePrivateIP(string resourcePrivateIP) { DARABONBA_PTR_SET_VALUE(resourcePrivateIP_, resourcePrivateIP) };


      protected:
        // The ID of the region to which the private IP address belongs.
        shared_ptr<string> regionNo_ {};
        // The ID of the instance that uses the private IP address.
        shared_ptr<string> resourceInstanceId_ {};
        // The name of the instance that uses the private IP address.
        shared_ptr<string> resourceInstanceName_ {};
        // The private IP address.
        shared_ptr<string> resourcePrivateIP_ {};
      };

      class IPLocationInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IPLocationInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CityId, cityId_);
          DARABONBA_PTR_TO_JSON(CityName, cityName_);
          DARABONBA_PTR_TO_JSON(CountryId, countryId_);
          DARABONBA_PTR_TO_JSON(CountryName, countryName_);
        };
        friend void from_json(const Darabonba::Json& j, IPLocationInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CityId, cityId_);
          DARABONBA_PTR_FROM_JSON(CityName, cityName_);
          DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
          DARABONBA_PTR_FROM_JSON(CountryName, countryName_);
        };
        IPLocationInfo() = default ;
        IPLocationInfo(const IPLocationInfo &) = default ;
        IPLocationInfo(IPLocationInfo &&) = default ;
        IPLocationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IPLocationInfo() = default ;
        IPLocationInfo& operator=(const IPLocationInfo &) = default ;
        IPLocationInfo& operator=(IPLocationInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityId_ == nullptr
        && this->cityName_ == nullptr && this->countryId_ == nullptr && this->countryName_ == nullptr; };
        // cityId Field Functions 
        bool hasCityId() const { return this->cityId_ != nullptr;};
        void deleteCityId() { this->cityId_ = nullptr;};
        inline string getCityId() const { DARABONBA_PTR_GET_DEFAULT(cityId_, "") };
        inline IPLocationInfo& setCityId(string cityId) { DARABONBA_PTR_SET_VALUE(cityId_, cityId) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline IPLocationInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // countryId Field Functions 
        bool hasCountryId() const { return this->countryId_ != nullptr;};
        void deleteCountryId() { this->countryId_ = nullptr;};
        inline string getCountryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
        inline IPLocationInfo& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline IPLocationInfo& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


      protected:
        // The ID of the city to which the IP address belongs.
        shared_ptr<string> cityId_ {};
        // The name of the city to which the IP address belongs.
        shared_ptr<string> cityName_ {};
        // The ID of the country to which the IP address belongs.
        shared_ptr<string> countryId_ {};
        // The name of the country to which the IP address belongs.
        shared_ptr<string> countryName_ {};
      };

      virtual bool empty() const override { return this->attackApp_ == nullptr
        && this->attackType_ == nullptr && this->description_ == nullptr && this->direction_ == nullptr && this->dstIP_ == nullptr && this->eventCount_ == nullptr
        && this->eventId_ == nullptr && this->eventName_ == nullptr && this->firstEventTime_ == nullptr && this->IPLocationInfo_ == nullptr && this->lastEventTime_ == nullptr
        && this->resourcePrivateIPList_ == nullptr && this->resourceType_ == nullptr && this->ruleId_ == nullptr && this->ruleResult_ == nullptr && this->ruleSource_ == nullptr
        && this->srcIP_ == nullptr && this->srcIPTag_ == nullptr && this->srcIPTags_ == nullptr && this->srcPrivateIPList_ == nullptr && this->tag_ == nullptr
        && this->vpcDstInfo_ == nullptr && this->vpcSrcInfo_ == nullptr && this->vulLevel_ == nullptr; };
      // attackApp Field Functions 
      bool hasAttackApp() const { return this->attackApp_ != nullptr;};
      void deleteAttackApp() { this->attackApp_ = nullptr;};
      inline string getAttackApp() const { DARABONBA_PTR_GET_DEFAULT(attackApp_, "") };
      inline DataList& setAttackApp(string attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };


      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline int32_t getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
      inline DataList& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline DataList& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // dstIP Field Functions 
      bool hasDstIP() const { return this->dstIP_ != nullptr;};
      void deleteDstIP() { this->dstIP_ = nullptr;};
      inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
      inline DataList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int32_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0) };
      inline DataList& setEventCount(int32_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline DataList& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline DataList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // firstEventTime Field Functions 
      bool hasFirstEventTime() const { return this->firstEventTime_ != nullptr;};
      void deleteFirstEventTime() { this->firstEventTime_ = nullptr;};
      inline int32_t getFirstEventTime() const { DARABONBA_PTR_GET_DEFAULT(firstEventTime_, 0) };
      inline DataList& setFirstEventTime(int32_t firstEventTime) { DARABONBA_PTR_SET_VALUE(firstEventTime_, firstEventTime) };


      // IPLocationInfo Field Functions 
      bool hasIPLocationInfo() const { return this->IPLocationInfo_ != nullptr;};
      void deleteIPLocationInfo() { this->IPLocationInfo_ = nullptr;};
      inline const DataList::IPLocationInfo & getIPLocationInfo() const { DARABONBA_PTR_GET_CONST(IPLocationInfo_, DataList::IPLocationInfo) };
      inline DataList::IPLocationInfo getIPLocationInfo() { DARABONBA_PTR_GET(IPLocationInfo_, DataList::IPLocationInfo) };
      inline DataList& setIPLocationInfo(const DataList::IPLocationInfo & iPLocationInfo) { DARABONBA_PTR_SET_VALUE(IPLocationInfo_, iPLocationInfo) };
      inline DataList& setIPLocationInfo(DataList::IPLocationInfo && iPLocationInfo) { DARABONBA_PTR_SET_RVALUE(IPLocationInfo_, iPLocationInfo) };


      // lastEventTime Field Functions 
      bool hasLastEventTime() const { return this->lastEventTime_ != nullptr;};
      void deleteLastEventTime() { this->lastEventTime_ = nullptr;};
      inline int32_t getLastEventTime() const { DARABONBA_PTR_GET_DEFAULT(lastEventTime_, 0) };
      inline DataList& setLastEventTime(int32_t lastEventTime) { DARABONBA_PTR_SET_VALUE(lastEventTime_, lastEventTime) };


      // resourcePrivateIPList Field Functions 
      bool hasResourcePrivateIPList() const { return this->resourcePrivateIPList_ != nullptr;};
      void deleteResourcePrivateIPList() { this->resourcePrivateIPList_ = nullptr;};
      inline const vector<DataList::ResourcePrivateIPList> & getResourcePrivateIPList() const { DARABONBA_PTR_GET_CONST(resourcePrivateIPList_, vector<DataList::ResourcePrivateIPList>) };
      inline vector<DataList::ResourcePrivateIPList> getResourcePrivateIPList() { DARABONBA_PTR_GET(resourcePrivateIPList_, vector<DataList::ResourcePrivateIPList>) };
      inline DataList& setResourcePrivateIPList(const vector<DataList::ResourcePrivateIPList> & resourcePrivateIPList) { DARABONBA_PTR_SET_VALUE(resourcePrivateIPList_, resourcePrivateIPList) };
      inline DataList& setResourcePrivateIPList(vector<DataList::ResourcePrivateIPList> && resourcePrivateIPList) { DARABONBA_PTR_SET_RVALUE(resourcePrivateIPList_, resourcePrivateIPList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline DataList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline DataList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleResult Field Functions 
      bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
      void deleteRuleResult() { this->ruleResult_ = nullptr;};
      inline int32_t getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, 0) };
      inline DataList& setRuleResult(int32_t ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


      // ruleSource Field Functions 
      bool hasRuleSource() const { return this->ruleSource_ != nullptr;};
      void deleteRuleSource() { this->ruleSource_ = nullptr;};
      inline int32_t getRuleSource() const { DARABONBA_PTR_GET_DEFAULT(ruleSource_, 0) };
      inline DataList& setRuleSource(int32_t ruleSource) { DARABONBA_PTR_SET_VALUE(ruleSource_, ruleSource) };


      // srcIP Field Functions 
      bool hasSrcIP() const { return this->srcIP_ != nullptr;};
      void deleteSrcIP() { this->srcIP_ = nullptr;};
      inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
      inline DataList& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


      // srcIPTag Field Functions 
      bool hasSrcIPTag() const { return this->srcIPTag_ != nullptr;};
      void deleteSrcIPTag() { this->srcIPTag_ = nullptr;};
      inline string getSrcIPTag() const { DARABONBA_PTR_GET_DEFAULT(srcIPTag_, "") };
      inline DataList& setSrcIPTag(string srcIPTag) { DARABONBA_PTR_SET_VALUE(srcIPTag_, srcIPTag) };


      // srcIPTags Field Functions 
      bool hasSrcIPTags() const { return this->srcIPTags_ != nullptr;};
      void deleteSrcIPTags() { this->srcIPTags_ = nullptr;};
      inline const vector<string> & getSrcIPTags() const { DARABONBA_PTR_GET_CONST(srcIPTags_, vector<string>) };
      inline vector<string> getSrcIPTags() { DARABONBA_PTR_GET(srcIPTags_, vector<string>) };
      inline DataList& setSrcIPTags(const vector<string> & srcIPTags) { DARABONBA_PTR_SET_VALUE(srcIPTags_, srcIPTags) };
      inline DataList& setSrcIPTags(vector<string> && srcIPTags) { DARABONBA_PTR_SET_RVALUE(srcIPTags_, srcIPTags) };


      // srcPrivateIPList Field Functions 
      bool hasSrcPrivateIPList() const { return this->srcPrivateIPList_ != nullptr;};
      void deleteSrcPrivateIPList() { this->srcPrivateIPList_ = nullptr;};
      inline const vector<string> & getSrcPrivateIPList() const { DARABONBA_PTR_GET_CONST(srcPrivateIPList_, vector<string>) };
      inline vector<string> getSrcPrivateIPList() { DARABONBA_PTR_GET(srcPrivateIPList_, vector<string>) };
      inline DataList& setSrcPrivateIPList(const vector<string> & srcPrivateIPList) { DARABONBA_PTR_SET_VALUE(srcPrivateIPList_, srcPrivateIPList) };
      inline DataList& setSrcPrivateIPList(vector<string> && srcPrivateIPList) { DARABONBA_PTR_SET_RVALUE(srcPrivateIPList_, srcPrivateIPList) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline DataList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // vpcDstInfo Field Functions 
      bool hasVpcDstInfo() const { return this->vpcDstInfo_ != nullptr;};
      void deleteVpcDstInfo() { this->vpcDstInfo_ = nullptr;};
      inline const DataList::VpcDstInfo & getVpcDstInfo() const { DARABONBA_PTR_GET_CONST(vpcDstInfo_, DataList::VpcDstInfo) };
      inline DataList::VpcDstInfo getVpcDstInfo() { DARABONBA_PTR_GET(vpcDstInfo_, DataList::VpcDstInfo) };
      inline DataList& setVpcDstInfo(const DataList::VpcDstInfo & vpcDstInfo) { DARABONBA_PTR_SET_VALUE(vpcDstInfo_, vpcDstInfo) };
      inline DataList& setVpcDstInfo(DataList::VpcDstInfo && vpcDstInfo) { DARABONBA_PTR_SET_RVALUE(vpcDstInfo_, vpcDstInfo) };


      // vpcSrcInfo Field Functions 
      bool hasVpcSrcInfo() const { return this->vpcSrcInfo_ != nullptr;};
      void deleteVpcSrcInfo() { this->vpcSrcInfo_ = nullptr;};
      inline const DataList::VpcSrcInfo & getVpcSrcInfo() const { DARABONBA_PTR_GET_CONST(vpcSrcInfo_, DataList::VpcSrcInfo) };
      inline DataList::VpcSrcInfo getVpcSrcInfo() { DARABONBA_PTR_GET(vpcSrcInfo_, DataList::VpcSrcInfo) };
      inline DataList& setVpcSrcInfo(const DataList::VpcSrcInfo & vpcSrcInfo) { DARABONBA_PTR_SET_VALUE(vpcSrcInfo_, vpcSrcInfo) };
      inline DataList& setVpcSrcInfo(DataList::VpcSrcInfo && vpcSrcInfo) { DARABONBA_PTR_SET_RVALUE(vpcSrcInfo_, vpcSrcInfo) };


      // vulLevel Field Functions 
      bool hasVulLevel() const { return this->vulLevel_ != nullptr;};
      void deleteVulLevel() { this->vulLevel_ = nullptr;};
      inline int32_t getVulLevel() const { DARABONBA_PTR_GET_DEFAULT(vulLevel_, 0) };
      inline DataList& setVulLevel(int32_t vulLevel) { DARABONBA_PTR_SET_VALUE(vulLevel_, vulLevel) };


    protected:
      // The name of the attacked application.
      shared_ptr<string> attackApp_ {};
      // The attack type of the intrusion event. Valid values:
      // 
      // *   **1**: suspicious connection
      // *   **2**: command execution
      // *   **3**: brute-force attack
      // *   **4**: scanning
      // *   **5**: others
      // *   **6**: information leak
      // *   **7**: DoS attack
      // *   **8**: buffer overflow attack
      // *   **9**: web attack
      // *   **10**: trojan backdoor
      // *   **11**: computer worm
      // *   **12**: mining
      // *   **13**: reverse shell
      shared_ptr<int32_t> attackType_ {};
      // The description of the intrusion event.
      shared_ptr<string> description_ {};
      // The direction of the traffic for the intrusion event. Valid values:
      // 
      // *   **in**: inbound
      // *   **out**: outbound
      shared_ptr<string> direction_ {};
      // The destination IP address that is included in the intrusion event.
      shared_ptr<string> dstIP_ {};
      // The number of intrusion events.
      shared_ptr<int32_t> eventCount_ {};
      // The ID of the intrusion event.
      shared_ptr<string> eventId_ {};
      // The name of the intrusion event.
      shared_ptr<string> eventName_ {};
      // The time when the intrusion event was first detected. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> firstEventTime_ {};
      // The geographical information about the IP address. The value is a struct that contains the following parameters: **CityId**, **CityName**, **CountryId**, and **CountryName**.\\
      // ****************
      shared_ptr<DataList::IPLocationInfo> IPLocationInfo_ {};
      // The time when the intrusion event was last detected. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int32_t> lastEventTime_ {};
      // The information about the private IP address in the intrusion event. The value is an array that contains the following parameters: **RegionNo**, **ResourceInstanceId**, **ResourceInstanceName**, and **ResourcePrivateIP**.\\
      // ****************
      shared_ptr<vector<DataList::ResourcePrivateIPList>> resourcePrivateIPList_ {};
      // The type of the public IP address in the intrusion event. Valid values:
      // 
      // *   **EIP**: the elastic IP address (EIP)
      // *   **EcsPublicIP**: the public IP address of an Elastic Compute Service (ECS) instance
      // *   **EcsEIP**: the EIP of an ECS instance
      // *   **NatPublicIP**: the public IP address of a NAT gateway
      // *   **NatEIP**: the EIP of a NAT gateway
      shared_ptr<string> resourceType_ {};
      // The ID of the rule that is used to detect the intrusion event.
      shared_ptr<string> ruleId_ {};
      // The status of the firewall. Valid values:
      // 
      // *   **1**: alerting
      // *   **2**: blocking
      shared_ptr<int32_t> ruleResult_ {};
      // The module of the rule that is used to detect the intrusion event. Valid values:
      // 
      // *   **1**: basic protection
      // *   **2**: virtual patching
      // *   **4**: threat intelligence
      shared_ptr<int32_t> ruleSource_ {};
      // The source IP address that is included in the intrusion event.
      shared_ptr<string> srcIP_ {};
      // The tag added to the source IP address. The tag helps identify whether the source IP address is a back-to-origin IP address for a cloud service.
      shared_ptr<string> srcIPTag_ {};
      shared_ptr<vector<string>> srcIPTags_ {};
      // An array that consists of the source private IP addresses in the intrusion event.
      shared_ptr<vector<string>> srcPrivateIPList_ {};
      // The tag added to the threat intelligence that is provided for major events.
      shared_ptr<string> tag_ {};
      // The information about the destination VPC of the intrusion event. The value is a struct that contains the following parameters: **EcsInstanceId**, **EcsInstanceName**, **NetworkInstanceId**, **NetworkInstanceName**, and **RegionNo**.\\
      // ********************
      shared_ptr<DataList::VpcDstInfo> vpcDstInfo_ {};
      // The information about the source VPC of the intrusion event. The value is a struct that contains the following parameters: **EcsInstanceId**, **EcsInstanceName**, **NetworkInstanceId**, **NetworkInstanceName**, and **RegionNo**.\\
      // ********************
      shared_ptr<DataList::VpcSrcInfo> vpcSrcInfo_ {};
      // The risk level of the intrusion event. Valid values:
      // 
      // *   **1**: low
      // *   **2**: medium
      // *   **3**: high
      shared_ptr<int32_t> vulLevel_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeRiskEventGroupResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeRiskEventGroupResponseBody::DataList>) };
    inline vector<DescribeRiskEventGroupResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeRiskEventGroupResponseBody::DataList>) };
    inline DescribeRiskEventGroupResponseBody& setDataList(const vector<DescribeRiskEventGroupResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeRiskEventGroupResponseBody& setDataList(vector<DescribeRiskEventGroupResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRiskEventGroupResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the details of the intrusion events.
    shared_ptr<vector<DescribeRiskEventGroupResponseBody::DataList>> dataList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of risk events.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
