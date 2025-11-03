// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNATTACHMENTREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELIKECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNATTACHMENTREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELIKECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& obj) { 
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
    CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig() = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig(const CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig &) = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig(CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig &&) = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig() = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& operator=(const CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig &) = default ;
    CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& operator=(CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig &&) = default ;
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
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeAuthAlg(string ikeAuthAlg) { DARABONBA_PTR_SET_VALUE(ikeAuthAlg_, ikeAuthAlg) };


    // ikeEncAlg Field Functions 
    bool hasIkeEncAlg() const { return this->ikeEncAlg_ != nullptr;};
    void deleteIkeEncAlg() { this->ikeEncAlg_ = nullptr;};
    inline string ikeEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeEncAlg_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeEncAlg(string ikeEncAlg) { DARABONBA_PTR_SET_VALUE(ikeEncAlg_, ikeEncAlg) };


    // ikeLifetime Field Functions 
    bool hasIkeLifetime() const { return this->ikeLifetime_ != nullptr;};
    void deleteIkeLifetime() { this->ikeLifetime_ = nullptr;};
    inline int64_t ikeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, 0L) };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeLifetime(int64_t ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


    // ikeMode Field Functions 
    bool hasIkeMode() const { return this->ikeMode_ != nullptr;};
    void deleteIkeMode() { this->ikeMode_ = nullptr;};
    inline string ikeMode() const { DARABONBA_PTR_GET_DEFAULT(ikeMode_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeMode(string ikeMode) { DARABONBA_PTR_SET_VALUE(ikeMode_, ikeMode) };


    // ikePfs Field Functions 
    bool hasIkePfs() const { return this->ikePfs_ != nullptr;};
    void deleteIkePfs() { this->ikePfs_ = nullptr;};
    inline string ikePfs() const { DARABONBA_PTR_GET_DEFAULT(ikePfs_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkePfs(string ikePfs) { DARABONBA_PTR_SET_VALUE(ikePfs_, ikePfs) };


    // ikeVersion Field Functions 
    bool hasIkeVersion() const { return this->ikeVersion_ != nullptr;};
    void deleteIkeVersion() { this->ikeVersion_ = nullptr;};
    inline string ikeVersion() const { DARABONBA_PTR_GET_DEFAULT(ikeVersion_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setIkeVersion(string ikeVersion) { DARABONBA_PTR_SET_VALUE(ikeVersion_, ikeVersion) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline string localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setLocalId(string localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string psk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // remoteId Field Functions 
    bool hasRemoteId() const { return this->remoteId_ != nullptr;};
    void deleteRemoteId() { this->remoteId_ = nullptr;};
    inline string remoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
    inline CreateVpnAttachmentRequestTunnelOptionsSpecificationTunnelIkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


  protected:
    // The authentication algorithm that is used in Phase 1 negotiations. Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**. Default value: **sha1**.
    std::shared_ptr<string> ikeAuthAlg_ = nullptr;
    // The encryption algorithm that is used in Phase 1 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**. Default value: **aes**.
    std::shared_ptr<string> ikeEncAlg_ = nullptr;
    // The SA lifetime as a result of Phase 1 negotiations. Unit: seconds.
    // 
    // Valid values: **0** to **86400**. Default value: **86400**.
    std::shared_ptr<int64_t> ikeLifetime_ = nullptr;
    // The negotiation mode of IKE. Valid values: **main** and **aggressive**. Default value: **main**.
    // 
    // *   **main:** This mode offers higher security during negotiations.
    // *   **aggressive**: This mode is faster with a higher success rate.
    std::shared_ptr<string> ikeMode_ = nullptr;
    // The Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiations. Default value: **group2**.\\
    // Valid values: **group1**, **group2**, **group5**, and **group14**.
    std::shared_ptr<string> ikePfs_ = nullptr;
    // The version of the IKE protocol. Valid values: **ikev1** and **ikev2**. Default value: **ikev2**.
    // 
    // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and provides better support for scenarios with multiple CIDR blocks.
    std::shared_ptr<string> ikeVersion_ = nullptr;
    // The identifier of the tunnel on the Alibaba Cloud side, which is used in Phase 1 negotiations. The identifier cannot exceed 100 characters in length and cannot contain spaces. The default value is the IP address of the tunnel.
    // 
    // **LocalId** supports fully qualified domain names (FQDNs). If you use an FQDN, we recommend that you set the negotiation mode to **aggressive**.
    std::shared_ptr<string> localId_ = nullptr;
    // The pre-shared key that is used for identity authentication between the tunnel and the tunnel peer.
    // 
    // *   The key cannot contain spaces. The key must be 1 to 100 characters in length, and can contain digits, letters, and the following special characters: ``~!\\`@#$%^&*()_-+={}[]|;:\\",.<>/?``
    // *   If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the pre-shared key. You can call the [DescribeVpnAttachments](https://help.aliyun.com/document_detail/2526939.html) operation to query the pre-shared key that is automatically generated by the system.
    // 
    // >  The tunnel and the tunnel peer must use the same pre-shared key. Otherwise, the tunnel cannot be established.
    std::shared_ptr<string> psk_ = nullptr;
    // The identifier of the tunnel peer, which is used in Phase 1 negotiations. The identifier cannot exceed 100 characters in length and cannot contain spaces. The default value is the IP address of the customer gateway that is associated with the tunnel.
    // 
    // **RemoteId** supports FQDNs. If you use an FQDN, we recommend that you set the negotiation mode to **aggressive**.
    std::shared_ptr<string> remoteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
