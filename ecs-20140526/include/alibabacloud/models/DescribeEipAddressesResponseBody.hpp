// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPADDRESSESRESPONSEBODY_HPP_
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
  class DescribeEipAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEipAddressesResponseBody() = default ;
    DescribeEipAddressesResponseBody(const DescribeEipAddressesResponseBody &) = default ;
    DescribeEipAddressesResponseBody(DescribeEipAddressesResponseBody &&) = default ;
    DescribeEipAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipAddressesResponseBody() = default ;
    DescribeEipAddressesResponseBody& operator=(const DescribeEipAddressesResponseBody &) = default ;
    DescribeEipAddressesResponseBody& operator=(DescribeEipAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EipAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EipAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      };
      friend void from_json(const Darabonba::Json& j, EipAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      };
      EipAddresses() = default ;
      EipAddresses(const EipAddresses &) = default ;
      EipAddresses(EipAddresses &&) = default ;
      EipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EipAddresses() = default ;
      EipAddresses& operator=(const EipAddresses &) = default ;
      EipAddresses& operator=(EipAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipAddress& obj) { 
          DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, EipAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
          DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        EipAddress() = default ;
        EipAddress(const EipAddress &) = default ;
        EipAddress(EipAddress &&) = default ;
        EipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipAddress() = default ;
        EipAddress& operator=(const EipAddress &) = default ;
        EipAddress& operator=(EipAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OperationLocks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationLocks& obj) { 
            DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
          };
          friend void from_json(const Darabonba::Json& j, OperationLocks& obj) { 
            DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
          };
          OperationLocks() = default ;
          OperationLocks(const OperationLocks &) = default ;
          OperationLocks(OperationLocks &&) = default ;
          OperationLocks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationLocks() = default ;
          OperationLocks& operator=(const OperationLocks &) = default ;
          OperationLocks& operator=(OperationLocks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LockReason : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LockReason& obj) { 
              DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
            };
            friend void from_json(const Darabonba::Json& j, LockReason& obj) { 
              DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
            };
            LockReason() = default ;
            LockReason(const LockReason &) = default ;
            LockReason(LockReason &&) = default ;
            LockReason(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LockReason() = default ;
            LockReason& operator=(const LockReason &) = default ;
            LockReason& operator=(LockReason &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->lockReason_ == nullptr; };
            // lockReason Field Functions 
            bool hasLockReason() const { return this->lockReason_ != nullptr;};
            void deleteLockReason() { this->lockReason_ = nullptr;};
            inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
            inline LockReason& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


          protected:
            shared_ptr<string> lockReason_ {};
          };

          virtual bool empty() const override { return this->lockReason_ == nullptr; };
          // lockReason Field Functions 
          bool hasLockReason() const { return this->lockReason_ != nullptr;};
          void deleteLockReason() { this->lockReason_ = nullptr;};
          inline const vector<OperationLocks::LockReason> & getLockReason() const { DARABONBA_PTR_GET_CONST(lockReason_, vector<OperationLocks::LockReason>) };
          inline vector<OperationLocks::LockReason> getLockReason() { DARABONBA_PTR_GET(lockReason_, vector<OperationLocks::LockReason>) };
          inline OperationLocks& setLockReason(const vector<OperationLocks::LockReason> & lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };
          inline OperationLocks& setLockReason(vector<OperationLocks::LockReason> && lockReason) { DARABONBA_PTR_SET_RVALUE(lockReason_, lockReason) };


        protected:
          shared_ptr<vector<OperationLocks::LockReason>> lockReason_ {};
        };

        virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->allocationTime_ == nullptr && this->bandwidth_ == nullptr && this->chargeType_ == nullptr && this->eipBandwidth_ == nullptr && this->expiredTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr && this->ipAddress_ == nullptr && this->operationLocks_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr; };
        // allocationId Field Functions 
        bool hasAllocationId() const { return this->allocationId_ != nullptr;};
        void deleteAllocationId() { this->allocationId_ = nullptr;};
        inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
        inline EipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


        // allocationTime Field Functions 
        bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
        void deleteAllocationTime() { this->allocationTime_ = nullptr;};
        inline string getAllocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
        inline EipAddress& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
        inline EipAddress& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline EipAddress& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // eipBandwidth Field Functions 
        bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
        void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
        inline string getEipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, "") };
        inline EipAddress& setEipBandwidth(string eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline EipAddress& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EipAddress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline EipAddress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline EipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline EipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // operationLocks Field Functions 
        bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
        void deleteOperationLocks() { this->operationLocks_ = nullptr;};
        inline const EipAddress::OperationLocks & getOperationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, EipAddress::OperationLocks) };
        inline EipAddress::OperationLocks getOperationLocks() { DARABONBA_PTR_GET(operationLocks_, EipAddress::OperationLocks) };
        inline EipAddress& setOperationLocks(const EipAddress::OperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
        inline EipAddress& setOperationLocks(EipAddress::OperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EipAddress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EipAddress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> allocationId_ {};
        shared_ptr<string> allocationTime_ {};
        shared_ptr<string> bandwidth_ {};
        shared_ptr<string> chargeType_ {};
        shared_ptr<string> eipBandwidth_ {};
        shared_ptr<string> expiredTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> internetChargeType_ {};
        shared_ptr<string> ipAddress_ {};
        shared_ptr<EipAddress::OperationLocks> operationLocks_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->eipAddress_ == nullptr; };
      // eipAddress Field Functions 
      bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
      void deleteEipAddress() { this->eipAddress_ = nullptr;};
      inline const vector<EipAddresses::EipAddress> & getEipAddress() const { DARABONBA_PTR_GET_CONST(eipAddress_, vector<EipAddresses::EipAddress>) };
      inline vector<EipAddresses::EipAddress> getEipAddress() { DARABONBA_PTR_GET(eipAddress_, vector<EipAddresses::EipAddress>) };
      inline EipAddresses& setEipAddress(const vector<EipAddresses::EipAddress> & eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };
      inline EipAddresses& setEipAddress(vector<EipAddresses::EipAddress> && eipAddress) { DARABONBA_PTR_SET_RVALUE(eipAddress_, eipAddress) };


    protected:
      shared_ptr<vector<EipAddresses::EipAddress>> eipAddress_ {};
    };

    virtual bool empty() const override { return this->eipAddresses_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // eipAddresses Field Functions 
    bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
    void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
    inline const DescribeEipAddressesResponseBody::EipAddresses & getEipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, DescribeEipAddressesResponseBody::EipAddresses) };
    inline DescribeEipAddressesResponseBody::EipAddresses getEipAddresses() { DARABONBA_PTR_GET(eipAddresses_, DescribeEipAddressesResponseBody::EipAddresses) };
    inline DescribeEipAddressesResponseBody& setEipAddresses(const DescribeEipAddressesResponseBody::EipAddresses & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
    inline DescribeEipAddressesResponseBody& setEipAddresses(DescribeEipAddressesResponseBody::EipAddresses && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEipAddressesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEipAddressesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEipAddressesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeEipAddressesResponseBody::EipAddresses> eipAddresses_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
