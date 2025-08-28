// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODYGLOBALACCELERATIONINSTANCESGLOBALACCELERATIONINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODYGLOBALACCELERATIONINSTANCESGLOBALACCELERATIONINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServerIpAddress, serverIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServerIpAddress, serverIpAddress_);
    };
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance(const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance(DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance &&) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& operator=(const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& operator=(DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalAccelerationInstanceId_ != nullptr
        && this->ipAddress_ != nullptr && this->regionId_ != nullptr && this->serverIpAddress_ != nullptr; };
    // globalAccelerationInstanceId Field Functions 
    bool hasGlobalAccelerationInstanceId() const { return this->globalAccelerationInstanceId_ != nullptr;};
    void deleteGlobalAccelerationInstanceId() { this->globalAccelerationInstanceId_ = nullptr;};
    inline string globalAccelerationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalAccelerationInstanceId_, "") };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& setGlobalAccelerationInstanceId(string globalAccelerationInstanceId) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstanceId_, globalAccelerationInstanceId) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverIpAddress Field Functions 
    bool hasServerIpAddress() const { return this->serverIpAddress_ != nullptr;};
    void deleteServerIpAddress() { this->serverIpAddress_ = nullptr;};
    inline string serverIpAddress() const { DARABONBA_PTR_GET_DEFAULT(serverIpAddress_, "") };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance& setServerIpAddress(string serverIpAddress) { DARABONBA_PTR_SET_VALUE(serverIpAddress_, serverIpAddress) };


  protected:
    // The ID of the GA instance.
    std::shared_ptr<string> globalAccelerationInstanceId_ = nullptr;
    // The public IP address of the GA instance.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The region ID of the GA instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP address of the backend service.
    std::shared_ptr<string> serverIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
