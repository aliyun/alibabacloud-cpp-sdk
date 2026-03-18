// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeInstanceSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceSpecs, instanceSpecs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceSpecsResponseBody() = default ;
    DescribeInstanceSpecsResponseBody(const DescribeInstanceSpecsResponseBody &) = default ;
    DescribeInstanceSpecsResponseBody(DescribeInstanceSpecsResponseBody &&) = default ;
    DescribeInstanceSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSpecsResponseBody() = default ;
    DescribeInstanceSpecsResponseBody& operator=(const DescribeInstanceSpecsResponseBody &) = default ;
    DescribeInstanceSpecsResponseBody& operator=(DescribeInstanceSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableDefenseTimes, availableDefenseTimes_);
        DARABONBA_PTR_TO_JSON(AvailableDeleteBlackholeCount, availableDeleteBlackholeCount_);
        DARABONBA_PTR_TO_JSON(DefenseTimesPercent, defenseTimesPercent_);
        DARABONBA_PTR_TO_JSON(DowngradeStatus, downgradeStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(IsFullDefenseMode, isFullDefenseMode_);
        DARABONBA_PTR_TO_JSON(PackConfig, packConfig_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(TotalDefenseTimes, totalDefenseTimes_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableDefenseTimes, availableDefenseTimes_);
        DARABONBA_PTR_FROM_JSON(AvailableDeleteBlackholeCount, availableDeleteBlackholeCount_);
        DARABONBA_PTR_FROM_JSON(DefenseTimesPercent, defenseTimesPercent_);
        DARABONBA_PTR_FROM_JSON(DowngradeStatus, downgradeStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(IsFullDefenseMode, isFullDefenseMode_);
        DARABONBA_PTR_FROM_JSON(PackConfig, packConfig_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(TotalDefenseTimes, totalDefenseTimes_);
      };
      InstanceSpecs() = default ;
      InstanceSpecs(const InstanceSpecs &) = default ;
      InstanceSpecs(InstanceSpecs &&) = default ;
      InstanceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceSpecs() = default ;
      InstanceSpecs& operator=(const InstanceSpecs &) = default ;
      InstanceSpecs& operator=(InstanceSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PackConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PackConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(BindIpCount, bindIpCount_);
          DARABONBA_PTR_TO_JSON(ElasticBwMbps, elasticBwMbps_);
          DARABONBA_PTR_TO_JSON(ElasticBwMode, elasticBwMode_);
          DARABONBA_PTR_TO_JSON(IpAdvanceThre, ipAdvanceThre_);
          DARABONBA_PTR_TO_JSON(IpBasicThre, ipBasicThre_);
          DARABONBA_PTR_TO_JSON(IpSpec, ipSpec_);
          DARABONBA_PTR_TO_JSON(NormalBandwidth, normalBandwidth_);
          DARABONBA_PTR_TO_JSON(PackAdvThre, packAdvThre_);
          DARABONBA_PTR_TO_JSON(PackBasicThre, packBasicThre_);
        };
        friend void from_json(const Darabonba::Json& j, PackConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(BindIpCount, bindIpCount_);
          DARABONBA_PTR_FROM_JSON(ElasticBwMbps, elasticBwMbps_);
          DARABONBA_PTR_FROM_JSON(ElasticBwMode, elasticBwMode_);
          DARABONBA_PTR_FROM_JSON(IpAdvanceThre, ipAdvanceThre_);
          DARABONBA_PTR_FROM_JSON(IpBasicThre, ipBasicThre_);
          DARABONBA_PTR_FROM_JSON(IpSpec, ipSpec_);
          DARABONBA_PTR_FROM_JSON(NormalBandwidth, normalBandwidth_);
          DARABONBA_PTR_FROM_JSON(PackAdvThre, packAdvThre_);
          DARABONBA_PTR_FROM_JSON(PackBasicThre, packBasicThre_);
        };
        PackConfig() = default ;
        PackConfig(const PackConfig &) = default ;
        PackConfig(PackConfig &&) = default ;
        PackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PackConfig() = default ;
        PackConfig& operator=(const PackConfig &) = default ;
        PackConfig& operator=(PackConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->bindIpCount_ == nullptr && this->elasticBwMbps_ == nullptr && this->elasticBwMode_ == nullptr && this->ipAdvanceThre_ == nullptr && this->ipBasicThre_ == nullptr
        && this->ipSpec_ == nullptr && this->normalBandwidth_ == nullptr && this->packAdvThre_ == nullptr && this->packBasicThre_ == nullptr; };
        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
        inline PackConfig& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // bindIpCount Field Functions 
        bool hasBindIpCount() const { return this->bindIpCount_ != nullptr;};
        void deleteBindIpCount() { this->bindIpCount_ = nullptr;};
        inline int32_t getBindIpCount() const { DARABONBA_PTR_GET_DEFAULT(bindIpCount_, 0) };
        inline PackConfig& setBindIpCount(int32_t bindIpCount) { DARABONBA_PTR_SET_VALUE(bindIpCount_, bindIpCount) };


        // elasticBwMbps Field Functions 
        bool hasElasticBwMbps() const { return this->elasticBwMbps_ != nullptr;};
        void deleteElasticBwMbps() { this->elasticBwMbps_ = nullptr;};
        inline int32_t getElasticBwMbps() const { DARABONBA_PTR_GET_DEFAULT(elasticBwMbps_, 0) };
        inline PackConfig& setElasticBwMbps(int32_t elasticBwMbps) { DARABONBA_PTR_SET_VALUE(elasticBwMbps_, elasticBwMbps) };


        // elasticBwMode Field Functions 
        bool hasElasticBwMode() const { return this->elasticBwMode_ != nullptr;};
        void deleteElasticBwMode() { this->elasticBwMode_ = nullptr;};
        inline string getElasticBwMode() const { DARABONBA_PTR_GET_DEFAULT(elasticBwMode_, "") };
        inline PackConfig& setElasticBwMode(string elasticBwMode) { DARABONBA_PTR_SET_VALUE(elasticBwMode_, elasticBwMode) };


        // ipAdvanceThre Field Functions 
        bool hasIpAdvanceThre() const { return this->ipAdvanceThre_ != nullptr;};
        void deleteIpAdvanceThre() { this->ipAdvanceThre_ = nullptr;};
        inline int32_t getIpAdvanceThre() const { DARABONBA_PTR_GET_DEFAULT(ipAdvanceThre_, 0) };
        inline PackConfig& setIpAdvanceThre(int32_t ipAdvanceThre) { DARABONBA_PTR_SET_VALUE(ipAdvanceThre_, ipAdvanceThre) };


        // ipBasicThre Field Functions 
        bool hasIpBasicThre() const { return this->ipBasicThre_ != nullptr;};
        void deleteIpBasicThre() { this->ipBasicThre_ = nullptr;};
        inline int32_t getIpBasicThre() const { DARABONBA_PTR_GET_DEFAULT(ipBasicThre_, 0) };
        inline PackConfig& setIpBasicThre(int32_t ipBasicThre) { DARABONBA_PTR_SET_VALUE(ipBasicThre_, ipBasicThre) };


        // ipSpec Field Functions 
        bool hasIpSpec() const { return this->ipSpec_ != nullptr;};
        void deleteIpSpec() { this->ipSpec_ = nullptr;};
        inline int32_t getIpSpec() const { DARABONBA_PTR_GET_DEFAULT(ipSpec_, 0) };
        inline PackConfig& setIpSpec(int32_t ipSpec) { DARABONBA_PTR_SET_VALUE(ipSpec_, ipSpec) };


        // normalBandwidth Field Functions 
        bool hasNormalBandwidth() const { return this->normalBandwidth_ != nullptr;};
        void deleteNormalBandwidth() { this->normalBandwidth_ = nullptr;};
        inline int32_t getNormalBandwidth() const { DARABONBA_PTR_GET_DEFAULT(normalBandwidth_, 0) };
        inline PackConfig& setNormalBandwidth(int32_t normalBandwidth) { DARABONBA_PTR_SET_VALUE(normalBandwidth_, normalBandwidth) };


        // packAdvThre Field Functions 
        bool hasPackAdvThre() const { return this->packAdvThre_ != nullptr;};
        void deletePackAdvThre() { this->packAdvThre_ = nullptr;};
        inline int32_t getPackAdvThre() const { DARABONBA_PTR_GET_DEFAULT(packAdvThre_, 0) };
        inline PackConfig& setPackAdvThre(int32_t packAdvThre) { DARABONBA_PTR_SET_VALUE(packAdvThre_, packAdvThre) };


        // packBasicThre Field Functions 
        bool hasPackBasicThre() const { return this->packBasicThre_ != nullptr;};
        void deletePackBasicThre() { this->packBasicThre_ = nullptr;};
        inline int32_t getPackBasicThre() const { DARABONBA_PTR_GET_DEFAULT(packBasicThre_, 0) };
        inline PackConfig& setPackBasicThre(int32_t packBasicThre) { DARABONBA_PTR_SET_VALUE(packBasicThre_, packBasicThre) };


      protected:
        // The bandwidth. Unit: Gbit/s.
        shared_ptr<int64_t> bandwidth_ {};
        // The number of IP addresses that are protected by the Anti-DDoS Origin Enterprise instance.
        shared_ptr<int32_t> bindIpCount_ {};
        // The burstable clean bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> elasticBwMbps_ {};
        // The metering method of burstable clean bandwidth. Valid values:
        // 
        // *   **month**: the monthly 95th percentile metering method.
        // *   **day**: the daily 95th percentile metering method.
        shared_ptr<string> elasticBwMode_ {};
        // The burstable protection bandwidth of each protected IP address. Unit: Gbit/s.
        shared_ptr<int32_t> ipAdvanceThre_ {};
        // The basic protection bandwidth of each protected IP address. Unit: Gbit/s.
        shared_ptr<int32_t> ipBasicThre_ {};
        // The number of IP addresses that can be protected by the Anti-DDoS Origin Enterprise instance.
        shared_ptr<int32_t> ipSpec_ {};
        // The clean bandwidth. Unit: Mbit/s.
        shared_ptr<int32_t> normalBandwidth_ {};
        // The burstable protection bandwidth of the Anti-DDoS Origin instance. Unit: Gbit/s.
        shared_ptr<int32_t> packAdvThre_ {};
        // The basic protection bandwidth of the Anti-DDoS Origin instance. Unit: Gbit/s.
        shared_ptr<int32_t> packBasicThre_ {};
      };

      virtual bool empty() const override { return this->availableDefenseTimes_ == nullptr
        && this->availableDeleteBlackholeCount_ == nullptr && this->defenseTimesPercent_ == nullptr && this->downgradeStatus_ == nullptr && this->instanceId_ == nullptr && this->isFullDefenseMode_ == nullptr
        && this->packConfig_ == nullptr && this->region_ == nullptr && this->totalDefenseTimes_ == nullptr; };
      // availableDefenseTimes Field Functions 
      bool hasAvailableDefenseTimes() const { return this->availableDefenseTimes_ != nullptr;};
      void deleteAvailableDefenseTimes() { this->availableDefenseTimes_ = nullptr;};
      inline int32_t getAvailableDefenseTimes() const { DARABONBA_PTR_GET_DEFAULT(availableDefenseTimes_, 0) };
      inline InstanceSpecs& setAvailableDefenseTimes(int32_t availableDefenseTimes) { DARABONBA_PTR_SET_VALUE(availableDefenseTimes_, availableDefenseTimes) };


      // availableDeleteBlackholeCount Field Functions 
      bool hasAvailableDeleteBlackholeCount() const { return this->availableDeleteBlackholeCount_ != nullptr;};
      void deleteAvailableDeleteBlackholeCount() { this->availableDeleteBlackholeCount_ = nullptr;};
      inline string getAvailableDeleteBlackholeCount() const { DARABONBA_PTR_GET_DEFAULT(availableDeleteBlackholeCount_, "") };
      inline InstanceSpecs& setAvailableDeleteBlackholeCount(string availableDeleteBlackholeCount) { DARABONBA_PTR_SET_VALUE(availableDeleteBlackholeCount_, availableDeleteBlackholeCount) };


      // defenseTimesPercent Field Functions 
      bool hasDefenseTimesPercent() const { return this->defenseTimesPercent_ != nullptr;};
      void deleteDefenseTimesPercent() { this->defenseTimesPercent_ = nullptr;};
      inline int32_t getDefenseTimesPercent() const { DARABONBA_PTR_GET_DEFAULT(defenseTimesPercent_, 0) };
      inline InstanceSpecs& setDefenseTimesPercent(int32_t defenseTimesPercent) { DARABONBA_PTR_SET_VALUE(defenseTimesPercent_, defenseTimesPercent) };


      // downgradeStatus Field Functions 
      bool hasDowngradeStatus() const { return this->downgradeStatus_ != nullptr;};
      void deleteDowngradeStatus() { this->downgradeStatus_ = nullptr;};
      inline int32_t getDowngradeStatus() const { DARABONBA_PTR_GET_DEFAULT(downgradeStatus_, 0) };
      inline InstanceSpecs& setDowngradeStatus(int32_t downgradeStatus) { DARABONBA_PTR_SET_VALUE(downgradeStatus_, downgradeStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceSpecs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isFullDefenseMode Field Functions 
      bool hasIsFullDefenseMode() const { return this->isFullDefenseMode_ != nullptr;};
      void deleteIsFullDefenseMode() { this->isFullDefenseMode_ = nullptr;};
      inline int32_t getIsFullDefenseMode() const { DARABONBA_PTR_GET_DEFAULT(isFullDefenseMode_, 0) };
      inline InstanceSpecs& setIsFullDefenseMode(int32_t isFullDefenseMode) { DARABONBA_PTR_SET_VALUE(isFullDefenseMode_, isFullDefenseMode) };


      // packConfig Field Functions 
      bool hasPackConfig() const { return this->packConfig_ != nullptr;};
      void deletePackConfig() { this->packConfig_ = nullptr;};
      inline const InstanceSpecs::PackConfig & getPackConfig() const { DARABONBA_PTR_GET_CONST(packConfig_, InstanceSpecs::PackConfig) };
      inline InstanceSpecs::PackConfig getPackConfig() { DARABONBA_PTR_GET(packConfig_, InstanceSpecs::PackConfig) };
      inline InstanceSpecs& setPackConfig(const InstanceSpecs::PackConfig & packConfig) { DARABONBA_PTR_SET_VALUE(packConfig_, packConfig) };
      inline InstanceSpecs& setPackConfig(InstanceSpecs::PackConfig && packConfig) { DARABONBA_PTR_SET_RVALUE(packConfig_, packConfig) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline InstanceSpecs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // totalDefenseTimes Field Functions 
      bool hasTotalDefenseTimes() const { return this->totalDefenseTimes_ != nullptr;};
      void deleteTotalDefenseTimes() { this->totalDefenseTimes_ = nullptr;};
      inline int32_t getTotalDefenseTimes() const { DARABONBA_PTR_GET_DEFAULT(totalDefenseTimes_, 0) };
      inline InstanceSpecs& setTotalDefenseTimes(int32_t totalDefenseTimes) { DARABONBA_PTR_SET_VALUE(totalDefenseTimes_, totalDefenseTimes) };


    protected:
      // The available best-effort protection sessions.
      shared_ptr<int32_t> availableDefenseTimes_ {};
      // The number of times that blackhole filtering can be deactivated.
      shared_ptr<string> availableDeleteBlackholeCount_ {};
      // The percentage of the used best-effort protection sessions. Unit: %.
      shared_ptr<int32_t> defenseTimesPercent_ {};
      // Indicates whether the instance is downgraded. Valid value:
      // 
      // *   **8**: The instance is downgraded due to excessive bandwidth usage.
      shared_ptr<int32_t> downgradeStatus_ {};
      // The ID of the Anti-DDoS Origin instance.
      shared_ptr<string> instanceId_ {};
      // Indicates whether best-effort protection is enabled. Valid values:
      // 
      // *   **0**: Best-effort protection is disabled.
      // *   **1**: Best-effort protection is enabled.
      shared_ptr<int32_t> isFullDefenseMode_ {};
      // The configurations of the Anti-DDoS Origin instance, including the number of protected IP addresses and protection bandwidth.
      shared_ptr<InstanceSpecs::PackConfig> packConfig_ {};
      // The region ID of the Anti-DDoS Origin instance.
      // 
      // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query the name of the region.
      shared_ptr<string> region_ {};
      // The total best-effort protection sessions.
      shared_ptr<int32_t> totalDefenseTimes_ {};
    };

    virtual bool empty() const override { return this->instanceSpecs_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceSpecs Field Functions 
    bool hasInstanceSpecs() const { return this->instanceSpecs_ != nullptr;};
    void deleteInstanceSpecs() { this->instanceSpecs_ = nullptr;};
    inline const vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> & getInstanceSpecs() const { DARABONBA_PTR_GET_CONST(instanceSpecs_, vector<DescribeInstanceSpecsResponseBody::InstanceSpecs>) };
    inline vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> getInstanceSpecs() { DARABONBA_PTR_GET(instanceSpecs_, vector<DescribeInstanceSpecsResponseBody::InstanceSpecs>) };
    inline DescribeInstanceSpecsResponseBody& setInstanceSpecs(const vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> & instanceSpecs) { DARABONBA_PTR_SET_VALUE(instanceSpecs_, instanceSpecs) };
    inline DescribeInstanceSpecsResponseBody& setInstanceSpecs(vector<DescribeInstanceSpecsResponseBody::InstanceSpecs> && instanceSpecs) { DARABONBA_PTR_SET_RVALUE(instanceSpecs_, instanceSpecs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The specifications of the Anti-DDoS Origin instance, including whether best-effort protection is enabled, the number of available best-effort protection sessions, and the number of used best-effort protection sessions.
    shared_ptr<vector<DescribeInstanceSpecsResponseBody::InstanceSpecs>> instanceSpecs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
