// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPLOCATIONSERVICERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPLOCATIONSERVICERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeIpLocationServiceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpLocationServiceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpLocationServiceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeIpLocationServiceResponseBodyInstance() = default ;
    DescribeIpLocationServiceResponseBodyInstance(const DescribeIpLocationServiceResponseBodyInstance &) = default ;
    DescribeIpLocationServiceResponseBodyInstance(DescribeIpLocationServiceResponseBodyInstance &&) = default ;
    DescribeIpLocationServiceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpLocationServiceResponseBodyInstance() = default ;
    DescribeIpLocationServiceResponseBodyInstance& operator=(const DescribeIpLocationServiceResponseBodyInstance &) = default ;
    DescribeIpLocationServiceResponseBodyInstance& operator=(DescribeIpLocationServiceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceName_ != nullptr && this->instanceType_ != nullptr && this->internetIp_ != nullptr && this->region_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIpLocationServiceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeIpLocationServiceResponseBodyInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeIpLocationServiceResponseBodyInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeIpLocationServiceResponseBodyInstance& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeIpLocationServiceResponseBodyInstance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **ecs**: an ECS instance.
    // *   **slb**: an SLB instance.
    // *   **eip**: an EIP.
    // *   **ipv6**: an IPv6 gateway.
    // *   **swas**: a simple application server.
    // *   **waf**: a Web Application Firewall (WAF) instance of the Exclusive edition.
    // *   **ga_basic**: a Global Accelerator (GA) instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The region to which the public IP address of the asset belongs.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
