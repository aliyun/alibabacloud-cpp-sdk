// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTERESPONSEBODYIKECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTERESPONSEBODYIKECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnAttachmentAttributeResponseBodyIkeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnAttachmentAttributeResponseBodyIkeConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ModifyVpnAttachmentAttributeResponseBodyIkeConfig& obj) { 
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
    ModifyVpnAttachmentAttributeResponseBodyIkeConfig() = default ;
    ModifyVpnAttachmentAttributeResponseBodyIkeConfig(const ModifyVpnAttachmentAttributeResponseBodyIkeConfig &) = default ;
    ModifyVpnAttachmentAttributeResponseBodyIkeConfig(ModifyVpnAttachmentAttributeResponseBodyIkeConfig &&) = default ;
    ModifyVpnAttachmentAttributeResponseBodyIkeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnAttachmentAttributeResponseBodyIkeConfig() = default ;
    ModifyVpnAttachmentAttributeResponseBodyIkeConfig& operator=(const ModifyVpnAttachmentAttributeResponseBodyIkeConfig &) = default ;
    ModifyVpnAttachmentAttributeResponseBodyIkeConfig& operator=(ModifyVpnAttachmentAttributeResponseBodyIkeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ikeAuthAlg_ != nullptr
        && this->ikeEncAlg_ != nullptr && this->ikeLifetime_ != nullptr && this->ikeMode_ != nullptr && this->ikePfs_ != nullptr && this->ikeVersion_ != nullptr
        && this->localId_ != nullptr && this->psk_ != nullptr && this->remoteId_ != nullptr; };
    // ikeAuthAlg Field Functions 
    bool hasIkeAuthAlg() const { return this->ikeAuthAlg_ != nullptr;};
    void deleteIkeAuthAlg() { this->ikeAuthAlg_ = nullptr;};
    inline string ikeAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeAuthAlg_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setIkeAuthAlg(string ikeAuthAlg) { DARABONBA_PTR_SET_VALUE(ikeAuthAlg_, ikeAuthAlg) };


    // ikeEncAlg Field Functions 
    bool hasIkeEncAlg() const { return this->ikeEncAlg_ != nullptr;};
    void deleteIkeEncAlg() { this->ikeEncAlg_ = nullptr;};
    inline string ikeEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeEncAlg_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setIkeEncAlg(string ikeEncAlg) { DARABONBA_PTR_SET_VALUE(ikeEncAlg_, ikeEncAlg) };


    // ikeLifetime Field Functions 
    bool hasIkeLifetime() const { return this->ikeLifetime_ != nullptr;};
    void deleteIkeLifetime() { this->ikeLifetime_ = nullptr;};
    inline int64_t ikeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, 0L) };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setIkeLifetime(int64_t ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


    // ikeMode Field Functions 
    bool hasIkeMode() const { return this->ikeMode_ != nullptr;};
    void deleteIkeMode() { this->ikeMode_ = nullptr;};
    inline string ikeMode() const { DARABONBA_PTR_GET_DEFAULT(ikeMode_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setIkeMode(string ikeMode) { DARABONBA_PTR_SET_VALUE(ikeMode_, ikeMode) };


    // ikePfs Field Functions 
    bool hasIkePfs() const { return this->ikePfs_ != nullptr;};
    void deleteIkePfs() { this->ikePfs_ = nullptr;};
    inline string ikePfs() const { DARABONBA_PTR_GET_DEFAULT(ikePfs_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setIkePfs(string ikePfs) { DARABONBA_PTR_SET_VALUE(ikePfs_, ikePfs) };


    // ikeVersion Field Functions 
    bool hasIkeVersion() const { return this->ikeVersion_ != nullptr;};
    void deleteIkeVersion() { this->ikeVersion_ = nullptr;};
    inline string ikeVersion() const { DARABONBA_PTR_GET_DEFAULT(ikeVersion_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setIkeVersion(string ikeVersion) { DARABONBA_PTR_SET_VALUE(ikeVersion_, ikeVersion) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline string localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setLocalId(string localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string psk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // remoteId Field Functions 
    bool hasRemoteId() const { return this->remoteId_ != nullptr;};
    void deleteRemoteId() { this->remoteId_ = nullptr;};
    inline string remoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
    inline ModifyVpnAttachmentAttributeResponseBodyIkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


  protected:
    // The authentication algorithm that is used in Phase 1 negotiations.
    std::shared_ptr<string> ikeAuthAlg_ = nullptr;
    // The encryption algorithm that is used in Phase 1 negotiations.
    std::shared_ptr<string> ikeEncAlg_ = nullptr;
    // The SA lifetime that is determined by Phase 1 negotiations. Unit: seconds.
    std::shared_ptr<int64_t> ikeLifetime_ = nullptr;
    // The IKE negotiation mode.
    // 
    // *   **main:** This mode offers higher security during negotiations.
    // *   **aggressive**: This mode is faster with a higher success rate.
    std::shared_ptr<string> ikeMode_ = nullptr;
    // The DH key exchange algorithm that is used in Phase 1 negotiations.
    std::shared_ptr<string> ikePfs_ = nullptr;
    // The version of the IKE protocol.
    // 
    // *   **ikev1**
    // *   **ikev2**
    // 
    // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and provides better support for scenarios with multiple CIDR blocks.
    std::shared_ptr<string> ikeVersion_ = nullptr;
    // The identifier of the IPsec-VPN connection on the Alibaba Cloud side.
    std::shared_ptr<string> localId_ = nullptr;
    // Enter a pre-shared key that is used for identity authentication between Alibaba Cloud and the data center.
    // 
    // >  The pre-shared key of the IPsec-VPN connection must be the same as the authentication key of the on-premises data center. Otherwise, connections between the on-premises data center and Alibaba Cloud cannot be established.
    std::shared_ptr<string> psk_ = nullptr;
    // The identifier of the IPsec-VPN connection on the data center side.
    std::shared_ptr<string> remoteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
