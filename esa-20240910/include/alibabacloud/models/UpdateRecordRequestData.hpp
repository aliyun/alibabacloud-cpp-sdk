// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECORDREQUESTDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECORDREQUESTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRecordRequestData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecordRequestData& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(Flag, flag_);
      DARABONBA_PTR_TO_JSON(KeyTag, keyTag_);
      DARABONBA_PTR_TO_JSON(MatchingType, matchingType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Selector, selector_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecordRequestData& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(Flag, flag_);
      DARABONBA_PTR_FROM_JSON(KeyTag, keyTag_);
      DARABONBA_PTR_FROM_JSON(MatchingType, matchingType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Selector, selector_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateRecordRequestData() = default ;
    UpdateRecordRequestData(const UpdateRecordRequestData &) = default ;
    UpdateRecordRequestData(UpdateRecordRequestData &&) = default ;
    UpdateRecordRequestData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecordRequestData() = default ;
    UpdateRecordRequestData& operator=(const UpdateRecordRequestData &) = default ;
    UpdateRecordRequestData& operator=(UpdateRecordRequestData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && return this->certificate_ == nullptr && return this->fingerprint_ == nullptr && return this->flag_ == nullptr && return this->keyTag_ == nullptr && return this->matchingType_ == nullptr
        && return this->port_ == nullptr && return this->priority_ == nullptr && return this->selector_ == nullptr && return this->tag_ == nullptr && return this->type_ == nullptr
        && return this->usage_ == nullptr && return this->value_ == nullptr && return this->weight_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline int32_t algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
    inline UpdateRecordRequestData& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline UpdateRecordRequestData& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline UpdateRecordRequestData& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline int32_t flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
    inline UpdateRecordRequestData& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // keyTag Field Functions 
    bool hasKeyTag() const { return this->keyTag_ != nullptr;};
    void deleteKeyTag() { this->keyTag_ = nullptr;};
    inline int32_t keyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
    inline UpdateRecordRequestData& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


    // matchingType Field Functions 
    bool hasMatchingType() const { return this->matchingType_ != nullptr;};
    void deleteMatchingType() { this->matchingType_ = nullptr;};
    inline int32_t matchingType() const { DARABONBA_PTR_GET_DEFAULT(matchingType_, 0) };
    inline UpdateRecordRequestData& setMatchingType(int32_t matchingType) { DARABONBA_PTR_SET_VALUE(matchingType_, matchingType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateRecordRequestData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateRecordRequestData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline int32_t selector() const { DARABONBA_PTR_GET_DEFAULT(selector_, 0) };
    inline UpdateRecordRequestData& setSelector(int32_t selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline UpdateRecordRequestData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline UpdateRecordRequestData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int32_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
    inline UpdateRecordRequestData& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateRecordRequestData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateRecordRequestData& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The encryption algorithm used for the record, specified within the range from 0 to 255. This parameter is required when you add CERT or SSHFP records.
    std::shared_ptr<int32_t> algorithm_ = nullptr;
    // The public key of the certificate. This parameter is required when you add CERT, SMIMEA, or TLSA records.
    std::shared_ptr<string> certificate_ = nullptr;
    // The public key fingerprint of the record. This parameter is required when you add a SSHFP record.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The flag bit of the record. The Flag for a CAA record indicates its priority and how it is processed, specified within the range of 0 to 255. This parameter is required when you add a CAA record.
    std::shared_ptr<int32_t> flag_ = nullptr;
    // The public key identification for the record, specified within the range of 0 to 65,535. This parameter is required when you add a CAA record.
    std::shared_ptr<int32_t> keyTag_ = nullptr;
    // The algorithm policy used to match or validate the certificate, specified within the range 0 to 255. This parameter is required when you add SMIMEA or TLSA records.
    std::shared_ptr<int32_t> matchingType_ = nullptr;
    // The port of the record, specified within the range of 0 to 65,535. This parameter is required when you add an SRV record.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The priority of the record, specified within the range of 0 to 65,535. A smaller value indicates a higher priority. This parameter is required when you add MX, SRV, and URI records.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The type of certificate or public key, specified within the range of 0 to 255. This parameter is required when you add SMIMEA or TLSA records.
    std::shared_ptr<int32_t> selector_ = nullptr;
    // The label of the record. The Tag of a CAA record indicate its specific type and usage. This parameter is required when you add a CAA record.
    std::shared_ptr<string> tag_ = nullptr;
    // The certificate type of the record (in CERT records), or the public key type (in SSHFP records). This parameter is required when you add CERT or SSHFP records.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The usage identifier of the record, specified within the range of 0 to 255. This parameter is required when you add SMIMEA or TLSA records.
    std::shared_ptr<int32_t> usage_ = nullptr;
    // The record value or part of the record content. This parameter is required when you add A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI records. It has different meanings based on different types of records:
    // 
    // *   **A/AAAA**: the IP address(es). Separate multiple IPs with commas (,). You must have at least one IPv4 address.
    // *   **CNAME**: the target domain name.
    // *   **NS**: the name servers for the domain name.
    // *   **MX**: a valid domain name of the target mail server.
    // *   **TXT**: a valid text string.
    // *   **CAA**: a valid domain name of the certificate authority.
    // *   **SRV**: a valid domain name of the target host.
    // *   **URI**: a valid URI string.
    std::shared_ptr<string> value_ = nullptr;
    // The weight of the record, specified within the range of 0 to 65,535. This parameter is required when you add SRV or URI records.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
