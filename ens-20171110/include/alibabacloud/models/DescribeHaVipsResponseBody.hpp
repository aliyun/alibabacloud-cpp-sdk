// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODY_HPP_
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
  class DescribeHaVipsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HaVips, haVips_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVips, haVips_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHaVipsResponseBody() = default ;
    DescribeHaVipsResponseBody(const DescribeHaVipsResponseBody &) = default ;
    DescribeHaVipsResponseBody(DescribeHaVipsResponseBody &&) = default ;
    DescribeHaVipsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBody() = default ;
    DescribeHaVipsResponseBody& operator=(const DescribeHaVipsResponseBody &) = default ;
    DescribeHaVipsResponseBody& operator=(DescribeHaVipsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HaVips : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HaVips& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedEipAddresses, associatedEipAddresses_);
        DARABONBA_PTR_TO_JSON(AssociatedInstances, associatedInstances_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
        DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, HaVips& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedEipAddresses, associatedEipAddresses_);
        DARABONBA_PTR_FROM_JSON(AssociatedInstances, associatedInstances_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
        DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      HaVips() = default ;
      HaVips(const HaVips &) = default ;
      HaVips(HaVips &&) = default ;
      HaVips(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HaVips() = default ;
      HaVips& operator=(const HaVips &) = default ;
      HaVips& operator=(HaVips &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AssociatedInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedInstances& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AssociatedInstances() = default ;
        AssociatedInstances(const AssociatedInstances &) = default ;
        AssociatedInstances(AssociatedInstances &&) = default ;
        AssociatedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedInstances() = default ;
        AssociatedInstances& operator=(const AssociatedInstances &) = default ;
        AssociatedInstances& operator=(AssociatedInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->ipAddress_ == nullptr && this->status_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AssociatedInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AssociatedInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline AssociatedInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ipAddress Field Functions 
        bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
        void deleteIpAddress() { this->ipAddress_ = nullptr;};
        inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
        inline AssociatedInstances& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AssociatedInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the instance was created.
        shared_ptr<string> creationTime_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The type of the instance that is associated with the HAVIP. Valid values:
        // 
        // *   EnsInstance: ENS instance
        // *   NetworkInterface: elastic network interface (ENI)
        shared_ptr<string> instanceType_ {};
        // The private IP address of the instance that is associated with the HAVIP. Valid values:
        shared_ptr<string> ipAddress_ {};
        // The association status of the HAVIP. Valid values:
        // 
        // *   Associating
        // *   InUse
        // *   Unassociating
        shared_ptr<string> status_ {};
      };

      class AssociatedEipAddresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedEipAddresses& obj) { 
          DARABONBA_PTR_TO_JSON(Eip, eip_);
          DARABONBA_PTR_TO_JSON(EipId, eipId_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedEipAddresses& obj) { 
          DARABONBA_PTR_FROM_JSON(Eip, eip_);
          DARABONBA_PTR_FROM_JSON(EipId, eipId_);
        };
        AssociatedEipAddresses() = default ;
        AssociatedEipAddresses(const AssociatedEipAddresses &) = default ;
        AssociatedEipAddresses(AssociatedEipAddresses &&) = default ;
        AssociatedEipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedEipAddresses() = default ;
        AssociatedEipAddresses& operator=(const AssociatedEipAddresses &) = default ;
        AssociatedEipAddresses& operator=(AssociatedEipAddresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eip_ == nullptr
        && this->eipId_ == nullptr; };
        // eip Field Functions 
        bool hasEip() const { return this->eip_ != nullptr;};
        void deleteEip() { this->eip_ = nullptr;};
        inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
        inline AssociatedEipAddresses& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


        // eipId Field Functions 
        bool hasEipId() const { return this->eipId_ != nullptr;};
        void deleteEipId() { this->eipId_ = nullptr;};
        inline string getEipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
        inline AssociatedEipAddresses& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


      protected:
        // The EIP.
        shared_ptr<string> eip_ {};
        // The ID of the EIP.
        shared_ptr<string> eipId_ {};
      };

      virtual bool empty() const override { return this->associatedEipAddresses_ == nullptr
        && this->associatedInstances_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->ensRegionId_ == nullptr && this->haVipId_ == nullptr
        && this->ipAddress_ == nullptr && this->name_ == nullptr && this->networkId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr; };
      // associatedEipAddresses Field Functions 
      bool hasAssociatedEipAddresses() const { return this->associatedEipAddresses_ != nullptr;};
      void deleteAssociatedEipAddresses() { this->associatedEipAddresses_ = nullptr;};
      inline const vector<HaVips::AssociatedEipAddresses> & getAssociatedEipAddresses() const { DARABONBA_PTR_GET_CONST(associatedEipAddresses_, vector<HaVips::AssociatedEipAddresses>) };
      inline vector<HaVips::AssociatedEipAddresses> getAssociatedEipAddresses() { DARABONBA_PTR_GET(associatedEipAddresses_, vector<HaVips::AssociatedEipAddresses>) };
      inline HaVips& setAssociatedEipAddresses(const vector<HaVips::AssociatedEipAddresses> & associatedEipAddresses) { DARABONBA_PTR_SET_VALUE(associatedEipAddresses_, associatedEipAddresses) };
      inline HaVips& setAssociatedEipAddresses(vector<HaVips::AssociatedEipAddresses> && associatedEipAddresses) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresses_, associatedEipAddresses) };


      // associatedInstances Field Functions 
      bool hasAssociatedInstances() const { return this->associatedInstances_ != nullptr;};
      void deleteAssociatedInstances() { this->associatedInstances_ = nullptr;};
      inline const vector<HaVips::AssociatedInstances> & getAssociatedInstances() const { DARABONBA_PTR_GET_CONST(associatedInstances_, vector<HaVips::AssociatedInstances>) };
      inline vector<HaVips::AssociatedInstances> getAssociatedInstances() { DARABONBA_PTR_GET(associatedInstances_, vector<HaVips::AssociatedInstances>) };
      inline HaVips& setAssociatedInstances(const vector<HaVips::AssociatedInstances> & associatedInstances) { DARABONBA_PTR_SET_VALUE(associatedInstances_, associatedInstances) };
      inline HaVips& setAssociatedInstances(vector<HaVips::AssociatedInstances> && associatedInstances) { DARABONBA_PTR_SET_RVALUE(associatedInstances_, associatedInstances) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline HaVips& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline HaVips& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline HaVips& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // haVipId Field Functions 
      bool hasHaVipId() const { return this->haVipId_ != nullptr;};
      void deleteHaVipId() { this->haVipId_ = nullptr;};
      inline string getHaVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
      inline HaVips& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


      // ipAddress Field Functions 
      bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
      void deleteIpAddress() { this->ipAddress_ = nullptr;};
      inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
      inline HaVips& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline HaVips& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkId Field Functions 
      bool hasNetworkId() const { return this->networkId_ != nullptr;};
      void deleteNetworkId() { this->networkId_ = nullptr;};
      inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
      inline HaVips& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline HaVips& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline HaVips& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The elastic IP addresses (EIPs) that are associated with the HAVIP.
      shared_ptr<vector<HaVips::AssociatedEipAddresses>> associatedEipAddresses_ {};
      // The information about instances that are associated with the HAVIP.
      shared_ptr<vector<HaVips::AssociatedInstances>> associatedInstances_ {};
      // The time when the HAVIP was created.
      shared_ptr<string> creationTime_ {};
      // The description of the HAVIP.
      shared_ptr<string> description_ {};
      // The ID of the region.
      shared_ptr<string> ensRegionId_ {};
      // The ID of the HAVIP.
      shared_ptr<string> haVipId_ {};
      // The IP address of the HAVIP.
      shared_ptr<string> ipAddress_ {};
      // The name of the HAVIP.
      shared_ptr<string> name_ {};
      // The ID of the network.
      shared_ptr<string> networkId_ {};
      // The status of the HAVIP. Valid values:
      // 
      // *   Creating
      // *   Available
      // *   InUse
      // *   Deleting
      shared_ptr<string> status_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->haVips_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // haVips Field Functions 
    bool hasHaVips() const { return this->haVips_ != nullptr;};
    void deleteHaVips() { this->haVips_ = nullptr;};
    inline const vector<DescribeHaVipsResponseBody::HaVips> & getHaVips() const { DARABONBA_PTR_GET_CONST(haVips_, vector<DescribeHaVipsResponseBody::HaVips>) };
    inline vector<DescribeHaVipsResponseBody::HaVips> getHaVips() { DARABONBA_PTR_GET(haVips_, vector<DescribeHaVipsResponseBody::HaVips>) };
    inline DescribeHaVipsResponseBody& setHaVips(const vector<DescribeHaVipsResponseBody::HaVips> & haVips) { DARABONBA_PTR_SET_VALUE(haVips_, haVips) };
    inline DescribeHaVipsResponseBody& setHaVips(vector<DescribeHaVipsResponseBody::HaVips> && haVips) { DARABONBA_PTR_SET_RVALUE(haVips_, haVips) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeHaVipsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeHaVipsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHaVipsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeHaVipsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the HAVIPs.
    shared_ptr<vector<DescribeHaVipsResponseBody::HaVips>> haVips_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
