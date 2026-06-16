// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstanceIpAddressResponseBody() = default ;
    DescribeInstanceIpAddressResponseBody(const DescribeInstanceIpAddressResponseBody &) = default ;
    DescribeInstanceIpAddressResponseBody(DescribeInstanceIpAddressResponseBody &&) = default ;
    DescribeInstanceIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIpAddressResponseBody() = default ;
    DescribeInstanceIpAddressResponseBody& operator=(const DescribeInstanceIpAddressResponseBody &) = default ;
    DescribeInstanceIpAddressResponseBody& operator=(DescribeInstanceIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(IpAddressConfig, ipAddressConfig_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(IpAddressConfig, ipAddressConfig_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpAddressConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpAddressConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BlackholeThreshold, blackholeThreshold_);
          DARABONBA_PTR_TO_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
          DARABONBA_PTR_TO_JSON(DefensePpsThreshold, defensePpsThreshold_);
          DARABONBA_PTR_TO_JSON(ElasticThreshold, elasticThreshold_);
          DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
          DARABONBA_PTR_TO_JSON(IpStatus, ipStatus_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(IsBgppack, isBgppack_);
          DARABONBA_PTR_TO_JSON(IsFullProtection, isFullProtection_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, IpAddressConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BlackholeThreshold, blackholeThreshold_);
          DARABONBA_PTR_FROM_JSON(DefenseBpsThreshold, defenseBpsThreshold_);
          DARABONBA_PTR_FROM_JSON(DefensePpsThreshold, defensePpsThreshold_);
          DARABONBA_PTR_FROM_JSON(ElasticThreshold, elasticThreshold_);
          DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
          DARABONBA_PTR_FROM_JSON(IpStatus, ipStatus_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(IsBgppack, isBgppack_);
          DARABONBA_PTR_FROM_JSON(IsFullProtection, isFullProtection_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        IpAddressConfig() = default ;
        IpAddressConfig(const IpAddressConfig &) = default ;
        IpAddressConfig(IpAddressConfig &&) = default ;
        IpAddressConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpAddressConfig() = default ;
        IpAddressConfig& operator=(const IpAddressConfig &) = default ;
        IpAddressConfig& operator=(IpAddressConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blackholeThreshold_ == nullptr
        && this->defenseBpsThreshold_ == nullptr && this->defensePpsThreshold_ == nullptr && this->elasticThreshold_ == nullptr && this->instanceIp_ == nullptr && this->ipStatus_ == nullptr
        && this->ipVersion_ == nullptr && this->isBgppack_ == nullptr && this->isFullProtection_ == nullptr && this->regionId_ == nullptr; };
        // blackholeThreshold Field Functions 
        bool hasBlackholeThreshold() const { return this->blackholeThreshold_ != nullptr;};
        void deleteBlackholeThreshold() { this->blackholeThreshold_ = nullptr;};
        inline int32_t getBlackholeThreshold() const { DARABONBA_PTR_GET_DEFAULT(blackholeThreshold_, 0) };
        inline IpAddressConfig& setBlackholeThreshold(int32_t blackholeThreshold) { DARABONBA_PTR_SET_VALUE(blackholeThreshold_, blackholeThreshold) };


        // defenseBpsThreshold Field Functions 
        bool hasDefenseBpsThreshold() const { return this->defenseBpsThreshold_ != nullptr;};
        void deleteDefenseBpsThreshold() { this->defenseBpsThreshold_ = nullptr;};
        inline int32_t getDefenseBpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defenseBpsThreshold_, 0) };
        inline IpAddressConfig& setDefenseBpsThreshold(int32_t defenseBpsThreshold) { DARABONBA_PTR_SET_VALUE(defenseBpsThreshold_, defenseBpsThreshold) };


        // defensePpsThreshold Field Functions 
        bool hasDefensePpsThreshold() const { return this->defensePpsThreshold_ != nullptr;};
        void deleteDefensePpsThreshold() { this->defensePpsThreshold_ = nullptr;};
        inline int32_t getDefensePpsThreshold() const { DARABONBA_PTR_GET_DEFAULT(defensePpsThreshold_, 0) };
        inline IpAddressConfig& setDefensePpsThreshold(int32_t defensePpsThreshold) { DARABONBA_PTR_SET_VALUE(defensePpsThreshold_, defensePpsThreshold) };


        // elasticThreshold Field Functions 
        bool hasElasticThreshold() const { return this->elasticThreshold_ != nullptr;};
        void deleteElasticThreshold() { this->elasticThreshold_ = nullptr;};
        inline int32_t getElasticThreshold() const { DARABONBA_PTR_GET_DEFAULT(elasticThreshold_, 0) };
        inline IpAddressConfig& setElasticThreshold(int32_t elasticThreshold) { DARABONBA_PTR_SET_VALUE(elasticThreshold_, elasticThreshold) };


        // instanceIp Field Functions 
        bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
        void deleteInstanceIp() { this->instanceIp_ = nullptr;};
        inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
        inline IpAddressConfig& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


        // ipStatus Field Functions 
        bool hasIpStatus() const { return this->ipStatus_ != nullptr;};
        void deleteIpStatus() { this->ipStatus_ = nullptr;};
        inline string getIpStatus() const { DARABONBA_PTR_GET_DEFAULT(ipStatus_, "") };
        inline IpAddressConfig& setIpStatus(string ipStatus) { DARABONBA_PTR_SET_VALUE(ipStatus_, ipStatus) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline IpAddressConfig& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // isBgppack Field Functions 
        bool hasIsBgppack() const { return this->isBgppack_ != nullptr;};
        void deleteIsBgppack() { this->isBgppack_ = nullptr;};
        inline bool getIsBgppack() const { DARABONBA_PTR_GET_DEFAULT(isBgppack_, false) };
        inline IpAddressConfig& setIsBgppack(bool isBgppack) { DARABONBA_PTR_SET_VALUE(isBgppack_, isBgppack) };


        // isFullProtection Field Functions 
        bool hasIsFullProtection() const { return this->isFullProtection_ != nullptr;};
        void deleteIsFullProtection() { this->isFullProtection_ = nullptr;};
        inline int32_t getIsFullProtection() const { DARABONBA_PTR_GET_DEFAULT(isFullProtection_, 0) };
        inline IpAddressConfig& setIsFullProtection(int32_t isFullProtection) { DARABONBA_PTR_SET_VALUE(isFullProtection_, isFullProtection) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline IpAddressConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // The basic protection threshold for the asset. Unit: Mbit/s.
        shared_ptr<int32_t> blackholeThreshold_ {};
        // The traffic scrubbing threshold for the asset measured in Mbit/s. Unit: Mbit/s.
        shared_ptr<int32_t> defenseBpsThreshold_ {};
        // The traffic scrubbing threshold for the asset measured in packets per second (PPS). Unit: PPS.
        shared_ptr<int32_t> defensePpsThreshold_ {};
        // The burstable protection threshold for the asset. Unit: Mbit/s.
        shared_ptr<int32_t> elasticThreshold_ {};
        // The IP address of the asset.
        shared_ptr<string> instanceIp_ {};
        // The DDoS mitigation status of the asset. Valid values:
        // 
        // - **mitigating**: indicates that traffic scrubbing is in progress.
        // 
        // - **blackholed**: indicates that blackhole filtering is triggered for the asset.
        // 
        // - **normal**: indicates that no DDoS attacks are launched against the asset.
        shared_ptr<string> ipStatus_ {};
        // The IP version of the IP address. Valid values:
        // 
        // - **v4**: IPv4.
        // 
        // - **v6**: IPv6.
        shared_ptr<string> ipVersion_ {};
        // Indicates whether the asset is added to the instance. Valid values:
        // 
        // - **true**
        // 
        // - **false**
        shared_ptr<bool> isBgppack_ {};
        // Indicates whether best-effort protection is enabled for the asset. Valid values:
        // 
        // - **0**: no.
        // 
        // - **1**: yes.
        shared_ptr<int32_t> isFullProtection_ {};
        // The region code of the asset.
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr && this->ipAddressConfig_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline InstanceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline InstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ipAddressConfig Field Functions 
      bool hasIpAddressConfig() const { return this->ipAddressConfig_ != nullptr;};
      void deleteIpAddressConfig() { this->ipAddressConfig_ = nullptr;};
      inline const vector<InstanceList::IpAddressConfig> & getIpAddressConfig() const { DARABONBA_PTR_GET_CONST(ipAddressConfig_, vector<InstanceList::IpAddressConfig>) };
      inline vector<InstanceList::IpAddressConfig> getIpAddressConfig() { DARABONBA_PTR_GET(ipAddressConfig_, vector<InstanceList::IpAddressConfig>) };
      inline InstanceList& setIpAddressConfig(const vector<InstanceList::IpAddressConfig> & ipAddressConfig) { DARABONBA_PTR_SET_VALUE(ipAddressConfig_, ipAddressConfig) };
      inline InstanceList& setIpAddressConfig(vector<InstanceList::IpAddressConfig> && ipAddressConfig) { DARABONBA_PTR_SET_RVALUE(ipAddressConfig_, ipAddressConfig) };


    protected:
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The DDoS mitigation status of the instance. Valid values:
      // 
      // - **normal**: not under DDoS attacks.
      // 
      // - **abnormal**: under DDoS attacks.
      shared_ptr<string> instanceStatus_ {};
      // The type of the asset. Valid values:
      // 
      // - **ecs**
      // 
      // - **slb**
      // 
      // - **eip**
      shared_ptr<string> instanceType_ {};
      // An array that consists of the details of the asset.
      shared_ptr<vector<InstanceList::IpAddressConfig>> ipAddressConfig_ {};
    };

    virtual bool empty() const override { return this->instanceList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<DescribeInstanceIpAddressResponseBody::InstanceList> & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<DescribeInstanceIpAddressResponseBody::InstanceList>) };
    inline vector<DescribeInstanceIpAddressResponseBody::InstanceList> getInstanceList() { DARABONBA_PTR_GET(instanceList_, vector<DescribeInstanceIpAddressResponseBody::InstanceList>) };
    inline DescribeInstanceIpAddressResponseBody& setInstanceList(const vector<DescribeInstanceIpAddressResponseBody::InstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeInstanceIpAddressResponseBody& setInstanceList(vector<DescribeInstanceIpAddressResponseBody::InstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeInstanceIpAddressResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // An array that consists of details of the instance.
    shared_ptr<vector<DescribeInstanceIpAddressResponseBody::InstanceList>> instanceList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of the assets.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
