// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTREVOKEACCESSPOLICYRULE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTREVOKEACCESSPOLICYRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCenterPolicyRequestRevokeAccessPolicyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenterPolicyRequestRevokeAccessPolicyRule& obj) { 
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenterPolicyRequestRevokeAccessPolicyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    ModifyCenterPolicyRequestRevokeAccessPolicyRule() = default ;
    ModifyCenterPolicyRequestRevokeAccessPolicyRule(const ModifyCenterPolicyRequestRevokeAccessPolicyRule &) = default ;
    ModifyCenterPolicyRequestRevokeAccessPolicyRule(ModifyCenterPolicyRequestRevokeAccessPolicyRule &&) = default ;
    ModifyCenterPolicyRequestRevokeAccessPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenterPolicyRequestRevokeAccessPolicyRule() = default ;
    ModifyCenterPolicyRequestRevokeAccessPolicyRule& operator=(const ModifyCenterPolicyRequestRevokeAccessPolicyRule &) = default ;
    ModifyCenterPolicyRequestRevokeAccessPolicyRule& operator=(ModifyCenterPolicyRequestRevokeAccessPolicyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrIp_ == nullptr
        && return this->description_ == nullptr; };
    // cidrIp Field Functions 
    bool hasCidrIp() const { return this->cidrIp_ != nullptr;};
    void deleteCidrIp() { this->cidrIp_ = nullptr;};
    inline string cidrIp() const { DARABONBA_PTR_GET_DEFAULT(cidrIp_, "") };
    inline ModifyCenterPolicyRequestRevokeAccessPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCenterPolicyRequestRevokeAccessPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The client CIDR block that you want to delete. Specify an IPv4 CIDR block.
    std::shared_ptr<string> cidrIp_ = nullptr;
    // The description of the client IP address whitelist that you want to delete.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
