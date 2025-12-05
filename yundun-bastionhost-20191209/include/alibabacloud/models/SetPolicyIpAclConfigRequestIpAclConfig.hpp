// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYIPACLCONFIGREQUESTIPACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYIPACLCONFIGREQUESTIPACLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyIPAclConfigRequestIPAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyIPAclConfigRequestIPAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(IPs, IPs_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyIPAclConfigRequestIPAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(IPs, IPs_);
    };
    SetPolicyIPAclConfigRequestIPAclConfig() = default ;
    SetPolicyIPAclConfigRequestIPAclConfig(const SetPolicyIPAclConfigRequestIPAclConfig &) = default ;
    SetPolicyIPAclConfigRequestIPAclConfig(SetPolicyIPAclConfigRequestIPAclConfig &&) = default ;
    SetPolicyIPAclConfigRequestIPAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyIPAclConfigRequestIPAclConfig() = default ;
    SetPolicyIPAclConfigRequestIPAclConfig& operator=(const SetPolicyIPAclConfigRequestIPAclConfig &) = default ;
    SetPolicyIPAclConfigRequestIPAclConfig& operator=(SetPolicyIPAclConfigRequestIPAclConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && return this->IPs_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline SetPolicyIPAclConfigRequestIPAclConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // IPs Field Functions 
    bool hasIPs() const { return this->IPs_ != nullptr;};
    void deleteIPs() { this->IPs_ = nullptr;};
    inline const vector<string> & IPs() const { DARABONBA_PTR_GET_CONST(IPs_, vector<string>) };
    inline vector<string> IPs() { DARABONBA_PTR_GET(IPs_, vector<string>) };
    inline SetPolicyIPAclConfigRequestIPAclConfig& setIPs(const vector<string> & IPs) { DARABONBA_PTR_SET_VALUE(IPs_, IPs) };
    inline SetPolicyIPAclConfigRequestIPAclConfig& setIPs(vector<string> && IPs) { DARABONBA_PTR_SET_RVALUE(IPs_, IPs) };


  protected:
    // The mode of access control on source IP addresses. Valid values:
    // 
    // *   **black**: blacklist mode.
    // *   **white**: whitelist mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclType_ = nullptr;
    // The source IP addresses in the blacklist or whitelist.
    // 
    // > 
    // 
    // *   This parameter is required if AclType is set to white.
    // 
    // *   If AclType is set to black but you do not want to add IP addresses to the blacklist, you can leave IPs empty.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> IPs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
