// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordResultList, recordResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordResultList, recordResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchCreateRecordsResponseBody() = default ;
    BatchCreateRecordsResponseBody(const BatchCreateRecordsResponseBody &) = default ;
    BatchCreateRecordsResponseBody(BatchCreateRecordsResponseBody &&) = default ;
    BatchCreateRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsResponseBody() = default ;
    BatchCreateRecordsResponseBody& operator=(const BatchCreateRecordsResponseBody &) = default ;
    BatchCreateRecordsResponseBody& operator=(BatchCreateRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordResultList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordResultList& obj) { 
        DARABONBA_PTR_TO_JSON(Failed, failed_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, RecordResultList& obj) { 
        DARABONBA_PTR_FROM_JSON(Failed, failed_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      RecordResultList() = default ;
      RecordResultList(const RecordResultList &) = default ;
      RecordResultList(RecordResultList &&) = default ;
      RecordResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordResultList() = default ;
      RecordResultList& operator=(const RecordResultList &) = default ;
      RecordResultList& operator=(RecordResultList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Success : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Success& obj) { 
          DARABONBA_PTR_TO_JSON(BizName, bizName_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Proxied, proxied_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(RecordName, recordName_);
          DARABONBA_PTR_TO_JSON(RecordType, recordType_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        };
        friend void from_json(const Darabonba::Json& j, Success& obj) { 
          DARABONBA_PTR_FROM_JSON(BizName, bizName_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
          DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        };
        Success() = default ;
        Success(const Success &) = default ;
        Success(Success &&) = default ;
        Success(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Success() = default ;
        Success& operator=(const Success &) = default ;
        Success& operator=(Success &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          Data() = default ;
          Data(const Data &) = default ;
          Data(Data &&) = default ;
          Data(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Data() = default ;
          Data& operator=(const Data &) = default ;
          Data& operator=(Data &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certificate_ == nullptr && this->fingerprint_ == nullptr && this->flag_ == nullptr && this->keyTag_ == nullptr && this->matchingType_ == nullptr
        && this->port_ == nullptr && this->priority_ == nullptr && this->selector_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr
        && this->usage_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr; };
          // algorithm Field Functions 
          bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
          void deleteAlgorithm() { this->algorithm_ = nullptr;};
          inline int32_t getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
          inline Data& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


          // certificate Field Functions 
          bool hasCertificate() const { return this->certificate_ != nullptr;};
          void deleteCertificate() { this->certificate_ = nullptr;};
          inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
          inline Data& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


          // fingerprint Field Functions 
          bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
          void deleteFingerprint() { this->fingerprint_ = nullptr;};
          inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
          inline Data& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


          // flag Field Functions 
          bool hasFlag() const { return this->flag_ != nullptr;};
          void deleteFlag() { this->flag_ = nullptr;};
          inline int32_t getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
          inline Data& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


          // keyTag Field Functions 
          bool hasKeyTag() const { return this->keyTag_ != nullptr;};
          void deleteKeyTag() { this->keyTag_ = nullptr;};
          inline int32_t getKeyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
          inline Data& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


          // matchingType Field Functions 
          bool hasMatchingType() const { return this->matchingType_ != nullptr;};
          void deleteMatchingType() { this->matchingType_ = nullptr;};
          inline int32_t getMatchingType() const { DARABONBA_PTR_GET_DEFAULT(matchingType_, 0) };
          inline Data& setMatchingType(int32_t matchingType) { DARABONBA_PTR_SET_VALUE(matchingType_, matchingType) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // selector Field Functions 
          bool hasSelector() const { return this->selector_ != nullptr;};
          void deleteSelector() { this->selector_ = nullptr;};
          inline int32_t getSelector() const { DARABONBA_PTR_GET_DEFAULT(selector_, 0) };
          inline Data& setSelector(int32_t selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // usage Field Functions 
          bool hasUsage() const { return this->usage_ != nullptr;};
          void deleteUsage() { this->usage_ = nullptr;};
          inline int32_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
          inline Data& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          // The encryption algorithm used for the record. Valid values: 0 to 255. Applicable to CERT and SSHFP records.
          shared_ptr<int32_t> algorithm_ {};
          // The public key of the certificate. Applicable to CERT, SMIMEA, and TLSA records.
          shared_ptr<string> certificate_ {};
          // The public key fingerprint of the record. Applicable to SSHFP records.
          shared_ptr<string> fingerprint_ {};
          // The flag bit of the record. Indicates its priority and handling method, used in CAA records.
          shared_ptr<int32_t> flag_ {};
          // The public key identification for the record. Valid values: 0 to 65535. Applicable to CERT records.
          shared_ptr<int32_t> keyTag_ {};
          // The algorithm policy used to match or validate the certificate. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
          shared_ptr<int32_t> matchingType_ {};
          // The port of the record. Valid values: 0 to 65535. Exclusive to SRV records.
          shared_ptr<int32_t> port_ {};
          // The priority of the record. Valid values: 0 to 65535. A smaller value indicates a higher priority. Applicable to MX, SRV, and URI records.
          shared_ptr<int32_t> priority_ {};
          // The type of certificate or public key. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
          shared_ptr<int32_t> selector_ {};
          // The label of a CAA record, which indicates its specific type and purpose, such as issue, issuewild, and iodef.
          shared_ptr<string> tag_ {};
          // The certificate type of the record (in CERT records), or the public key type (in SSHFP records).
          shared_ptr<int32_t> type_ {};
          // The usage identifier of the record. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
          shared_ptr<int32_t> usage_ {};
          // The record value or part of the record content. This value is returned when the record is A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, or URI. It has different meanings based on types of records:
          // 
          // *   **A/AAAA**: the IP addresses. Multiple IPs are separated by commas (,). There is at least one IPv4 address.
          // *   **CNAME**: the mapped domain name.
          // *   **NS**: the nameservers for the domain name.
          // *   **MX**: a valid domain name of the target mail server.
          // *   **TXT**: a valid text string.
          // *   **CAA**: a valid domain name of the certificate authority.
          // *   **SRV**: a valid domain name of the target host.
          // *   **URI**: a valid URI string.
          shared_ptr<string> value_ {};
          // The weight of the record. Valid values: 0 to 65535. Applicable to SRV and URI records.
          shared_ptr<int32_t> weight_ {};
        };

        virtual bool empty() const override { return this->bizName_ == nullptr
        && this->data_ == nullptr && this->description_ == nullptr && this->proxied_ == nullptr && this->recordId_ == nullptr && this->recordName_ == nullptr
        && this->recordType_ == nullptr && this->sourceType_ == nullptr && this->ttl_ == nullptr; };
        // bizName Field Functions 
        bool hasBizName() const { return this->bizName_ != nullptr;};
        void deleteBizName() { this->bizName_ = nullptr;};
        inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
        inline Success& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const Success::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Success::Data) };
        inline Success::Data getData() { DARABONBA_PTR_GET(data_, Success::Data) };
        inline Success& setData(const Success::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Success& setData(Success::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Success& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // proxied Field Functions 
        bool hasProxied() const { return this->proxied_ != nullptr;};
        void deleteProxied() { this->proxied_ = nullptr;};
        inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
        inline Success& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
        inline Success& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // recordName Field Functions 
        bool hasRecordName() const { return this->recordName_ != nullptr;};
        void deleteRecordName() { this->recordName_ = nullptr;};
        inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
        inline Success& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


        // recordType Field Functions 
        bool hasRecordType() const { return this->recordType_ != nullptr;};
        void deleteRecordType() { this->recordType_ = nullptr;};
        inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
        inline Success& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Success& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
        inline Success& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      protected:
        // The business scenario of the record for acceleration. Valid values:
        // 
        // *   **image_video**
        // *   **api**
        // *   **web**
        shared_ptr<string> bizName_ {};
        // The DNS record information.
        shared_ptr<Success::Data> data_ {};
        // The result description.
        shared_ptr<string> description_ {};
        // Indicates whether the record is proxied. Only CNAME and A/AAAA records can be proxied. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> proxied_ {};
        // The record ID.
        shared_ptr<int64_t> recordId_ {};
        // The record name.
        shared_ptr<string> recordName_ {};
        // The DNS type of the record, such as **A/AAAA, CNAME, and TXT**.
        shared_ptr<string> recordType_ {};
        // The origin type of the CNAME record. This field is left empty for other types of records. The type of the origin server. Valid values:
        // 
        // *   **OSS**: OSS bucket.
        // *   **S3**: S3 bucket.
        // *   **LB**: load balancer.
        // *   **OP**: origin pool.
        // *   **Domain**: domain name.
        shared_ptr<string> sourceType_ {};
        // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
        shared_ptr<int32_t> ttl_ {};
      };

      class Failed : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Failed& obj) { 
          DARABONBA_PTR_TO_JSON(BizName, bizName_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Proxied, proxied_);
          DARABONBA_PTR_TO_JSON(RecordId, recordId_);
          DARABONBA_PTR_TO_JSON(RecordName, recordName_);
          DARABONBA_PTR_TO_JSON(RecordType, recordType_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        };
        friend void from_json(const Darabonba::Json& j, Failed& obj) { 
          DARABONBA_PTR_FROM_JSON(BizName, bizName_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
          DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
          DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
          DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        };
        Failed() = default ;
        Failed(const Failed &) = default ;
        Failed(Failed &&) = default ;
        Failed(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Failed() = default ;
        Failed& operator=(const Failed &) = default ;
        Failed& operator=(Failed &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          Data() = default ;
          Data(const Data &) = default ;
          Data(Data &&) = default ;
          Data(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Data() = default ;
          Data& operator=(const Data &) = default ;
          Data& operator=(Data &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certificate_ == nullptr && this->fingerprint_ == nullptr && this->flag_ == nullptr && this->keyTag_ == nullptr && this->matchingType_ == nullptr
        && this->port_ == nullptr && this->priority_ == nullptr && this->selector_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr
        && this->usage_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr; };
          // algorithm Field Functions 
          bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
          void deleteAlgorithm() { this->algorithm_ = nullptr;};
          inline int32_t getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, 0) };
          inline Data& setAlgorithm(int32_t algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


          // certificate Field Functions 
          bool hasCertificate() const { return this->certificate_ != nullptr;};
          void deleteCertificate() { this->certificate_ = nullptr;};
          inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
          inline Data& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


          // fingerprint Field Functions 
          bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
          void deleteFingerprint() { this->fingerprint_ = nullptr;};
          inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
          inline Data& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


          // flag Field Functions 
          bool hasFlag() const { return this->flag_ != nullptr;};
          void deleteFlag() { this->flag_ = nullptr;};
          inline int32_t getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, 0) };
          inline Data& setFlag(int32_t flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


          // keyTag Field Functions 
          bool hasKeyTag() const { return this->keyTag_ != nullptr;};
          void deleteKeyTag() { this->keyTag_ = nullptr;};
          inline int32_t getKeyTag() const { DARABONBA_PTR_GET_DEFAULT(keyTag_, 0) };
          inline Data& setKeyTag(int32_t keyTag) { DARABONBA_PTR_SET_VALUE(keyTag_, keyTag) };


          // matchingType Field Functions 
          bool hasMatchingType() const { return this->matchingType_ != nullptr;};
          void deleteMatchingType() { this->matchingType_ = nullptr;};
          inline int32_t getMatchingType() const { DARABONBA_PTR_GET_DEFAULT(matchingType_, 0) };
          inline Data& setMatchingType(int32_t matchingType) { DARABONBA_PTR_SET_VALUE(matchingType_, matchingType) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
          inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // selector Field Functions 
          bool hasSelector() const { return this->selector_ != nullptr;};
          void deleteSelector() { this->selector_ = nullptr;};
          inline int32_t getSelector() const { DARABONBA_PTR_GET_DEFAULT(selector_, 0) };
          inline Data& setSelector(int32_t selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // usage Field Functions 
          bool hasUsage() const { return this->usage_ != nullptr;};
          void deleteUsage() { this->usage_ = nullptr;};
          inline int32_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0) };
          inline Data& setUsage(int32_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline Data& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          // The encryption algorithm used for the record. Valid values: 0 to 255. Applicable to CERT and SSHFP records.
          shared_ptr<int32_t> algorithm_ {};
          // The public key of the certificate. Applicable to CERT, SMIMEA, and TLSA records.
          shared_ptr<string> certificate_ {};
          // The public key fingerprint of the record. Applicable to SSHFP records.
          shared_ptr<string> fingerprint_ {};
          // The flag bit of the record. Indicates its priority and handling method, used in CAA records.
          shared_ptr<int32_t> flag_ {};
          // The public key identification for the record. Valid values: 0 to 65535. Applicable to CERT records.
          shared_ptr<int32_t> keyTag_ {};
          // The algorithm policy used to match or validate the certificate. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
          shared_ptr<int32_t> matchingType_ {};
          // The port number of the record, associated with the SRV record. Exclusive to SRV records.
          shared_ptr<int32_t> port_ {};
          // The priority of the record. Valid values: 0 to 65535. A smaller value indicates a higher priority. Applicable to MX, SRV, and URI records.
          shared_ptr<int32_t> priority_ {};
          // The type of certificate or public key. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
          shared_ptr<int32_t> selector_ {};
          // Indicates its priority and handling method, used in CAA records.
          shared_ptr<string> tag_ {};
          // The certificate type of the record (in CERT records), or the public key type (in SSHFP records).
          shared_ptr<int32_t> type_ {};
          // The usage identifier of the record. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
          shared_ptr<int32_t> usage_ {};
          // The record value or part of the record content. This value is returned when the record is A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, or URI. It has different meanings based on types of records:
          // 
          // *   **A/AAAA**: the IP addresses. IP addresses are separated by commas (,). There is at least one IPv4 address.
          // *   **CNAME**: the mapped domain name.
          // *   **NS**: the nameservers for the domain name.
          // *   **MX**: a valid domain name of the target mail server.
          // *   **TXT**: a valid text string.
          // *   **CAA**: a valid domain name of the certificate authority.
          // *   **SRV**: a valid domain name of the target host.
          // *   **URI**: a valid URI string.
          shared_ptr<string> value_ {};
          // The weight of the record. Applicable to SRV and URI records.
          shared_ptr<int32_t> weight_ {};
        };

        virtual bool empty() const override { return this->bizName_ == nullptr
        && this->data_ == nullptr && this->description_ == nullptr && this->proxied_ == nullptr && this->recordId_ == nullptr && this->recordName_ == nullptr
        && this->recordType_ == nullptr && this->sourceType_ == nullptr && this->ttl_ == nullptr; };
        // bizName Field Functions 
        bool hasBizName() const { return this->bizName_ != nullptr;};
        void deleteBizName() { this->bizName_ = nullptr;};
        inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
        inline Failed& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const Failed::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Failed::Data) };
        inline Failed::Data getData() { DARABONBA_PTR_GET(data_, Failed::Data) };
        inline Failed& setData(const Failed::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Failed& setData(Failed::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Failed& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // proxied Field Functions 
        bool hasProxied() const { return this->proxied_ != nullptr;};
        void deleteProxied() { this->proxied_ = nullptr;};
        inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
        inline Failed& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


        // recordId Field Functions 
        bool hasRecordId() const { return this->recordId_ != nullptr;};
        void deleteRecordId() { this->recordId_ = nullptr;};
        inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
        inline Failed& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


        // recordName Field Functions 
        bool hasRecordName() const { return this->recordName_ != nullptr;};
        void deleteRecordName() { this->recordName_ = nullptr;};
        inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
        inline Failed& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


        // recordType Field Functions 
        bool hasRecordType() const { return this->recordType_ != nullptr;};
        void deleteRecordType() { this->recordType_ = nullptr;};
        inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
        inline Failed& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Failed& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
        inline Failed& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      protected:
        // The business scenario of the record for acceleration. Valid values:
        // 
        // *   **image_video**
        // *   **api**
        // *   **web**
        shared_ptr<string> bizName_ {};
        // The DNS information about the record, which contains various types of record values and their related attributes.
        shared_ptr<Failed::Data> data_ {};
        // The result description.
        shared_ptr<string> description_ {};
        // Indicates whether the record is proxied. Only CNAME and A/AAAA records can be proxied. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> proxied_ {};
        // The record ID.
        shared_ptr<int64_t> recordId_ {};
        // The record name.
        shared_ptr<string> recordName_ {};
        // The DNS type of the record, such as **A/AAAA, CNAME, and TXT**.
        shared_ptr<string> recordType_ {};
        // The origin type of the CNAME record. This field is left empty for other types of records. The type of the origin server. Valid values:
        // 
        // *   **OSS**: OSS bucket.
        // *   **S3**: S3 bucket.
        // *   **LB**: load balancer.
        // *   **OP**: origin pool.
        // *   **Domain**: domain name.
        shared_ptr<string> sourceType_ {};
        // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
        shared_ptr<int32_t> ttl_ {};
      };

      virtual bool empty() const override { return this->failed_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
      // failed Field Functions 
      bool hasFailed() const { return this->failed_ != nullptr;};
      void deleteFailed() { this->failed_ = nullptr;};
      inline const vector<RecordResultList::Failed> & getFailed() const { DARABONBA_PTR_GET_CONST(failed_, vector<RecordResultList::Failed>) };
      inline vector<RecordResultList::Failed> getFailed() { DARABONBA_PTR_GET(failed_, vector<RecordResultList::Failed>) };
      inline RecordResultList& setFailed(const vector<RecordResultList::Failed> & failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };
      inline RecordResultList& setFailed(vector<RecordResultList::Failed> && failed) { DARABONBA_PTR_SET_RVALUE(failed_, failed) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline const vector<RecordResultList::Success> & getSuccess() const { DARABONBA_PTR_GET_CONST(success_, vector<RecordResultList::Success>) };
      inline vector<RecordResultList::Success> getSuccess() { DARABONBA_PTR_GET(success_, vector<RecordResultList::Success>) };
      inline RecordResultList& setSuccess(const vector<RecordResultList::Success> & success) { DARABONBA_PTR_SET_VALUE(success_, success) };
      inline RecordResultList& setSuccess(vector<RecordResultList::Success> && success) { DARABONBA_PTR_SET_RVALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline RecordResultList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The records that failed to be created.
      shared_ptr<vector<RecordResultList::Failed>> failed_ {};
      // The records that have been created.
      shared_ptr<vector<RecordResultList::Success>> success_ {};
      // The total number of returned records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->recordResultList_ == nullptr
        && this->requestId_ == nullptr; };
    // recordResultList Field Functions 
    bool hasRecordResultList() const { return this->recordResultList_ != nullptr;};
    void deleteRecordResultList() { this->recordResultList_ = nullptr;};
    inline const BatchCreateRecordsResponseBody::RecordResultList & getRecordResultList() const { DARABONBA_PTR_GET_CONST(recordResultList_, BatchCreateRecordsResponseBody::RecordResultList) };
    inline BatchCreateRecordsResponseBody::RecordResultList getRecordResultList() { DARABONBA_PTR_GET(recordResultList_, BatchCreateRecordsResponseBody::RecordResultList) };
    inline BatchCreateRecordsResponseBody& setRecordResultList(const BatchCreateRecordsResponseBody::RecordResultList & recordResultList) { DARABONBA_PTR_SET_VALUE(recordResultList_, recordResultList) };
    inline BatchCreateRecordsResponseBody& setRecordResultList(BatchCreateRecordsResponseBody::RecordResultList && recordResultList) { DARABONBA_PTR_SET_RVALUE(recordResultList_, recordResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The records that have been created and failed to be created.
    shared_ptr<BatchCreateRecordsResponseBody::RecordResultList> recordResultList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
