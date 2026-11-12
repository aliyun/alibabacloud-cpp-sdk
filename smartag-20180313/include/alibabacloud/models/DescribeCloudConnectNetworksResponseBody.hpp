// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDCONNECTNETWORKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDCONNECTNETWORKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeCloudConnectNetworksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudConnectNetworksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudConnectNetworks, cloudConnectNetworks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudConnectNetworksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudConnectNetworks, cloudConnectNetworks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudConnectNetworksResponseBody() = default ;
    DescribeCloudConnectNetworksResponseBody(const DescribeCloudConnectNetworksResponseBody &) = default ;
    DescribeCloudConnectNetworksResponseBody(DescribeCloudConnectNetworksResponseBody &&) = default ;
    DescribeCloudConnectNetworksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudConnectNetworksResponseBody() = default ;
    DescribeCloudConnectNetworksResponseBody& operator=(const DescribeCloudConnectNetworksResponseBody &) = default ;
    DescribeCloudConnectNetworksResponseBody& operator=(DescribeCloudConnectNetworksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudConnectNetworks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudConnectNetworks& obj) { 
        DARABONBA_PTR_TO_JSON(CloudConnectNetwork, cloudConnectNetwork_);
      };
      friend void from_json(const Darabonba::Json& j, CloudConnectNetworks& obj) { 
        DARABONBA_PTR_FROM_JSON(CloudConnectNetwork, cloudConnectNetwork_);
      };
      CloudConnectNetworks() = default ;
      CloudConnectNetworks(const CloudConnectNetworks &) = default ;
      CloudConnectNetworks(CloudConnectNetworks &&) = default ;
      CloudConnectNetworks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudConnectNetworks() = default ;
      CloudConnectNetworks& operator=(const CloudConnectNetworks &) = default ;
      CloudConnectNetworks& operator=(CloudConnectNetworks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CloudConnectNetwork : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloudConnectNetwork& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedCenId, associatedCenId_);
          DARABONBA_PTR_TO_JSON(AssociatedCenOwnerId, associatedCenOwnerId_);
          DARABONBA_PTR_TO_JSON(AssociatedCenStatus, associatedCenStatus_);
          DARABONBA_PTR_TO_JSON(AssociatedCloudBoxCount, associatedCloudBoxCount_);
          DARABONBA_PTR_TO_JSON(AssociatedVpcStatus, associatedVpcStatus_);
          DARABONBA_PTR_TO_JSON(AvailableCloudBoxCount, availableCloudBoxCount_);
          DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
          DARABONBA_PTR_TO_JSON(CenStatusErrorCode, cenStatusErrorCode_);
          DARABONBA_PTR_TO_JSON(CenStatusErrorMessage, cenStatusErrorMessage_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(InterworkingStatus, interworkingStatus_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NewAgw, newAgw_);
          DARABONBA_PTR_TO_JSON(ProcessingCenId, processingCenId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SnatCidrBlock, snatCidrBlock_);
          DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TrNetworkConfig, trNetworkConfig_);
          DARABONBA_PTR_TO_JSON(VpcNetworkConfig, vpcNetworkConfig_);
          DARABONBA_PTR_TO_JSON(VpcStatusErrorCode, vpcStatusErrorCode_);
          DARABONBA_PTR_TO_JSON(VpcStatusErrorMessage, vpcStatusErrorMessage_);
        };
        friend void from_json(const Darabonba::Json& j, CloudConnectNetwork& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedCenId, associatedCenId_);
          DARABONBA_PTR_FROM_JSON(AssociatedCenOwnerId, associatedCenOwnerId_);
          DARABONBA_PTR_FROM_JSON(AssociatedCenStatus, associatedCenStatus_);
          DARABONBA_PTR_FROM_JSON(AssociatedCloudBoxCount, associatedCloudBoxCount_);
          DARABONBA_PTR_FROM_JSON(AssociatedVpcStatus, associatedVpcStatus_);
          DARABONBA_PTR_FROM_JSON(AvailableCloudBoxCount, availableCloudBoxCount_);
          DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
          DARABONBA_PTR_FROM_JSON(CenStatusErrorCode, cenStatusErrorCode_);
          DARABONBA_PTR_FROM_JSON(CenStatusErrorMessage, cenStatusErrorMessage_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(InterworkingStatus, interworkingStatus_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NewAgw, newAgw_);
          DARABONBA_PTR_FROM_JSON(ProcessingCenId, processingCenId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SnatCidrBlock, snatCidrBlock_);
          DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TrNetworkConfig, trNetworkConfig_);
          DARABONBA_PTR_FROM_JSON(VpcNetworkConfig, vpcNetworkConfig_);
          DARABONBA_PTR_FROM_JSON(VpcStatusErrorCode, vpcStatusErrorCode_);
          DARABONBA_PTR_FROM_JSON(VpcStatusErrorMessage, vpcStatusErrorMessage_);
        };
        CloudConnectNetwork() = default ;
        CloudConnectNetwork(const CloudConnectNetwork &) = default ;
        CloudConnectNetwork(CloudConnectNetwork &&) = default ;
        CloudConnectNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloudConnectNetwork() = default ;
        CloudConnectNetwork& operator=(const CloudConnectNetwork &) = default ;
        CloudConnectNetwork& operator=(CloudConnectNetwork &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcNetworkConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcNetworkConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CidrAllocationMode, cidrAllocationMode_);
            DARABONBA_PTR_TO_JSON(RegionBindingList, regionBindingList_);
            DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          };
          friend void from_json(const Darabonba::Json& j, VpcNetworkConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CidrAllocationMode, cidrAllocationMode_);
            DARABONBA_PTR_FROM_JSON(RegionBindingList, regionBindingList_);
            DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          };
          VpcNetworkConfig() = default ;
          VpcNetworkConfig(const VpcNetworkConfig &) = default ;
          VpcNetworkConfig(VpcNetworkConfig &&) = default ;
          VpcNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcNetworkConfig() = default ;
          VpcNetworkConfig& operator=(const VpcNetworkConfig &) = default ;
          VpcNetworkConfig& operator=(VpcNetworkConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RegionBindingList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RegionBindingList& obj) { 
              DARABONBA_PTR_TO_JSON(RegionBinding, regionBinding_);
            };
            friend void from_json(const Darabonba::Json& j, RegionBindingList& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionBinding, regionBinding_);
            };
            RegionBindingList() = default ;
            RegionBindingList(const RegionBindingList &) = default ;
            RegionBindingList(RegionBindingList &&) = default ;
            RegionBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RegionBindingList() = default ;
            RegionBindingList& operator=(const RegionBindingList &) = default ;
            RegionBindingList& operator=(RegionBindingList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RegionBinding : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RegionBinding& obj) { 
                DARABONBA_PTR_TO_JSON(RegionId, regionId_);
                DARABONBA_PTR_TO_JSON(RelayCidrBlock, relayCidrBlock_);
                DARABONBA_PTR_TO_JSON(Status, status_);
                DARABONBA_PTR_TO_JSON(VpcCidrBlock, vpcCidrBlock_);
                DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
              };
              friend void from_json(const Darabonba::Json& j, RegionBinding& obj) { 
                DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
                DARABONBA_PTR_FROM_JSON(RelayCidrBlock, relayCidrBlock_);
                DARABONBA_PTR_FROM_JSON(Status, status_);
                DARABONBA_PTR_FROM_JSON(VpcCidrBlock, vpcCidrBlock_);
                DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
              };
              RegionBinding() = default ;
              RegionBinding(const RegionBinding &) = default ;
              RegionBinding(RegionBinding &&) = default ;
              RegionBinding(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RegionBinding() = default ;
              RegionBinding& operator=(const RegionBinding &) = default ;
              RegionBinding& operator=(RegionBinding &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->regionId_ == nullptr
        && this->relayCidrBlock_ == nullptr && this->status_ == nullptr && this->vpcCidrBlock_ == nullptr && this->vpcId_ == nullptr; };
              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
              inline RegionBinding& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


              // relayCidrBlock Field Functions 
              bool hasRelayCidrBlock() const { return this->relayCidrBlock_ != nullptr;};
              void deleteRelayCidrBlock() { this->relayCidrBlock_ = nullptr;};
              inline string getRelayCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(relayCidrBlock_, "") };
              inline RegionBinding& setRelayCidrBlock(string relayCidrBlock) { DARABONBA_PTR_SET_VALUE(relayCidrBlock_, relayCidrBlock) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
              inline RegionBinding& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // vpcCidrBlock Field Functions 
              bool hasVpcCidrBlock() const { return this->vpcCidrBlock_ != nullptr;};
              void deleteVpcCidrBlock() { this->vpcCidrBlock_ = nullptr;};
              inline string getVpcCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(vpcCidrBlock_, "") };
              inline RegionBinding& setVpcCidrBlock(string vpcCidrBlock) { DARABONBA_PTR_SET_VALUE(vpcCidrBlock_, vpcCidrBlock) };


              // vpcId Field Functions 
              bool hasVpcId() const { return this->vpcId_ != nullptr;};
              void deleteVpcId() { this->vpcId_ = nullptr;};
              inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
              inline RegionBinding& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            protected:
              shared_ptr<string> regionId_ {};
              shared_ptr<string> relayCidrBlock_ {};
              shared_ptr<string> status_ {};
              shared_ptr<string> vpcCidrBlock_ {};
              shared_ptr<string> vpcId_ {};
            };

            virtual bool empty() const override { return this->regionBinding_ == nullptr; };
            // regionBinding Field Functions 
            bool hasRegionBinding() const { return this->regionBinding_ != nullptr;};
            void deleteRegionBinding() { this->regionBinding_ = nullptr;};
            inline const vector<RegionBindingList::RegionBinding> & getRegionBinding() const { DARABONBA_PTR_GET_CONST(regionBinding_, vector<RegionBindingList::RegionBinding>) };
            inline vector<RegionBindingList::RegionBinding> getRegionBinding() { DARABONBA_PTR_GET(regionBinding_, vector<RegionBindingList::RegionBinding>) };
            inline RegionBindingList& setRegionBinding(const vector<RegionBindingList::RegionBinding> & regionBinding) { DARABONBA_PTR_SET_VALUE(regionBinding_, regionBinding) };
            inline RegionBindingList& setRegionBinding(vector<RegionBindingList::RegionBinding> && regionBinding) { DARABONBA_PTR_SET_RVALUE(regionBinding_, regionBinding) };


          protected:
            shared_ptr<vector<RegionBindingList::RegionBinding>> regionBinding_ {};
          };

          virtual bool empty() const override { return this->cidrAllocationMode_ == nullptr
        && this->regionBindingList_ == nullptr && this->subnet_ == nullptr; };
          // cidrAllocationMode Field Functions 
          bool hasCidrAllocationMode() const { return this->cidrAllocationMode_ != nullptr;};
          void deleteCidrAllocationMode() { this->cidrAllocationMode_ = nullptr;};
          inline string getCidrAllocationMode() const { DARABONBA_PTR_GET_DEFAULT(cidrAllocationMode_, "") };
          inline VpcNetworkConfig& setCidrAllocationMode(string cidrAllocationMode) { DARABONBA_PTR_SET_VALUE(cidrAllocationMode_, cidrAllocationMode) };


          // regionBindingList Field Functions 
          bool hasRegionBindingList() const { return this->regionBindingList_ != nullptr;};
          void deleteRegionBindingList() { this->regionBindingList_ = nullptr;};
          inline const VpcNetworkConfig::RegionBindingList & getRegionBindingList() const { DARABONBA_PTR_GET_CONST(regionBindingList_, VpcNetworkConfig::RegionBindingList) };
          inline VpcNetworkConfig::RegionBindingList getRegionBindingList() { DARABONBA_PTR_GET(regionBindingList_, VpcNetworkConfig::RegionBindingList) };
          inline VpcNetworkConfig& setRegionBindingList(const VpcNetworkConfig::RegionBindingList & regionBindingList) { DARABONBA_PTR_SET_VALUE(regionBindingList_, regionBindingList) };
          inline VpcNetworkConfig& setRegionBindingList(VpcNetworkConfig::RegionBindingList && regionBindingList) { DARABONBA_PTR_SET_RVALUE(regionBindingList_, regionBindingList) };


          // subnet Field Functions 
          bool hasSubnet() const { return this->subnet_ != nullptr;};
          void deleteSubnet() { this->subnet_ = nullptr;};
          inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
          inline VpcNetworkConfig& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        protected:
          shared_ptr<string> cidrAllocationMode_ {};
          shared_ptr<VpcNetworkConfig::RegionBindingList> regionBindingList_ {};
          shared_ptr<string> subnet_ {};
        };

        class TrNetworkConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrNetworkConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CidrAllocationMode, cidrAllocationMode_);
            DARABONBA_PTR_TO_JSON(RegionBindingList, regionBindingList_);
            DARABONBA_PTR_TO_JSON(Subnet, subnet_);
          };
          friend void from_json(const Darabonba::Json& j, TrNetworkConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CidrAllocationMode, cidrAllocationMode_);
            DARABONBA_PTR_FROM_JSON(RegionBindingList, regionBindingList_);
            DARABONBA_PTR_FROM_JSON(Subnet, subnet_);
          };
          TrNetworkConfig() = default ;
          TrNetworkConfig(const TrNetworkConfig &) = default ;
          TrNetworkConfig(TrNetworkConfig &&) = default ;
          TrNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrNetworkConfig() = default ;
          TrNetworkConfig& operator=(const TrNetworkConfig &) = default ;
          TrNetworkConfig& operator=(TrNetworkConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RegionBindingList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RegionBindingList& obj) { 
              DARABONBA_PTR_TO_JSON(RegionBinding, regionBinding_);
            };
            friend void from_json(const Darabonba::Json& j, RegionBindingList& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionBinding, regionBinding_);
            };
            RegionBindingList() = default ;
            RegionBindingList(const RegionBindingList &) = default ;
            RegionBindingList(RegionBindingList &&) = default ;
            RegionBindingList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RegionBindingList() = default ;
            RegionBindingList& operator=(const RegionBindingList &) = default ;
            RegionBindingList& operator=(RegionBindingList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RegionBinding : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RegionBinding& obj) { 
                DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
                DARABONBA_PTR_TO_JSON(RegionId, regionId_);
                DARABONBA_PTR_TO_JSON(RelayCidrBlock, relayCidrBlock_);
                DARABONBA_PTR_TO_JSON(Status, status_);
                DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
              };
              friend void from_json(const Darabonba::Json& j, RegionBinding& obj) { 
                DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
                DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
                DARABONBA_PTR_FROM_JSON(RelayCidrBlock, relayCidrBlock_);
                DARABONBA_PTR_FROM_JSON(Status, status_);
                DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
              };
              RegionBinding() = default ;
              RegionBinding(const RegionBinding &) = default ;
              RegionBinding(RegionBinding &&) = default ;
              RegionBinding(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RegionBinding() = default ;
              RegionBinding& operator=(const RegionBinding &) = default ;
              RegionBinding& operator=(RegionBinding &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->regionId_ == nullptr && this->relayCidrBlock_ == nullptr && this->status_ == nullptr && this->transitRouterId_ == nullptr; };
              // cidrBlock Field Functions 
              bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
              void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
              inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
              inline RegionBinding& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
              inline RegionBinding& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


              // relayCidrBlock Field Functions 
              bool hasRelayCidrBlock() const { return this->relayCidrBlock_ != nullptr;};
              void deleteRelayCidrBlock() { this->relayCidrBlock_ = nullptr;};
              inline string getRelayCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(relayCidrBlock_, "") };
              inline RegionBinding& setRelayCidrBlock(string relayCidrBlock) { DARABONBA_PTR_SET_VALUE(relayCidrBlock_, relayCidrBlock) };


              // status Field Functions 
              bool hasStatus() const { return this->status_ != nullptr;};
              void deleteStatus() { this->status_ = nullptr;};
              inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
              inline RegionBinding& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


              // transitRouterId Field Functions 
              bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
              void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
              inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
              inline RegionBinding& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


            protected:
              shared_ptr<string> cidrBlock_ {};
              shared_ptr<string> regionId_ {};
              shared_ptr<string> relayCidrBlock_ {};
              shared_ptr<string> status_ {};
              shared_ptr<string> transitRouterId_ {};
            };

            virtual bool empty() const override { return this->regionBinding_ == nullptr; };
            // regionBinding Field Functions 
            bool hasRegionBinding() const { return this->regionBinding_ != nullptr;};
            void deleteRegionBinding() { this->regionBinding_ = nullptr;};
            inline const vector<RegionBindingList::RegionBinding> & getRegionBinding() const { DARABONBA_PTR_GET_CONST(regionBinding_, vector<RegionBindingList::RegionBinding>) };
            inline vector<RegionBindingList::RegionBinding> getRegionBinding() { DARABONBA_PTR_GET(regionBinding_, vector<RegionBindingList::RegionBinding>) };
            inline RegionBindingList& setRegionBinding(const vector<RegionBindingList::RegionBinding> & regionBinding) { DARABONBA_PTR_SET_VALUE(regionBinding_, regionBinding) };
            inline RegionBindingList& setRegionBinding(vector<RegionBindingList::RegionBinding> && regionBinding) { DARABONBA_PTR_SET_RVALUE(regionBinding_, regionBinding) };


          protected:
            shared_ptr<vector<RegionBindingList::RegionBinding>> regionBinding_ {};
          };

          virtual bool empty() const override { return this->cidrAllocationMode_ == nullptr
        && this->regionBindingList_ == nullptr && this->subnet_ == nullptr; };
          // cidrAllocationMode Field Functions 
          bool hasCidrAllocationMode() const { return this->cidrAllocationMode_ != nullptr;};
          void deleteCidrAllocationMode() { this->cidrAllocationMode_ = nullptr;};
          inline string getCidrAllocationMode() const { DARABONBA_PTR_GET_DEFAULT(cidrAllocationMode_, "") };
          inline TrNetworkConfig& setCidrAllocationMode(string cidrAllocationMode) { DARABONBA_PTR_SET_VALUE(cidrAllocationMode_, cidrAllocationMode) };


          // regionBindingList Field Functions 
          bool hasRegionBindingList() const { return this->regionBindingList_ != nullptr;};
          void deleteRegionBindingList() { this->regionBindingList_ = nullptr;};
          inline const TrNetworkConfig::RegionBindingList & getRegionBindingList() const { DARABONBA_PTR_GET_CONST(regionBindingList_, TrNetworkConfig::RegionBindingList) };
          inline TrNetworkConfig::RegionBindingList getRegionBindingList() { DARABONBA_PTR_GET(regionBindingList_, TrNetworkConfig::RegionBindingList) };
          inline TrNetworkConfig& setRegionBindingList(const TrNetworkConfig::RegionBindingList & regionBindingList) { DARABONBA_PTR_SET_VALUE(regionBindingList_, regionBindingList) };
          inline TrNetworkConfig& setRegionBindingList(TrNetworkConfig::RegionBindingList && regionBindingList) { DARABONBA_PTR_SET_RVALUE(regionBindingList_, regionBindingList) };


          // subnet Field Functions 
          bool hasSubnet() const { return this->subnet_ != nullptr;};
          void deleteSubnet() { this->subnet_ = nullptr;};
          inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
          inline TrNetworkConfig& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        protected:
          shared_ptr<string> cidrAllocationMode_ {};
          shared_ptr<TrNetworkConfig::RegionBindingList> regionBindingList_ {};
          shared_ptr<string> subnet_ {};
        };

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

        virtual bool empty() const override { return this->associatedCenId_ == nullptr
        && this->associatedCenOwnerId_ == nullptr && this->associatedCenStatus_ == nullptr && this->associatedCloudBoxCount_ == nullptr && this->associatedVpcStatus_ == nullptr && this->availableCloudBoxCount_ == nullptr
        && this->ccnId_ == nullptr && this->cenStatusErrorCode_ == nullptr && this->cenStatusErrorMessage_ == nullptr && this->cidrBlock_ == nullptr && this->createTime_ == nullptr
        && this->description_ == nullptr && this->interworkingStatus_ == nullptr && this->name_ == nullptr && this->newAgw_ == nullptr && this->processingCenId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->snatCidrBlock_ == nullptr && this->subnet_ == nullptr && this->tags_ == nullptr && this->trNetworkConfig_ == nullptr
        && this->vpcNetworkConfig_ == nullptr && this->vpcStatusErrorCode_ == nullptr && this->vpcStatusErrorMessage_ == nullptr; };
        // associatedCenId Field Functions 
        bool hasAssociatedCenId() const { return this->associatedCenId_ != nullptr;};
        void deleteAssociatedCenId() { this->associatedCenId_ = nullptr;};
        inline string getAssociatedCenId() const { DARABONBA_PTR_GET_DEFAULT(associatedCenId_, "") };
        inline CloudConnectNetwork& setAssociatedCenId(string associatedCenId) { DARABONBA_PTR_SET_VALUE(associatedCenId_, associatedCenId) };


        // associatedCenOwnerId Field Functions 
        bool hasAssociatedCenOwnerId() const { return this->associatedCenOwnerId_ != nullptr;};
        void deleteAssociatedCenOwnerId() { this->associatedCenOwnerId_ = nullptr;};
        inline string getAssociatedCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(associatedCenOwnerId_, "") };
        inline CloudConnectNetwork& setAssociatedCenOwnerId(string associatedCenOwnerId) { DARABONBA_PTR_SET_VALUE(associatedCenOwnerId_, associatedCenOwnerId) };


        // associatedCenStatus Field Functions 
        bool hasAssociatedCenStatus() const { return this->associatedCenStatus_ != nullptr;};
        void deleteAssociatedCenStatus() { this->associatedCenStatus_ = nullptr;};
        inline string getAssociatedCenStatus() const { DARABONBA_PTR_GET_DEFAULT(associatedCenStatus_, "") };
        inline CloudConnectNetwork& setAssociatedCenStatus(string associatedCenStatus) { DARABONBA_PTR_SET_VALUE(associatedCenStatus_, associatedCenStatus) };


        // associatedCloudBoxCount Field Functions 
        bool hasAssociatedCloudBoxCount() const { return this->associatedCloudBoxCount_ != nullptr;};
        void deleteAssociatedCloudBoxCount() { this->associatedCloudBoxCount_ = nullptr;};
        inline string getAssociatedCloudBoxCount() const { DARABONBA_PTR_GET_DEFAULT(associatedCloudBoxCount_, "") };
        inline CloudConnectNetwork& setAssociatedCloudBoxCount(string associatedCloudBoxCount) { DARABONBA_PTR_SET_VALUE(associatedCloudBoxCount_, associatedCloudBoxCount) };


        // associatedVpcStatus Field Functions 
        bool hasAssociatedVpcStatus() const { return this->associatedVpcStatus_ != nullptr;};
        void deleteAssociatedVpcStatus() { this->associatedVpcStatus_ = nullptr;};
        inline string getAssociatedVpcStatus() const { DARABONBA_PTR_GET_DEFAULT(associatedVpcStatus_, "") };
        inline CloudConnectNetwork& setAssociatedVpcStatus(string associatedVpcStatus) { DARABONBA_PTR_SET_VALUE(associatedVpcStatus_, associatedVpcStatus) };


        // availableCloudBoxCount Field Functions 
        bool hasAvailableCloudBoxCount() const { return this->availableCloudBoxCount_ != nullptr;};
        void deleteAvailableCloudBoxCount() { this->availableCloudBoxCount_ = nullptr;};
        inline string getAvailableCloudBoxCount() const { DARABONBA_PTR_GET_DEFAULT(availableCloudBoxCount_, "") };
        inline CloudConnectNetwork& setAvailableCloudBoxCount(string availableCloudBoxCount) { DARABONBA_PTR_SET_VALUE(availableCloudBoxCount_, availableCloudBoxCount) };


        // ccnId Field Functions 
        bool hasCcnId() const { return this->ccnId_ != nullptr;};
        void deleteCcnId() { this->ccnId_ = nullptr;};
        inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
        inline CloudConnectNetwork& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


        // cenStatusErrorCode Field Functions 
        bool hasCenStatusErrorCode() const { return this->cenStatusErrorCode_ != nullptr;};
        void deleteCenStatusErrorCode() { this->cenStatusErrorCode_ = nullptr;};
        inline string getCenStatusErrorCode() const { DARABONBA_PTR_GET_DEFAULT(cenStatusErrorCode_, "") };
        inline CloudConnectNetwork& setCenStatusErrorCode(string cenStatusErrorCode) { DARABONBA_PTR_SET_VALUE(cenStatusErrorCode_, cenStatusErrorCode) };


        // cenStatusErrorMessage Field Functions 
        bool hasCenStatusErrorMessage() const { return this->cenStatusErrorMessage_ != nullptr;};
        void deleteCenStatusErrorMessage() { this->cenStatusErrorMessage_ = nullptr;};
        inline string getCenStatusErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(cenStatusErrorMessage_, "") };
        inline CloudConnectNetwork& setCenStatusErrorMessage(string cenStatusErrorMessage) { DARABONBA_PTR_SET_VALUE(cenStatusErrorMessage_, cenStatusErrorMessage) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline CloudConnectNetwork& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline CloudConnectNetwork& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CloudConnectNetwork& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // interworkingStatus Field Functions 
        bool hasInterworkingStatus() const { return this->interworkingStatus_ != nullptr;};
        void deleteInterworkingStatus() { this->interworkingStatus_ = nullptr;};
        inline string getInterworkingStatus() const { DARABONBA_PTR_GET_DEFAULT(interworkingStatus_, "") };
        inline CloudConnectNetwork& setInterworkingStatus(string interworkingStatus) { DARABONBA_PTR_SET_VALUE(interworkingStatus_, interworkingStatus) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CloudConnectNetwork& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // newAgw Field Functions 
        bool hasNewAgw() const { return this->newAgw_ != nullptr;};
        void deleteNewAgw() { this->newAgw_ = nullptr;};
        inline bool getNewAgw() const { DARABONBA_PTR_GET_DEFAULT(newAgw_, false) };
        inline CloudConnectNetwork& setNewAgw(bool newAgw) { DARABONBA_PTR_SET_VALUE(newAgw_, newAgw) };


        // processingCenId Field Functions 
        bool hasProcessingCenId() const { return this->processingCenId_ != nullptr;};
        void deleteProcessingCenId() { this->processingCenId_ = nullptr;};
        inline string getProcessingCenId() const { DARABONBA_PTR_GET_DEFAULT(processingCenId_, "") };
        inline CloudConnectNetwork& setProcessingCenId(string processingCenId) { DARABONBA_PTR_SET_VALUE(processingCenId_, processingCenId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline CloudConnectNetwork& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // snatCidrBlock Field Functions 
        bool hasSnatCidrBlock() const { return this->snatCidrBlock_ != nullptr;};
        void deleteSnatCidrBlock() { this->snatCidrBlock_ = nullptr;};
        inline string getSnatCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(snatCidrBlock_, "") };
        inline CloudConnectNetwork& setSnatCidrBlock(string snatCidrBlock) { DARABONBA_PTR_SET_VALUE(snatCidrBlock_, snatCidrBlock) };


        // subnet Field Functions 
        bool hasSubnet() const { return this->subnet_ != nullptr;};
        void deleteSubnet() { this->subnet_ = nullptr;};
        inline string getSubnet() const { DARABONBA_PTR_GET_DEFAULT(subnet_, "") };
        inline CloudConnectNetwork& setSubnet(string subnet) { DARABONBA_PTR_SET_VALUE(subnet_, subnet) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const CloudConnectNetwork::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, CloudConnectNetwork::Tags) };
        inline CloudConnectNetwork::Tags getTags() { DARABONBA_PTR_GET(tags_, CloudConnectNetwork::Tags) };
        inline CloudConnectNetwork& setTags(const CloudConnectNetwork::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CloudConnectNetwork& setTags(CloudConnectNetwork::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // trNetworkConfig Field Functions 
        bool hasTrNetworkConfig() const { return this->trNetworkConfig_ != nullptr;};
        void deleteTrNetworkConfig() { this->trNetworkConfig_ = nullptr;};
        inline const CloudConnectNetwork::TrNetworkConfig & getTrNetworkConfig() const { DARABONBA_PTR_GET_CONST(trNetworkConfig_, CloudConnectNetwork::TrNetworkConfig) };
        inline CloudConnectNetwork::TrNetworkConfig getTrNetworkConfig() { DARABONBA_PTR_GET(trNetworkConfig_, CloudConnectNetwork::TrNetworkConfig) };
        inline CloudConnectNetwork& setTrNetworkConfig(const CloudConnectNetwork::TrNetworkConfig & trNetworkConfig) { DARABONBA_PTR_SET_VALUE(trNetworkConfig_, trNetworkConfig) };
        inline CloudConnectNetwork& setTrNetworkConfig(CloudConnectNetwork::TrNetworkConfig && trNetworkConfig) { DARABONBA_PTR_SET_RVALUE(trNetworkConfig_, trNetworkConfig) };


        // vpcNetworkConfig Field Functions 
        bool hasVpcNetworkConfig() const { return this->vpcNetworkConfig_ != nullptr;};
        void deleteVpcNetworkConfig() { this->vpcNetworkConfig_ = nullptr;};
        inline const CloudConnectNetwork::VpcNetworkConfig & getVpcNetworkConfig() const { DARABONBA_PTR_GET_CONST(vpcNetworkConfig_, CloudConnectNetwork::VpcNetworkConfig) };
        inline CloudConnectNetwork::VpcNetworkConfig getVpcNetworkConfig() { DARABONBA_PTR_GET(vpcNetworkConfig_, CloudConnectNetwork::VpcNetworkConfig) };
        inline CloudConnectNetwork& setVpcNetworkConfig(const CloudConnectNetwork::VpcNetworkConfig & vpcNetworkConfig) { DARABONBA_PTR_SET_VALUE(vpcNetworkConfig_, vpcNetworkConfig) };
        inline CloudConnectNetwork& setVpcNetworkConfig(CloudConnectNetwork::VpcNetworkConfig && vpcNetworkConfig) { DARABONBA_PTR_SET_RVALUE(vpcNetworkConfig_, vpcNetworkConfig) };


        // vpcStatusErrorCode Field Functions 
        bool hasVpcStatusErrorCode() const { return this->vpcStatusErrorCode_ != nullptr;};
        void deleteVpcStatusErrorCode() { this->vpcStatusErrorCode_ = nullptr;};
        inline string getVpcStatusErrorCode() const { DARABONBA_PTR_GET_DEFAULT(vpcStatusErrorCode_, "") };
        inline CloudConnectNetwork& setVpcStatusErrorCode(string vpcStatusErrorCode) { DARABONBA_PTR_SET_VALUE(vpcStatusErrorCode_, vpcStatusErrorCode) };


        // vpcStatusErrorMessage Field Functions 
        bool hasVpcStatusErrorMessage() const { return this->vpcStatusErrorMessage_ != nullptr;};
        void deleteVpcStatusErrorMessage() { this->vpcStatusErrorMessage_ = nullptr;};
        inline string getVpcStatusErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(vpcStatusErrorMessage_, "") };
        inline CloudConnectNetwork& setVpcStatusErrorMessage(string vpcStatusErrorMessage) { DARABONBA_PTR_SET_VALUE(vpcStatusErrorMessage_, vpcStatusErrorMessage) };


      protected:
        shared_ptr<string> associatedCenId_ {};
        shared_ptr<string> associatedCenOwnerId_ {};
        shared_ptr<string> associatedCenStatus_ {};
        shared_ptr<string> associatedCloudBoxCount_ {};
        shared_ptr<string> associatedVpcStatus_ {};
        shared_ptr<string> availableCloudBoxCount_ {};
        shared_ptr<string> ccnId_ {};
        shared_ptr<string> cenStatusErrorCode_ {};
        shared_ptr<string> cenStatusErrorMessage_ {};
        shared_ptr<string> cidrBlock_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> interworkingStatus_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> newAgw_ {};
        shared_ptr<string> processingCenId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> snatCidrBlock_ {};
        shared_ptr<string> subnet_ {};
        shared_ptr<CloudConnectNetwork::Tags> tags_ {};
        shared_ptr<CloudConnectNetwork::TrNetworkConfig> trNetworkConfig_ {};
        shared_ptr<CloudConnectNetwork::VpcNetworkConfig> vpcNetworkConfig_ {};
        shared_ptr<string> vpcStatusErrorCode_ {};
        shared_ptr<string> vpcStatusErrorMessage_ {};
      };

      virtual bool empty() const override { return this->cloudConnectNetwork_ == nullptr; };
      // cloudConnectNetwork Field Functions 
      bool hasCloudConnectNetwork() const { return this->cloudConnectNetwork_ != nullptr;};
      void deleteCloudConnectNetwork() { this->cloudConnectNetwork_ = nullptr;};
      inline const vector<CloudConnectNetworks::CloudConnectNetwork> & getCloudConnectNetwork() const { DARABONBA_PTR_GET_CONST(cloudConnectNetwork_, vector<CloudConnectNetworks::CloudConnectNetwork>) };
      inline vector<CloudConnectNetworks::CloudConnectNetwork> getCloudConnectNetwork() { DARABONBA_PTR_GET(cloudConnectNetwork_, vector<CloudConnectNetworks::CloudConnectNetwork>) };
      inline CloudConnectNetworks& setCloudConnectNetwork(const vector<CloudConnectNetworks::CloudConnectNetwork> & cloudConnectNetwork) { DARABONBA_PTR_SET_VALUE(cloudConnectNetwork_, cloudConnectNetwork) };
      inline CloudConnectNetworks& setCloudConnectNetwork(vector<CloudConnectNetworks::CloudConnectNetwork> && cloudConnectNetwork) { DARABONBA_PTR_SET_RVALUE(cloudConnectNetwork_, cloudConnectNetwork) };


    protected:
      shared_ptr<vector<CloudConnectNetworks::CloudConnectNetwork>> cloudConnectNetwork_ {};
    };

    virtual bool empty() const override { return this->cloudConnectNetworks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cloudConnectNetworks Field Functions 
    bool hasCloudConnectNetworks() const { return this->cloudConnectNetworks_ != nullptr;};
    void deleteCloudConnectNetworks() { this->cloudConnectNetworks_ = nullptr;};
    inline const DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks & getCloudConnectNetworks() const { DARABONBA_PTR_GET_CONST(cloudConnectNetworks_, DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks) };
    inline DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks getCloudConnectNetworks() { DARABONBA_PTR_GET(cloudConnectNetworks_, DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks) };
    inline DescribeCloudConnectNetworksResponseBody& setCloudConnectNetworks(const DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks & cloudConnectNetworks) { DARABONBA_PTR_SET_VALUE(cloudConnectNetworks_, cloudConnectNetworks) };
    inline DescribeCloudConnectNetworksResponseBody& setCloudConnectNetworks(DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks && cloudConnectNetworks) { DARABONBA_PTR_SET_RVALUE(cloudConnectNetworks_, cloudConnectNetworks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCloudConnectNetworksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCloudConnectNetworksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudConnectNetworksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudConnectNetworksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeCloudConnectNetworksResponseBody::CloudConnectNetworks> cloudConnectNetworks_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page for paging in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
