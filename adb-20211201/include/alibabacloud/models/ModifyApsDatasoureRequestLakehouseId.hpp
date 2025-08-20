// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUESTLAKEHOUSEID_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPSDATASOUREREQUESTLAKEHOUSEID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyApsDatasoureRequestLakehouseId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApsDatasoureRequestLakehouseId& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApsDatasoureRequestLakehouseId& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
    };
    ModifyApsDatasoureRequestLakehouseId() = default ;
    ModifyApsDatasoureRequestLakehouseId(const ModifyApsDatasoureRequestLakehouseId &) = default ;
    ModifyApsDatasoureRequestLakehouseId(ModifyApsDatasoureRequestLakehouseId &&) = default ;
    ModifyApsDatasoureRequestLakehouseId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApsDatasoureRequestLakehouseId() = default ;
    ModifyApsDatasoureRequestLakehouseId& operator=(const ModifyApsDatasoureRequestLakehouseId &) = default ;
    ModifyApsDatasoureRequestLakehouseId& operator=(ModifyApsDatasoureRequestLakehouseId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityGroup_ != nullptr
        && this->vpcId_ != nullptr && this->vswitch_ != nullptr; };
    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline ModifyApsDatasoureRequestLakehouseId& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyApsDatasoureRequestLakehouseId& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline string vswitch() const { DARABONBA_PTR_GET_DEFAULT(vswitch_, "") };
    inline ModifyApsDatasoureRequestLakehouseId& setVswitch(string vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };


  protected:
    // The name of the security group.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vswitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
