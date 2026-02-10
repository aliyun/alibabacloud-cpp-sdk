// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDVPCHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDVPCHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddVpcHoneyPotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddVpcHoneyPotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, AddVpcHoneyPotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    AddVpcHoneyPotRequest() = default ;
    AddVpcHoneyPotRequest(const AddVpcHoneyPotRequest &) = default ;
    AddVpcHoneyPotRequest(AddVpcHoneyPotRequest &&) = default ;
    AddVpcHoneyPotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddVpcHoneyPotRequest() = default ;
    AddVpcHoneyPotRequest& operator=(const AddVpcHoneyPotRequest &) = default ;
    AddVpcHoneyPotRequest& operator=(AddVpcHoneyPotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vpcId_ == nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddVpcHoneyPotRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the virtual private cloud (VPC) in which you want to create a honeypot.
    // 
    // > You can call the [DescribeVpcList](~~DescribeVpcList~~) operation to obtain the VPC ID. The VPC ID is the value of the InstanceId parameter.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
