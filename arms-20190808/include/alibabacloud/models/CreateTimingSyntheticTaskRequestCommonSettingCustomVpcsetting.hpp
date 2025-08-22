// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMVPCSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTCOMMONSETTINGCUSTOMVPCSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecureGroupId, secureGroupId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecureGroupId, secureGroupId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting() = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting(const CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting &) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting(CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting &&) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting() = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& operator=(const CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting &) = default ;
    CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& operator=(CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->secureGroupId_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secureGroupId Field Functions 
    bool hasSecureGroupId() const { return this->secureGroupId_ != nullptr;};
    void deleteSecureGroupId() { this->secureGroupId_ = nullptr;};
    inline string secureGroupId() const { DARABONBA_PTR_GET_DEFAULT(secureGroupId_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& setSecureGroupId(string secureGroupId) { DARABONBA_PTR_SET_VALUE(secureGroupId_, secureGroupId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateTimingSyntheticTaskRequestCommonSettingCustomVPCSetting& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group to which the client belongs. The security group specifies the inbound and outbound rules of the client for the VPC. You need to allow the security group to which the client belongs to access the security group to which the VPC belongs. Otherwise, the client cannot access resources in the VPC.
    std::shared_ptr<string> secureGroupId_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
