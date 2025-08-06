// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSHAVIP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses.hpp>
#include <alibabacloud/models/DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsHaVip : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsHaVip& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedEipAddresses, associatedEipAddresses_);
      DARABONBA_PTR_TO_JSON(AssociatedInstances, associatedInstances_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsHaVip& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedEipAddresses, associatedEipAddresses_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstances, associatedInstances_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceId, masterInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeHaVipsResponseBodyHaVipsHaVip() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip(const DescribeHaVipsResponseBodyHaVipsHaVip &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip(DescribeHaVipsResponseBodyHaVipsHaVip &&) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsHaVip() = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip& operator=(const DescribeHaVipsResponseBodyHaVipsHaVip &) = default ;
    DescribeHaVipsResponseBodyHaVipsHaVip& operator=(DescribeHaVipsResponseBodyHaVipsHaVip &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedEipAddresses_ != nullptr
        && this->associatedInstances_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->haVipId_ != nullptr && this->ipAddress_ != nullptr
        && this->masterInstanceId_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // associatedEipAddresses Field Functions 
    bool hasAssociatedEipAddresses() const { return this->associatedEipAddresses_ != nullptr;};
    void deleteAssociatedEipAddresses() { this->associatedEipAddresses_ = nullptr;};
    inline const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses & associatedEipAddresses() const { DARABONBA_PTR_GET_CONST(associatedEipAddresses_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses) };
    inline Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses associatedEipAddresses() { DARABONBA_PTR_GET(associatedEipAddresses_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedEipAddresses(const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses & associatedEipAddresses) { DARABONBA_PTR_SET_VALUE(associatedEipAddresses_, associatedEipAddresses) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedEipAddresses(Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses && associatedEipAddresses) { DARABONBA_PTR_SET_RVALUE(associatedEipAddresses_, associatedEipAddresses) };


    // associatedInstances Field Functions 
    bool hasAssociatedInstances() const { return this->associatedInstances_ != nullptr;};
    void deleteAssociatedInstances() { this->associatedInstances_ = nullptr;};
    inline const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances & associatedInstances() const { DARABONBA_PTR_GET_CONST(associatedInstances_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances) };
    inline Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances associatedInstances() { DARABONBA_PTR_GET(associatedInstances_, Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedInstances(const Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances & associatedInstances) { DARABONBA_PTR_SET_VALUE(associatedInstances_, associatedInstances) };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setAssociatedInstances(Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances && associatedInstances) { DARABONBA_PTR_SET_RVALUE(associatedInstances_, associatedInstances) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline string haVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // masterInstanceId Field Functions 
    bool hasMasterInstanceId() const { return this->masterInstanceId_ != nullptr;};
    void deleteMasterInstanceId() { this->masterInstanceId_ = nullptr;};
    inline string masterInstanceId() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setMasterInstanceId(string masterInstanceId) { DARABONBA_PTR_SET_VALUE(masterInstanceId_, masterInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsHaVip& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedEipAddresses> associatedEipAddresses_ = nullptr;
    std::shared_ptr<Models::DescribeHaVipsResponseBodyHaVipsHaVipAssociatedInstances> associatedInstances_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> haVipId_ = nullptr;
    std::shared_ptr<string> ipAddress_ = nullptr;
    std::shared_ptr<string> masterInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
