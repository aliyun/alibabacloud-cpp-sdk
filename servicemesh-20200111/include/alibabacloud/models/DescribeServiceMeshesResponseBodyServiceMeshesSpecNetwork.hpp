// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECNETWORK_HPP_
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
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork(const DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork(DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork &&) = default ;
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
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<string> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<string>) };
    inline vector<string> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<string>) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& setVSwitches(const vector<string> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& setVSwitches(vector<string> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of the vSwitches.
    std::shared_ptr<vector<string>> vSwitches_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
