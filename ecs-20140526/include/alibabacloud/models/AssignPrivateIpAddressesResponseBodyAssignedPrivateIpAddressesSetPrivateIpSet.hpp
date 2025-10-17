// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSETPRIVATEIPSET_HPP_
#define ALIBABACLOUD_MODELS_ASSIGNPRIVATEIPADDRESSESRESPONSEBODYASSIGNEDPRIVATEIPADDRESSESSETPRIVATEIPSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet() = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet &) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet &&) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet() = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet& operator=(const AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet &) = default ;
    AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet& operator=(AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpAddress_ == nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const vector<string> & privateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
    inline vector<string> privateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline AssignPrivateIpAddressesResponseBodyAssignedPrivateIpAddressesSetPrivateIpSet& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


  protected:
    std::shared_ptr<vector<string>> privateIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
