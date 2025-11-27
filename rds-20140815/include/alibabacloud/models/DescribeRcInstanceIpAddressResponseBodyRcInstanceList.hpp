// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEIPADDRESSRESPONSEBODYRCINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEIPADDRESSRESPONSEBODYRCINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceIpAddressResponseBodyRCInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceIpAddressResponseBodyRCInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IpAddressConfig, ipAddressConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceIpAddressResponseBodyRCInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IpAddressConfig, ipAddressConfig_);
    };
    DescribeRCInstanceIpAddressResponseBodyRCInstanceList() = default ;
    DescribeRCInstanceIpAddressResponseBodyRCInstanceList(const DescribeRCInstanceIpAddressResponseBodyRCInstanceList &) = default ;
    DescribeRCInstanceIpAddressResponseBodyRCInstanceList(DescribeRCInstanceIpAddressResponseBodyRCInstanceList &&) = default ;
    DescribeRCInstanceIpAddressResponseBodyRCInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceIpAddressResponseBodyRCInstanceList() = default ;
    DescribeRCInstanceIpAddressResponseBodyRCInstanceList& operator=(const DescribeRCInstanceIpAddressResponseBodyRCInstanceList &) = default ;
    DescribeRCInstanceIpAddressResponseBodyRCInstanceList& operator=(DescribeRCInstanceIpAddressResponseBodyRCInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->instanceStatus_ == nullptr && return this->instanceType_ == nullptr && return this->ipAddressConfig_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInstanceIpAddressResponseBodyRCInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeRCInstanceIpAddressResponseBodyRCInstanceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeRCInstanceIpAddressResponseBodyRCInstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRCInstanceIpAddressResponseBodyRCInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipAddressConfig Field Functions 
    bool hasIpAddressConfig() const { return this->ipAddressConfig_ != nullptr;};
    void deleteIpAddressConfig() { this->ipAddressConfig_ = nullptr;};
    inline const vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig> & ipAddressConfig() const { DARABONBA_PTR_GET_CONST(ipAddressConfig_, vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig>) };
    inline vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig> ipAddressConfig() { DARABONBA_PTR_GET(ipAddressConfig_, vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig>) };
    inline DescribeRCInstanceIpAddressResponseBodyRCInstanceList& setIpAddressConfig(const vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig> & ipAddressConfig) { DARABONBA_PTR_SET_VALUE(ipAddressConfig_, ipAddressConfig) };
    inline DescribeRCInstanceIpAddressResponseBodyRCInstanceList& setIpAddressConfig(vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig> && ipAddressConfig) { DARABONBA_PTR_SET_RVALUE(ipAddressConfig_, ipAddressConfig) };


  protected:
    // The ID of the RDS Custom instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The DDoS mitigation status of the instance. Valid values:
    // 
    // *   **normal**
    // *   **abnormal**
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The type of the asset. The value is fixed to **ecs**.
    std::shared_ptr<string> instanceType_ = nullptr;
    // An array that consists of the details of the asset.
    std::shared_ptr<vector<Models::DescribeRCInstanceIpAddressResponseBodyRCInstanceListIpAddressConfig>> ipAddressConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
