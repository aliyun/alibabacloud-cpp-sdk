// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AssignPrivateIpAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedPrivateIpAddressesSet, assignedPrivateIpAddressesSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedPrivateIpAddressesSet, assignedPrivateIpAddressesSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssignPrivateIpAddressesResponseBody() = default ;
    AssignPrivateIpAddressesResponseBody(const AssignPrivateIpAddressesResponseBody &) = default ;
    AssignPrivateIpAddressesResponseBody(AssignPrivateIpAddressesResponseBody &&) = default ;
    AssignPrivateIpAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressesResponseBody() = default ;
    AssignPrivateIpAddressesResponseBody& operator=(const AssignPrivateIpAddressesResponseBody &) = default ;
    AssignPrivateIpAddressesResponseBody& operator=(AssignPrivateIpAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedPrivateIpAddressesSet_ == nullptr
        && return this->requestId_ == nullptr; };
    // assignedPrivateIpAddressesSet Field Functions 
    bool hasAssignedPrivateIpAddressesSet() const { return this->assignedPrivateIpAddressesSet_ != nullptr;};
    void deleteAssignedPrivateIpAddressesSet() { this->assignedPrivateIpAddressesSet_ = nullptr;};
    inline const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet & assignedPrivateIpAddressesSet() const { DARABONBA_PTR_GET_CONST(assignedPrivateIpAddressesSet_, AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet assignedPrivateIpAddressesSet() { DARABONBA_PTR_GET(assignedPrivateIpAddressesSet_, AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody& setAssignedPrivateIpAddressesSet(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet & assignedPrivateIpAddressesSet) { DARABONBA_PTR_SET_VALUE(assignedPrivateIpAddressesSet_, assignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody& setAssignedPrivateIpAddressesSet(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet && assignedPrivateIpAddressesSet) { DARABONBA_PTR_SET_RVALUE(assignedPrivateIpAddressesSet_, assignedPrivateIpAddressesSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignPrivateIpAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the ENI and the secondary private IP addresses that are assigned to the ENI.
    std::shared_ptr<AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSet> assignedPrivateIpAddressesSet_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
