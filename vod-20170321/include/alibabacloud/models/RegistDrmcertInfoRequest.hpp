// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTDRMCERTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTDRMCERTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RegistDRMCertInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegistDRMCertInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ask, ask_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_TO_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_TO_JSON(ServCert, servCert_);
    };
    friend void from_json(const Darabonba::Json& j, RegistDRMCertInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ask, ask_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PassPhrase, passPhrase_);
      DARABONBA_PTR_FROM_JSON(PrivateKey, privateKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServCert, servCert_);
    };
    RegistDRMCertInfoRequest() = default ;
    RegistDRMCertInfoRequest(const RegistDRMCertInfoRequest &) = default ;
    RegistDRMCertInfoRequest(RegistDRMCertInfoRequest &&) = default ;
    RegistDRMCertInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegistDRMCertInfoRequest() = default ;
    RegistDRMCertInfoRequest& operator=(const RegistDRMCertInfoRequest &) = default ;
    RegistDRMCertInfoRequest& operator=(RegistDRMCertInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ask_ != nullptr
        && this->certName_ != nullptr && this->description_ != nullptr && this->ownerId_ != nullptr && this->passPhrase_ != nullptr && this->privateKey_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceRealOwnerId_ != nullptr && this->servCert_ != nullptr; };
    // ask Field Functions 
    bool hasAsk() const { return this->ask_ != nullptr;};
    void deleteAsk() { this->ask_ = nullptr;};
    inline string ask() const { DARABONBA_PTR_GET_DEFAULT(ask_, "") };
    inline RegistDRMCertInfoRequest& setAsk(string ask) { DARABONBA_PTR_SET_VALUE(ask_, ask) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline RegistDRMCertInfoRequest& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RegistDRMCertInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RegistDRMCertInfoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // passPhrase Field Functions 
    bool hasPassPhrase() const { return this->passPhrase_ != nullptr;};
    void deletePassPhrase() { this->passPhrase_ = nullptr;};
    inline string passPhrase() const { DARABONBA_PTR_GET_DEFAULT(passPhrase_, "") };
    inline RegistDRMCertInfoRequest& setPassPhrase(string passPhrase) { DARABONBA_PTR_SET_VALUE(passPhrase_, passPhrase) };


    // privateKey Field Functions 
    bool hasPrivateKey() const { return this->privateKey_ != nullptr;};
    void deletePrivateKey() { this->privateKey_ = nullptr;};
    inline string privateKey() const { DARABONBA_PTR_GET_DEFAULT(privateKey_, "") };
    inline RegistDRMCertInfoRequest& setPrivateKey(string privateKey) { DARABONBA_PTR_SET_VALUE(privateKey_, privateKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RegistDRMCertInfoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RegistDRMCertInfoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline RegistDRMCertInfoRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


    // servCert Field Functions 
    bool hasServCert() const { return this->servCert_ != nullptr;};
    void deleteServCert() { this->servCert_ = nullptr;};
    inline string servCert() const { DARABONBA_PTR_GET_DEFAULT(servCert_, "") };
    inline RegistDRMCertInfoRequest& setServCert(string servCert) { DARABONBA_PTR_SET_VALUE(servCert_, servCert) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ask_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passPhrase_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> privateKey_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> servCert_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
