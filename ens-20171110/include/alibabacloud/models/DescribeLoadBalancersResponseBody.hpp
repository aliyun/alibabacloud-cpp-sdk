// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_TO_JSON(LoadBalancerType, loadBalancerType_);
          DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
          DARABONBA_PTR_TO_JSON(PayType, payType_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancer& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
          DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_FROM_JSON(LoadBalancerType, loadBalancerType_);
          DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
          DARABONBA_PTR_FROM_JSON(PayType, payType_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
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
        && this->addressIPVersion_ == nullptr && this->addressType_ == nullptr && this->createTime_ == nullptr && this->ensRegionId_ == nullptr && this->loadBalancerId_ == nullptr
        && this->loadBalancerName_ == nullptr && this->loadBalancerStatus_ == nullptr && this->loadBalancerType_ == nullptr && this->networkId_ == nullptr && this->payType_ == nullptr
        && this->vSwitchId_ == nullptr; };
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


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LoadBalancer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // ensRegionId Field Functions 
        bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
        void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
        inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
        inline LoadBalancer& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


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


        // loadBalancerType Field Functions 
        bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
        void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
        inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
        inline LoadBalancer& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


        // networkId Field Functions 
        bool hasNetworkId() const { return this->networkId_ != nullptr;};
        void deleteNetworkId() { this->networkId_ = nullptr;};
        inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
        inline LoadBalancer& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
        inline LoadBalancer& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline LoadBalancer& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The IP address that the ELB instance uses to provide services.
        shared_ptr<string> address_ {};
        // The IP version. Valid values: ipv4 and ipv6.
        shared_ptr<string> addressIPVersion_ {};
        shared_ptr<string> addressType_ {};
        // The time when the ELB instance was created. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The ID of the ENS node.
        shared_ptr<string> ensRegionId_ {};
        // The ID of the ELB instance.
        shared_ptr<string> loadBalancerId_ {};
        // The name of the ELB instance.
        shared_ptr<string> loadBalancerName_ {};
        // The status of the listener for the ELB instance. Valid values:
        // 
        // *   **Active**: The listener for the instance can forward the received traffic based on forwarding rules.
        // *   **InActive**: The listener for the instance does not forward the received traffic.
        shared_ptr<string> loadBalancerStatus_ {};
        shared_ptr<string> loadBalancerType_ {};
        // The ID of the network.
        shared_ptr<string> networkId_ {};
        // The billing method. Valid values:
        // 
        // *   **PrePaid**: subscription.
        // *   **PostPaid**: pay-as-you-go. Only this billing method is supported.
        shared_ptr<string> payType_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
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
    // An array of ELB instances.
    shared_ptr<DescribeLoadBalancersResponseBody::LoadBalancers> loadBalancers_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Valid values: **10** to **100**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
