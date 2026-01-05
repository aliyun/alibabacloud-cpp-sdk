// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODY_HPP_
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
  class DescribeRecommendInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRecommendInstanceTypeResponseBody() = default ;
    DescribeRecommendInstanceTypeResponseBody(const DescribeRecommendInstanceTypeResponseBody &) = default ;
    DescribeRecommendInstanceTypeResponseBody(DescribeRecommendInstanceTypeResponseBody &&) = default ;
    DescribeRecommendInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBody() = default ;
    DescribeRecommendInstanceTypeResponseBody& operator=(const DescribeRecommendInstanceTypeResponseBody &) = default ;
    DescribeRecommendInstanceTypeResponseBody& operator=(DescribeRecommendInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RecommendInstanceType, recommendInstanceType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RecommendInstanceType, recommendInstanceType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecommendInstanceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecommendInstanceType& obj) { 
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(Zones, zones_);
        };
        friend void from_json(const Darabonba::Json& j, RecommendInstanceType& obj) { 
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(Zones, zones_);
        };
        RecommendInstanceType() = default ;
        RecommendInstanceType(const RecommendInstanceType &) = default ;
        RecommendInstanceType(RecommendInstanceType &&) = default ;
        RecommendInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecommendInstanceType() = default ;
        RecommendInstanceType& operator=(const RecommendInstanceType &) = default ;
        RecommendInstanceType& operator=(RecommendInstanceType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Zones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Zones& obj) { 
            DARABONBA_PTR_TO_JSON(zone, zone_);
          };
          friend void from_json(const Darabonba::Json& j, Zones& obj) { 
            DARABONBA_PTR_FROM_JSON(zone, zone_);
          };
          Zones() = default ;
          Zones(const Zones &) = default ;
          Zones(Zones &&) = default ;
          Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Zones() = default ;
          Zones& operator=(const Zones &) = default ;
          Zones& operator=(Zones &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Zone : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Zone& obj) { 
              DARABONBA_PTR_TO_JSON(NetworkTypes, networkTypes_);
              DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
            };
            friend void from_json(const Darabonba::Json& j, Zone& obj) { 
              DARABONBA_PTR_FROM_JSON(NetworkTypes, networkTypes_);
              DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
            };
            Zone() = default ;
            Zone(const Zone &) = default ;
            Zone(Zone &&) = default ;
            Zone(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Zone() = default ;
            Zone& operator=(const Zone &) = default ;
            Zone& operator=(Zone &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class NetworkTypes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NetworkTypes& obj) { 
                DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
              };
              friend void from_json(const Darabonba::Json& j, NetworkTypes& obj) { 
                DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
              };
              NetworkTypes() = default ;
              NetworkTypes(const NetworkTypes &) = default ;
              NetworkTypes(NetworkTypes &&) = default ;
              NetworkTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NetworkTypes() = default ;
              NetworkTypes& operator=(const NetworkTypes &) = default ;
              NetworkTypes& operator=(NetworkTypes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->networkType_ == nullptr; };
              // networkType Field Functions 
              bool hasNetworkType() const { return this->networkType_ != nullptr;};
              void deleteNetworkType() { this->networkType_ = nullptr;};
              inline const vector<string> & getNetworkType() const { DARABONBA_PTR_GET_CONST(networkType_, vector<string>) };
              inline vector<string> getNetworkType() { DARABONBA_PTR_GET(networkType_, vector<string>) };
              inline NetworkTypes& setNetworkType(const vector<string> & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
              inline NetworkTypes& setNetworkType(vector<string> && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


            protected:
              shared_ptr<vector<string>> networkType_ {};
            };

            virtual bool empty() const override { return this->networkTypes_ == nullptr
        && this->zoneNo_ == nullptr; };
            // networkTypes Field Functions 
            bool hasNetworkTypes() const { return this->networkTypes_ != nullptr;};
            void deleteNetworkTypes() { this->networkTypes_ = nullptr;};
            inline const Zone::NetworkTypes & getNetworkTypes() const { DARABONBA_PTR_GET_CONST(networkTypes_, Zone::NetworkTypes) };
            inline Zone::NetworkTypes getNetworkTypes() { DARABONBA_PTR_GET(networkTypes_, Zone::NetworkTypes) };
            inline Zone& setNetworkTypes(const Zone::NetworkTypes & networkTypes) { DARABONBA_PTR_SET_VALUE(networkTypes_, networkTypes) };
            inline Zone& setNetworkTypes(Zone::NetworkTypes && networkTypes) { DARABONBA_PTR_SET_RVALUE(networkTypes_, networkTypes) };


            // zoneNo Field Functions 
            bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
            void deleteZoneNo() { this->zoneNo_ = nullptr;};
            inline string getZoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
            inline Zone& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


          protected:
            // The details of the network types of the instance type.
            shared_ptr<Zone::NetworkTypes> networkTypes_ {};
            // The ID of the zone in which the instance type is available.
            shared_ptr<string> zoneNo_ {};
          };

          virtual bool empty() const override { return this->zone_ == nullptr; };
          // zone Field Functions 
          bool hasZone() const { return this->zone_ != nullptr;};
          void deleteZone() { this->zone_ = nullptr;};
          inline const vector<Zones::Zone> & getZone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Zones::Zone>) };
          inline vector<Zones::Zone> getZone() { DARABONBA_PTR_GET(zone_, vector<Zones::Zone>) };
          inline Zones& setZone(const vector<Zones::Zone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
          inline Zones& setZone(vector<Zones::Zone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


        protected:
          shared_ptr<vector<Zones::Zone>> zone_ {};
        };

        class InstanceType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceType& obj) { 
            DARABONBA_PTR_TO_JSON(Cores, cores_);
            DARABONBA_PTR_TO_JSON(Generation, generation_);
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
            DARABONBA_PTR_TO_JSON(Memory, memory_);
            DARABONBA_PTR_TO_JSON(SupportIoOptimized, supportIoOptimized_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
            DARABONBA_PTR_FROM_JSON(Cores, cores_);
            DARABONBA_PTR_FROM_JSON(Generation, generation_);
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
            DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
            DARABONBA_PTR_FROM_JSON(Memory, memory_);
            DARABONBA_PTR_FROM_JSON(SupportIoOptimized, supportIoOptimized_);
          };
          InstanceType() = default ;
          InstanceType(const InstanceType &) = default ;
          InstanceType(InstanceType &&) = default ;
          InstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceType() = default ;
          InstanceType& operator=(const InstanceType &) = default ;
          InstanceType& operator=(InstanceType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cores_ == nullptr
        && this->generation_ == nullptr && this->instanceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->memory_ == nullptr && this->supportIoOptimized_ == nullptr; };
          // cores Field Functions 
          bool hasCores() const { return this->cores_ != nullptr;};
          void deleteCores() { this->cores_ = nullptr;};
          inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
          inline InstanceType& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


          // generation Field Functions 
          bool hasGeneration() const { return this->generation_ != nullptr;};
          void deleteGeneration() { this->generation_ = nullptr;};
          inline string getGeneration() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
          inline InstanceType& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline InstanceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // instanceTypeFamily Field Functions 
          bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
          void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
          inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
          inline InstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


          // memory Field Functions 
          bool hasMemory() const { return this->memory_ != nullptr;};
          void deleteMemory() { this->memory_ = nullptr;};
          inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
          inline InstanceType& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


          // supportIoOptimized Field Functions 
          bool hasSupportIoOptimized() const { return this->supportIoOptimized_ != nullptr;};
          void deleteSupportIoOptimized() { this->supportIoOptimized_ = nullptr;};
          inline string getSupportIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(supportIoOptimized_, "") };
          inline InstanceType& setSupportIoOptimized(string supportIoOptimized) { DARABONBA_PTR_SET_VALUE(supportIoOptimized_, supportIoOptimized) };


        protected:
          // The number of vCPUs of the instance type.
          shared_ptr<int32_t> cores_ {};
          // The generation of the instance family.
          shared_ptr<string> generation_ {};
          // The name of the instance type.
          shared_ptr<string> instanceType_ {};
          // The instance family.
          shared_ptr<string> instanceTypeFamily_ {};
          // The memory size of the instance type. Unit: MB.
          shared_ptr<int32_t> memory_ {};
          // Indicates whether the instance type supports I/O optimization.
          shared_ptr<string> supportIoOptimized_ {};
        };

        virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr && this->networkType_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr
        && this->scene_ == nullptr && this->spotStrategy_ == nullptr && this->zoneId_ == nullptr && this->zones_ == nullptr; };
        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline RecommendInstanceType& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline RecommendInstanceType& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline const RecommendInstanceType::InstanceType & getInstanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, RecommendInstanceType::InstanceType) };
        inline RecommendInstanceType::InstanceType getInstanceType() { DARABONBA_PTR_GET(instanceType_, RecommendInstanceType::InstanceType) };
        inline RecommendInstanceType& setInstanceType(const RecommendInstanceType::InstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
        inline RecommendInstanceType& setInstanceType(RecommendInstanceType::InstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline RecommendInstanceType& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline RecommendInstanceType& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RecommendInstanceType& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline RecommendInstanceType& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // spotStrategy Field Functions 
        bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
        void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
        inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
        inline RecommendInstanceType& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline RecommendInstanceType& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zones Field Functions 
        bool hasZones() const { return this->zones_ != nullptr;};
        void deleteZones() { this->zones_ = nullptr;};
        inline const RecommendInstanceType::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, RecommendInstanceType::Zones) };
        inline RecommendInstanceType::Zones getZones() { DARABONBA_PTR_GET(zones_, RecommendInstanceType::Zones) };
        inline RecommendInstanceType& setZones(const RecommendInstanceType::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
        inline RecommendInstanceType& setZones(RecommendInstanceType::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


      protected:
        // The commodity code of the instance type.
        shared_ptr<string> commodityCode_ {};
        // The billing method of the instances.
        shared_ptr<string> instanceChargeType_ {};
        // The details of the instance type.
        shared_ptr<RecommendInstanceType::InstanceType> instanceType_ {};
        // The network type of the ECS instances.
        shared_ptr<string> networkType_ {};
        // The priority based on which the system sorts the instance types.
        shared_ptr<int32_t> priority_ {};
        // The ID of the region in which the instance type is available.
        shared_ptr<string> regionId_ {};
        // The scenario in which the instance type is recommended.
        shared_ptr<string> scene_ {};
        // The bidding policy for the spot instances.
        shared_ptr<string> spotStrategy_ {};
        // The ID of the zone in which the instance type is available.
        shared_ptr<string> zoneId_ {};
        // The details of the zones in which the instance type is available.
        shared_ptr<RecommendInstanceType::Zones> zones_ {};
      };

      virtual bool empty() const override { return this->recommendInstanceType_ == nullptr; };
      // recommendInstanceType Field Functions 
      bool hasRecommendInstanceType() const { return this->recommendInstanceType_ != nullptr;};
      void deleteRecommendInstanceType() { this->recommendInstanceType_ = nullptr;};
      inline const vector<Data::RecommendInstanceType> & getRecommendInstanceType() const { DARABONBA_PTR_GET_CONST(recommendInstanceType_, vector<Data::RecommendInstanceType>) };
      inline vector<Data::RecommendInstanceType> getRecommendInstanceType() { DARABONBA_PTR_GET(recommendInstanceType_, vector<Data::RecommendInstanceType>) };
      inline Data& setRecommendInstanceType(const vector<Data::RecommendInstanceType> & recommendInstanceType) { DARABONBA_PTR_SET_VALUE(recommendInstanceType_, recommendInstanceType) };
      inline Data& setRecommendInstanceType(vector<Data::RecommendInstanceType> && recommendInstanceType) { DARABONBA_PTR_SET_RVALUE(recommendInstanceType_, recommendInstanceType) };


    protected:
      shared_ptr<vector<Data::RecommendInstanceType>> recommendInstanceType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeRecommendInstanceTypeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeRecommendInstanceTypeResponseBody::Data) };
    inline DescribeRecommendInstanceTypeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeRecommendInstanceTypeResponseBody::Data) };
    inline DescribeRecommendInstanceTypeResponseBody& setData(const DescribeRecommendInstanceTypeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeRecommendInstanceTypeResponseBody& setData(DescribeRecommendInstanceTypeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecommendInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the recommended instance types.
    shared_ptr<DescribeRecommendInstanceTypeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
