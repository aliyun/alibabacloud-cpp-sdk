// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELIPSECCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELIPSECCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IpsecAuthAlg, ipsecAuthAlg_);
      DARABONBA_PTR_TO_JSON(IpsecEncAlg, ipsecEncAlg_);
      DARABONBA_PTR_TO_JSON(IpsecLifetime, ipsecLifetime_);
      DARABONBA_PTR_TO_JSON(IpsecPfs, ipsecPfs_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IpsecAuthAlg, ipsecAuthAlg_);
      DARABONBA_PTR_FROM_JSON(IpsecEncAlg, ipsecEncAlg_);
      DARABONBA_PTR_FROM_JSON(IpsecLifetime, ipsecLifetime_);
      DARABONBA_PTR_FROM_JSON(IpsecPfs, ipsecPfs_);
    };
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig() = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig(const ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig &) = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig(ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig &&) = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig() = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& operator=(const ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig &) = default ;
    ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& operator=(ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipsecAuthAlg_ != nullptr
        && this->ipsecEncAlg_ != nullptr && this->ipsecLifetime_ != nullptr && this->ipsecPfs_ != nullptr; };
    // ipsecAuthAlg Field Functions 
    bool hasIpsecAuthAlg() const { return this->ipsecAuthAlg_ != nullptr;};
    void deleteIpsecAuthAlg() { this->ipsecAuthAlg_ = nullptr;};
    inline string ipsecAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecAuthAlg_, "") };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& setIpsecAuthAlg(string ipsecAuthAlg) { DARABONBA_PTR_SET_VALUE(ipsecAuthAlg_, ipsecAuthAlg) };


    // ipsecEncAlg Field Functions 
    bool hasIpsecEncAlg() const { return this->ipsecEncAlg_ != nullptr;};
    void deleteIpsecEncAlg() { this->ipsecEncAlg_ = nullptr;};
    inline string ipsecEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecEncAlg_, "") };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& setIpsecEncAlg(string ipsecEncAlg) { DARABONBA_PTR_SET_VALUE(ipsecEncAlg_, ipsecEncAlg) };


    // ipsecLifetime Field Functions 
    bool hasIpsecLifetime() const { return this->ipsecLifetime_ != nullptr;};
    void deleteIpsecLifetime() { this->ipsecLifetime_ = nullptr;};
    inline int32_t ipsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, 0) };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& setIpsecLifetime(int32_t ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


    // ipsecPfs Field Functions 
    bool hasIpsecPfs() const { return this->ipsecPfs_ != nullptr;};
    void deleteIpsecPfs() { this->ipsecPfs_ = nullptr;};
    inline string ipsecPfs() const { DARABONBA_PTR_GET_DEFAULT(ipsecPfs_, "") };
    inline ModifyVpnAttachmentAttributeRequestTunnelOptionsSpecificationTunnelIpsecConfig& setIpsecPfs(string ipsecPfs) { DARABONBA_PTR_SET_VALUE(ipsecPfs_, ipsecPfs) };


  protected:
    // The authentication algorithm that is used in Phase 2 negotiations.
    // 
    // Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    std::shared_ptr<string> ipsecAuthAlg_ = nullptr;
    // The encryption algorithm that is used in Phase 2 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    std::shared_ptr<string> ipsecEncAlg_ = nullptr;
    // The SA lifetime as a result of Phase 2 negotiations. Unit: seconds.
    // 
    // Valid values: **0** to **86400**.
    std::shared_ptr<int32_t> ipsecLifetime_ = nullptr;
    // The Diffie-Hellman key exchange algorithm that is used in Phase 2 negotiations.
    // 
    // Valid values: **disabled**, **group1**, **group2**, **group5**, and **group14**.
    std::shared_ptr<string> ipsecPfs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
