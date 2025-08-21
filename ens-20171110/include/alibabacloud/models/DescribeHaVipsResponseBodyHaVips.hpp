// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses.hpp>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsAssociatedInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVips : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVips& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVips& obj) { 
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
    DescribeHaVipsResponseBodyHaVips() = default ;
    DescribeHaVipsResponseBodyHaVips(const DescribeHaVipsResponseBodyHaVips &) = default ;
    DescribeHaVipsResponseBodyHaVips(DescribeHaVipsResponseBodyHaVips &&) = default ;
    DescribeHaVipsResponseBodyHaVips(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVips() = default ;
    DescribeHaVipsResponseBodyHaVips& operator=(const DescribeHaVipsResponseBodyHaVips &) = default ;
    DescribeHaVipsResponseBodyHaVips& operator=(DescribeHaVipsResponseBodyHaVips &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedEipAddresses_ != nullptr
        && this->associatedInstances_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->haVipId_ != nullptr
        && this->ipAddress_ != nullptr && this->name_ != nullptr && this->networkId_ != nullptr && this->status_ != nullptr && this->vSwitchId_ != nullptr; };
    // associatedEipAddresses Field Functions 
    bool hasAssociatedEipAddresses() const { return this->associatedEipAddresses_ != nullptr;};
    void deleteAssociatedEipAddresses() { this->associatedEipAddresses_ = nullptr;};
    inline const vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses> & associatedEipAddresses() const { DARABONBA_PTR_GET_CONST(associatedEipAddresses_, vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses>) };
    inline vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses> associatedEipAddresses() { DARABONBA_PTR_GET(associatedEipAddresses_, vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses>) };
    inline DescribeHaVipsResponseBodyHaVips& setAssociatedEipAddresses(const vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses> & associatedEipAddresses) { DARABONBA_PTR_SET_VALUE(associatedEipAddresses_, associatedEipAddresses) };
    inline DescribeHaVipsResponseBodyHaVips& setAssociatedEipAddresses(vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses> && associatedEipAddresses) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresses_, associatedEipAddresses) };


    // associatedInstances Field Functions 
    bool hasAssociatedInstances() const { return this->associatedInstances_ != nullptr;};
    void deleteAssociatedInstances() { this->associatedInstances_ = nullptr;};
    inline const vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances> & associatedInstances() const { DARABONBA_PTR_GET_CONST(associatedInstances_, vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances>) };
    inline vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances> associatedInstances() { DARABONBA_PTR_GET(associatedInstances_, vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances>) };
    inline DescribeHaVipsResponseBodyHaVips& setAssociatedInstances(const vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances> & associatedInstances) { DARABONBA_PTR_SET_VALUE(associatedInstances_, associatedInstances) };
    inline DescribeHaVipsResponseBodyHaVips& setAssociatedInstances(vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances> && associatedInstances) { DARABONBA_PTR_SET_RVALUE(associatedInstances_, associatedInstances) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline string haVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeHaVipsResponseBodyHaVips& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The elastic IP addresses (EIPs) that are associated with the HAVIP.
    std::shared_ptr<vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses>> associatedEipAddresses_ = nullptr;
    // The information about instances that are associated with the HAVIP.
    std::shared_ptr<vector<Models::DescribeHaVipsResponseBodyHaVipsAssociatedInstances>> associatedInstances_ = nullptr;
    // The time when the HAVIP was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the HAVIP.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the HAVIP.
    std::shared_ptr<string> haVipId_ = nullptr;
    // The IP address of the HAVIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The name of the HAVIP.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The status of the HAVIP. Valid values:
    // 
    // *   Creating
    // *   Available
    // *   InUse
    // *   Deleting
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
