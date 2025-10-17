// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYPRIVATEIPSETSPRIVATEIPSET_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACERESPONSEBODYPRIVATEIPSETSPRIVATEIPSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet& obj) { 
      DARABONBA_PTR_TO_JSON(Primary, primary_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Primary, primary_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
    };
    CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet() = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet(const CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet &) = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet(CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet &&) = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet() = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet& operator=(const CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet &) = default ;
    CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet& operator=(CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->primary_ == nullptr
        && return this->privateIpAddress_ == nullptr; };
    // primary Field Functions 
    bool hasPrimary() const { return this->primary_ != nullptr;};
    void deletePrimary() { this->primary_ = nullptr;};
    inline bool primary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
    inline CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateNetworkInterfaceResponseBodyPrivateIpSetsPrivateIpSet& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


  protected:
    // Indicates whether the private IP address is the primary private IP address.
    std::shared_ptr<bool> primary_ = nullptr;
    // The private IP address of the instance.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
