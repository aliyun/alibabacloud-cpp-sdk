// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVSWITCHATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVSWITCHATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyVSwitchAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVSwitchAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableIPv6, enableIPv6_);
      DARABONBA_PTR_TO_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVSwitchAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableIPv6, enableIPv6_);
      DARABONBA_PTR_FROM_JSON(Ipv6CidrBlock, ipv6CidrBlock_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
    };
    ModifyVSwitchAttributeRequest() = default ;
    ModifyVSwitchAttributeRequest(const ModifyVSwitchAttributeRequest &) = default ;
    ModifyVSwitchAttributeRequest(ModifyVSwitchAttributeRequest &&) = default ;
    ModifyVSwitchAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVSwitchAttributeRequest() = default ;
    ModifyVSwitchAttributeRequest& operator=(const ModifyVSwitchAttributeRequest &) = default ;
    ModifyVSwitchAttributeRequest& operator=(ModifyVSwitchAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->enableIPv6_ == nullptr && this->ipv6CidrBlock_ == nullptr && this->vSwitchId_ == nullptr && this->vSwitchName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVSwitchAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableIPv6 Field Functions 
    bool hasEnableIPv6() const { return this->enableIPv6_ != nullptr;};
    void deleteEnableIPv6() { this->enableIPv6_ = nullptr;};
    inline bool getEnableIPv6() const { DARABONBA_PTR_GET_DEFAULT(enableIPv6_, false) };
    inline ModifyVSwitchAttributeRequest& setEnableIPv6(bool enableIPv6) { DARABONBA_PTR_SET_VALUE(enableIPv6_, enableIPv6) };


    // ipv6CidrBlock Field Functions 
    bool hasIpv6CidrBlock() const { return this->ipv6CidrBlock_ != nullptr;};
    void deleteIpv6CidrBlock() { this->ipv6CidrBlock_ = nullptr;};
    inline string getIpv6CidrBlock() const { DARABONBA_PTR_GET_DEFAULT(ipv6CidrBlock_, "") };
    inline ModifyVSwitchAttributeRequest& setIpv6CidrBlock(string ipv6CidrBlock) { DARABONBA_PTR_SET_VALUE(ipv6CidrBlock_, ipv6CidrBlock) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyVSwitchAttributeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string getVSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline ModifyVSwitchAttributeRequest& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


  protected:
    // Description.
    // 
    // - Must be 2 to 256 characters in length and can contain English or Chinese characters.
    // 
    // - Cannot start with http\\:// or https\\://.
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableIPv6_ {};
    shared_ptr<string> ipv6CidrBlock_ {};
    // vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // vSwitch name.
    // 
    // - Must be 2 to 128 characters long. Can contain letters, digits, Chinese characters, underscores (_), and hyphens (-).
    // 
    // - Must start with a letter or a Chinese character. Cannot start with http\\:// or https\\://.
    shared_ptr<string> vSwitchName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
