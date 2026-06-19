// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODY_HPP_
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
  class DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterForPhysicalConnectionSet, virtualBorderRouterForPhysicalConnectionSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterForPhysicalConnectionSet, virtualBorderRouterForPhysicalConnectionSet_);
    };
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &&) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& operator=(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& operator=(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VirtualBorderRouterForPhysicalConnectionSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VirtualBorderRouterForPhysicalConnectionSet& obj) { 
        DARABONBA_PTR_TO_JSON(VirtualBorderRouterForPhysicalConnectionType, virtualBorderRouterForPhysicalConnectionType_);
      };
      friend void from_json(const Darabonba::Json& j, VirtualBorderRouterForPhysicalConnectionSet& obj) { 
        DARABONBA_PTR_FROM_JSON(VirtualBorderRouterForPhysicalConnectionType, virtualBorderRouterForPhysicalConnectionType_);
      };
      VirtualBorderRouterForPhysicalConnectionSet() = default ;
      VirtualBorderRouterForPhysicalConnectionSet(const VirtualBorderRouterForPhysicalConnectionSet &) = default ;
      VirtualBorderRouterForPhysicalConnectionSet(VirtualBorderRouterForPhysicalConnectionSet &&) = default ;
      VirtualBorderRouterForPhysicalConnectionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VirtualBorderRouterForPhysicalConnectionSet() = default ;
      VirtualBorderRouterForPhysicalConnectionSet& operator=(const VirtualBorderRouterForPhysicalConnectionSet &) = default ;
      VirtualBorderRouterForPhysicalConnectionSet& operator=(VirtualBorderRouterForPhysicalConnectionSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VirtualBorderRouterForPhysicalConnectionType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VirtualBorderRouterForPhysicalConnectionType& obj) { 
          DARABONBA_PTR_TO_JSON(ActivationTime, activationTime_);
          DARABONBA_PTR_TO_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(RecoveryTime, recoveryTime_);
          DARABONBA_PTR_TO_JSON(TerminationTime, terminationTime_);
          DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
          DARABONBA_PTR_TO_JSON(VbrOwnerUid, vbrOwnerUid_);
          DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
        };
        friend void from_json(const Darabonba::Json& j, VirtualBorderRouterForPhysicalConnectionType& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivationTime, activationTime_);
          DARABONBA_PTR_FROM_JSON(CircuitCode, circuitCode_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(RecoveryTime, recoveryTime_);
          DARABONBA_PTR_FROM_JSON(TerminationTime, terminationTime_);
          DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
          DARABONBA_PTR_FROM_JSON(VbrOwnerUid, vbrOwnerUid_);
          DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
        };
        VirtualBorderRouterForPhysicalConnectionType() = default ;
        VirtualBorderRouterForPhysicalConnectionType(const VirtualBorderRouterForPhysicalConnectionType &) = default ;
        VirtualBorderRouterForPhysicalConnectionType(VirtualBorderRouterForPhysicalConnectionType &&) = default ;
        VirtualBorderRouterForPhysicalConnectionType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VirtualBorderRouterForPhysicalConnectionType() = default ;
        VirtualBorderRouterForPhysicalConnectionType& operator=(const VirtualBorderRouterForPhysicalConnectionType &) = default ;
        VirtualBorderRouterForPhysicalConnectionType& operator=(VirtualBorderRouterForPhysicalConnectionType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activationTime_ == nullptr
        && this->circuitCode_ == nullptr && this->creationTime_ == nullptr && this->recoveryTime_ == nullptr && this->terminationTime_ == nullptr && this->vbrId_ == nullptr
        && this->vbrOwnerUid_ == nullptr && this->vlanId_ == nullptr; };
        // activationTime Field Functions 
        bool hasActivationTime() const { return this->activationTime_ != nullptr;};
        void deleteActivationTime() { this->activationTime_ = nullptr;};
        inline string getActivationTime() const { DARABONBA_PTR_GET_DEFAULT(activationTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setActivationTime(string activationTime) { DARABONBA_PTR_SET_VALUE(activationTime_, activationTime) };


        // circuitCode Field Functions 
        bool hasCircuitCode() const { return this->circuitCode_ != nullptr;};
        void deleteCircuitCode() { this->circuitCode_ = nullptr;};
        inline string getCircuitCode() const { DARABONBA_PTR_GET_DEFAULT(circuitCode_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setCircuitCode(string circuitCode) { DARABONBA_PTR_SET_VALUE(circuitCode_, circuitCode) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // recoveryTime Field Functions 
        bool hasRecoveryTime() const { return this->recoveryTime_ != nullptr;};
        void deleteRecoveryTime() { this->recoveryTime_ = nullptr;};
        inline string getRecoveryTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setRecoveryTime(string recoveryTime) { DARABONBA_PTR_SET_VALUE(recoveryTime_, recoveryTime) };


        // terminationTime Field Functions 
        bool hasTerminationTime() const { return this->terminationTime_ != nullptr;};
        void deleteTerminationTime() { this->terminationTime_ = nullptr;};
        inline string getTerminationTime() const { DARABONBA_PTR_GET_DEFAULT(terminationTime_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setTerminationTime(string terminationTime) { DARABONBA_PTR_SET_VALUE(terminationTime_, terminationTime) };


        // vbrId Field Functions 
        bool hasVbrId() const { return this->vbrId_ != nullptr;};
        void deleteVbrId() { this->vbrId_ = nullptr;};
        inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
        inline VirtualBorderRouterForPhysicalConnectionType& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


        // vbrOwnerUid Field Functions 
        bool hasVbrOwnerUid() const { return this->vbrOwnerUid_ != nullptr;};
        void deleteVbrOwnerUid() { this->vbrOwnerUid_ = nullptr;};
        inline int64_t getVbrOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(vbrOwnerUid_, 0L) };
        inline VirtualBorderRouterForPhysicalConnectionType& setVbrOwnerUid(int64_t vbrOwnerUid) { DARABONBA_PTR_SET_VALUE(vbrOwnerUid_, vbrOwnerUid) };


        // vlanId Field Functions 
        bool hasVlanId() const { return this->vlanId_ != nullptr;};
        void deleteVlanId() { this->vlanId_ = nullptr;};
        inline int32_t getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, 0) };
        inline VirtualBorderRouterForPhysicalConnectionType& setVlanId(int32_t vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


      protected:
        shared_ptr<string> activationTime_ {};
        shared_ptr<string> circuitCode_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> recoveryTime_ {};
        shared_ptr<string> terminationTime_ {};
        shared_ptr<string> vbrId_ {};
        shared_ptr<int64_t> vbrOwnerUid_ {};
        shared_ptr<int32_t> vlanId_ {};
      };

      virtual bool empty() const override { return this->virtualBorderRouterForPhysicalConnectionType_ == nullptr; };
      // virtualBorderRouterForPhysicalConnectionType Field Functions 
      bool hasVirtualBorderRouterForPhysicalConnectionType() const { return this->virtualBorderRouterForPhysicalConnectionType_ != nullptr;};
      void deleteVirtualBorderRouterForPhysicalConnectionType() { this->virtualBorderRouterForPhysicalConnectionType_ = nullptr;};
      inline const vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> & getVirtualBorderRouterForPhysicalConnectionType() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterForPhysicalConnectionType_, vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType>) };
      inline vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> getVirtualBorderRouterForPhysicalConnectionType() { DARABONBA_PTR_GET(virtualBorderRouterForPhysicalConnectionType_, vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType>) };
      inline VirtualBorderRouterForPhysicalConnectionSet& setVirtualBorderRouterForPhysicalConnectionType(const vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> & virtualBorderRouterForPhysicalConnectionType) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterForPhysicalConnectionType_, virtualBorderRouterForPhysicalConnectionType) };
      inline VirtualBorderRouterForPhysicalConnectionSet& setVirtualBorderRouterForPhysicalConnectionType(vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType> && virtualBorderRouterForPhysicalConnectionType) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterForPhysicalConnectionType_, virtualBorderRouterForPhysicalConnectionType) };


    protected:
      shared_ptr<vector<VirtualBorderRouterForPhysicalConnectionSet::VirtualBorderRouterForPhysicalConnectionType>> virtualBorderRouterForPhysicalConnectionType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->virtualBorderRouterForPhysicalConnectionSet_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualBorderRouterForPhysicalConnectionSet Field Functions 
    bool hasVirtualBorderRouterForPhysicalConnectionSet() const { return this->virtualBorderRouterForPhysicalConnectionSet_ != nullptr;};
    void deleteVirtualBorderRouterForPhysicalConnectionSet() { this->virtualBorderRouterForPhysicalConnectionSet_ = nullptr;};
    inline const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet & getVirtualBorderRouterForPhysicalConnectionSet() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterForPhysicalConnectionSet_, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet getVirtualBorderRouterForPhysicalConnectionSet() { DARABONBA_PTR_GET(virtualBorderRouterForPhysicalConnectionSet_, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setVirtualBorderRouterForPhysicalConnectionSet(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet & virtualBorderRouterForPhysicalConnectionSet) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterForPhysicalConnectionSet_, virtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setVirtualBorderRouterForPhysicalConnectionSet(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet && virtualBorderRouterForPhysicalConnectionSet) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterForPhysicalConnectionSet_, virtualBorderRouterForPhysicalConnectionSet) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody::VirtualBorderRouterForPhysicalConnectionSet> virtualBorderRouterForPhysicalConnectionSet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
