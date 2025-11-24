// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMMETARESPONSEBODYVMMETAINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVMMETARESPONSEBODYVMMETAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetVmMetaResponseBodyVmMetaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmMetaResponseBodyVmMetaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EnvoyEnvContent, envoyEnvContent_);
      DARABONBA_PTR_TO_JSON(HostsContent, hostsContent_);
      DARABONBA_PTR_TO_JSON(TokenContent, tokenContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmMetaResponseBodyVmMetaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvoyEnvContent, envoyEnvContent_);
      DARABONBA_PTR_FROM_JSON(HostsContent, hostsContent_);
      DARABONBA_PTR_FROM_JSON(TokenContent, tokenContent_);
    };
    GetVmMetaResponseBodyVmMetaInfo() = default ;
    GetVmMetaResponseBodyVmMetaInfo(const GetVmMetaResponseBodyVmMetaInfo &) = default ;
    GetVmMetaResponseBodyVmMetaInfo(GetVmMetaResponseBodyVmMetaInfo &&) = default ;
    GetVmMetaResponseBodyVmMetaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmMetaResponseBodyVmMetaInfo() = default ;
    GetVmMetaResponseBodyVmMetaInfo& operator=(const GetVmMetaResponseBodyVmMetaInfo &) = default ;
    GetVmMetaResponseBodyVmMetaInfo& operator=(GetVmMetaResponseBodyVmMetaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envoyEnvContent_ == nullptr
        && return this->hostsContent_ == nullptr && return this->tokenContent_ == nullptr; };
    // envoyEnvContent Field Functions 
    bool hasEnvoyEnvContent() const { return this->envoyEnvContent_ != nullptr;};
    void deleteEnvoyEnvContent() { this->envoyEnvContent_ = nullptr;};
    inline string envoyEnvContent() const { DARABONBA_PTR_GET_DEFAULT(envoyEnvContent_, "") };
    inline GetVmMetaResponseBodyVmMetaInfo& setEnvoyEnvContent(string envoyEnvContent) { DARABONBA_PTR_SET_VALUE(envoyEnvContent_, envoyEnvContent) };


    // hostsContent Field Functions 
    bool hasHostsContent() const { return this->hostsContent_ != nullptr;};
    void deleteHostsContent() { this->hostsContent_ = nullptr;};
    inline string hostsContent() const { DARABONBA_PTR_GET_DEFAULT(hostsContent_, "") };
    inline GetVmMetaResponseBodyVmMetaInfo& setHostsContent(string hostsContent) { DARABONBA_PTR_SET_VALUE(hostsContent_, hostsContent) };


    // tokenContent Field Functions 
    bool hasTokenContent() const { return this->tokenContent_ != nullptr;};
    void deleteTokenContent() { this->tokenContent_ = nullptr;};
    inline string tokenContent() const { DARABONBA_PTR_GET_DEFAULT(tokenContent_, "") };
    inline GetVmMetaResponseBodyVmMetaInfo& setTokenContent(string tokenContent) { DARABONBA_PTR_SET_VALUE(tokenContent_, tokenContent) };


  protected:
    // The content of the EnvoyEnv file.
    std::shared_ptr<string> envoyEnvContent_ = nullptr;
    // The content of the hosts file.
    std::shared_ptr<string> hostsContent_ = nullptr;
    // The content of the Token file.
    std::shared_ptr<string> tokenContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
