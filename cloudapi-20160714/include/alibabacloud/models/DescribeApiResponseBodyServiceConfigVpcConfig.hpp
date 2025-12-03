// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGVPCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGVPCCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceConfigVpcConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceConfigVpcConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcScheme, vpcScheme_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceConfigVpcConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcScheme, vpcScheme_);
    };
    DescribeApiResponseBodyServiceConfigVpcConfig() = default ;
    DescribeApiResponseBodyServiceConfigVpcConfig(const DescribeApiResponseBodyServiceConfigVpcConfig &) = default ;
    DescribeApiResponseBodyServiceConfigVpcConfig(DescribeApiResponseBodyServiceConfigVpcConfig &&) = default ;
    DescribeApiResponseBodyServiceConfigVpcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceConfigVpcConfig() = default ;
    DescribeApiResponseBodyServiceConfigVpcConfig& operator=(const DescribeApiResponseBodyServiceConfigVpcConfig &) = default ;
    DescribeApiResponseBodyServiceConfigVpcConfig& operator=(DescribeApiResponseBodyServiceConfigVpcConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->name_ == nullptr && return this->port_ == nullptr && return this->vpcId_ == nullptr && return this->vpcScheme_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApiResponseBodyServiceConfigVpcConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApiResponseBodyServiceConfigVpcConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeApiResponseBodyServiceConfigVpcConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeApiResponseBodyServiceConfigVpcConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcScheme Field Functions 
    bool hasVpcScheme() const { return this->vpcScheme_ != nullptr;};
    void deleteVpcScheme() { this->vpcScheme_ = nullptr;};
    inline string vpcScheme() const { DARABONBA_PTR_GET_DEFAULT(vpcScheme_, "") };
    inline DescribeApiResponseBodyServiceConfigVpcConfig& setVpcScheme(string vpcScheme) { DARABONBA_PTR_SET_VALUE(vpcScheme_, vpcScheme) };


  protected:
    // The ID of the ECS or SLB instance in the VPC.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the VPC access authorization.
    std::shared_ptr<string> name_ = nullptr;
    // The port number that corresponds to the instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The VPC protocol.
    std::shared_ptr<string> vpcScheme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
