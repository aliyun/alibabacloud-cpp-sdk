// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELIKECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTEREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELIKECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IkeAuthAlg, ikeAuthAlg_);
      DARABONBA_PTR_TO_JSON(IkeEncAlg, ikeEncAlg_);
      DARABONBA_PTR_TO_JSON(IkeLifetime, ikeLifetime_);
      DARABONBA_PTR_TO_JSON(IkeMode, ikeMode_);
      DARABONBA_PTR_TO_JSON(IkePfs, ikePfs_);
      DARABONBA_PTR_TO_JSON(IkeVersion, ikeVersion_);
      DARABONBA_PTR_TO_JSON(LocalId, localId_);
      DARABONBA_PTR_TO_JSON(Psk, psk_);
      DARABONBA_PTR_TO_JSON(RemoteId, remoteId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IkeAuthAlg, ikeAuthAlg_);
      DARABONBA_PTR_FROM_JSON(IkeEncAlg, ikeEncAlg_);
      DARABONBA_PTR_FROM_JSON(IkeLifetime, ikeLifetime_);
      DARABONBA_PTR_FROM_JSON(IkeMode, ikeMode_);
      DARABONBA_PTR_FROM_JSON(IkePfs, ikePfs_);
      DARABONBA_PTR_FROM_JSON(IkeVersion, ikeVersion_);
      DARABONBA_PTR_FROM_JSON(LocalId, localId_);
      DARABONBA_PTR_FROM_JSON(Psk, psk_);
      DARABONBA_PTR_FROM_JSON(RemoteId, remoteId_);
    };
    ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig() = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig(const ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig &) = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig(ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig &&) = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig() = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& operator=(const ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig &) = default ;
    ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& operator=(ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ikeAuthAlg_ == nullptr
        && return this->ikeEncAlg_ == nullptr && return this->ikeLifetime_ == nullptr && return this->ikeMode_ == nullptr && return this->ikePfs_ == nullptr && return this->ikeVersion_ == nullptr
        && return this->localId_ == nullptr && return this->psk_ == nullptr && return this->remoteId_ == nullptr; };
    // ikeAuthAlg Field Functions 
    bool hasIkeAuthAlg() const { return this->ikeAuthAlg_ != nullptr;};
    void deleteIkeAuthAlg() { this->ikeAuthAlg_ = nullptr;};
    inline string ikeAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeAuthAlg_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeAuthAlg(string ikeAuthAlg) { DARABONBA_PTR_SET_VALUE(ikeAuthAlg_, ikeAuthAlg) };


    // ikeEncAlg Field Functions 
    bool hasIkeEncAlg() const { return this->ikeEncAlg_ != nullptr;};
    void deleteIkeEncAlg() { this->ikeEncAlg_ = nullptr;};
    inline string ikeEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeEncAlg_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeEncAlg(string ikeEncAlg) { DARABONBA_PTR_SET_VALUE(ikeEncAlg_, ikeEncAlg) };


    // ikeLifetime Field Functions 
    bool hasIkeLifetime() const { return this->ikeLifetime_ != nullptr;};
    void deleteIkeLifetime() { this->ikeLifetime_ = nullptr;};
    inline int64_t ikeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, 0L) };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeLifetime(int64_t ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


    // ikeMode Field Functions 
    bool hasIkeMode() const { return this->ikeMode_ != nullptr;};
    void deleteIkeMode() { this->ikeMode_ = nullptr;};
    inline string ikeMode() const { DARABONBA_PTR_GET_DEFAULT(ikeMode_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeMode(string ikeMode) { DARABONBA_PTR_SET_VALUE(ikeMode_, ikeMode) };


    // ikePfs Field Functions 
    bool hasIkePfs() const { return this->ikePfs_ != nullptr;};
    void deleteIkePfs() { this->ikePfs_ = nullptr;};
    inline string ikePfs() const { DARABONBA_PTR_GET_DEFAULT(ikePfs_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkePfs(string ikePfs) { DARABONBA_PTR_SET_VALUE(ikePfs_, ikePfs) };


    // ikeVersion Field Functions 
    bool hasIkeVersion() const { return this->ikeVersion_ != nullptr;};
    void deleteIkeVersion() { this->ikeVersion_ = nullptr;};
    inline string ikeVersion() const { DARABONBA_PTR_GET_DEFAULT(ikeVersion_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeVersion(string ikeVersion) { DARABONBA_PTR_SET_VALUE(ikeVersion_, ikeVersion) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline string localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setLocalId(string localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string psk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // remoteId Field Functions 
    bool hasRemoteId() const { return this->remoteId_ != nullptr;};
    void deleteRemoteId() { this->remoteId_ = nullptr;};
    inline string remoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
    inline ModifyTunnelAttributeRequestTunnelOptionsSpecificationTunnelIkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


  protected:
    // The authentication algorithm that is used in IKE Phase 1 negotiations.
    // 
    // 
    // <props="china">
    // 
    // *   If an IPsec-VPN gateway is associated with a standard VPN gateway, the valid values are **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // *   If the IPsec-VPN gateway is associated with an SSL-VPN gateway, the valid value is **sm3**.
    // 
    // 
    // <props="intl">
    // 
    // Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    std::shared_ptr<string> ikeAuthAlg_ = nullptr;
    // The encryption algorithm that is used in IKE Phase 1 negotiations.
    // 
    // <props="china">
    // 
    // *   If an IPsec-VPN gateway is associated with a standard VPN gateway, the valid values are **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // *   If the IPsec-VPN gateway is associated with an SSL-VPN gateway, set the value to **sm4**.
    // 
    // 
    // <props="intl">
    // 
    // Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    std::shared_ptr<string> ikeEncAlg_ = nullptr;
    // The SA lifetime as a result of Phase 1 negotiations. Unit: seconds Valid values: **0 to 86400**.
    std::shared_ptr<int64_t> ikeLifetime_ = nullptr;
    // The negotiation mode of IKE. Valid values:
    // 
    // *   **main:** This mode offers higher security during negotiations.
    // *   **aggressive**: This mode is faster and has a higher success rate.
    std::shared_ptr<string> ikeMode_ = nullptr;
    // The Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiations. Valid values: **group1**, **group2**, **group5**, and **group14**.
    std::shared_ptr<string> ikePfs_ = nullptr;
    // The version of the IKE protocol. Valid values: **ikev1** and **ikev2**.
    std::shared_ptr<string> ikeVersion_ = nullptr;
    // The tunnel identifier. The identifier can be up to 100 characters in length and cannot contain spaces. It supports fully qualified domain names (FQDNs) and IP addresses. The default value is the IP address of the tunnel.
    std::shared_ptr<string> localId_ = nullptr;
    // The pre-shared key that is used to verify identities between the tunnel and peer.
    // 
    // *   The key must be 1 to 100 characters in length, and can contain digits, and letters. It cannot contain spaces. ``~!`@#$%^&*()_-+={}[]|;:\\",.<>/?``
    // *   If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the key. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/120374.html) operation to query the pre-shared key that is automatically generated by the system.
    // 
    // >  The pre-shared key that is configured for the tunnel and the tunnel peer must be the same. Otherwise, the system cannot establish the tunnel.
    std::shared_ptr<string> psk_ = nullptr;
    // The peer identifier. The identifier can be up to 100 characters in length, and cannot contain spaces. It supports FQDNs and IP addresses. The default identifier is the IP address of the customer gateway associated with the tunnel.
    std::shared_ptr<string> remoteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
