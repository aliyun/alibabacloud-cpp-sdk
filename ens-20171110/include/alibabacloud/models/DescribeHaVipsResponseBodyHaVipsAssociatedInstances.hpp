// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSASSOCIATEDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSASSOCIATEDINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsAssociatedInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsAssociatedInstances& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsAssociatedInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHaVipsResponseBodyHaVipsAssociatedInstances() = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedInstances(const DescribeHaVipsResponseBodyHaVipsAssociatedInstances &) = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedInstances(DescribeHaVipsResponseBodyHaVipsAssociatedInstances &&) = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsAssociatedInstances() = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedInstances& operator=(const DescribeHaVipsResponseBodyHaVipsAssociatedInstances &) = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedInstances& operator=(DescribeHaVipsResponseBodyHaVipsAssociatedInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->ipAddress_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedInstances& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedInstances& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedInstances& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the instance that is associated with the HAVIP. Valid values:
    // 
    // *   EnsInstance: ENS instance
    // *   NetworkInterface: elastic network interface (ENI)
    std::shared_ptr<string> instanceType_ = nullptr;
    // The private IP address of the instance that is associated with the HAVIP. Valid values:
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The association status of the HAVIP. Valid values:
    // 
    // *   Associating
    // *   InUse
    // *   Unassociating
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
