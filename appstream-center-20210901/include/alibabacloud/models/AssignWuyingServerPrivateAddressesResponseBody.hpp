// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNWUYINGSERVERPRIVATEADDRESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNWUYINGSERVERPRIVATEADDRESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class AssignWuyingServerPrivateAddressesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignWuyingServerPrivateAddressesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssignedPrivateIpAddresses, assignedPrivateIpAddresses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssignWuyingServerPrivateAddressesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignedPrivateIpAddresses, assignedPrivateIpAddresses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssignWuyingServerPrivateAddressesResponseBody() = default ;
    AssignWuyingServerPrivateAddressesResponseBody(const AssignWuyingServerPrivateAddressesResponseBody &) = default ;
    AssignWuyingServerPrivateAddressesResponseBody(AssignWuyingServerPrivateAddressesResponseBody &&) = default ;
    AssignWuyingServerPrivateAddressesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignWuyingServerPrivateAddressesResponseBody() = default ;
    AssignWuyingServerPrivateAddressesResponseBody& operator=(const AssignWuyingServerPrivateAddressesResponseBody &) = default ;
    AssignWuyingServerPrivateAddressesResponseBody& operator=(AssignWuyingServerPrivateAddressesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedPrivateIpAddresses_ == nullptr
        && this->requestId_ == nullptr; };
    // assignedPrivateIpAddresses Field Functions 
    bool hasAssignedPrivateIpAddresses() const { return this->assignedPrivateIpAddresses_ != nullptr;};
    void deleteAssignedPrivateIpAddresses() { this->assignedPrivateIpAddresses_ = nullptr;};
    inline const vector<string> & getAssignedPrivateIpAddresses() const { DARABONBA_PTR_GET_CONST(assignedPrivateIpAddresses_, vector<string>) };
    inline vector<string> getAssignedPrivateIpAddresses() { DARABONBA_PTR_GET(assignedPrivateIpAddresses_, vector<string>) };
    inline AssignWuyingServerPrivateAddressesResponseBody& setAssignedPrivateIpAddresses(const vector<string> & assignedPrivateIpAddresses) { DARABONBA_PTR_SET_VALUE(assignedPrivateIpAddresses_, assignedPrivateIpAddresses) };
    inline AssignWuyingServerPrivateAddressesResponseBody& setAssignedPrivateIpAddresses(vector<string> && assignedPrivateIpAddresses) { DARABONBA_PTR_SET_RVALUE(assignedPrivateIpAddresses_, assignedPrivateIpAddresses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssignWuyingServerPrivateAddressesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> assignedPrivateIpAddresses_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
