// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUESTRECORDLISTDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUESTRECORDLISTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsRequestRecordListData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsRequestRecordListData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsRequestRecordListData& obj) { 
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
    BatchCreateRecordsRequestRecordListData() = default ;
    BatchCreateRecordsRequestRecordListData(const BatchCreateRecordsRequestRecordListData &) = default ;
    BatchCreateRecordsRequestRecordListData(BatchCreateRecordsRequestRecordListData &&) = default ;
    BatchCreateRecordsRequestRecordListData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsRequestRecordListData() = default ;
    BatchCreateRecordsRequestRecordListData& operator=(const BatchCreateRecordsRequestRecordListData &) = default ;
    BatchCreateRecordsRequestRecordListData& operator=(BatchCreateRecordsRequestRecordListData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->certificate_ != nullptr && this->fingerprint_ != nullptr && this->flag_ != nullptr && this->keyTag_ != nullptr && this->matchingType_ != nullptr
        && this->port_ != nullptr && this->priority_ != nullptr && this->selector_ != nullptr && this->tag_ != nullptr && this->type_ != nullptr
        && this->usage_ != nullptr && this->value_ != nullptr && this->weight_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline int32_t algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline BatchCreateRecordsRequestRecordListData& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string fingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline BatchCreateRecordsRequestRecordListData& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // flag Field Functions 
    bool hasFlag() const { return this->flag_ != nullptr;};
    void deleteFlag() { this->flag_ = nullptr;};
    inline int32_t flag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


    // keyTag Field Functions 
    bool hasKeyTag() const { return this->keyTag_ != nullptr;};
    void deleteKeyTag() { this->keyTag_ = nullptr;};
    inline int32_t keyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


    // matchingType Field Functions 
    bool hasMatchingType() const { return this->matchingType_ != nullptr;};
    void deleteMatchingType() { this->matchingType_ = nullptr;};
    inline int32_t matchingType() const { DARABONBA_PTR_GET_DEFAULT(matchingType_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setMatchingType(int32_t matchingType) { DARABONBA_PTR_SET_VALUE(matchingType_, matchingType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline int32_t selector() const { DARABONBA_PTR_GET_DEFAULT(selector_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setSelector(int32_t selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline BatchCreateRecordsRequestRecordListData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int32_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline BatchCreateRecordsRequestRecordListData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline BatchCreateRecordsRequestRecordListData& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The encryption algorithm used for the record. Valid values: 0 to 255. Applicable to CERT and SSHFP records.
    std::shared_ptr<int32_t> algorithm_ = nullptr;
    // The public key of the certificate. Applicable to CERT, SMIMEA, and TLSA records.
    std::shared_ptr<string> certificate_ = nullptr;
    // The public key fingerprint of the record. Applicable to SSHFP records.
    std::shared_ptr<string> fingerprint_ = nullptr;
    // The Flag for a CAA record indicates its priority and how it is processed. Valid values: 0 to 255.
    std::shared_ptr<int32_t> flag_ = nullptr;
    // The public key identification for the record. Valid values: 0 to 65535. Applicable to CERT records.
    std::shared_ptr<int32_t> keyTag_ = nullptr;
    // The algorithm policy used to match or validate the certificate. Valid values: 0 to 255. Applicable to SMIMEA, and TLSA records.
    std::shared_ptr<int32_t> matchingType_ = nullptr;
    // The port of the record. Valid values: 0 to 65535. Exclusive to SRV records.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The priority of the record. Valid values: 0 to 65535. A smaller value indicates a higher priority. This parameter is required when you add MX, SRV, and URI records.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The type of certificate or public key. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
    std::shared_ptr<int32_t> selector_ = nullptr;
    // The tag of a CAA record, which indicates its specific type and purpose, such as issue, issuewild, and iodef.
    std::shared_ptr<string> tag_ = nullptr;
    // The certificate type of the record (in CERT records), or the public key type (in SSHFP records).
    std::shared_ptr<int32_t> type_ = nullptr;
    // The usage identifier of the record. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
    std::shared_ptr<int32_t> usage_ = nullptr;
    // The record value or part of the record content. A/AAAA: the IP address being pointed to. CNAME: the target domain name being pointed to. MX: valid target mail server domain name. TXT: valid text string. CAA: valid certificate authority domain name. SRV: valid target host domain name. URI: valid URI string.
    std::shared_ptr<string> value_ = nullptr;
    // The weight of the record. Valid values: 0 to 65,535. Applicable to SRV and URI records.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
