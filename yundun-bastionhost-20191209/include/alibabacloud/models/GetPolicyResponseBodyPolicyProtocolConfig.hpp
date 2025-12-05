// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYPROTOCOLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYPROTOCOLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyProtocolConfigRDP.hpp>
#include <alibabacloud/models/GetPolicyResponseBodyPolicyProtocolConfigSSH.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyProtocolConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyProtocolConfig& obj) { 
      DARABONBA_PTR_TO_JSON(RDP, RDP_);
      DARABONBA_PTR_TO_JSON(SSH, SSH_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyProtocolConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(RDP, RDP_);
      DARABONBA_PTR_FROM_JSON(SSH, SSH_);
    };
    GetPolicyResponseBodyPolicyProtocolConfig() = default ;
    GetPolicyResponseBodyPolicyProtocolConfig(const GetPolicyResponseBodyPolicyProtocolConfig &) = default ;
    GetPolicyResponseBodyPolicyProtocolConfig(GetPolicyResponseBodyPolicyProtocolConfig &&) = default ;
    GetPolicyResponseBodyPolicyProtocolConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyProtocolConfig() = default ;
    GetPolicyResponseBodyPolicyProtocolConfig& operator=(const GetPolicyResponseBodyPolicyProtocolConfig &) = default ;
    GetPolicyResponseBodyPolicyProtocolConfig& operator=(GetPolicyResponseBodyPolicyProtocolConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RDP_ == nullptr
        && return this->SSH_ == nullptr; };
    // RDP Field Functions 
    bool hasRDP() const { return this->RDP_ != nullptr;};
    void deleteRDP() { this->RDP_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyProtocolConfigRDP & RDP() const { DARABONBA_PTR_GET_CONST(RDP_, Models::GetPolicyResponseBodyPolicyProtocolConfigRDP) };
    inline Models::GetPolicyResponseBodyPolicyProtocolConfigRDP RDP() { DARABONBA_PTR_GET(RDP_, Models::GetPolicyResponseBodyPolicyProtocolConfigRDP) };
    inline GetPolicyResponseBodyPolicyProtocolConfig& setRDP(const Models::GetPolicyResponseBodyPolicyProtocolConfigRDP & RDP) { DARABONBA_PTR_SET_VALUE(RDP_, RDP) };
    inline GetPolicyResponseBodyPolicyProtocolConfig& setRDP(Models::GetPolicyResponseBodyPolicyProtocolConfigRDP && RDP) { DARABONBA_PTR_SET_RVALUE(RDP_, RDP) };


    // SSH Field Functions 
    bool hasSSH() const { return this->SSH_ != nullptr;};
    void deleteSSH() { this->SSH_ = nullptr;};
    inline const Models::GetPolicyResponseBodyPolicyProtocolConfigSSH & SSH() const { DARABONBA_PTR_GET_CONST(SSH_, Models::GetPolicyResponseBodyPolicyProtocolConfigSSH) };
    inline Models::GetPolicyResponseBodyPolicyProtocolConfigSSH SSH() { DARABONBA_PTR_GET(SSH_, Models::GetPolicyResponseBodyPolicyProtocolConfigSSH) };
    inline GetPolicyResponseBodyPolicyProtocolConfig& setSSH(const Models::GetPolicyResponseBodyPolicyProtocolConfigSSH & SSH) { DARABONBA_PTR_SET_VALUE(SSH_, SSH) };
    inline GetPolicyResponseBodyPolicyProtocolConfig& setSSH(Models::GetPolicyResponseBodyPolicyProtocolConfigSSH && SSH) { DARABONBA_PTR_SET_RVALUE(SSH_, SSH) };


  protected:
    // The configuration details of Remote Desktop Protocol (RDP) options.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyProtocolConfigRDP> RDP_ = nullptr;
    // The configuration details of SSH and SSH File Transfer Protocol (SFTP) options.
    std::shared_ptr<Models::GetPolicyResponseBodyPolicyProtocolConfigSSH> SSH_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
