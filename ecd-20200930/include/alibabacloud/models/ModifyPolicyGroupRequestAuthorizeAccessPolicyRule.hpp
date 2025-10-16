// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUESTAUTHORIZEACCESSPOLICYRULE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPOLICYGROUPREQUESTAUTHORIZEACCESSPOLICYRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyPolicyGroupRequestAuthorizeAccessPolicyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPolicyGroupRequestAuthorizeAccessPolicyRule& obj) { 
      DARABONBA_PTR_TO_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPolicyGroupRequestAuthorizeAccessPolicyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrIp, cidrIp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    ModifyPolicyGroupRequestAuthorizeAccessPolicyRule() = default ;
    ModifyPolicyGroupRequestAuthorizeAccessPolicyRule(const ModifyPolicyGroupRequestAuthorizeAccessPolicyRule &) = default ;
    ModifyPolicyGroupRequestAuthorizeAccessPolicyRule(ModifyPolicyGroupRequestAuthorizeAccessPolicyRule &&) = default ;
    ModifyPolicyGroupRequestAuthorizeAccessPolicyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPolicyGroupRequestAuthorizeAccessPolicyRule() = default ;
    ModifyPolicyGroupRequestAuthorizeAccessPolicyRule& operator=(const ModifyPolicyGroupRequestAuthorizeAccessPolicyRule &) = default ;
    ModifyPolicyGroupRequestAuthorizeAccessPolicyRule& operator=(ModifyPolicyGroupRequestAuthorizeAccessPolicyRule &&) = default ;
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
    inline ModifyPolicyGroupRequestAuthorizeAccessPolicyRule& setCidrIp(string cidrIp) { DARABONBA_PTR_SET_VALUE(cidrIp_, cidrIp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPolicyGroupRequestAuthorizeAccessPolicyRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The client CIDR block. Specify an IPv4 CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> cidrIp_ = nullptr;
    // The description of the client IP address whitelist.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
