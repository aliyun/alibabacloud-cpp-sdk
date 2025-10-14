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
        && return this->force_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline UnAssociateEnsEipAddressRequest& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline UnAssociateEnsEipAddressRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // The ID of the EIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> allocationId_ = nullptr;
    // Specifies whether to disassociate the EIP from a NAT gateway if a DNAT or SNAT entry is added to the NAT gateway. Valid values:
    // 
    // *   **false** (default): does not disassociate the EIP from a NAT gateway if a DNAT or SNAT entry is added to the NAT gateway.
    // *   **true**: disassociates the EIP from a NAT gateway if a DNAT or SNAT entry is added to the NAT gateway.
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
