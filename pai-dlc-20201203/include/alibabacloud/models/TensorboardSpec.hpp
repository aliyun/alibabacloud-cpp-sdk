// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TENSORBOARDSPEC_HPP_
#define ALIBABACLOUD_MODELS_TENSORBOARDSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class TensorboardSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TensorboardSpec& obj) { 
      DARABONBA_PTR_TO_JSON(EcsType, ecsType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, TensorboardSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsType, ecsType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    TensorboardSpec() = default ;
    TensorboardSpec(const TensorboardSpec &) = default ;
    TensorboardSpec(TensorboardSpec &&) = default ;
    TensorboardSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TensorboardSpec() = default ;
    TensorboardSpec& operator=(const TensorboardSpec &) = default ;
    TensorboardSpec& operator=(TensorboardSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsType_ == nullptr
        && this->securityGroupId_ == nullptr && this->switchId_ == nullptr && this->vpcId_ == nullptr; };
    // ecsType Field Functions 
    bool hasEcsType() const { return this->ecsType_ != nullptr;};
    void deleteEcsType() { this->ecsType_ = nullptr;};
    inline string getEcsType() const { DARABONBA_PTR_GET_DEFAULT(ecsType_, "") };
    inline TensorboardSpec& setEcsType(string ecsType) { DARABONBA_PTR_SET_VALUE(ecsType_, ecsType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline TensorboardSpec& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline TensorboardSpec& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline TensorboardSpec& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> ecsType_ {};
    shared_ptr<string> securityGroupId_ {};
    shared_ptr<string> switchId_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
