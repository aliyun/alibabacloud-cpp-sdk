// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSREQUESTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSREQUESTINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsRequestInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsRequestInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsRequestInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeInstanceRiskLevelsRequestInstances() = default ;
    DescribeInstanceRiskLevelsRequestInstances(const DescribeInstanceRiskLevelsRequestInstances &) = default ;
    DescribeInstanceRiskLevelsRequestInstances(DescribeInstanceRiskLevelsRequestInstances &&) = default ;
    DescribeInstanceRiskLevelsRequestInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsRequestInstances() = default ;
    DescribeInstanceRiskLevelsRequestInstances& operator=(const DescribeInstanceRiskLevelsRequestInstances &) = default ;
    DescribeInstanceRiskLevelsRequestInstances& operator=(DescribeInstanceRiskLevelsRequestInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->uuid_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceRiskLevelsRequestInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline const vector<string> & internetIp() const { DARABONBA_PTR_GET_CONST(internetIp_, vector<string>) };
    inline vector<string> internetIp() { DARABONBA_PTR_GET(internetIp_, vector<string>) };
    inline DescribeInstanceRiskLevelsRequestInstances& setInternetIp(const vector<string> & internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };
    inline DescribeInstanceRiskLevelsRequestInstances& setInternetIp(vector<string> && internetIp) { DARABONBA_PTR_SET_RVALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeInstanceRiskLevelsRequestInstances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeInstanceRiskLevelsRequestInstances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The instance ID of your Cloud Firewall.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The public IP addresses of instances.
    std::shared_ptr<vector<string>> internetIp_ = nullptr;
    // The private IP address of the instance.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The UUID of the instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
