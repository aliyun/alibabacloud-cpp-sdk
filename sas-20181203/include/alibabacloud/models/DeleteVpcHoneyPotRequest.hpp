// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVPCHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVPCHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteVpcHoneyPotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVpcHoneyPotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVpcHoneyPotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DeleteVpcHoneyPotRequest() = default ;
    DeleteVpcHoneyPotRequest(const DeleteVpcHoneyPotRequest &) = default ;
    DeleteVpcHoneyPotRequest(DeleteVpcHoneyPotRequest &&) = default ;
    DeleteVpcHoneyPotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVpcHoneyPotRequest() = default ;
    DeleteVpcHoneyPotRequest& operator=(const DeleteVpcHoneyPotRequest &) = default ;
    DeleteVpcHoneyPotRequest& operator=(DeleteVpcHoneyPotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteVpcHoneyPotRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the virtual private cloud (VPC) on which the honeypot is deployed.
    // 
    // > You can call the [DescribeVpcHoneyPotList](~~DescribeVpcHoneyPotList~~) operation to query the IDs of VPCs.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
