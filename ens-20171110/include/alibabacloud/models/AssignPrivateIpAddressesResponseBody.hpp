// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AssignedPrivateIpAddressesSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssignedPrivateIpAddressesSet& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(PrivateIpSet, privateIpSet_);
      };
      friend void from_json(const Darabonba::Json& j, AssignedPrivateIpAddressesSet& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(PrivateIpSet, privateIpSet_);
      };
      AssignedPrivateIpAddressesSet() = default ;
      AssignedPrivateIpAddressesSet(const AssignedPrivateIpAddressesSet &) = default ;
      AssignedPrivateIpAddressesSet(AssignedPrivateIpAddressesSet &&) = default ;
      AssignedPrivateIpAddressesSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssignedPrivateIpAddressesSet() = default ;
      AssignedPrivateIpAddressesSet& operator=(const AssignedPrivateIpAddressesSet &) = default ;
      AssignedPrivateIpAddressesSet& operator=(AssignedPrivateIpAddressesSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->networkInterfaceId_ == nullptr
        && this->privateIpSet_ == nullptr; };
      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline AssignedPrivateIpAddressesSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // privateIpSet Field Functions 
      bool hasPrivateIpSet() const { return this->privateIpSet_ != nullptr;};
      void deletePrivateIpSet() { this->privateIpSet_ = nullptr;};
      inline const vector<string> & getPrivateIpSet() const { DARABONBA_PTR_GET_CONST(privateIpSet_, vector<string>) };
      inline vector<string> getPrivateIpSet() { DARABONBA_PTR_GET(privateIpSet_, vector<string>) };
      inline AssignedPrivateIpAddressesSet& setPrivateIpSet(const vector<string> & privateIpSet) { DARABONBA_PTR_SET_VALUE(privateIpSet_, privateIpSet) };
      inline AssignedPrivateIpAddressesSet& setPrivateIpSet(vector<string> && privateIpSet) { DARABONBA_PTR_SET_RVALUE(privateIpSet_, privateIpSet) };


    protected:
      // The ID of the ENI.
      shared_ptr<string> networkInterfaceId_ {};
      // The assigned private IP addresses.
      shared_ptr<vector<string>> privateIpSet_ {};
    };

    virtual bool empty() const override { return this->assignedPrivateIpAddressesSet_ == nullptr
        && this->requestId_ == nullptr; };
    // assignedPrivateIpAddressesSet Field Functions 
    bool hasAssignedPrivateIpAddressesSet() const { return this->assignedPrivateIpAddressesSet_ != nullptr;};
    void deleteAssignedPrivateIpAddressesSet() { this->assignedPrivateIpAddressesSet_ = nullptr;};
    inline const AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet & getAssignedPrivateIpAddressesSet() const { DARABONBA_PTR_GET_CONST(assignedPrivateIpAddressesSet_, AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet getAssignedPrivateIpAddressesSet() { DARABONBA_PTR_GET(assignedPrivateIpAddressesSet_, AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody& setAssignedPrivateIpAddressesSet(const AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet & assignedPrivateIpAddressesSet) { DARABONBA_PTR_SET_VALUE(assignedPrivateIpAddressesSet_, assignedPrivateIpAddressesSet) };
    inline AssignPrivateIpAddressesResponseBody& setAssignedPrivateIpAddressesSet(AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet && assignedPrivateIpAddressesSet) { DARABONBA_PTR_SET_RVALUE(assignedPrivateIpAddressesSet_, assignedPrivateIpAddressesSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignPrivateIpAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the ENI and the secondary private IP addresses that are assigned to the ENI.
    shared_ptr<AssignPrivateIpAddressesResponseBody::AssignedPrivateIpAddressesSet> assignedPrivateIpAddressesSet_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
