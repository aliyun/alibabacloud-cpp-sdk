// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBITEMUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_JOBITEMUSERVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobItemUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobItemUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCidrs, extendedCidrs_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, JobItemUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCidrs, extendedCidrs_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    JobItemUserVpc() = default ;
    JobItemUserVpc(const JobItemUserVpc &) = default ;
    JobItemUserVpc(JobItemUserVpc &&) = default ;
    JobItemUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobItemUserVpc() = default ;
    JobItemUserVpc& operator=(const JobItemUserVpc &) = default ;
    JobItemUserVpc& operator=(JobItemUserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultRoute_ != nullptr
        && this->extendedCidrs_ != nullptr && this->securityGroupId_ != nullptr && this->switchId_ != nullptr && this->vpcId_ != nullptr; };
    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string defaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline JobItemUserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCidrs Field Functions 
    bool hasExtendedCidrs() const { return this->extendedCidrs_ != nullptr;};
    void deleteExtendedCidrs() { this->extendedCidrs_ = nullptr;};
    inline const vector<string> & extendedCidrs() const { DARABONBA_PTR_GET_CONST(extendedCidrs_, vector<string>) };
    inline vector<string> extendedCidrs() { DARABONBA_PTR_GET(extendedCidrs_, vector<string>) };
    inline JobItemUserVpc& setExtendedCidrs(const vector<string> & extendedCidrs) { DARABONBA_PTR_SET_VALUE(extendedCidrs_, extendedCidrs) };
    inline JobItemUserVpc& setExtendedCidrs(vector<string> && extendedCidrs) { DARABONBA_PTR_SET_RVALUE(extendedCidrs_, extendedCidrs) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline JobItemUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline JobItemUserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline JobItemUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> defaultRoute_ = nullptr;
    std::shared_ptr<vector<string>> extendedCidrs_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> switchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
