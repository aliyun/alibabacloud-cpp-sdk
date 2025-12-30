// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDNSSECINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDNSSECINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainDnssecInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDnssecInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(DigestType, digestType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DsRecord, dsRecord_);
      DARABONBA_PTR_TO_JSON(Flags, flags_);
      DARABONBA_PTR_TO_JSON(KeyTag, keyTag_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDnssecInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(DigestType, digestType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DsRecord, dsRecord_);
      DARABONBA_PTR_FROM_JSON(Flags, flags_);
      DARABONBA_PTR_FROM_JSON(KeyTag, keyTag_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDomainDnssecInfoResponseBody() = default ;
    DescribeDomainDnssecInfoResponseBody(const DescribeDomainDnssecInfoResponseBody &) = default ;
    DescribeDomainDnssecInfoResponseBody(DescribeDomainDnssecInfoResponseBody &&) = default ;
    DescribeDomainDnssecInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDnssecInfoResponseBody() = default ;
    DescribeDomainDnssecInfoResponseBody& operator=(const DescribeDomainDnssecInfoResponseBody &) = default ;
    DescribeDomainDnssecInfoResponseBody& operator=(DescribeDomainDnssecInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->digest_ == nullptr && this->digestType_ == nullptr && this->domainName_ == nullptr && this->dsRecord_ == nullptr && this->flags_ == nullptr
        && this->keyTag_ == nullptr && this->publicKey_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // digestType Field Functions 
    bool hasDigestType() const { return this->digestType_ != nullptr;};
    void deleteDigestType() { this->digestType_ = nullptr;};
    inline string getDigestType() const { DARABONBA_PTR_GET_DEFAULT(digestType_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setDigestType(string digestType) { DARABONBA_PTR_SET_VALUE(digestType_, digestType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // dsRecord Field Functions 
    bool hasDsRecord() const { return this->dsRecord_ != nullptr;};
    void deleteDsRecord() { this->dsRecord_ = nullptr;};
    inline string getDsRecord() const { DARABONBA_PTR_GET_DEFAULT(dsRecord_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setDsRecord(string dsRecord) { DARABONBA_PTR_SET_VALUE(dsRecord_, dsRecord) };


    // flags Field Functions 
    bool hasFlags() const { return this->flags_ != nullptr;};
    void deleteFlags() { this->flags_ = nullptr;};
    inline string getFlags() const { DARABONBA_PTR_GET_DEFAULT(flags_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setFlags(string flags) { DARABONBA_PTR_SET_VALUE(flags_, flags) };


    // keyTag Field Functions 
    bool hasKeyTag() const { return this->keyTag_ != nullptr;};
    void deleteKeyTag() { this->keyTag_ = nullptr;};
    inline string getKeyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setKeyTag(string keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDomainDnssecInfoResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The algorithm type. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> algorithm_ {};
    // The digest. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> digest_ {};
    // The digest type. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> digestType_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The delegation signer (DS) record. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> dsRecord_ {};
    // The flag. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> flags_ {};
    // The key tag. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> keyTag_ {};
    // The public key. This parameter is returned if DNSSEC is enabled.
    shared_ptr<string> publicKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The state of the DNSSEC. Valid values:
    // 
    // *   ON
    // *   OFF
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
