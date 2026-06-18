// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateRecordRequest() = default ;
    UpdateRecordRequest(const UpdateRecordRequest &) = default ;
    UpdateRecordRequest(UpdateRecordRequest &&) = default ;
    UpdateRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecordRequest() = default ;
    UpdateRecordRequest& operator=(const UpdateRecordRequest &) = default ;
    UpdateRecordRequest& operator=(UpdateRecordRequest &&) = default ;
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
      // The encryption algorithm specified in the record. The value must be an integer from **0 to 255**. This parameter is required for CERT and SSHFP records.
      shared_ptr<int32_t> algorithm_ {};
      // The public key certificate data for the record. This parameter is required for CERT, SMIMEA, and TLSA records.
      shared_ptr<string> certificate_ {};
      // The public key fingerprint for the record. This parameter is required for SSHFP records.
      shared_ptr<string> fingerprint_ {};
      // The flag for the record. For a CAA record, this flag indicates its priority and handling behavior. The value must be an integer from **0 to 255**. This parameter is required for CAA records.
      shared_ptr<int32_t> flag_ {};
      // The public key identifier for the record. The value must be an integer from **0 to 65535**. This parameter is required for CERT records.
      shared_ptr<int32_t> keyTag_ {};
      // The algorithm policy used to match or validate the certificate. The value must be an integer from **0 to 255**. This parameter is required for SMIMEA and TLSA records.
      shared_ptr<int32_t> matchingType_ {};
      // The port number for the record. The value must be an integer from **0 to 65535**. This parameter is required for SRV records.
      shared_ptr<int32_t> port_ {};
      // The record\\"s priority. The value must be an integer from **0 to 65535**, where a lower value indicates higher priority. This parameter is required for MX, SRV, and URI records.
      shared_ptr<int32_t> priority_ {};
      // The type of certificate or public key specified in the record. The value must be an integer from **0 to 255**. This parameter is required for SMIMEA and TLSA records.
      shared_ptr<int32_t> selector_ {};
      // The tag for the record. For a CAA record, the tag specifies the record\\"s type and purpose. This parameter is required for CAA records.
      shared_ptr<string> tag_ {};
      // The certificate type for a CERT record, or the public key type for an SSHFP record. This parameter is required for CERT and SSHFP records.
      shared_ptr<int32_t> type_ {};
      // The usage identifier for the record. The value must be an integer from **0 to 255**. This parameter is required for SMIMEA and TLSA records.
      shared_ptr<int32_t> usage_ {};
      // The value of the record or part of its content. This parameter is required for A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI records. The meaning of this parameter varies by record type:
      // 
      // - **A/AAAA**: The target IP address. To specify multiple IP addresses, separate them with a comma (,). At least one IPv4 address is required.
      // 
      // - **CNAME**: The target domain name.
      // 
      // - **NS**: The name server for the domain.
      // 
      // - **MX**: A valid domain name for the target mail server.
      // 
      // - **TXT**: A valid text string.
      // 
      // - **CAA**: A valid domain name for the certificate authority.
      // 
      // - **SRV**: A valid domain name for the target host.
      // 
      // - **URI**: A valid URI string.
      shared_ptr<string> value_ {};
      // The weight of the record. The value must be an integer from **0 to 65535**. This parameter is required for SRV and URI records.
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
      // The access key for the account that owns the origin. This is required for private, cross-account access to OSS origins, and for S3 origins where the authentication type is **private**.
      shared_ptr<string> accessKey_ {};
      // The origin authentication type. This parameter is required when the **SourceType** is **OSS** or **S3**. Supported authentication types vary depending on the origin type. Valid values:
      // 
      // - **public**: Public read. Use for publicly readable OSS or S3 origins.
      // 
      // - **private**: Private read. Use for private S3 origins.
      // 
      // - **private_same_account**: Private read within the same account. Use for private OSS origins accessed from the same Alibaba Cloud account.
      shared_ptr<string> authType_ {};
      // The region where the origin is located. This parameter is required when the origin type is S3. You can find the region ID on the official S3 website.
      // 
      // - **v2**
      // 
      // - **v4**
      // 
      // If you do not specify a value, it defaults to v4.
      shared_ptr<string> region_ {};
      // The secret key for the account that owns the origin. This is required for private, cross-account access to OSS origins, and for S3 origins where the authentication type is **private**.
      shared_ptr<string> secretKey_ {};
      // The signing algorithm version. This parameter is required when the origin type is S3 and the authentication type is **private**. Supported versions: v2 and v4. If this parameter is not specified, the default value is v4.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->authConf_ == nullptr
        && this->bizName_ == nullptr && this->comment_ == nullptr && this->data_ == nullptr && this->hostPolicy_ == nullptr && this->httpPorts_ == nullptr
        && this->httpsPorts_ == nullptr && this->proxied_ == nullptr && this->recordId_ == nullptr && this->sourceType_ == nullptr && this->ttl_ == nullptr
        && this->type_ == nullptr; };
    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const UpdateRecordRequest::AuthConf & getAuthConf() const { DARABONBA_PTR_GET_CONST(authConf_, UpdateRecordRequest::AuthConf) };
    inline UpdateRecordRequest::AuthConf getAuthConf() { DARABONBA_PTR_GET(authConf_, UpdateRecordRequest::AuthConf) };
    inline UpdateRecordRequest& setAuthConf(const UpdateRecordRequest::AuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline UpdateRecordRequest& setAuthConf(UpdateRecordRequest::AuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline UpdateRecordRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateRecordRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateRecordRequest::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateRecordRequest::Data) };
    inline UpdateRecordRequest::Data getData() { DARABONBA_PTR_GET(data_, UpdateRecordRequest::Data) };
    inline UpdateRecordRequest& setData(const UpdateRecordRequest::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateRecordRequest& setData(UpdateRecordRequest::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string getHostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline UpdateRecordRequest& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline UpdateRecordRequest& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline UpdateRecordRequest& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline UpdateRecordRequest& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline UpdateRecordRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateRecordRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateRecordRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The origin authentication settings for the CNAME record.
    shared_ptr<UpdateRecordRequest::AuthConf> authConf_ {};
    // The use case for proxy acceleration. Omit this parameter if proxy acceleration is disabled. Valid values:
    // 
    // - **video_image**: Video and images.
    // 
    // - **api**: APIs.
    // 
    // - **web**: Web pages.
    shared_ptr<string> bizName_ {};
    // A comment for the record.
    shared_ptr<string> comment_ {};
    // The DNS data for the record. The required content varies based on the record type. For more information, see <props="china">[Documentation](https://help.aliyun.com/document_detail/2708761.html)<props="intl">[Documentation](https://www.alibabacloud.com/help/doc-detail/2708761.html).
    // 
    // This parameter is required.
    shared_ptr<UpdateRecordRequest::Data> data_ {};
    // The origin HOST policy. This policy, which applies only to CNAME records, determines the value of the `HOST` header in requests sent to the origin. Valid values:
    // 
    // - **follow_hostname**: Follows the host record.
    // 
    // - **follow_origin_domain**: Follows the origin domain name.
    shared_ptr<string> hostPolicy_ {};
    shared_ptr<string> httpPorts_ {};
    shared_ptr<string> httpsPorts_ {};
    // Indicates whether to enable proxy acceleration for the record. Only CNAME and A/AAAA records support proxy acceleration. Valid values:
    // 
    // - **true**: Enables proxy acceleration.
    // 
    // - **false**: Disables proxy acceleration.
    shared_ptr<bool> proxied_ {};
    // The record ID. Call the [ListRecords](https://help.aliyun.com/document_detail/2850265.html) operation to get this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The origin type for the CNAME record. This parameter is required for CNAME records. Valid values:
    // 
    // - **OSS**: An OSS origin.
    // 
    // - **S3**: An S3 origin.
    // 
    // - **LB**: A load balancer origin.
    // 
    // - **OP**: An origin address pool origin.
    // 
    // - **Domain**: A standard domain name origin.
    // 
    // If this parameter is omitted or left empty, the default value is `Domain`.
    shared_ptr<string> sourceType_ {};
    // The record\\"s time to live (TTL) in seconds. The value must be an integer from **30 to 86400** or 1. A value of 1 sets the TTL to automatic.
    shared_ptr<int32_t> ttl_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
