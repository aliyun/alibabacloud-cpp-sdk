// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyVpcHoneyPotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcHoneyPotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneyPotAction, honeyPotAction_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcHoneyPotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneyPotAction, honeyPotAction_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyVpcHoneyPotRequest() = default ;
    ModifyVpcHoneyPotRequest(const ModifyVpcHoneyPotRequest &) = default ;
    ModifyVpcHoneyPotRequest(ModifyVpcHoneyPotRequest &&) = default ;
    ModifyVpcHoneyPotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcHoneyPotRequest() = default ;
    ModifyVpcHoneyPotRequest& operator=(const ModifyVpcHoneyPotRequest &) = default ;
    ModifyVpcHoneyPotRequest& operator=(ModifyVpcHoneyPotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->honeyPotAction_ != nullptr
        && this->vpcId_ != nullptr; };
    // honeyPotAction Field Functions 
    bool hasHoneyPotAction() const { return this->honeyPotAction_ != nullptr;};
    void deleteHoneyPotAction() { this->honeyPotAction_ = nullptr;};
    inline string honeyPotAction() const { DARABONBA_PTR_GET_DEFAULT(honeyPotAction_, "") };
    inline ModifyVpcHoneyPotRequest& setHoneyPotAction(string honeyPotAction) { DARABONBA_PTR_SET_VALUE(honeyPotAction_, honeyPotAction) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyVpcHoneyPotRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Specifies whether to enable or disable the honeypot. Valid values:
    // 
    // *   **disable**
    // *   **enable**
    // 
    // This parameter is required.
    std::shared_ptr<string> honeyPotAction_ = nullptr;
    // The ID of the virtual private cloud (VPC) on which the honeypot is deployed.
    // 
    // >  You can call the [DescribeVpcHoneyPotList](~~DescribeVpcHoneyPotList~~) operation to query the IDs of VPCs.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
