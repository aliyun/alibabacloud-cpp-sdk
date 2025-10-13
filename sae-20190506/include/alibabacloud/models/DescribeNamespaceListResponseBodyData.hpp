// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespaceListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentInstall, agentInstall_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(Custom, custom_);
      DARABONBA_PTR_TO_JSON(HybridCloudEnable, hybridCloudEnable_);
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentInstall, agentInstall_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(Custom, custom_);
      DARABONBA_PTR_FROM_JSON(HybridCloudEnable, hybridCloudEnable_);
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeNamespaceListResponseBodyData() = default ;
    DescribeNamespaceListResponseBodyData(const DescribeNamespaceListResponseBodyData &) = default ;
    DescribeNamespaceListResponseBodyData(DescribeNamespaceListResponseBodyData &&) = default ;
    DescribeNamespaceListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceListResponseBodyData() = default ;
    DescribeNamespaceListResponseBodyData& operator=(const DescribeNamespaceListResponseBodyData &) = default ;
    DescribeNamespaceListResponseBodyData& operator=(DescribeNamespaceListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentInstall_ == nullptr
        && return this->current_ == nullptr && return this->custom_ == nullptr && return this->hybridCloudEnable_ == nullptr && return this->nameSpaceShortId_ == nullptr && return this->namespaceId_ == nullptr
        && return this->namespaceName_ == nullptr && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // agentInstall Field Functions 
    bool hasAgentInstall() const { return this->agentInstall_ != nullptr;};
    void deleteAgentInstall() { this->agentInstall_ = nullptr;};
    inline string agentInstall() const { DARABONBA_PTR_GET_DEFAULT(agentInstall_, "") };
    inline DescribeNamespaceListResponseBodyData& setAgentInstall(string agentInstall) { DARABONBA_PTR_SET_VALUE(agentInstall_, agentInstall) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline bool current() const { DARABONBA_PTR_GET_DEFAULT(current_, false) };
    inline DescribeNamespaceListResponseBodyData& setCurrent(bool current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // custom Field Functions 
    bool hasCustom() const { return this->custom_ != nullptr;};
    void deleteCustom() { this->custom_ = nullptr;};
    inline bool custom() const { DARABONBA_PTR_GET_DEFAULT(custom_, false) };
    inline DescribeNamespaceListResponseBodyData& setCustom(bool custom) { DARABONBA_PTR_SET_VALUE(custom_, custom) };


    // hybridCloudEnable Field Functions 
    bool hasHybridCloudEnable() const { return this->hybridCloudEnable_ != nullptr;};
    void deleteHybridCloudEnable() { this->hybridCloudEnable_ = nullptr;};
    inline bool hybridCloudEnable() const { DARABONBA_PTR_GET_DEFAULT(hybridCloudEnable_, false) };
    inline DescribeNamespaceListResponseBodyData& setHybridCloudEnable(bool hybridCloudEnable) { DARABONBA_PTR_SET_VALUE(hybridCloudEnable_, hybridCloudEnable) };


    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline DescribeNamespaceListResponseBodyData& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeNamespaceListResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline DescribeNamespaceListResponseBodyData& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNamespaceListResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeNamespaceListResponseBodyData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNamespaceListResponseBodyData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNamespaceListResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The command that was run to install the agent.
    std::shared_ptr<string> agentInstall_ = nullptr;
    // This parameter is no longer valid.
    std::shared_ptr<bool> current_ = nullptr;
    // Indicates whether custom namespaces are returned. Valid values:
    // 
    // *   **true**: Custom namespaces are returned.
    // *   **false**: Custom namespaces are not returned.
    std::shared_ptr<bool> custom_ = nullptr;
    // Indicates whether hybrid cloud namespaces are excluded. Valid values:
    // 
    // *   **true**: Hybrid cloud namespaces are excluded.
    // *   **false**: Hybrid cloud namespaces are included.
    std::shared_ptr<bool> hybridCloudEnable_ = nullptr;
    // The short ID of the namespace.
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The region to which the namespace belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
