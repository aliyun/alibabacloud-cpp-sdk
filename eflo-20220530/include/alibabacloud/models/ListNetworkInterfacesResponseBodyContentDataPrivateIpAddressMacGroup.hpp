// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODYCONTENTDATAPRIVATEIPADDRESSMACGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODYCONTENTDATAPRIVATEIPADDRESSMACGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpAddressMac, ipAddressMac_);
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpAddressMac, ipAddressMac_);
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup() = default ;
    ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup(const ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup &) = default ;
    ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup(ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup &&) = default ;
    ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup() = default ;
    ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& operator=(const ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup &) = default ;
    ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& operator=(ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->ipAddressMac_ == nullptr && return this->ipName_ == nullptr && return this->message_ == nullptr && return this->privateIpAddress_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipAddressMac Field Functions 
    bool hasIpAddressMac() const { return this->ipAddressMac_ != nullptr;};
    void deleteIpAddressMac() { this->ipAddressMac_ = nullptr;};
    inline string ipAddressMac() const { DARABONBA_PTR_GET_DEFAULT(ipAddressMac_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& setIpAddressMac(string ipAddressMac) { DARABONBA_PTR_SET_VALUE(ipAddressMac_, ipAddressMac) };


    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string ipName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNetworkInterfacesResponseBodyContentDataPrivateIpAddressMacGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // Secondary private MAC address.
    std::shared_ptr<string> ipAddressMac_ = nullptr;
    // The unique IP identifier.
    std::shared_ptr<string> ipName_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // The secondary private IP address.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The status of the cache reserve instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
