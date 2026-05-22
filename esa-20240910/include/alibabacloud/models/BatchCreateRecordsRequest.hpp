// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUEST_HPP_
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
  class BatchCreateRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordList, recordList_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordList, recordList_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    BatchCreateRecordsRequest() = default ;
    BatchCreateRecordsRequest(const BatchCreateRecordsRequest &) = default ;
    BatchCreateRecordsRequest(BatchCreateRecordsRequest &&) = default ;
    BatchCreateRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsRequest() = default ;
    BatchCreateRecordsRequest& operator=(const BatchCreateRecordsRequest &) = default ;
    BatchCreateRecordsRequest& operator=(BatchCreateRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
        DARABONBA_PTR_TO_JSON(BizName, bizName_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Proxied, proxied_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RecordList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
        DARABONBA_PTR_FROM_JSON(BizName, bizName_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RecordList() = default ;
      RecordList(const RecordList &) = default ;
      RecordList(RecordList &&) = default ;
      RecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordList() = default ;
      RecordList& operator=(const RecordList &) = default ;
      RecordList& operator=(RecordList &&) = default ;
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
        // The Flag for a CAA record indicates its priority and how it is processed. Valid values: 0 to 255.
        shared_ptr<int32_t> flag_ {};
        // The public key identification for the record. Valid values: 0 to 65535. Applicable to CERT records.
        shared_ptr<int32_t> keyTag_ {};
        // The algorithm policy used to match or validate the certificate. Valid values: 0 to 255. Applicable to SMIMEA, and TLSA records.
        shared_ptr<int32_t> matchingType_ {};
        // The port of the record. Valid values: 0 to 65535. Exclusive to SRV records.
        shared_ptr<int32_t> port_ {};
        // The priority of the record. Valid values: 0 to 65535. A smaller value indicates a higher priority. This parameter is required when you add MX, SRV, and URI records.
        shared_ptr<int32_t> priority_ {};
        // The type of certificate or public key. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
        shared_ptr<int32_t> selector_ {};
        // The tag of a CAA record, which indicates its specific type and purpose, such as issue, issuewild, and iodef.
        shared_ptr<string> tag_ {};
        // The certificate type of the record (in CERT records), or the public key type (in SSHFP records).
        shared_ptr<int32_t> type_ {};
        // The usage identifier of the record. Valid values: 0 to 255. Applicable to SMIMEA and TLSA records.
        shared_ptr<int32_t> usage_ {};
        // The record value or part of the record content. A/AAAA: the IP address being pointed to. CNAME: the target domain name being pointed to. MX: valid target mail server domain name. TXT: valid text string. CAA: valid certificate authority domain name. SRV: valid target host domain name. URI: valid URI string.
        shared_ptr<string> value_ {};
        // The weight of the record. Valid values: 0 to 65,535. Applicable to SRV and URI records.
        shared_ptr<int32_t> weight_ {};
      };

      class AuthConf : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthConf& obj) { 
          DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, AuthConf& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        AuthConf() = default ;
        AuthConf(const AuthConf &) = default ;
        AuthConf(AuthConf &&) = default ;
        AuthConf(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthConf() = default ;
        AuthConf& operator=(const AuthConf &) = default ;
        AuthConf& operator=(AuthConf &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->authType_ == nullptr && this->region_ == nullptr && this->secretKey_ == nullptr && this->version_ == nullptr; };
        // accessKey Field Functions 
        bool hasAccessKey() const { return this->accessKey_ != nullptr;};
        void deleteAccessKey() { this->accessKey_ = nullptr;};
        inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
        inline AuthConf& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline AuthConf& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline AuthConf& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // secretKey Field Functions 
        bool hasSecretKey() const { return this->secretKey_ != nullptr;};
        void deleteSecretKey() { this->secretKey_ = nullptr;};
        inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
        inline AuthConf& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline AuthConf& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> accessKey_ {};
        shared_ptr<string> authType_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> secretKey_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->authConf_ == nullptr
        && this->bizName_ == nullptr && this->data_ == nullptr && this->proxied_ == nullptr && this->recordName_ == nullptr && this->sourceType_ == nullptr
        && this->ttl_ == nullptr && this->type_ == nullptr; };
      // authConf Field Functions 
      bool hasAuthConf() const { return this->authConf_ != nullptr;};
      void deleteAuthConf() { this->authConf_ = nullptr;};
      inline const RecordList::AuthConf & getAuthConf() const { DARABONBA_PTR_GET_CONST(authConf_, RecordList::AuthConf) };
      inline RecordList::AuthConf getAuthConf() { DARABONBA_PTR_GET(authConf_, RecordList::AuthConf) };
      inline RecordList& setAuthConf(const RecordList::AuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
      inline RecordList& setAuthConf(RecordList::AuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


      // bizName Field Functions 
      bool hasBizName() const { return this->bizName_ != nullptr;};
      void deleteBizName() { this->bizName_ = nullptr;};
      inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
      inline RecordList& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const RecordList::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RecordList::Data) };
      inline RecordList::Data getData() { DARABONBA_PTR_GET(data_, RecordList::Data) };
      inline RecordList& setData(const RecordList::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline RecordList& setData(RecordList::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // proxied Field Functions 
      bool hasProxied() const { return this->proxied_ != nullptr;};
      void deleteProxied() { this->proxied_ = nullptr;};
      inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
      inline RecordList& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline RecordList& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline RecordList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline RecordList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RecordList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<RecordList::AuthConf> authConf_ {};
      // The business scenario of the record for acceleration. Valid values:
      // 
      // *   **image_video**
      // *   **api**
      // *   **web**
      shared_ptr<string> bizName_ {};
      // The DNS information of the record. Enter fields based on the record type.
      // 
      // This parameter is required.
      shared_ptr<RecordList::Data> data_ {};
      // Specifies whether to proxy the record. Only CNAME and A/AAAA records can be proxied. Valid values:
      // 
      // *   **true**
      // *   **false**
      // 
      // This parameter is required.
      shared_ptr<bool> proxied_ {};
      // The record name.
      // 
      // This parameter is required.
      shared_ptr<string> recordName_ {};
      // The origin type for the CNAME record. This parameter is required when you add a CNAME record. Valid values:
      // 
      // *   **OSS**: OSS bucket.
      // *   **S3**: S3 bucket.
      // *   **LB**: load balancer.
      // *   **OP**: origin pool.
      // *   **Domain**: domain name.
      // 
      // If you do not pass this parameter or if you leave its value empty, Domain is used by default.
      shared_ptr<string> sourceType_ {};
      // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
      // 
      // This parameter is required.
      shared_ptr<int32_t> ttl_ {};
      // The DNS type of the record.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->recordList_ == nullptr
        && this->siteId_ == nullptr; };
    // recordList Field Functions 
    bool hasRecordList() const { return this->recordList_ != nullptr;};
    void deleteRecordList() { this->recordList_ = nullptr;};
    inline const vector<BatchCreateRecordsRequest::RecordList> & getRecordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<BatchCreateRecordsRequest::RecordList>) };
    inline vector<BatchCreateRecordsRequest::RecordList> getRecordList() { DARABONBA_PTR_GET(recordList_, vector<BatchCreateRecordsRequest::RecordList>) };
    inline BatchCreateRecordsRequest& setRecordList(const vector<BatchCreateRecordsRequest::RecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
    inline BatchCreateRecordsRequest& setRecordList(vector<BatchCreateRecordsRequest::RecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchCreateRecordsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The list of DNS records to be created.
    // 
    // This parameter is required.
    shared_ptr<vector<BatchCreateRecordsRequest::RecordList>> recordList_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
