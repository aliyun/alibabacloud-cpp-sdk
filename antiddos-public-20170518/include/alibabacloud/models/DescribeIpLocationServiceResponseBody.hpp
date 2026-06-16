// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPLOCATIONSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPLOCATIONSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeIpLocationServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpLocationServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpLocationServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpLocationServiceResponseBody() = default ;
    DescribeIpLocationServiceResponseBody(const DescribeIpLocationServiceResponseBody &) = default ;
    DescribeIpLocationServiceResponseBody(DescribeIpLocationServiceResponseBody &&) = default ;
    DescribeIpLocationServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpLocationServiceResponseBody() = default ;
    DescribeIpLocationServiceResponseBody& operator=(const DescribeIpLocationServiceResponseBody &) = default ;
    DescribeIpLocationServiceResponseBody& operator=(DescribeIpLocationServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instance& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Instance& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      Instance() = default ;
      Instance(const Instance &) = default ;
      Instance(Instance &&) = default ;
      Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instance() = default ;
      Instance& operator=(const Instance &) = default ;
      Instance& operator=(Instance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetIp_ == nullptr && this->region_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Instance& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Instance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The type of the asset. Valid values:
      // 
      // - **ecs**: an ECS instance.
      // 
      // - **slb**: an SLB instance.
      // 
      // - **eip**: an EIP.
      // 
      // - **ipv6**: an IPv6 gateway.
      // 
      // - **swas**: a simple application server.
      // 
      // - **waf**: a Web Application Firewall (WAF) instance of the Exclusive edition.
      // 
      // - **ga_basic**: a Global Accelerator (GA) instance.
      shared_ptr<string> instanceType_ {};
      // The IP address of the asset.
      shared_ptr<string> internetIp_ {};
      // The region to which the public IP address of the asset belongs.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->instance_ == nullptr
        && this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const DescribeIpLocationServiceResponseBody::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, DescribeIpLocationServiceResponseBody::Instance) };
    inline DescribeIpLocationServiceResponseBody::Instance getInstance() { DARABONBA_PTR_GET(instance_, DescribeIpLocationServiceResponseBody::Instance) };
    inline DescribeIpLocationServiceResponseBody& setInstance(const DescribeIpLocationServiceResponseBody::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeIpLocationServiceResponseBody& setInstance(DescribeIpLocationServiceResponseBody::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpLocationServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the asset.
    shared_ptr<DescribeIpLocationServiceResponseBody::Instance> instance_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
