// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODY_HPP_
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
  class DescribeInstanceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTypesResponseBody() = default ;
    DescribeInstanceTypesResponseBody(const DescribeInstanceTypesResponseBody &) = default ;
    DescribeInstanceTypesResponseBody(DescribeInstanceTypesResponseBody &&) = default ;
    DescribeInstanceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBody() = default ;
    DescribeInstanceTypesResponseBody& operator=(const DescribeInstanceTypesResponseBody &) = default ;
    DescribeInstanceTypesResponseBody& operator=(DescribeInstanceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypes& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      InstanceTypes() = default ;
      InstanceTypes(const InstanceTypes &) = default ;
      InstanceTypes(InstanceTypes &&) = default ;
      InstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypes() = default ;
      InstanceTypes& operator=(const InstanceTypes &) = default ;
      InstanceTypes& operator=(InstanceTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceType& obj) { 
          DARABONBA_PTR_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(BaselineCredit, baselineCredit_);
          DARABONBA_PTR_TO_JSON(Clock, clock_);
          DARABONBA_PTR_TO_JSON(CpuArchitecture, cpuArchitecture_);
          DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
          DARABONBA_PTR_TO_JSON(CpuSpeedFrequency, cpuSpeedFrequency_);
          DARABONBA_PTR_TO_JSON(CpuTurboFrequency, cpuTurboFrequency_);
          DARABONBA_PTR_TO_JSON(DiskQuantity, diskQuantity_);
          DARABONBA_PTR_TO_JSON(EnhancedNetwork, enhancedNetwork_);
          DARABONBA_PTR_TO_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
          DARABONBA_PTR_TO_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
          DARABONBA_PTR_TO_JSON(EniQuantity, eniQuantity_);
          DARABONBA_PTR_TO_JSON(EniTotalQuantity, eniTotalQuantity_);
          DARABONBA_PTR_TO_JSON(EniTrunkSupported, eniTrunkSupported_);
          DARABONBA_PTR_TO_JSON(EriQuantity, eriQuantity_);
          DARABONBA_PTR_TO_JSON(GPUAmount, GPUAmount_);
          DARABONBA_PTR_TO_JSON(GPUMemorySize, GPUMemorySize_);
          DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_TO_JSON(InitialCredit, initialCredit_);
          DARABONBA_PTR_TO_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
          DARABONBA_PTR_TO_JSON(InstanceBandwidthTx, instanceBandwidthTx_);
          DARABONBA_PTR_TO_JSON(InstanceCategory, instanceCategory_);
          DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
          DARABONBA_PTR_TO_JSON(InstancePpsRx, instancePpsRx_);
          DARABONBA_PTR_TO_JSON(InstancePpsTx, instancePpsTx_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_TO_JSON(JumboFrameSupport, jumboFrameSupport_);
          DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
          DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
          DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
          DARABONBA_PTR_TO_JSON(MaximumQueueNumberPerEni, maximumQueueNumberPerEni_);
          DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_TO_JSON(NetworkCardQuantity, networkCardQuantity_);
          DARABONBA_PTR_TO_JSON(NetworkCards, networkCards_);
          DARABONBA_PTR_TO_JSON(NetworkEncryptionSupport, networkEncryptionSupport_);
          DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfo_);
          DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
          DARABONBA_PTR_TO_JSON(PhysicalProcessorModel, physicalProcessorModel_);
          DARABONBA_PTR_TO_JSON(PrimaryEniQueueNumber, primaryEniQueueNumber_);
          DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
          DARABONBA_PTR_TO_JSON(SecondaryEniQueueNumber, secondaryEniQueueNumber_);
          DARABONBA_PTR_TO_JSON(SupportedBootModes, supportedBootModes_);
          DARABONBA_PTR_TO_JSON(TotalEniQueueQuantity, totalEniQueueQuantity_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
          DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(BaselineCredit, baselineCredit_);
          DARABONBA_PTR_FROM_JSON(Clock, clock_);
          DARABONBA_PTR_FROM_JSON(CpuArchitecture, cpuArchitecture_);
          DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
          DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
          DARABONBA_PTR_FROM_JSON(CpuSpeedFrequency, cpuSpeedFrequency_);
          DARABONBA_PTR_FROM_JSON(CpuTurboFrequency, cpuTurboFrequency_);
          DARABONBA_PTR_FROM_JSON(DiskQuantity, diskQuantity_);
          DARABONBA_PTR_FROM_JSON(EnhancedNetwork, enhancedNetwork_);
          DARABONBA_PTR_FROM_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
          DARABONBA_PTR_FROM_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
          DARABONBA_PTR_FROM_JSON(EniQuantity, eniQuantity_);
          DARABONBA_PTR_FROM_JSON(EniTotalQuantity, eniTotalQuantity_);
          DARABONBA_PTR_FROM_JSON(EniTrunkSupported, eniTrunkSupported_);
          DARABONBA_PTR_FROM_JSON(EriQuantity, eriQuantity_);
          DARABONBA_PTR_FROM_JSON(GPUAmount, GPUAmount_);
          DARABONBA_PTR_FROM_JSON(GPUMemorySize, GPUMemorySize_);
          DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
          DARABONBA_PTR_FROM_JSON(InitialCredit, initialCredit_);
          DARABONBA_PTR_FROM_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
          DARABONBA_PTR_FROM_JSON(InstanceBandwidthTx, instanceBandwidthTx_);
          DARABONBA_PTR_FROM_JSON(InstanceCategory, instanceCategory_);
          DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
          DARABONBA_PTR_FROM_JSON(InstancePpsRx, instancePpsRx_);
          DARABONBA_PTR_FROM_JSON(InstancePpsTx, instancePpsTx_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
          DARABONBA_PTR_FROM_JSON(JumboFrameSupport, jumboFrameSupport_);
          DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
          DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
          DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
          DARABONBA_PTR_FROM_JSON(MaximumQueueNumberPerEni, maximumQueueNumberPerEni_);
          DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
          DARABONBA_PTR_FROM_JSON(NetworkCardQuantity, networkCardQuantity_);
          DARABONBA_PTR_FROM_JSON(NetworkCards, networkCards_);
          DARABONBA_PTR_FROM_JSON(NetworkEncryptionSupport, networkEncryptionSupport_);
          DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfo_);
          DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
          DARABONBA_PTR_FROM_JSON(PhysicalProcessorModel, physicalProcessorModel_);
          DARABONBA_PTR_FROM_JSON(PrimaryEniQueueNumber, primaryEniQueueNumber_);
          DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
          DARABONBA_PTR_FROM_JSON(SecondaryEniQueueNumber, secondaryEniQueueNumber_);
          DARABONBA_PTR_FROM_JSON(SupportedBootModes, supportedBootModes_);
          DARABONBA_PTR_FROM_JSON(TotalEniQueueQuantity, totalEniQueueQuantity_);
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
        class SupportedBootModes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportedBootModes& obj) { 
            DARABONBA_PTR_TO_JSON(SupportedBootMode, supportedBootMode_);
          };
          friend void from_json(const Darabonba::Json& j, SupportedBootModes& obj) { 
            DARABONBA_PTR_FROM_JSON(SupportedBootMode, supportedBootMode_);
          };
          SupportedBootModes() = default ;
          SupportedBootModes(const SupportedBootModes &) = default ;
          SupportedBootModes(SupportedBootModes &&) = default ;
          SupportedBootModes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportedBootModes() = default ;
          SupportedBootModes& operator=(const SupportedBootModes &) = default ;
          SupportedBootModes& operator=(SupportedBootModes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->supportedBootMode_ == nullptr; };
          // supportedBootMode Field Functions 
          bool hasSupportedBootMode() const { return this->supportedBootMode_ != nullptr;};
          void deleteSupportedBootMode() { this->supportedBootMode_ = nullptr;};
          inline const vector<string> & getSupportedBootMode() const { DARABONBA_PTR_GET_CONST(supportedBootMode_, vector<string>) };
          inline vector<string> getSupportedBootMode() { DARABONBA_PTR_GET(supportedBootMode_, vector<string>) };
          inline SupportedBootModes& setSupportedBootMode(const vector<string> & supportedBootMode) { DARABONBA_PTR_SET_VALUE(supportedBootMode_, supportedBootMode) };
          inline SupportedBootModes& setSupportedBootMode(vector<string> && supportedBootMode) { DARABONBA_PTR_SET_RVALUE(supportedBootMode_, supportedBootMode) };


        protected:
          shared_ptr<vector<string>> supportedBootMode_ {};
        };

        class NetworkInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkInfo& obj) { 
            DARABONBA_PTR_TO_JSON(BandwidthWeighting, bandwidthWeighting_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(BandwidthWeighting, bandwidthWeighting_);
          };
          NetworkInfo() = default ;
          NetworkInfo(const NetworkInfo &) = default ;
          NetworkInfo(NetworkInfo &&) = default ;
          NetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkInfo() = default ;
          NetworkInfo& operator=(const NetworkInfo &) = default ;
          NetworkInfo& operator=(NetworkInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class BandwidthWeighting : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const BandwidthWeighting& obj) { 
              DARABONBA_PTR_TO_JSON(WeightingInfos, weightingInfos_);
            };
            friend void from_json(const Darabonba::Json& j, BandwidthWeighting& obj) { 
              DARABONBA_PTR_FROM_JSON(WeightingInfos, weightingInfos_);
            };
            BandwidthWeighting() = default ;
            BandwidthWeighting(const BandwidthWeighting &) = default ;
            BandwidthWeighting(BandwidthWeighting &&) = default ;
            BandwidthWeighting(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~BandwidthWeighting() = default ;
            BandwidthWeighting& operator=(const BandwidthWeighting &) = default ;
            BandwidthWeighting& operator=(BandwidthWeighting &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class WeightingInfos : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const WeightingInfos& obj) { 
                DARABONBA_PTR_TO_JSON(WeightingInfo, weightingInfo_);
              };
              friend void from_json(const Darabonba::Json& j, WeightingInfos& obj) { 
                DARABONBA_PTR_FROM_JSON(WeightingInfo, weightingInfo_);
              };
              WeightingInfos() = default ;
              WeightingInfos(const WeightingInfos &) = default ;
              WeightingInfos(WeightingInfos &&) = default ;
              WeightingInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~WeightingInfos() = default ;
              WeightingInfos& operator=(const WeightingInfos &) = default ;
              WeightingInfos& operator=(WeightingInfos &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class WeightingInfo : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const WeightingInfo& obj) { 
                  DARABONBA_PTR_TO_JSON(EbsBandwidth, ebsBandwidth_);
                  DARABONBA_PTR_TO_JSON(EbsBurstBandwidth, ebsBurstBandwidth_);
                  DARABONBA_PTR_TO_JSON(Name, name_);
                  DARABONBA_PTR_TO_JSON(VpcBandwidth, vpcBandwidth_);
                  DARABONBA_PTR_TO_JSON(VpcBurstBandwidth, vpcBurstBandwidth_);
                };
                friend void from_json(const Darabonba::Json& j, WeightingInfo& obj) { 
                  DARABONBA_PTR_FROM_JSON(EbsBandwidth, ebsBandwidth_);
                  DARABONBA_PTR_FROM_JSON(EbsBurstBandwidth, ebsBurstBandwidth_);
                  DARABONBA_PTR_FROM_JSON(Name, name_);
                  DARABONBA_PTR_FROM_JSON(VpcBandwidth, vpcBandwidth_);
                  DARABONBA_PTR_FROM_JSON(VpcBurstBandwidth, vpcBurstBandwidth_);
                };
                WeightingInfo() = default ;
                WeightingInfo(const WeightingInfo &) = default ;
                WeightingInfo(WeightingInfo &&) = default ;
                WeightingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~WeightingInfo() = default ;
                WeightingInfo& operator=(const WeightingInfo &) = default ;
                WeightingInfo& operator=(WeightingInfo &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->ebsBandwidth_ == nullptr
        && this->ebsBurstBandwidth_ == nullptr && this->name_ == nullptr && this->vpcBandwidth_ == nullptr && this->vpcBurstBandwidth_ == nullptr; };
                // ebsBandwidth Field Functions 
                bool hasEbsBandwidth() const { return this->ebsBandwidth_ != nullptr;};
                void deleteEbsBandwidth() { this->ebsBandwidth_ = nullptr;};
                inline int64_t getEbsBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ebsBandwidth_, 0L) };
                inline WeightingInfo& setEbsBandwidth(int64_t ebsBandwidth) { DARABONBA_PTR_SET_VALUE(ebsBandwidth_, ebsBandwidth) };


                // ebsBurstBandwidth Field Functions 
                bool hasEbsBurstBandwidth() const { return this->ebsBurstBandwidth_ != nullptr;};
                void deleteEbsBurstBandwidth() { this->ebsBurstBandwidth_ = nullptr;};
                inline int64_t getEbsBurstBandwidth() const { DARABONBA_PTR_GET_DEFAULT(ebsBurstBandwidth_, 0L) };
                inline WeightingInfo& setEbsBurstBandwidth(int64_t ebsBurstBandwidth) { DARABONBA_PTR_SET_VALUE(ebsBurstBandwidth_, ebsBurstBandwidth) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline WeightingInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // vpcBandwidth Field Functions 
                bool hasVpcBandwidth() const { return this->vpcBandwidth_ != nullptr;};
                void deleteVpcBandwidth() { this->vpcBandwidth_ = nullptr;};
                inline int64_t getVpcBandwidth() const { DARABONBA_PTR_GET_DEFAULT(vpcBandwidth_, 0L) };
                inline WeightingInfo& setVpcBandwidth(int64_t vpcBandwidth) { DARABONBA_PTR_SET_VALUE(vpcBandwidth_, vpcBandwidth) };


                // vpcBurstBandwidth Field Functions 
                bool hasVpcBurstBandwidth() const { return this->vpcBurstBandwidth_ != nullptr;};
                void deleteVpcBurstBandwidth() { this->vpcBurstBandwidth_ = nullptr;};
                inline int64_t getVpcBurstBandwidth() const { DARABONBA_PTR_GET_DEFAULT(vpcBurstBandwidth_, 0L) };
                inline WeightingInfo& setVpcBurstBandwidth(int64_t vpcBurstBandwidth) { DARABONBA_PTR_SET_VALUE(vpcBurstBandwidth_, vpcBurstBandwidth) };


              protected:
                shared_ptr<int64_t> ebsBandwidth_ {};
                shared_ptr<int64_t> ebsBurstBandwidth_ {};
                shared_ptr<string> name_ {};
                shared_ptr<int64_t> vpcBandwidth_ {};
                shared_ptr<int64_t> vpcBurstBandwidth_ {};
              };

              virtual bool empty() const override { return this->weightingInfo_ == nullptr; };
              // weightingInfo Field Functions 
              bool hasWeightingInfo() const { return this->weightingInfo_ != nullptr;};
              void deleteWeightingInfo() { this->weightingInfo_ = nullptr;};
              inline const vector<WeightingInfos::WeightingInfo> & getWeightingInfo() const { DARABONBA_PTR_GET_CONST(weightingInfo_, vector<WeightingInfos::WeightingInfo>) };
              inline vector<WeightingInfos::WeightingInfo> getWeightingInfo() { DARABONBA_PTR_GET(weightingInfo_, vector<WeightingInfos::WeightingInfo>) };
              inline WeightingInfos& setWeightingInfo(const vector<WeightingInfos::WeightingInfo> & weightingInfo) { DARABONBA_PTR_SET_VALUE(weightingInfo_, weightingInfo) };
              inline WeightingInfos& setWeightingInfo(vector<WeightingInfos::WeightingInfo> && weightingInfo) { DARABONBA_PTR_SET_RVALUE(weightingInfo_, weightingInfo) };


            protected:
              shared_ptr<vector<WeightingInfos::WeightingInfo>> weightingInfo_ {};
            };

            virtual bool empty() const override { return this->weightingInfos_ == nullptr; };
            // weightingInfos Field Functions 
            bool hasWeightingInfos() const { return this->weightingInfos_ != nullptr;};
            void deleteWeightingInfos() { this->weightingInfos_ = nullptr;};
            inline const BandwidthWeighting::WeightingInfos & getWeightingInfos() const { DARABONBA_PTR_GET_CONST(weightingInfos_, BandwidthWeighting::WeightingInfos) };
            inline BandwidthWeighting::WeightingInfos getWeightingInfos() { DARABONBA_PTR_GET(weightingInfos_, BandwidthWeighting::WeightingInfos) };
            inline BandwidthWeighting& setWeightingInfos(const BandwidthWeighting::WeightingInfos & weightingInfos) { DARABONBA_PTR_SET_VALUE(weightingInfos_, weightingInfos) };
            inline BandwidthWeighting& setWeightingInfos(BandwidthWeighting::WeightingInfos && weightingInfos) { DARABONBA_PTR_SET_RVALUE(weightingInfos_, weightingInfos) };


          protected:
            shared_ptr<BandwidthWeighting::WeightingInfos> weightingInfos_ {};
          };

          virtual bool empty() const override { return this->bandwidthWeighting_ == nullptr; };
          // bandwidthWeighting Field Functions 
          bool hasBandwidthWeighting() const { return this->bandwidthWeighting_ != nullptr;};
          void deleteBandwidthWeighting() { this->bandwidthWeighting_ = nullptr;};
          inline const NetworkInfo::BandwidthWeighting & getBandwidthWeighting() const { DARABONBA_PTR_GET_CONST(bandwidthWeighting_, NetworkInfo::BandwidthWeighting) };
          inline NetworkInfo::BandwidthWeighting getBandwidthWeighting() { DARABONBA_PTR_GET(bandwidthWeighting_, NetworkInfo::BandwidthWeighting) };
          inline NetworkInfo& setBandwidthWeighting(const NetworkInfo::BandwidthWeighting & bandwidthWeighting) { DARABONBA_PTR_SET_VALUE(bandwidthWeighting_, bandwidthWeighting) };
          inline NetworkInfo& setBandwidthWeighting(NetworkInfo::BandwidthWeighting && bandwidthWeighting) { DARABONBA_PTR_SET_RVALUE(bandwidthWeighting_, bandwidthWeighting) };


        protected:
          shared_ptr<NetworkInfo::BandwidthWeighting> bandwidthWeighting_ {};
        };

        class NetworkCards : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkCards& obj) { 
            DARABONBA_PTR_TO_JSON(NetworkCardInfo, networkCardInfo_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkCards& obj) { 
            DARABONBA_PTR_FROM_JSON(NetworkCardInfo, networkCardInfo_);
          };
          NetworkCards() = default ;
          NetworkCards(const NetworkCards &) = default ;
          NetworkCards(NetworkCards &&) = default ;
          NetworkCards(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkCards() = default ;
          NetworkCards& operator=(const NetworkCards &) = default ;
          NetworkCards& operator=(NetworkCards &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NetworkCardInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NetworkCardInfo& obj) { 
              DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
            };
            friend void from_json(const Darabonba::Json& j, NetworkCardInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
            };
            NetworkCardInfo() = default ;
            NetworkCardInfo(const NetworkCardInfo &) = default ;
            NetworkCardInfo(NetworkCardInfo &&) = default ;
            NetworkCardInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NetworkCardInfo() = default ;
            NetworkCardInfo& operator=(const NetworkCardInfo &) = default ;
            NetworkCardInfo& operator=(NetworkCardInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->networkCardIndex_ == nullptr; };
            // networkCardIndex Field Functions 
            bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
            void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
            inline int32_t getNetworkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
            inline NetworkCardInfo& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


          protected:
            // The index of the network card.
            shared_ptr<int32_t> networkCardIndex_ {};
          };

          virtual bool empty() const override { return this->networkCardInfo_ == nullptr; };
          // networkCardInfo Field Functions 
          bool hasNetworkCardInfo() const { return this->networkCardInfo_ != nullptr;};
          void deleteNetworkCardInfo() { this->networkCardInfo_ = nullptr;};
          inline const vector<NetworkCards::NetworkCardInfo> & getNetworkCardInfo() const { DARABONBA_PTR_GET_CONST(networkCardInfo_, vector<NetworkCards::NetworkCardInfo>) };
          inline vector<NetworkCards::NetworkCardInfo> getNetworkCardInfo() { DARABONBA_PTR_GET(networkCardInfo_, vector<NetworkCards::NetworkCardInfo>) };
          inline NetworkCards& setNetworkCardInfo(const vector<NetworkCards::NetworkCardInfo> & networkCardInfo) { DARABONBA_PTR_SET_VALUE(networkCardInfo_, networkCardInfo) };
          inline NetworkCards& setNetworkCardInfo(vector<NetworkCards::NetworkCardInfo> && networkCardInfo) { DARABONBA_PTR_SET_RVALUE(networkCardInfo_, networkCardInfo) };


        protected:
          shared_ptr<vector<NetworkCards::NetworkCardInfo>> networkCardInfo_ {};
        };

        class EnhancedNetwork : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EnhancedNetwork& obj) { 
            DARABONBA_PTR_TO_JSON(RssSupport, rssSupport_);
            DARABONBA_PTR_TO_JSON(SriovSupport, sriovSupport_);
            DARABONBA_PTR_TO_JSON(VfQueueNumberPerEni, vfQueueNumberPerEni_);
          };
          friend void from_json(const Darabonba::Json& j, EnhancedNetwork& obj) { 
            DARABONBA_PTR_FROM_JSON(RssSupport, rssSupport_);
            DARABONBA_PTR_FROM_JSON(SriovSupport, sriovSupport_);
            DARABONBA_PTR_FROM_JSON(VfQueueNumberPerEni, vfQueueNumberPerEni_);
          };
          EnhancedNetwork() = default ;
          EnhancedNetwork(const EnhancedNetwork &) = default ;
          EnhancedNetwork(EnhancedNetwork &&) = default ;
          EnhancedNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EnhancedNetwork() = default ;
          EnhancedNetwork& operator=(const EnhancedNetwork &) = default ;
          EnhancedNetwork& operator=(EnhancedNetwork &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->rssSupport_ == nullptr
        && this->sriovSupport_ == nullptr && this->vfQueueNumberPerEni_ == nullptr; };
          // rssSupport Field Functions 
          bool hasRssSupport() const { return this->rssSupport_ != nullptr;};
          void deleteRssSupport() { this->rssSupport_ = nullptr;};
          inline bool getRssSupport() const { DARABONBA_PTR_GET_DEFAULT(rssSupport_, false) };
          inline EnhancedNetwork& setRssSupport(bool rssSupport) { DARABONBA_PTR_SET_VALUE(rssSupport_, rssSupport) };


          // sriovSupport Field Functions 
          bool hasSriovSupport() const { return this->sriovSupport_ != nullptr;};
          void deleteSriovSupport() { this->sriovSupport_ = nullptr;};
          inline bool getSriovSupport() const { DARABONBA_PTR_GET_DEFAULT(sriovSupport_, false) };
          inline EnhancedNetwork& setSriovSupport(bool sriovSupport) { DARABONBA_PTR_SET_VALUE(sriovSupport_, sriovSupport) };


          // vfQueueNumberPerEni Field Functions 
          bool hasVfQueueNumberPerEni() const { return this->vfQueueNumberPerEni_ != nullptr;};
          void deleteVfQueueNumberPerEni() { this->vfQueueNumberPerEni_ = nullptr;};
          inline int32_t getVfQueueNumberPerEni() const { DARABONBA_PTR_GET_DEFAULT(vfQueueNumberPerEni_, 0) };
          inline EnhancedNetwork& setVfQueueNumberPerEni(int32_t vfQueueNumberPerEni) { DARABONBA_PTR_SET_VALUE(vfQueueNumberPerEni_, vfQueueNumberPerEni) };


        protected:
          // >  This parameter is not publicly available.
          shared_ptr<bool> rssSupport_ {};
          // >  This parameter is not publicly available.
          shared_ptr<bool> sriovSupport_ {};
          // >  This parameter is not publicly available.
          shared_ptr<int32_t> vfQueueNumberPerEni_ {};
        };

        class CpuOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CpuOptions& obj) { 
            DARABONBA_PTR_TO_JSON(Core, core_);
            DARABONBA_PTR_TO_JSON(CoreFactor, coreFactor_);
            DARABONBA_PTR_TO_JSON(HyperThreadingAdjustable, hyperThreadingAdjustable_);
            DARABONBA_PTR_TO_JSON(SupportedTopologyTypes, supportedTopologyTypes_);
            DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
          };
          friend void from_json(const Darabonba::Json& j, CpuOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(Core, core_);
            DARABONBA_PTR_FROM_JSON(CoreFactor, coreFactor_);
            DARABONBA_PTR_FROM_JSON(HyperThreadingAdjustable, hyperThreadingAdjustable_);
            DARABONBA_PTR_FROM_JSON(SupportedTopologyTypes, supportedTopologyTypes_);
            DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
          };
          CpuOptions() = default ;
          CpuOptions(const CpuOptions &) = default ;
          CpuOptions(CpuOptions &&) = default ;
          CpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CpuOptions() = default ;
          CpuOptions& operator=(const CpuOptions &) = default ;
          CpuOptions& operator=(CpuOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SupportedTopologyTypes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SupportedTopologyTypes& obj) { 
              DARABONBA_PTR_TO_JSON(SupportedTopologyType, supportedTopologyType_);
            };
            friend void from_json(const Darabonba::Json& j, SupportedTopologyTypes& obj) { 
              DARABONBA_PTR_FROM_JSON(SupportedTopologyType, supportedTopologyType_);
            };
            SupportedTopologyTypes() = default ;
            SupportedTopologyTypes(const SupportedTopologyTypes &) = default ;
            SupportedTopologyTypes(SupportedTopologyTypes &&) = default ;
            SupportedTopologyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SupportedTopologyTypes() = default ;
            SupportedTopologyTypes& operator=(const SupportedTopologyTypes &) = default ;
            SupportedTopologyTypes& operator=(SupportedTopologyTypes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->supportedTopologyType_ == nullptr; };
            // supportedTopologyType Field Functions 
            bool hasSupportedTopologyType() const { return this->supportedTopologyType_ != nullptr;};
            void deleteSupportedTopologyType() { this->supportedTopologyType_ = nullptr;};
            inline const vector<string> & getSupportedTopologyType() const { DARABONBA_PTR_GET_CONST(supportedTopologyType_, vector<string>) };
            inline vector<string> getSupportedTopologyType() { DARABONBA_PTR_GET(supportedTopologyType_, vector<string>) };
            inline SupportedTopologyTypes& setSupportedTopologyType(const vector<string> & supportedTopologyType) { DARABONBA_PTR_SET_VALUE(supportedTopologyType_, supportedTopologyType) };
            inline SupportedTopologyTypes& setSupportedTopologyType(vector<string> && supportedTopologyType) { DARABONBA_PTR_SET_RVALUE(supportedTopologyType_, supportedTopologyType) };


          protected:
            shared_ptr<vector<string>> supportedTopologyType_ {};
          };

          virtual bool empty() const override { return this->core_ == nullptr
        && this->coreFactor_ == nullptr && this->hyperThreadingAdjustable_ == nullptr && this->supportedTopologyTypes_ == nullptr && this->threadsPerCore_ == nullptr; };
          // core Field Functions 
          bool hasCore() const { return this->core_ != nullptr;};
          void deleteCore() { this->core_ = nullptr;};
          inline int32_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
          inline CpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


          // coreFactor Field Functions 
          bool hasCoreFactor() const { return this->coreFactor_ != nullptr;};
          void deleteCoreFactor() { this->coreFactor_ = nullptr;};
          inline int32_t getCoreFactor() const { DARABONBA_PTR_GET_DEFAULT(coreFactor_, 0) };
          inline CpuOptions& setCoreFactor(int32_t coreFactor) { DARABONBA_PTR_SET_VALUE(coreFactor_, coreFactor) };


          // hyperThreadingAdjustable Field Functions 
          bool hasHyperThreadingAdjustable() const { return this->hyperThreadingAdjustable_ != nullptr;};
          void deleteHyperThreadingAdjustable() { this->hyperThreadingAdjustable_ = nullptr;};
          inline bool getHyperThreadingAdjustable() const { DARABONBA_PTR_GET_DEFAULT(hyperThreadingAdjustable_, false) };
          inline CpuOptions& setHyperThreadingAdjustable(bool hyperThreadingAdjustable) { DARABONBA_PTR_SET_VALUE(hyperThreadingAdjustable_, hyperThreadingAdjustable) };


          // supportedTopologyTypes Field Functions 
          bool hasSupportedTopologyTypes() const { return this->supportedTopologyTypes_ != nullptr;};
          void deleteSupportedTopologyTypes() { this->supportedTopologyTypes_ = nullptr;};
          inline const CpuOptions::SupportedTopologyTypes & getSupportedTopologyTypes() const { DARABONBA_PTR_GET_CONST(supportedTopologyTypes_, CpuOptions::SupportedTopologyTypes) };
          inline CpuOptions::SupportedTopologyTypes getSupportedTopologyTypes() { DARABONBA_PTR_GET(supportedTopologyTypes_, CpuOptions::SupportedTopologyTypes) };
          inline CpuOptions& setSupportedTopologyTypes(const CpuOptions::SupportedTopologyTypes & supportedTopologyTypes) { DARABONBA_PTR_SET_VALUE(supportedTopologyTypes_, supportedTopologyTypes) };
          inline CpuOptions& setSupportedTopologyTypes(CpuOptions::SupportedTopologyTypes && supportedTopologyTypes) { DARABONBA_PTR_SET_RVALUE(supportedTopologyTypes_, supportedTopologyTypes) };


          // threadsPerCore Field Functions 
          bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
          void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
          inline int32_t getThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
          inline CpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


        protected:
          // The number of CPU cores.
          shared_ptr<int32_t> core_ {};
          // The CPU option step size.
          shared_ptr<int32_t> coreFactor_ {};
          // Indicates whether HT can be enabled or disabled.
          shared_ptr<bool> hyperThreadingAdjustable_ {};
          // The CPU topology types of the instance type.
          shared_ptr<CpuOptions::SupportedTopologyTypes> supportedTopologyTypes_ {};
          // The number of threads per CPU core.
          // 
          // >  `If the value of CpuOptions.ThreadPerCore is 1, Hyper-Threading (HT) is disabled.`
          shared_ptr<int32_t> threadsPerCore_ {};
        };

        class Clock : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Clock& obj) { 
            DARABONBA_PTR_TO_JSON(PtpSupport, ptpSupport_);
          };
          friend void from_json(const Darabonba::Json& j, Clock& obj) { 
            DARABONBA_PTR_FROM_JSON(PtpSupport, ptpSupport_);
          };
          Clock() = default ;
          Clock(const Clock &) = default ;
          Clock(Clock &&) = default ;
          Clock(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Clock() = default ;
          Clock& operator=(const Clock &) = default ;
          Clock& operator=(Clock &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ptpSupport_ == nullptr; };
          // ptpSupport Field Functions 
          bool hasPtpSupport() const { return this->ptpSupport_ != nullptr;};
          void deletePtpSupport() { this->ptpSupport_ = nullptr;};
          inline string getPtpSupport() const { DARABONBA_PTR_GET_DEFAULT(ptpSupport_, "") };
          inline Clock& setPtpSupport(string ptpSupport) { DARABONBA_PTR_SET_VALUE(ptpSupport_, ptpSupport) };


        protected:
          // Whether PTP is supported. Possible values:
          // 
          // *   supported
          // *   unsupported
          shared_ptr<string> ptpSupport_ {};
        };

        class Attributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
            DARABONBA_PTR_TO_JSON(Attribute, attribute_);
          };
          friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
            DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
          };
          Attributes() = default ;
          Attributes(const Attributes &) = default ;
          Attributes(Attributes &&) = default ;
          Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attributes() = default ;
          Attributes& operator=(const Attributes &) = default ;
          Attributes& operator=(Attributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Attribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Attribute& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Attribute& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Attribute() = default ;
            Attribute(const Attribute &) = default ;
            Attribute(Attribute &&) = default ;
            Attribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Attribute() = default ;
            Attribute& operator=(const Attribute &) = default ;
            Attribute& operator=(Attribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Attribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Attribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The name of the attribute.
            shared_ptr<string> name_ {};
            // The attribute value.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->attribute_ == nullptr; };
          // attribute Field Functions 
          bool hasAttribute() const { return this->attribute_ != nullptr;};
          void deleteAttribute() { this->attribute_ = nullptr;};
          inline const vector<Attributes::Attribute> & getAttribute() const { DARABONBA_PTR_GET_CONST(attribute_, vector<Attributes::Attribute>) };
          inline vector<Attributes::Attribute> getAttribute() { DARABONBA_PTR_GET(attribute_, vector<Attributes::Attribute>) };
          inline Attributes& setAttribute(const vector<Attributes::Attribute> & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
          inline Attributes& setAttribute(vector<Attributes::Attribute> && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


        protected:
          shared_ptr<vector<Attributes::Attribute>> attribute_ {};
        };

        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->baselineCredit_ == nullptr && this->clock_ == nullptr && this->cpuArchitecture_ == nullptr && this->cpuCoreCount_ == nullptr && this->cpuOptions_ == nullptr
        && this->cpuSpeedFrequency_ == nullptr && this->cpuTurboFrequency_ == nullptr && this->diskQuantity_ == nullptr && this->enhancedNetwork_ == nullptr && this->eniIpv6AddressQuantity_ == nullptr
        && this->eniPrivateIpAddressQuantity_ == nullptr && this->eniQuantity_ == nullptr && this->eniTotalQuantity_ == nullptr && this->eniTrunkSupported_ == nullptr && this->eriQuantity_ == nullptr
        && this->GPUAmount_ == nullptr && this->GPUMemorySize_ == nullptr && this->GPUSpec_ == nullptr && this->initialCredit_ == nullptr && this->instanceBandwidthRx_ == nullptr
        && this->instanceBandwidthTx_ == nullptr && this->instanceCategory_ == nullptr && this->instanceFamilyLevel_ == nullptr && this->instancePpsRx_ == nullptr && this->instancePpsTx_ == nullptr
        && this->instanceTypeFamily_ == nullptr && this->instanceTypeId_ == nullptr && this->jumboFrameSupport_ == nullptr && this->localStorageAmount_ == nullptr && this->localStorageCapacity_ == nullptr
        && this->localStorageCategory_ == nullptr && this->maximumQueueNumberPerEni_ == nullptr && this->memorySize_ == nullptr && this->networkCardQuantity_ == nullptr && this->networkCards_ == nullptr
        && this->networkEncryptionSupport_ == nullptr && this->networkInfo_ == nullptr && this->nvmeSupport_ == nullptr && this->physicalProcessorModel_ == nullptr && this->primaryEniQueueNumber_ == nullptr
        && this->queuePairNumber_ == nullptr && this->secondaryEniQueueNumber_ == nullptr && this->supportedBootModes_ == nullptr && this->totalEniQueueQuantity_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline const InstanceType::Attributes & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, InstanceType::Attributes) };
        inline InstanceType::Attributes getAttributes() { DARABONBA_PTR_GET(attributes_, InstanceType::Attributes) };
        inline InstanceType& setAttributes(const InstanceType::Attributes & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
        inline InstanceType& setAttributes(InstanceType::Attributes && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


        // baselineCredit Field Functions 
        bool hasBaselineCredit() const { return this->baselineCredit_ != nullptr;};
        void deleteBaselineCredit() { this->baselineCredit_ = nullptr;};
        inline int32_t getBaselineCredit() const { DARABONBA_PTR_GET_DEFAULT(baselineCredit_, 0) };
        inline InstanceType& setBaselineCredit(int32_t baselineCredit) { DARABONBA_PTR_SET_VALUE(baselineCredit_, baselineCredit) };


        // clock Field Functions 
        bool hasClock() const { return this->clock_ != nullptr;};
        void deleteClock() { this->clock_ = nullptr;};
        inline const InstanceType::Clock & getClock() const { DARABONBA_PTR_GET_CONST(clock_, InstanceType::Clock) };
        inline InstanceType::Clock getClock() { DARABONBA_PTR_GET(clock_, InstanceType::Clock) };
        inline InstanceType& setClock(const InstanceType::Clock & clock) { DARABONBA_PTR_SET_VALUE(clock_, clock) };
        inline InstanceType& setClock(InstanceType::Clock && clock) { DARABONBA_PTR_SET_RVALUE(clock_, clock) };


        // cpuArchitecture Field Functions 
        bool hasCpuArchitecture() const { return this->cpuArchitecture_ != nullptr;};
        void deleteCpuArchitecture() { this->cpuArchitecture_ = nullptr;};
        inline string getCpuArchitecture() const { DARABONBA_PTR_GET_DEFAULT(cpuArchitecture_, "") };
        inline InstanceType& setCpuArchitecture(string cpuArchitecture) { DARABONBA_PTR_SET_VALUE(cpuArchitecture_, cpuArchitecture) };


        // cpuCoreCount Field Functions 
        bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
        void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
        inline int32_t getCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
        inline InstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


        // cpuOptions Field Functions 
        bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
        void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
        inline const InstanceType::CpuOptions & getCpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, InstanceType::CpuOptions) };
        inline InstanceType::CpuOptions getCpuOptions() { DARABONBA_PTR_GET(cpuOptions_, InstanceType::CpuOptions) };
        inline InstanceType& setCpuOptions(const InstanceType::CpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
        inline InstanceType& setCpuOptions(InstanceType::CpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


        // cpuSpeedFrequency Field Functions 
        bool hasCpuSpeedFrequency() const { return this->cpuSpeedFrequency_ != nullptr;};
        void deleteCpuSpeedFrequency() { this->cpuSpeedFrequency_ = nullptr;};
        inline float getCpuSpeedFrequency() const { DARABONBA_PTR_GET_DEFAULT(cpuSpeedFrequency_, 0.0) };
        inline InstanceType& setCpuSpeedFrequency(float cpuSpeedFrequency) { DARABONBA_PTR_SET_VALUE(cpuSpeedFrequency_, cpuSpeedFrequency) };


        // cpuTurboFrequency Field Functions 
        bool hasCpuTurboFrequency() const { return this->cpuTurboFrequency_ != nullptr;};
        void deleteCpuTurboFrequency() { this->cpuTurboFrequency_ = nullptr;};
        inline float getCpuTurboFrequency() const { DARABONBA_PTR_GET_DEFAULT(cpuTurboFrequency_, 0.0) };
        inline InstanceType& setCpuTurboFrequency(float cpuTurboFrequency) { DARABONBA_PTR_SET_VALUE(cpuTurboFrequency_, cpuTurboFrequency) };


        // diskQuantity Field Functions 
        bool hasDiskQuantity() const { return this->diskQuantity_ != nullptr;};
        void deleteDiskQuantity() { this->diskQuantity_ = nullptr;};
        inline int32_t getDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(diskQuantity_, 0) };
        inline InstanceType& setDiskQuantity(int32_t diskQuantity) { DARABONBA_PTR_SET_VALUE(diskQuantity_, diskQuantity) };


        // enhancedNetwork Field Functions 
        bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
        void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
        inline const InstanceType::EnhancedNetwork & getEnhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, InstanceType::EnhancedNetwork) };
        inline InstanceType::EnhancedNetwork getEnhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, InstanceType::EnhancedNetwork) };
        inline InstanceType& setEnhancedNetwork(const InstanceType::EnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
        inline InstanceType& setEnhancedNetwork(InstanceType::EnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


        // eniIpv6AddressQuantity Field Functions 
        bool hasEniIpv6AddressQuantity() const { return this->eniIpv6AddressQuantity_ != nullptr;};
        void deleteEniIpv6AddressQuantity() { this->eniIpv6AddressQuantity_ = nullptr;};
        inline int32_t getEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniIpv6AddressQuantity_, 0) };
        inline InstanceType& setEniIpv6AddressQuantity(int32_t eniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(eniIpv6AddressQuantity_, eniIpv6AddressQuantity) };


        // eniPrivateIpAddressQuantity Field Functions 
        bool hasEniPrivateIpAddressQuantity() const { return this->eniPrivateIpAddressQuantity_ != nullptr;};
        void deleteEniPrivateIpAddressQuantity() { this->eniPrivateIpAddressQuantity_ = nullptr;};
        inline int32_t getEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddressQuantity_, 0) };
        inline InstanceType& setEniPrivateIpAddressQuantity(int32_t eniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddressQuantity_, eniPrivateIpAddressQuantity) };


        // eniQuantity Field Functions 
        bool hasEniQuantity() const { return this->eniQuantity_ != nullptr;};
        void deleteEniQuantity() { this->eniQuantity_ = nullptr;};
        inline int32_t getEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniQuantity_, 0) };
        inline InstanceType& setEniQuantity(int32_t eniQuantity) { DARABONBA_PTR_SET_VALUE(eniQuantity_, eniQuantity) };


        // eniTotalQuantity Field Functions 
        bool hasEniTotalQuantity() const { return this->eniTotalQuantity_ != nullptr;};
        void deleteEniTotalQuantity() { this->eniTotalQuantity_ = nullptr;};
        inline int32_t getEniTotalQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniTotalQuantity_, 0) };
        inline InstanceType& setEniTotalQuantity(int32_t eniTotalQuantity) { DARABONBA_PTR_SET_VALUE(eniTotalQuantity_, eniTotalQuantity) };


        // eniTrunkSupported Field Functions 
        bool hasEniTrunkSupported() const { return this->eniTrunkSupported_ != nullptr;};
        void deleteEniTrunkSupported() { this->eniTrunkSupported_ = nullptr;};
        inline bool getEniTrunkSupported() const { DARABONBA_PTR_GET_DEFAULT(eniTrunkSupported_, false) };
        inline InstanceType& setEniTrunkSupported(bool eniTrunkSupported) { DARABONBA_PTR_SET_VALUE(eniTrunkSupported_, eniTrunkSupported) };


        // eriQuantity Field Functions 
        bool hasEriQuantity() const { return this->eriQuantity_ != nullptr;};
        void deleteEriQuantity() { this->eriQuantity_ = nullptr;};
        inline int32_t getEriQuantity() const { DARABONBA_PTR_GET_DEFAULT(eriQuantity_, 0) };
        inline InstanceType& setEriQuantity(int32_t eriQuantity) { DARABONBA_PTR_SET_VALUE(eriQuantity_, eriQuantity) };


        // GPUAmount Field Functions 
        bool hasGPUAmount() const { return this->GPUAmount_ != nullptr;};
        void deleteGPUAmount() { this->GPUAmount_ = nullptr;};
        inline int32_t getGPUAmount() const { DARABONBA_PTR_GET_DEFAULT(GPUAmount_, 0) };
        inline InstanceType& setGPUAmount(int32_t GPUAmount) { DARABONBA_PTR_SET_VALUE(GPUAmount_, GPUAmount) };


        // GPUMemorySize Field Functions 
        bool hasGPUMemorySize() const { return this->GPUMemorySize_ != nullptr;};
        void deleteGPUMemorySize() { this->GPUMemorySize_ = nullptr;};
        inline float getGPUMemorySize() const { DARABONBA_PTR_GET_DEFAULT(GPUMemorySize_, 0.0) };
        inline InstanceType& setGPUMemorySize(float GPUMemorySize) { DARABONBA_PTR_SET_VALUE(GPUMemorySize_, GPUMemorySize) };


        // GPUSpec Field Functions 
        bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
        void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
        inline string getGPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
        inline InstanceType& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


        // initialCredit Field Functions 
        bool hasInitialCredit() const { return this->initialCredit_ != nullptr;};
        void deleteInitialCredit() { this->initialCredit_ = nullptr;};
        inline int32_t getInitialCredit() const { DARABONBA_PTR_GET_DEFAULT(initialCredit_, 0) };
        inline InstanceType& setInitialCredit(int32_t initialCredit) { DARABONBA_PTR_SET_VALUE(initialCredit_, initialCredit) };


        // instanceBandwidthRx Field Functions 
        bool hasInstanceBandwidthRx() const { return this->instanceBandwidthRx_ != nullptr;};
        void deleteInstanceBandwidthRx() { this->instanceBandwidthRx_ = nullptr;};
        inline int32_t getInstanceBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(instanceBandwidthRx_, 0) };
        inline InstanceType& setInstanceBandwidthRx(int32_t instanceBandwidthRx) { DARABONBA_PTR_SET_VALUE(instanceBandwidthRx_, instanceBandwidthRx) };


        // instanceBandwidthTx Field Functions 
        bool hasInstanceBandwidthTx() const { return this->instanceBandwidthTx_ != nullptr;};
        void deleteInstanceBandwidthTx() { this->instanceBandwidthTx_ = nullptr;};
        inline int32_t getInstanceBandwidthTx() const { DARABONBA_PTR_GET_DEFAULT(instanceBandwidthTx_, 0) };
        inline InstanceType& setInstanceBandwidthTx(int32_t instanceBandwidthTx) { DARABONBA_PTR_SET_VALUE(instanceBandwidthTx_, instanceBandwidthTx) };


        // instanceCategory Field Functions 
        bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
        void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
        inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
        inline InstanceType& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


        // instanceFamilyLevel Field Functions 
        bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
        void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
        inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
        inline InstanceType& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


        // instancePpsRx Field Functions 
        bool hasInstancePpsRx() const { return this->instancePpsRx_ != nullptr;};
        void deleteInstancePpsRx() { this->instancePpsRx_ = nullptr;};
        inline int64_t getInstancePpsRx() const { DARABONBA_PTR_GET_DEFAULT(instancePpsRx_, 0L) };
        inline InstanceType& setInstancePpsRx(int64_t instancePpsRx) { DARABONBA_PTR_SET_VALUE(instancePpsRx_, instancePpsRx) };


        // instancePpsTx Field Functions 
        bool hasInstancePpsTx() const { return this->instancePpsTx_ != nullptr;};
        void deleteInstancePpsTx() { this->instancePpsTx_ = nullptr;};
        inline int64_t getInstancePpsTx() const { DARABONBA_PTR_GET_DEFAULT(instancePpsTx_, 0L) };
        inline InstanceType& setInstancePpsTx(int64_t instancePpsTx) { DARABONBA_PTR_SET_VALUE(instancePpsTx_, instancePpsTx) };


        // instanceTypeFamily Field Functions 
        bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
        void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
        inline string getInstanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
        inline InstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


        // instanceTypeId Field Functions 
        bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
        void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
        inline string getInstanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
        inline InstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


        // jumboFrameSupport Field Functions 
        bool hasJumboFrameSupport() const { return this->jumboFrameSupport_ != nullptr;};
        void deleteJumboFrameSupport() { this->jumboFrameSupport_ = nullptr;};
        inline bool getJumboFrameSupport() const { DARABONBA_PTR_GET_DEFAULT(jumboFrameSupport_, false) };
        inline InstanceType& setJumboFrameSupport(bool jumboFrameSupport) { DARABONBA_PTR_SET_VALUE(jumboFrameSupport_, jumboFrameSupport) };


        // localStorageAmount Field Functions 
        bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
        void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
        inline int32_t getLocalStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
        inline InstanceType& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


        // localStorageCapacity Field Functions 
        bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
        void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
        inline int64_t getLocalStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
        inline InstanceType& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


        // localStorageCategory Field Functions 
        bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
        void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
        inline string getLocalStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
        inline InstanceType& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


        // maximumQueueNumberPerEni Field Functions 
        bool hasMaximumQueueNumberPerEni() const { return this->maximumQueueNumberPerEni_ != nullptr;};
        void deleteMaximumQueueNumberPerEni() { this->maximumQueueNumberPerEni_ = nullptr;};
        inline int32_t getMaximumQueueNumberPerEni() const { DARABONBA_PTR_GET_DEFAULT(maximumQueueNumberPerEni_, 0) };
        inline InstanceType& setMaximumQueueNumberPerEni(int32_t maximumQueueNumberPerEni) { DARABONBA_PTR_SET_VALUE(maximumQueueNumberPerEni_, maximumQueueNumberPerEni) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline float getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0.0) };
        inline InstanceType& setMemorySize(float memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


        // networkCardQuantity Field Functions 
        bool hasNetworkCardQuantity() const { return this->networkCardQuantity_ != nullptr;};
        void deleteNetworkCardQuantity() { this->networkCardQuantity_ = nullptr;};
        inline int32_t getNetworkCardQuantity() const { DARABONBA_PTR_GET_DEFAULT(networkCardQuantity_, 0) };
        inline InstanceType& setNetworkCardQuantity(int32_t networkCardQuantity) { DARABONBA_PTR_SET_VALUE(networkCardQuantity_, networkCardQuantity) };


        // networkCards Field Functions 
        bool hasNetworkCards() const { return this->networkCards_ != nullptr;};
        void deleteNetworkCards() { this->networkCards_ = nullptr;};
        inline const InstanceType::NetworkCards & getNetworkCards() const { DARABONBA_PTR_GET_CONST(networkCards_, InstanceType::NetworkCards) };
        inline InstanceType::NetworkCards getNetworkCards() { DARABONBA_PTR_GET(networkCards_, InstanceType::NetworkCards) };
        inline InstanceType& setNetworkCards(const InstanceType::NetworkCards & networkCards) { DARABONBA_PTR_SET_VALUE(networkCards_, networkCards) };
        inline InstanceType& setNetworkCards(InstanceType::NetworkCards && networkCards) { DARABONBA_PTR_SET_RVALUE(networkCards_, networkCards) };


        // networkEncryptionSupport Field Functions 
        bool hasNetworkEncryptionSupport() const { return this->networkEncryptionSupport_ != nullptr;};
        void deleteNetworkEncryptionSupport() { this->networkEncryptionSupport_ = nullptr;};
        inline bool getNetworkEncryptionSupport() const { DARABONBA_PTR_GET_DEFAULT(networkEncryptionSupport_, false) };
        inline InstanceType& setNetworkEncryptionSupport(bool networkEncryptionSupport) { DARABONBA_PTR_SET_VALUE(networkEncryptionSupport_, networkEncryptionSupport) };


        // networkInfo Field Functions 
        bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
        void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
        inline const InstanceType::NetworkInfo & getNetworkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, InstanceType::NetworkInfo) };
        inline InstanceType::NetworkInfo getNetworkInfo() { DARABONBA_PTR_GET(networkInfo_, InstanceType::NetworkInfo) };
        inline InstanceType& setNetworkInfo(const InstanceType::NetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
        inline InstanceType& setNetworkInfo(InstanceType::NetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


        // nvmeSupport Field Functions 
        bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
        void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
        inline string getNvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
        inline InstanceType& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


        // physicalProcessorModel Field Functions 
        bool hasPhysicalProcessorModel() const { return this->physicalProcessorModel_ != nullptr;};
        void deletePhysicalProcessorModel() { this->physicalProcessorModel_ = nullptr;};
        inline string getPhysicalProcessorModel() const { DARABONBA_PTR_GET_DEFAULT(physicalProcessorModel_, "") };
        inline InstanceType& setPhysicalProcessorModel(string physicalProcessorModel) { DARABONBA_PTR_SET_VALUE(physicalProcessorModel_, physicalProcessorModel) };


        // primaryEniQueueNumber Field Functions 
        bool hasPrimaryEniQueueNumber() const { return this->primaryEniQueueNumber_ != nullptr;};
        void deletePrimaryEniQueueNumber() { this->primaryEniQueueNumber_ = nullptr;};
        inline int32_t getPrimaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(primaryEniQueueNumber_, 0) };
        inline InstanceType& setPrimaryEniQueueNumber(int32_t primaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(primaryEniQueueNumber_, primaryEniQueueNumber) };


        // queuePairNumber Field Functions 
        bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
        void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
        inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
        inline InstanceType& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


        // secondaryEniQueueNumber Field Functions 
        bool hasSecondaryEniQueueNumber() const { return this->secondaryEniQueueNumber_ != nullptr;};
        void deleteSecondaryEniQueueNumber() { this->secondaryEniQueueNumber_ = nullptr;};
        inline int32_t getSecondaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(secondaryEniQueueNumber_, 0) };
        inline InstanceType& setSecondaryEniQueueNumber(int32_t secondaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(secondaryEniQueueNumber_, secondaryEniQueueNumber) };


        // supportedBootModes Field Functions 
        bool hasSupportedBootModes() const { return this->supportedBootModes_ != nullptr;};
        void deleteSupportedBootModes() { this->supportedBootModes_ = nullptr;};
        inline const InstanceType::SupportedBootModes & getSupportedBootModes() const { DARABONBA_PTR_GET_CONST(supportedBootModes_, InstanceType::SupportedBootModes) };
        inline InstanceType::SupportedBootModes getSupportedBootModes() { DARABONBA_PTR_GET(supportedBootModes_, InstanceType::SupportedBootModes) };
        inline InstanceType& setSupportedBootModes(const InstanceType::SupportedBootModes & supportedBootModes) { DARABONBA_PTR_SET_VALUE(supportedBootModes_, supportedBootModes) };
        inline InstanceType& setSupportedBootModes(InstanceType::SupportedBootModes && supportedBootModes) { DARABONBA_PTR_SET_RVALUE(supportedBootModes_, supportedBootModes) };


        // totalEniQueueQuantity Field Functions 
        bool hasTotalEniQueueQuantity() const { return this->totalEniQueueQuantity_ != nullptr;};
        void deleteTotalEniQueueQuantity() { this->totalEniQueueQuantity_ = nullptr;};
        inline int32_t getTotalEniQueueQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalEniQueueQuantity_, 0) };
        inline InstanceType& setTotalEniQueueQuantity(int32_t totalEniQueueQuantity) { DARABONBA_PTR_SET_VALUE(totalEniQueueQuantity_, totalEniQueueQuantity) };


      protected:
        // The list of specification attributes.
        shared_ptr<InstanceType::Attributes> attributes_ {};
        // The baseline vCPU computing performance (overall baseline performance of all vCPUs) per t5 or t6 burstable instance.
        shared_ptr<int32_t> baselineCredit_ {};
        // The clock supported by the specification.
        shared_ptr<InstanceType::Clock> clock_ {};
        // The CPU architecture. Valid values:
        // 
        // *   X86
        // *   ARM
        shared_ptr<string> cpuArchitecture_ {};
        // The number of vCPUs.
        shared_ptr<int32_t> cpuCoreCount_ {};
        // The CPU options.
        shared_ptr<InstanceType::CpuOptions> cpuOptions_ {};
        // The CPU base frequency. Unit: GHz.
        shared_ptr<float> cpuSpeedFrequency_ {};
        // The CPU turbo frequency. Unit: GHz.
        shared_ptr<float> cpuTurboFrequency_ {};
        // The maximum number of cloud disks per instance.
        shared_ptr<int32_t> diskQuantity_ {};
        // >  This parameter is not publicly available.
        shared_ptr<InstanceType::EnhancedNetwork> enhancedNetwork_ {};
        // The maximum number of IPv6 addresses per ENI.
        shared_ptr<int32_t> eniIpv6AddressQuantity_ {};
        // The maximum number of IPv4 addresses per ENI.
        shared_ptr<int32_t> eniPrivateIpAddressQuantity_ {};
        // The maximum number of ENIs per instance.
        shared_ptr<int32_t> eniQuantity_ {};
        // The maximum number of ENIs, including primary, secondary, and trunk ENIs.
        // 
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<int32_t> eniTotalQuantity_ {};
        // Indicates whether trunk ENIs are supported.
        // 
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<bool> eniTrunkSupported_ {};
        // The number of ERIs.
        // 
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<int32_t> eriQuantity_ {};
        // The number of GPUs.
        shared_ptr<int32_t> GPUAmount_ {};
        // The amount of GPU memory per GPU. Unit: GiB
        shared_ptr<float> GPUMemorySize_ {};
        // The GPU model.
        shared_ptr<string> GPUSpec_ {};
        // The initial vCPU credits per t5 or t6 burstable instance.
        shared_ptr<int32_t> initialCredit_ {};
        // The maximum inbound internal bandwidth. Unit: Kbit/s.
        shared_ptr<int32_t> instanceBandwidthRx_ {};
        // The maximum outbound internal bandwidth. Unit: Kbit/s.
        shared_ptr<int32_t> instanceBandwidthTx_ {};
        // The category of the instance type. Valid values:
        // 
        // *   General-purpose
        // *   Compute-optimized
        // *   Memory-optimized
        // *   Big data
        // *   Local SSDs
        // *   High Clock Speed
        // *   Enhanced
        // *   Shared
        // *   Compute-optimized with GPU
        // *   Visual Compute-optimized
        // *   Heterogeneous Service
        // *   Compute-optimized with FPGA
        // *   Compute-optimized with NPU
        // *   ECS Bare Metal
        // *   Super Computing Cluster
        // *   High Performance Compute
        shared_ptr<string> instanceCategory_ {};
        // The level of the instance family. Valid values:
        // 
        // *   EntryLevel: entry level (shared).
        // *   EnterpriseLevel: enterprise level.
        // *   CreditEntryLevel: credit-based entry level. For more information, see [Overview](https://help.aliyun.com/document_detail/59977.html).
        shared_ptr<string> instanceFamilyLevel_ {};
        // The inbound packet forwarding rate over the internal network. Unit: pps.
        shared_ptr<int64_t> instancePpsRx_ {};
        // The outbound packet forwarding rate over the internal network. Unit: pps.
        shared_ptr<int64_t> instancePpsTx_ {};
        // The instance family.
        shared_ptr<string> instanceTypeFamily_ {};
        // The ID of the instance type.
        shared_ptr<string> instanceTypeId_ {};
        // Indicates whether jumbo frames are supported.
        shared_ptr<bool> jumboFrameSupport_ {};
        // The number of local disks per instance.
        shared_ptr<int32_t> localStorageAmount_ {};
        // The capacity of each local disk. Unit: GiB
        shared_ptr<int64_t> localStorageCapacity_ {};
        // The category of local disks. For more information, see [Local disks](https://help.aliyun.com/document_detail/63138.html). Valid values:
        // 
        // *   local_hdd_pro: local SATA HDDs, which are attached to d1ne or d1 instances
        // *   local_ssd_pro: local NVMe SSDs, which are attached to i2, i2g, i1, ga1, or gn5 instances
        shared_ptr<string> localStorageCategory_ {};
        // The maximum number of queues per ENI, including primary and secondary ENIs.
        shared_ptr<int32_t> maximumQueueNumberPerEni_ {};
        // The memory size. Unit: GiB
        shared_ptr<float> memorySize_ {};
        // The maximum number of network cards that the instance type supports.
        shared_ptr<int32_t> networkCardQuantity_ {};
        // The information about the network cards.
        shared_ptr<InstanceType::NetworkCards> networkCards_ {};
        // Indicates whether to allow network traffic transmitted over virtual private clouds (VPCs) to be encrypted. Valid values:
        // 
        // *   true
        // *   false
        // 
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<bool> networkEncryptionSupport_ {};
        shared_ptr<InstanceType::NetworkInfo> networkInfo_ {};
        // Indicates whether cloud disks can be attached by using the NVMe protocol. Valid values:
        // 
        // *   required: Cloud disks can be attached by using the NVMe protocol.
        // *   unsupported: Cloud disks cannot be attached by using the NVMe protocol.
        shared_ptr<string> nvmeSupport_ {};
        // The CPU model.
        shared_ptr<string> physicalProcessorModel_ {};
        // The default number of queues per primary ENI.
        shared_ptr<int32_t> primaryEniQueueNumber_ {};
        // The maximum number of QPs per instance, which varies based on the instance type.
        // 
        // *   For enterprise-level CPU-based instance types, the value of `QueuePairNumber` is the maximum number of QPs per instance.
        // *   For GPU-accelerated instance types, the maximum number of QPs per instance is calculated by using the following formula: Value of `QueuePairNumber` × Value of NetworkCardQuantity.
        shared_ptr<int32_t> queuePairNumber_ {};
        // The default number of queues per secondary ENI.
        shared_ptr<int32_t> secondaryEniQueueNumber_ {};
        // The boot modes supported by the instance type.
        shared_ptr<InstanceType::SupportedBootModes> supportedBootModes_ {};
        // The maximum number of queues on ENIs that the instance type supports.
        shared_ptr<int32_t> totalEniQueueQuantity_ {};
      };

      virtual bool empty() const override { return this->instanceType_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline const vector<InstanceTypes::InstanceType> & getInstanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<InstanceTypes::InstanceType>) };
      inline vector<InstanceTypes::InstanceType> getInstanceType() { DARABONBA_PTR_GET(instanceType_, vector<InstanceTypes::InstanceType>) };
      inline InstanceTypes& setInstanceType(const vector<InstanceTypes::InstanceType> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
      inline InstanceTypes& setInstanceType(vector<InstanceTypes::InstanceType> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


    protected:
      shared_ptr<vector<InstanceTypes::InstanceType>> instanceType_ {};
    };

    virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeInstanceTypesResponseBody::InstanceTypes & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeInstanceTypesResponseBody::InstanceTypes getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeInstanceTypesResponseBody::InstanceTypes) };
    inline DescribeInstanceTypesResponseBody& setInstanceTypes(const DescribeInstanceTypesResponseBody::InstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeInstanceTypesResponseBody& setInstanceTypes(DescribeInstanceTypesResponseBody::InstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceTypesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the instance types.
    shared_ptr<DescribeInstanceTypesResponseBody::InstanceTypes> instanceTypes_ {};
    // The query token returned in this call.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
