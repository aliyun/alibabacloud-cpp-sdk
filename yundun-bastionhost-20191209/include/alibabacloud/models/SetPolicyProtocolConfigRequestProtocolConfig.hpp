// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGREQUESTPROTOCOLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYPROTOCOLCONFIGREQUESTPROTOCOLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetPolicyProtocolConfigRequestProtocolConfigRDP.hpp>
#include <alibabacloud/models/SetPolicyProtocolConfigRequestProtocolConfigSSH.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyProtocolConfigRequestProtocolConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyProtocolConfigRequestProtocolConfig& obj) { 
      DARABONBA_PTR_TO_JSON(RDP, RDP_);
      DARABONBA_PTR_TO_JSON(SSH, SSH_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyProtocolConfigRequestProtocolConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(RDP, RDP_);
      DARABONBA_PTR_FROM_JSON(SSH, SSH_);
    };
    SetPolicyProtocolConfigRequestProtocolConfig() = default ;
    SetPolicyProtocolConfigRequestProtocolConfig(const SetPolicyProtocolConfigRequestProtocolConfig &) = default ;
    SetPolicyProtocolConfigRequestProtocolConfig(SetPolicyProtocolConfigRequestProtocolConfig &&) = default ;
    SetPolicyProtocolConfigRequestProtocolConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyProtocolConfigRequestProtocolConfig() = default ;
    SetPolicyProtocolConfigRequestProtocolConfig& operator=(const SetPolicyProtocolConfigRequestProtocolConfig &) = default ;
    SetPolicyProtocolConfigRequestProtocolConfig& operator=(SetPolicyProtocolConfigRequestProtocolConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RDP_ == nullptr
        && return this->SSH_ == nullptr; };
    // RDP Field Functions 
    bool hasRDP() const { return this->RDP_ != nullptr;};
    void deleteRDP() { this->RDP_ = nullptr;};
    inline const Models::SetPolicyProtocolConfigRequestProtocolConfigRDP & RDP() const { DARABONBA_PTR_GET_CONST(RDP_, Models::SetPolicyProtocolConfigRequestProtocolConfigRDP) };
    inline Models::SetPolicyProtocolConfigRequestProtocolConfigRDP RDP() { DARABONBA_PTR_GET(RDP_, Models::SetPolicyProtocolConfigRequestProtocolConfigRDP) };
    inline SetPolicyProtocolConfigRequestProtocolConfig& setRDP(const Models::SetPolicyProtocolConfigRequestProtocolConfigRDP & RDP) { DARABONBA_PTR_SET_VALUE(RDP_, RDP) };
    inline SetPolicyProtocolConfigRequestProtocolConfig& setRDP(Models::SetPolicyProtocolConfigRequestProtocolConfigRDP && RDP) { DARABONBA_PTR_SET_RVALUE(RDP_, RDP) };


    // SSH Field Functions 
    bool hasSSH() const { return this->SSH_ != nullptr;};
    void deleteSSH() { this->SSH_ = nullptr;};
    inline const Models::SetPolicyProtocolConfigRequestProtocolConfigSSH & SSH() const { DARABONBA_PTR_GET_CONST(SSH_, Models::SetPolicyProtocolConfigRequestProtocolConfigSSH) };
    inline Models::SetPolicyProtocolConfigRequestProtocolConfigSSH SSH() { DARABONBA_PTR_GET(SSH_, Models::SetPolicyProtocolConfigRequestProtocolConfigSSH) };
    inline SetPolicyProtocolConfigRequestProtocolConfig& setSSH(const Models::SetPolicyProtocolConfigRequestProtocolConfigSSH & SSH) { DARABONBA_PTR_SET_VALUE(SSH_, SSH) };
    inline SetPolicyProtocolConfigRequestProtocolConfig& setSSH(Models::SetPolicyProtocolConfigRequestProtocolConfigSSH && SSH) { DARABONBA_PTR_SET_RVALUE(SSH_, SSH) };


  protected:
    // The settings of the Remote Desktop Protocol (RDP) options.
    std::shared_ptr<Models::SetPolicyProtocolConfigRequestProtocolConfigRDP> RDP_ = nullptr;
    // The settings of the SSH and SSH Fine Transfer Protocol (SFTP) options.
    std::shared_ptr<Models::SetPolicyProtocolConfigRequestProtocolConfigSSH> SSH_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
