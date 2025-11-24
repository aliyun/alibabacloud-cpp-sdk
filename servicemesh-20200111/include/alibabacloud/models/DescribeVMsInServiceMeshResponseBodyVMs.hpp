// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVMSINSERVICEMESHRESPONSEBODYVMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVMSINSERVICEMESHRESPONSEBODYVMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeVMsInServiceMeshResponseBodyVMs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVMsInServiceMeshResponseBodyVMs& obj) { 
      DARABONBA_PTR_TO_JSON(HasTag, hasTag_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVMsInServiceMeshResponseBodyVMs& obj) { 
      DARABONBA_PTR_FROM_JSON(HasTag, hasTag_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeVMsInServiceMeshResponseBodyVMs() = default ;
    DescribeVMsInServiceMeshResponseBodyVMs(const DescribeVMsInServiceMeshResponseBodyVMs &) = default ;
    DescribeVMsInServiceMeshResponseBodyVMs(DescribeVMsInServiceMeshResponseBodyVMs &&) = default ;
    DescribeVMsInServiceMeshResponseBodyVMs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVMsInServiceMeshResponseBodyVMs() = default ;
    DescribeVMsInServiceMeshResponseBodyVMs& operator=(const DescribeVMsInServiceMeshResponseBodyVMs &) = default ;
    DescribeVMsInServiceMeshResponseBodyVMs& operator=(DescribeVMsInServiceMeshResponseBodyVMs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasTag_ == nullptr
        && return this->hostName_ == nullptr && return this->instanceId_ == nullptr && return this->ipAddress_ == nullptr && return this->region_ == nullptr && return this->securityGroupIds_ == nullptr
        && return this->status_ == nullptr; };
    // hasTag Field Functions 
    bool hasHasTag() const { return this->hasTag_ != nullptr;};
    void deleteHasTag() { this->hasTag_ = nullptr;};
    inline bool hasTag() const { DARABONBA_PTR_GET_DEFAULT(hasTag_, false) };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setHasTag(bool hasTag) { DARABONBA_PTR_SET_VALUE(hasTag_, hasTag) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline string securityGroupIds() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIds_, "") };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setSecurityGroupIds(string securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVMsInServiceMeshResponseBodyVMs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the ECS instance has labels.
    std::shared_ptr<bool> hasTag_ = nullptr;
    // The host name.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the ECS instance.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The security group to which the ECS instance belongs.
    std::shared_ptr<string> securityGroupIds_ = nullptr;
    // The state of the ECS instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
