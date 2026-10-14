// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATEENSEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATEENSEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnAssociateEnsEipAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnAssociateEnsEipAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, UnAssociateEnsEipAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    UnAssociateEnsEipAddressRequest() = default ;
    UnAssociateEnsEipAddressRequest(const UnAssociateEnsEipAddressRequest &) = default ;
    UnAssociateEnsEipAddressRequest(UnAssociateEnsEipAddressRequest &&) = default ;
    UnAssociateEnsEipAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnAssociateEnsEipAddressRequest() = default ;
    UnAssociateEnsEipAddressRequest& operator=(const UnAssociateEnsEipAddressRequest &) = default ;
    UnAssociateEnsEipAddressRequest& operator=(UnAssociateEnsEipAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->force_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline UnAssociateEnsEipAddressRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline UnAssociateEnsEipAddressRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // The instance ID of the edge elastic IP address (EIP).
    // 
    // If the EIP is referenced by an SNAT entry, invoke DeleteSnatIpForSnatEntry to remove it first. If the EIP is referenced by a DNAT entry, invoke DeleteForwardEntry to delete it first, or set Force to true under Settings as needed.
    // 
    // This parameter is required.
    shared_ptr<string> allocationId_ {};
    // Specifies whether to forcibly disassociate the EIP when the EIP is bound to a NAT gateway that has DNAT or SNAT entries. Valid values:
    // 
    // - **false** (default): does not forcibly disassociate the EIP.
    // - **true**: forcibly disassociates the EIP.
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
