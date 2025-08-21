// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSEIPADDRESSESRESPONSEBODYEIPADDRESSESEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Standby, standby_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Standby, standby_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress() = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress(const DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress &) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress(DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress &&) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress() = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& operator=(const DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress &) = default ;
    DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& operator=(DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->allocationTime_ != nullptr && this->bandwidth_ != nullptr && this->chargeType_ != nullptr && this->description_ != nullptr && this->ensRegionId_ != nullptr
        && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->internetChargeType_ != nullptr && this->ipAddress_ != nullptr && this->ipStatus_ != nullptr
        && this->isp_ != nullptr && this->name_ != nullptr && this->standby_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // allocationTime Field Functions 
    bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
    void deleteAllocationTime() { this->allocationTime_ = nullptr;};
    inline string allocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // ipStatus Field Functions 
    bool hasIpStatus() const { return this->ipStatus_ != nullptr;};
    void deleteIpStatus() { this->ipStatus_ = nullptr;};
    inline string ipStatus() const { DARABONBA_PTR_GET_DEFAULT(ipStatus_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setIpStatus(string ipStatus) { DARABONBA_PTR_SET_VALUE(ipStatus_, ipStatus) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // standby Field Functions 
    bool hasStandby() const { return this->standby_ != nullptr;};
    void deleteStandby() { this->standby_ = nullptr;};
    inline bool standby() const { DARABONBA_PTR_GET_DEFAULT(standby_, false) };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setStandby(bool standby) { DARABONBA_PTR_SET_VALUE(standby_, standby) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags) };
    inline Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags) };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setTags(const Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeEnsEipAddressesResponseBodyEipAddressesEipAddress& setTags(Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> allocationId_ = nullptr;
    std::shared_ptr<string> allocationTime_ = nullptr;
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ensRegionId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> internetChargeType_ = nullptr;
    std::shared_ptr<string> ipAddress_ = nullptr;
    std::shared_ptr<string> ipStatus_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> standby_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeEnsEipAddressesResponseBodyEipAddressesEipAddressTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
