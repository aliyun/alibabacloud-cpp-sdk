// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyNetworkInterfaceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkInterfaceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkInterfaceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
    };
    ModifyNetworkInterfaceAttributeRequest() = default ;
    ModifyNetworkInterfaceAttributeRequest(const ModifyNetworkInterfaceAttributeRequest &) = default ;
    ModifyNetworkInterfaceAttributeRequest(ModifyNetworkInterfaceAttributeRequest &&) = default ;
    ModifyNetworkInterfaceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkInterfaceAttributeRequest() = default ;
    ModifyNetworkInterfaceAttributeRequest& operator=(const ModifyNetworkInterfaceAttributeRequest &) = default ;
    ModifyNetworkInterfaceAttributeRequest& operator=(ModifyNetworkInterfaceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->networkInterfaceId_ != nullptr && this->networkInterfaceName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


  protected:
    // The description. The description must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the ENI.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The name of the ENI. The name must be 1 to 128 characters in length, The name cannot start with http:// or https://.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
