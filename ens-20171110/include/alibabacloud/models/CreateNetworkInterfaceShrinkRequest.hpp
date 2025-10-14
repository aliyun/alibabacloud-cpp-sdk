// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateNetworkInterfaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateNetworkInterfaceShrinkRequest() = default ;
    CreateNetworkInterfaceShrinkRequest(const CreateNetworkInterfaceShrinkRequest &) = default ;
    CreateNetworkInterfaceShrinkRequest(CreateNetworkInterfaceShrinkRequest &&) = default ;
    CreateNetworkInterfaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceShrinkRequest() = default ;
    CreateNetworkInterfaceShrinkRequest& operator=(const CreateNetworkInterfaceShrinkRequest &) = default ;
    CreateNetworkInterfaceShrinkRequest& operator=(CreateNetworkInterfaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->securityGroupIdsShrink_ == nullptr && return this->vSwitchId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkInterfaceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNetworkInterfaceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIdsShrink Field Functions 
    bool hasSecurityGroupIdsShrink() const { return this->securityGroupIdsShrink_ != nullptr;};
    void deleteSecurityGroupIdsShrink() { this->securityGroupIdsShrink_ = nullptr;};
    inline string securityGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIdsShrink_, "") };
    inline CreateNetworkInterfaceShrinkRequest& setSecurityGroupIdsShrink(string securityGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(securityGroupIdsShrink_, securityGroupIdsShrink) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNetworkInterfaceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Description of the ENI.
    std::shared_ptr<string> description_ = nullptr;
    // ENI name.
    std::shared_ptr<string> name_ = nullptr;
    // Security group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupIdsShrink_ = nullptr;
    // vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
