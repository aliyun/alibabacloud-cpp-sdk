// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYIPACLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYIPACLCONFIG_HPP_
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
  class GetPolicyResponseBodyPolicyIPAclConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyIPAclConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(IPs, IPs_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyIPAclConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(IPs, IPs_);
    };
    GetPolicyResponseBodyPolicyIPAclConfig() = default ;
    GetPolicyResponseBodyPolicyIPAclConfig(const GetPolicyResponseBodyPolicyIPAclConfig &) = default ;
    GetPolicyResponseBodyPolicyIPAclConfig(GetPolicyResponseBodyPolicyIPAclConfig &&) = default ;
    GetPolicyResponseBodyPolicyIPAclConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyIPAclConfig() = default ;
    GetPolicyResponseBodyPolicyIPAclConfig& operator=(const GetPolicyResponseBodyPolicyIPAclConfig &) = default ;
    GetPolicyResponseBodyPolicyIPAclConfig& operator=(GetPolicyResponseBodyPolicyIPAclConfig &&) = default ;
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
    inline GetPolicyResponseBodyPolicyIPAclConfig& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // IPs Field Functions 
    bool hasIPs() const { return this->IPs_ != nullptr;};
    void deleteIPs() { this->IPs_ = nullptr;};
    inline const vector<string> & IPs() const { DARABONBA_PTR_GET_CONST(IPs_, vector<string>) };
    inline vector<string> IPs() { DARABONBA_PTR_GET(IPs_, vector<string>) };
    inline GetPolicyResponseBodyPolicyIPAclConfig& setIPs(const vector<string> & IPs) { DARABONBA_PTR_SET_VALUE(IPs_, IPs) };
    inline GetPolicyResponseBodyPolicyIPAclConfig& setIPs(vector<string> && IPs) { DARABONBA_PTR_SET_RVALUE(IPs_, IPs) };


  protected:
    // The mode of access control on source IP addresses. Valid values:
    // 
    // *   white: whitelist mode.
    // *   black: blacklist mode.
    std::shared_ptr<string> aclType_ = nullptr;
    // The IP addresses from which logons are not allowed.
    std::shared_ptr<vector<string>> IPs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
