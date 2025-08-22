// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATAFEATURESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATAFEATURESTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentFeatureResponseBodyDataFeatureStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& obj) { 
      DARABONBA_PTR_TO_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_TO_JSON(FeatureContainers, featureContainers_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(BindResourceId, bindResourceId_);
      DARABONBA_PTR_FROM_JSON(FeatureContainers, featureContainers_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatus() = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatus(const DescribeEnvironmentFeatureResponseBodyDataFeatureStatus &) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatus(DescribeEnvironmentFeatureResponseBodyDataFeatureStatus &&) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentFeatureResponseBodyDataFeatureStatus() = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& operator=(const DescribeEnvironmentFeatureResponseBodyDataFeatureStatus &) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& operator=(DescribeEnvironmentFeatureResponseBodyDataFeatureStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindResourceId_ != nullptr
        && this->featureContainers_ != nullptr && this->ips_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->securityGroupId_ != nullptr
        && this->status_ != nullptr && this->vSwitchId_ != nullptr; };
    // bindResourceId Field Functions 
    bool hasBindResourceId() const { return this->bindResourceId_ != nullptr;};
    void deleteBindResourceId() { this->bindResourceId_ = nullptr;};
    inline string bindResourceId() const { DARABONBA_PTR_GET_DEFAULT(bindResourceId_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setBindResourceId(string bindResourceId) { DARABONBA_PTR_SET_VALUE(bindResourceId_, bindResourceId) };


    // featureContainers Field Functions 
    bool hasFeatureContainers() const { return this->featureContainers_ != nullptr;};
    void deleteFeatureContainers() { this->featureContainers_ = nullptr;};
    inline const vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers> & featureContainers() const { DARABONBA_PTR_GET_CONST(featureContainers_, vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers>) };
    inline vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers> featureContainers() { DARABONBA_PTR_GET(featureContainers_, vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers>) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setFeatureContainers(const vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers> & featureContainers) { DARABONBA_PTR_SET_VALUE(featureContainers_, featureContainers) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setFeatureContainers(vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers> && featureContainers) { DARABONBA_PTR_SET_RVALUE(featureContainers_, featureContainers) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<string> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
    inline vector<string> ips() { DARABONBA_PTR_GET(ips_, vector<string>) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatus& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the resource.
    std::shared_ptr<string> bindResourceId_ = nullptr;
    // The containers of the feature.
    std::shared_ptr<vector<Models::DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers>> featureContainers_ = nullptr;
    // The IP address of the pod.
    std::shared_ptr<vector<string>> ips_ = nullptr;
    // The Kubernetes resource name of the feature.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The status of the agent. Valid values:
    // 
    // *   Success: The agent is running.
    // *   Failed: The agent failed to run.
    // *   Not Found: The agent is not installed.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
