// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCEVPC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCEVPC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc& obj) { 
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_TO_JSON(VswitchInstanceId, vswitchInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
      DARABONBA_PTR_FROM_JSON(VswitchInstanceId, vswitchInstanceId_);
    };
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc &&) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc& operator=(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc& operator=(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpcInstanceId_ != nullptr
        && this->vswitchInstanceId_ != nullptr; };
    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    // vswitchInstanceId Field Functions 
    bool hasVswitchInstanceId() const { return this->vswitchInstanceId_ != nullptr;};
    void deleteVswitchInstanceId() { this->vswitchInstanceId_ = nullptr;};
    inline string vswitchInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vswitchInstanceId_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc& setVswitchInstanceId(string vswitchInstanceId) { DARABONBA_PTR_SET_VALUE(vswitchInstanceId_, vswitchInstanceId) };


  protected:
    // The VPC ID.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
