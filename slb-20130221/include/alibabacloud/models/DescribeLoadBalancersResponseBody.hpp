// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20130221
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
          DARABONBA_PTR_TO_JSON(AddressType, addressType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RegionIdAlias, regionIdAlias_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancer& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RegionIdAlias, regionIdAlias_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
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
        virtual bool empty() const override { return this->address_ == nullptr
        && this->addressType_ == nullptr && this->createTime_ == nullptr && this->createTimeStamp_ == nullptr && this->internetChargeType_ == nullptr && this->loadBalancerId_ == nullptr
        && this->loadBalancerName_ == nullptr && this->loadBalancerStatus_ == nullptr && this->masterZoneId_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->regionIdAlias_ == nullptr && this->resourceGroupId_ == nullptr && this->slaveZoneId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline LoadBalancer& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline LoadBalancer& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


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


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline LoadBalancer& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


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
        shared_ptr<string> addressType_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimeStamp_ {};
        shared_ptr<string> internetChargeType_ {};
        shared_ptr<string> loadBalancerId_ {};
        shared_ptr<string> loadBalancerName_ {};
        shared_ptr<string> loadBalancerStatus_ {};
        shared_ptr<string> masterZoneId_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> payType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> regionIdAlias_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> slaveZoneId_ {};
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
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20130221
#endif
