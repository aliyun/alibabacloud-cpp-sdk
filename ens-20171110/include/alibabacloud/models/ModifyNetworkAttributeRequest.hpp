// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyNetworkAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
    };
    ModifyNetworkAttributeRequest() = default ;
    ModifyNetworkAttributeRequest(const ModifyNetworkAttributeRequest &) = default ;
    ModifyNetworkAttributeRequest(ModifyNetworkAttributeRequest &&) = default ;
    ModifyNetworkAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkAttributeRequest() = default ;
    ModifyNetworkAttributeRequest& operator=(const ModifyNetworkAttributeRequest &) = default ;
    ModifyNetworkAttributeRequest& operator=(ModifyNetworkAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->networkId_ == nullptr && return this->networkName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNetworkAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline ModifyNetworkAttributeRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string networkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline ModifyNetworkAttributeRequest& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


  protected:
    // The description of the network.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the network.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkId_ = nullptr;
    // The name of the network. The name must meet the following requirements:
    // 
    // *   The name must be 2 to 128 characters in length
    // *   It must start with a letter but cannot start with http:// or https://.
    // *   The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> networkName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
