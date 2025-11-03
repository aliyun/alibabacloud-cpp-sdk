// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATIPRESPONSEBODYNATIPS_HPP_
#define ALIBABACLOUD_MODELS_CREATENATIPRESPONSEBODYNATIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNatIpResponseBodyNatIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatIpResponseBodyNatIps& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpId, natIpId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatIpResponseBodyNatIps& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
    };
    CreateNatIpResponseBodyNatIps() = default ;
    CreateNatIpResponseBodyNatIps(const CreateNatIpResponseBodyNatIps &) = default ;
    CreateNatIpResponseBodyNatIps(CreateNatIpResponseBodyNatIps &&) = default ;
    CreateNatIpResponseBodyNatIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatIpResponseBodyNatIps() = default ;
    CreateNatIpResponseBodyNatIps& operator=(const CreateNatIpResponseBodyNatIps &) = default ;
    CreateNatIpResponseBodyNatIps& operator=(CreateNatIpResponseBodyNatIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4Prefix_ == nullptr
        && return this->natIp_ == nullptr && return this->natIpId_ == nullptr; };
    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string ipv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline CreateNatIpResponseBodyNatIps& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline CreateNatIpResponseBodyNatIps& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpId Field Functions 
    bool hasNatIpId() const { return this->natIpId_ != nullptr;};
    void deleteNatIpId() { this->natIpId_ = nullptr;};
    inline string natIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
    inline CreateNatIpResponseBodyNatIps& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


  protected:
    std::shared_ptr<string> ipv4Prefix_ = nullptr;
    std::shared_ptr<string> natIp_ = nullptr;
    std::shared_ptr<string> natIpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
