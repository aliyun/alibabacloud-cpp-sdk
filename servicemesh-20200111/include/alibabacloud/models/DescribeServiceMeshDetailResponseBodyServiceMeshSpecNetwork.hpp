// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork(DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr
        && return this->vSwitches_ == nullptr && return this->vpcId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<string> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<string>) };
    inline vector<string> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<string>) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& setVSwitches(const vector<string> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& setVSwitches(vector<string> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The virtual switches (vSwitches).
    std::shared_ptr<vector<string>> vSwitches_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
