// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSUSERVPC_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSUSERVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsUserVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsUserVpc& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_TO_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsUserVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRoute, defaultRoute_);
      DARABONBA_PTR_FROM_JSON(ExtendedCIDRs, extendedCIDRs_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListTrainingJobsResponseBodyTrainingJobsUserVpc() = default ;
    ListTrainingJobsResponseBodyTrainingJobsUserVpc(const ListTrainingJobsResponseBodyTrainingJobsUserVpc &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsUserVpc(ListTrainingJobsResponseBodyTrainingJobsUserVpc &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsUserVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsUserVpc() = default ;
    ListTrainingJobsResponseBodyTrainingJobsUserVpc& operator=(const ListTrainingJobsResponseBodyTrainingJobsUserVpc &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsUserVpc& operator=(ListTrainingJobsResponseBodyTrainingJobsUserVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultRoute_ != nullptr
        && this->extendedCIDRs_ != nullptr && this->securityGroupId_ != nullptr && this->switchId_ != nullptr && this->vpcId_ != nullptr; };
    // defaultRoute Field Functions 
    bool hasDefaultRoute() const { return this->defaultRoute_ != nullptr;};
    void deleteDefaultRoute() { this->defaultRoute_ = nullptr;};
    inline string defaultRoute() const { DARABONBA_PTR_GET_DEFAULT(defaultRoute_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsUserVpc& setDefaultRoute(string defaultRoute) { DARABONBA_PTR_SET_VALUE(defaultRoute_, defaultRoute) };


    // extendedCIDRs Field Functions 
    bool hasExtendedCIDRs() const { return this->extendedCIDRs_ != nullptr;};
    void deleteExtendedCIDRs() { this->extendedCIDRs_ = nullptr;};
    inline const vector<string> & extendedCIDRs() const { DARABONBA_PTR_GET_CONST(extendedCIDRs_, vector<string>) };
    inline vector<string> extendedCIDRs() { DARABONBA_PTR_GET(extendedCIDRs_, vector<string>) };
    inline ListTrainingJobsResponseBodyTrainingJobsUserVpc& setExtendedCIDRs(const vector<string> & extendedCIDRs) { DARABONBA_PTR_SET_VALUE(extendedCIDRs_, extendedCIDRs) };
    inline ListTrainingJobsResponseBodyTrainingJobsUserVpc& setExtendedCIDRs(vector<string> && extendedCIDRs) { DARABONBA_PTR_SET_RVALUE(extendedCIDRs_, extendedCIDRs) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsUserVpc& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsUserVpc& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListTrainingJobsResponseBodyTrainingJobsUserVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> defaultRoute_ = nullptr;
    std::shared_ptr<vector<string>> extendedCIDRs_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> switchId_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
