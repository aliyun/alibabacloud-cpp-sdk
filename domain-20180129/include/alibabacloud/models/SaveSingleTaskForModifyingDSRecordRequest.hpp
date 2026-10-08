// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORMODIFYINGDSRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORMODIFYINGDSRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForModifyingDSRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForModifyingDSRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(DigestType, digestType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(KeyTag, keyTag_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForModifyingDSRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(DigestType, digestType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(KeyTag, keyTag_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveSingleTaskForModifyingDSRecordRequest() = default ;
    SaveSingleTaskForModifyingDSRecordRequest(const SaveSingleTaskForModifyingDSRecordRequest &) = default ;
    SaveSingleTaskForModifyingDSRecordRequest(SaveSingleTaskForModifyingDSRecordRequest &&) = default ;
    SaveSingleTaskForModifyingDSRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForModifyingDSRecordRequest() = default ;
    SaveSingleTaskForModifyingDSRecordRequest& operator=(const SaveSingleTaskForModifyingDSRecordRequest &) = default ;
    SaveSingleTaskForModifyingDSRecordRequest& operator=(SaveSingleTaskForModifyingDSRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->digest_ == nullptr && this->digestType_ == nullptr && this->domainName_ == nullptr && this->keyTag_ == nullptr && this->lang_ == nullptr
        && this->userClientIp_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline int32_t getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
    inline SaveSingleTaskForModifyingDSRecordRequest& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline SaveSingleTaskForModifyingDSRecordRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // digestType Field Functions 
    bool hasDigestType() const { return this->digestType_ != nullptr;};
    void deleteDigestType() { this->digestType_ = nullptr;};
    inline int32_t getDigestType() const { DARABONBA_PTR_GET_DEFAULT(digestType_, 0) };
    inline SaveSingleTaskForModifyingDSRecordRequest& setDigestType(int32_t digestType) { DARABONBA_PTR_SET_VALUE(digestType_, digestType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForModifyingDSRecordRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // keyTag Field Functions 
    bool hasKeyTag() const { return this->keyTag_ != nullptr;};
    void deleteKeyTag() { this->keyTag_ = nullptr;};
    inline int32_t getKeyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
    inline SaveSingleTaskForModifyingDSRecordRequest& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveSingleTaskForModifyingDSRecordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveSingleTaskForModifyingDSRecordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // Encryption algorithm number. For more information, see [Domain Name System Security (DNSSEC) Algorithm Numbers](https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xhtml). Valid values:  
    // - **1**: RSA/MD5  
    // - **2**: Diffie-Hellman  
    // - **3**: DSA/SHA-1  
    // - **5**: RSA/SHA-1  
    // - **6**: DSA-NSEC3-SHA1  
    // - **7**: RSASHA1-NSEC3-SHA1  
    // - **8**: RSA/SHA-256  
    // - **10**: RSA/SHA-512  
    // - **12**: GOST R 34.10-2001  
    // - **13**: ECDSA Curve P-256 with SHA-256  
    // - **14**: ECDSA Curve P-384 with SHA-384  
    // - **15**: Ed2551916 Ed448  
    // - **252**: Reserved for Indirect Keys  
    // - **253**: private algorithm  
    // - **254**: private algorithm OID
    // 
    // This parameter is required.
    shared_ptr<int32_t> algorithm_ {};
    // Summary value.
    // 
    // This parameter is required.
    shared_ptr<string> digest_ {};
    // Digest algorithm type. For more information, see [Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms](https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml). Valid values:  
    // - **1**: SHA-1  
    // - **2**: SHA-256  
    // - **3**: GOST R 34.11-94  
    // - **4**: SHA-384
    // 
    // This parameter is required.
    shared_ptr<int32_t> digestType_ {};
    // Domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Key tag used to identify DNSSEC records. It is an integer less than 65536.
    // 
    // This parameter is required.
    shared_ptr<int32_t> keyTag_ {};
    // Language of error messages returned by the API. Valid values:  
    // - **zh**: Chinese  
    // - **en**: English  
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // User IP address.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
