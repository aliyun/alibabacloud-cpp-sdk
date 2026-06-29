// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateRecordRequest() = default ;
    CreateRecordRequest(const CreateRecordRequest &) = default ;
    CreateRecordRequest(CreateRecordRequest &&) = default ;
    CreateRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecordRequest() = default ;
    CreateRecordRequest& operator=(const CreateRecordRequest &) = default ;
    CreateRecordRequest& operator=(CreateRecordRequest &&) = default ;
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
      // The encryption algorithm used by the record, ranging from **0 to 255**. This field is required when adding CERT or SSHFP records.
      shared_ptr<int32_t> algorithm_ {};
      // The public key certificate information of the record. This parameter is required when adding CERT, SMIMEA, or TLSA records.
      shared_ptr<string> certificate_ {};
      // The public key fingerprint value of the record. This parameter is required when adding an SSHFP record.
      shared_ptr<string> fingerprint_ {};
      // The flag of the record. The Flag of a CAA record indicates its priority and processing method, with a value range of **0 to 255**. This parameter is required when adding a CAA record.
      shared_ptr<int32_t> flag_ {};
      // The public key identifier of the record, ranging from **0 to 65535**. This parameter is required when adding a CERT record.
      shared_ptr<int32_t> keyTag_ {};
      // The algorithm policy used by the record to match or verify certificates, ranging from **0 to 255**. This parameter is required when adding SMIMEA or TLSA records.
      shared_ptr<int32_t> matchingType_ {};
      // The port of the record, ranging from **0 to 65535**. This parameter is required when adding an SRV record.
      shared_ptr<int32_t> port_ {};
      // The priority of the record, ranging from **0 to 65535**. A smaller value indicates a higher priority. This parameter is required when adding MX, SRV, or URI records.
      shared_ptr<int32_t> priority_ {};
      // The type of certificate or public key used by the record, ranging from **0 to 255**. This parameter is required when adding SMIMEA or TLSA records.
      shared_ptr<int32_t> selector_ {};
      // The tag of the record. The Tag of a CAA record indicates its specific type and purpose. This parameter is required when adding a CAA record. Valid values for Tag:
      // - **issue**: Authorizes a specific CA to issue certificates for the domain. It is usually followed by the CA\\"s domain name.
      // - **issuewild**: Authorizes a specific CA to issue wildcard certificates for the domain (e.g., *.example.com).
      // - **iodef**: Specifies a URI for receiving reports about violations of CAA records.
      shared_ptr<string> tag_ {};
      // The certificate type of the record (for CERT records) or the public key type (for SSHFP records). This parameter is required when adding CERT or SSHFP records.
      shared_ptr<int32_t> type_ {};
      // The usage identifier of the record, ranging from **0 to 255**. This parameter is required when adding SMIMEA or TLSA records.
      shared_ptr<int32_t> usage_ {};
      // The record value or partial content. This parameter is required when the record type is A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, or URI. It represents different meanings for different record types:
      // 
      // - **A/AAAA**: The IP address to point to. Multiple IPs are separated by commas (,). At least one IPv4 address is required.
      // - **CNAME**: The target domain name to point to.
      // - **NS**: The name server for the specified domain.
      // - **MX**: A valid target mail server domain name.
      // - **TXT**: A valid text string.
      // - **CAA**: A valid certificate authority domain name.
      // - **SRV**: A valid target host domain name.
      // - **URI**: A valid URI string.
      shared_ptr<string> value_ {};
      // The weight of the record, ranging from **0 to 65535**. This parameter is required when adding SRV or URI records.
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
      // The AccessKey of the account that owns the origin. This value is required when the origin type is OSS and the authentication type is private cross-account read, or when the origin type is S3 and the authentication type is private read.
      shared_ptr<string> accessKey_ {};
      // The origin authentication type. Different origin types support different authentication types. The origin type refers to the SourceType parameter in this API. When the origin type is OSS or S3, you need to specify the origin authentication type. Valid values:
      // - **public**: Public read. Select this value when the origin type is OSS or S3 and the origin has public read access.
      // - **private**: Private read. Select this value when the origin type is S3 and the origin has private read access.
      // - **private_same_account**: Private same-account read. Select this value when the origin type is OSS, the origin is under the same Alibaba Cloud account, and the origin has private read access.
      // - **private_cross_account**: Private cross-account read. Select this value when the origin type is OSS, the origin is not under the same Alibaba Cloud account, and the origin has private read access.
      shared_ptr<string> authType_ {};
      // The region where the origin is located. This value is required when the origin type is S3. The region information can be obtained from the official S3 website.
      shared_ptr<string> region_ {};
      // The SecretKey of the account that owns the origin. This value is required when the origin type is OSS and the authentication type is private cross-account read, or when the origin type is S3 and the authentication type is private read.
      shared_ptr<string> secretKey_ {};
      // The signature algorithm version. This is required when the origin type is S3 and the authentication type is private read. The following two versions are supported:
      // - **v2**
      // - **v4**
      // 
      // If not specified, the default value is v4.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->authConf_ == nullptr
        && this->bizName_ == nullptr && this->comment_ == nullptr && this->data_ == nullptr && this->hostPolicy_ == nullptr && this->httpPorts_ == nullptr
        && this->httpsPorts_ == nullptr && this->proxied_ == nullptr && this->recordName_ == nullptr && this->siteId_ == nullptr && this->sourceType_ == nullptr
        && this->ttl_ == nullptr && this->type_ == nullptr; };
    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const CreateRecordRequest::AuthConf & getAuthConf() const { DARABONBA_PTR_GET_CONST(authConf_, CreateRecordRequest::AuthConf) };
    inline CreateRecordRequest::AuthConf getAuthConf() { DARABONBA_PTR_GET(authConf_, CreateRecordRequest::AuthConf) };
    inline CreateRecordRequest& setAuthConf(const CreateRecordRequest::AuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline CreateRecordRequest& setAuthConf(CreateRecordRequest::AuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline CreateRecordRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateRecordRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateRecordRequest::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateRecordRequest::Data) };
    inline CreateRecordRequest::Data getData() { DARABONBA_PTR_GET(data_, CreateRecordRequest::Data) };
    inline CreateRecordRequest& setData(const CreateRecordRequest::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateRecordRequest& setData(CreateRecordRequest::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string getHostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline CreateRecordRequest& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline CreateRecordRequest& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline CreateRecordRequest& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline CreateRecordRequest& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateRecordRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateRecordRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRecordRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateRecordRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The origin authentication information for the CNAME record.
    shared_ptr<CreateRecordRequest::AuthConf> authConf_ {};
    // Used to tag the business scenario of the DNS record. This parameter is required when proxy acceleration is enabled for the DNS record (i.e., when the proxied parameter is set to true), and is not required when proxy acceleration is disabled (i.e., when the proxied parameter is set to false). Valid values:
    // - **image_video**: Image and video.
    // - **api**: API.
    // - **web**: Web page.
    shared_ptr<string> bizName_ {};
    // The comment for the record, with a maximum length of 100 characters.
    shared_ptr<string> comment_ {};
    // The DNS information of the record. Different types of records require different content for this field. For more information, see
    // <props="china">[Documentation](https://help.aliyun.com/document_detail/2708761.html)<props="intl">[Documentation](https://www.alibabacloud.com/help/doc-detail/2708761.html)
    // .
    // 
    // This parameter is required.
    shared_ptr<CreateRecordRequest::Data> data_ {};
    // The origin host policy. This takes effect when the record type is CNAME. It specifies the host policy for back-to-origin requests. Two modes are available:
    // 
    // - **follow_hostname**: Follow the request host.
    // - **follow_origin_domain**: Follow the origin domain.
    shared_ptr<string> hostPolicy_ {};
    shared_ptr<string> httpPorts_ {};
    shared_ptr<string> httpsPorts_ {};
    // Specifies whether to enable proxy acceleration for the record. Only CNAME records or A/AAAA records (i.e., when the type parameter is set to A/AAAA or CNAME) can enable proxy acceleration. Valid values:
    // - **true**: Enable proxy acceleration.
    // - **false**: Disable proxy acceleration.
    shared_ptr<bool> proxied_ {};
    // The record name.
    // 
    // This parameter is required.
    shared_ptr<string> recordName_ {};
    // The site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The origin type of the CNAME record. This parameter is required when adding a CNAME record (i.e., when the type parameter is set to CNAME). Valid values:
    // 
    // - **OSS**: OSS origin.
    // - **S3**: S3 origin.
    // - **LB**: Load balancer origin.
    // - **OP**: Origin pool origin.
    // - **Domain**: Standard domain origin.
    // 
    // If this parameter is not specified or is left empty, it defaults to Domain, which is the standard domain origin type.
    shared_ptr<string> sourceType_ {};
    // The time-to-live (TTL) of the record, in seconds. When set to 1, the TTL is automatic.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ttl_ {};
    // The DNS type of the record, such as **A/AAAA**, **CNAME**, **TXT**, etc.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
