// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODYASSOCIATEVPCS_HPP_
#define ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODYASSOCIATEVPCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetDhcpOptionsSetResponseBodyAssociateVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDhcpOptionsSetResponseBodyAssociateVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateStatus, associateStatus_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDhcpOptionsSetResponseBodyAssociateVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateStatus, associateStatus_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetDhcpOptionsSetResponseBodyAssociateVpcs() = default ;
    GetDhcpOptionsSetResponseBodyAssociateVpcs(const GetDhcpOptionsSetResponseBodyAssociateVpcs &) = default ;
    GetDhcpOptionsSetResponseBodyAssociateVpcs(GetDhcpOptionsSetResponseBodyAssociateVpcs &&) = default ;
    GetDhcpOptionsSetResponseBodyAssociateVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDhcpOptionsSetResponseBodyAssociateVpcs() = default ;
    GetDhcpOptionsSetResponseBodyAssociateVpcs& operator=(const GetDhcpOptionsSetResponseBodyAssociateVpcs &) = default ;
    GetDhcpOptionsSetResponseBodyAssociateVpcs& operator=(GetDhcpOptionsSetResponseBodyAssociateVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associateStatus_ == nullptr
        && return this->vpcId_ == nullptr; };
    // associateStatus Field Functions 
    bool hasAssociateStatus() const { return this->associateStatus_ != nullptr;};
    void deleteAssociateStatus() { this->associateStatus_ = nullptr;};
    inline string associateStatus() const { DARABONBA_PTR_GET_DEFAULT(associateStatus_, "") };
    inline GetDhcpOptionsSetResponseBodyAssociateVpcs& setAssociateStatus(string associateStatus) { DARABONBA_PTR_SET_VALUE(associateStatus_, associateStatus) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetDhcpOptionsSetResponseBodyAssociateVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The status of the VPC that is associated with the DHCP options set. Valid values:
    //  
    // *   **InUse**: in use
    // *   **Pending**: being configured
    std::shared_ptr<string> associateStatus_ = nullptr;
    // The ID of the VPC that is associated with the DHCP options set.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
