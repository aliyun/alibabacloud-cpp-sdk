// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSIGNPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UNASSIGNPRIVATEIPADDRESSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class UnAssignPrivateIpAddressResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnAssignPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(IpName, ipName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UnAssignPrivateIpAddressResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(IpName, ipName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
    };
    UnAssignPrivateIpAddressResponseBodyContent() = default ;
    UnAssignPrivateIpAddressResponseBodyContent(const UnAssignPrivateIpAddressResponseBodyContent &) = default ;
    UnAssignPrivateIpAddressResponseBodyContent(UnAssignPrivateIpAddressResponseBodyContent &&) = default ;
    UnAssignPrivateIpAddressResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnAssignPrivateIpAddressResponseBodyContent() = default ;
    UnAssignPrivateIpAddressResponseBodyContent& operator=(const UnAssignPrivateIpAddressResponseBodyContent &) = default ;
    UnAssignPrivateIpAddressResponseBodyContent& operator=(UnAssignPrivateIpAddressResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipName_ == nullptr
        && return this->networkInterfaceId_ == nullptr; };
    // ipName Field Functions 
    bool hasIpName() const { return this->ipName_ != nullptr;};
    void deleteIpName() { this->ipName_ = nullptr;};
    inline string ipName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
    inline UnAssignPrivateIpAddressResponseBodyContent& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline UnAssignPrivateIpAddressResponseBodyContent& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


  protected:
    // IP unique identifier
    std::shared_ptr<string> ipName_ = nullptr;
    // Lingjun network interface controller ID
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
