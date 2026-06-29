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
      // The encryption algorithm used by the record. Valid values: **0 to 255**. This parameter is required when you add CERT or SSHFP records.
      shared_ptr<int32_t> algorithm_ {};
      // The public key certificate information of the record. This parameter is required when you add CERT, SMIMEA, or TLSA records.
      shared_ptr<string> certificate_ {};
      // The public key fingerprint value of the record. This parameter is required when you add SSHFP records.
      shared_ptr<string> fingerprint_ {};
      // The flag of the record. The Flag of a CAA record indicates its priority and processing method. Valid values: **0 to 255**. This parameter is required when you add CAA records.
      shared_ptr<int32_t> flag_ {};
      // The public key identifier of the record. Valid values: **0 to 65535**. This parameter is required when you add CERT records.
      shared_ptr<int32_t> keyTag_ {};
      // The algorithm policy used by the record for matching or verifying certificates. Valid values: **0 to 255**. This parameter is required when you add SMIMEA or TLSA records.
      shared_ptr<int32_t> matchingType_ {};
      // The port of the record. Valid values: **0 to 65535**. This parameter is required when you add SRV records.
      shared_ptr<int32_t> port_ {};
      // The priority of the record. Valid values: **0 to 65535**. A smaller value indicates a higher priority. This parameter is required when you add MX, SRV, or URI records.
      shared_ptr<int32_t> priority_ {};
      // The type of certificate or public key used by the record. Valid values: **0 to 255**. This parameter is required when you add SMIMEA or TLSA records.
      shared_ptr<int32_t> selector_ {};
      // The tag of the record. The Tag of a CAA record indicates its specific type and purpose. This parameter is required when you add CAA records.
      shared_ptr<string> tag_ {};
      // The certificate type of the record (for CERT records) or the public key type (for SSHFP records). This parameter is required when you add CERT or SSHFP records.
      shared_ptr<int32_t> type_ {};
      // The usage identifier of the record. Valid values: **0 to 255**. This parameter is required when you add SMIMEA or TLSA records.
      shared_ptr<int32_t> usage_ {};
      // The record value or partial content. This parameter is required when you add A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, or URI records. The meaning varies depending on the record type:
      // 
      // - **A/AAAA**: The IP address to which the record points. Separate multiple IP addresses with commas (,). At least one IPv4 address is required.
      // - **CNAME**: The target domain name to which the record points.
      // - **NS**: The name server for the specified domain name.
      // - **MX**: A valid target mail server domain name.
      // - **TXT**: A valid text string.
      // - **CAA**: A valid certification authority domain name.
      // - **SRV**: A valid target host domain name.
      // - **URI**: A valid URI string.
      shared_ptr<string> value_ {};
      // The weight of the record. Valid values: **0 to 65535**. This parameter is required when you add SRV or URI records.
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
      // The AccessKey of the account to which the origin server belongs. This parameter is required when the origin server type is OSS and the origin authentication type is private cross-account read, or when the origin server type is S3 and the origin authentication type is private read.
      shared_ptr<string> accessKey_ {};
      // The origin authentication type. Different origin server types support different authentication types. The origin server type refers to the SourceType parameter in this operation. When the origin server type is OSS or S3, you must specify the origin authentication type. Valid values:
      // 
      // - **public**: public read. Select this value when the origin server type is OSS or S3 and the origin server allows public read access.
      // - **private**: private read. Select this value when the origin server type is S3 and the origin server allows only private read access.
      // - **private_same_account**: private same-account read. Select this value when the origin server type is OSS, the origin server is under the same Alibaba Cloud account, and the origin server allows only private read access.
      shared_ptr<string> authType_ {};
      // The signature algorithm version. This parameter is required when the origin server type is S3 and the origin authentication type is private read. Valid values:
      // 
      // - **v2**
      // 
      // - **v4**
      // 
      // Default value: v4.
      shared_ptr<string> region_ {};
      // The SecretKey of the account to which the origin server belongs. This parameter is required when the origin server type is OSS and the origin authentication type is private cross-account read, or when the origin server type is S3 and the origin authentication type is private read.
      shared_ptr<string> secretKey_ {};
      // The region to which the origin server belongs. This parameter is required when the origin server type is S3. Obtain the region from the official S3 website.
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
    // The origin authentication information of the CNAME record.
    shared_ptr<UpdateRecordRequest::AuthConf> authConf_ {};
    // The business scenario for record acceleration. This parameter is not required for records without acceleration enabled. Valid values:
    // - **video_image**: video and image.
    // - **api**: API.
    // - **web**: web page.
    shared_ptr<string> bizName_ {};
    // The comment for the record.
    shared_ptr<string> comment_ {};
    // The DNS information of the record. The content varies depending on the record type. For more information, see <props="china">[documentation](https://help.aliyun.com/document_detail/2708761.html)<props="intl">[documentation](https://www.alibabacloud.com/help/doc-detail/2708761.html).
    // 
    // This parameter is required.
    shared_ptr<UpdateRecordRequest::Data> data_ {};
    // The back-to-origin HOST policy. This parameter takes effect when the record type is CNAME. Settings the HOST policy for back-to-origin requests. Valid values:
    // 
    // - **follow_hostname**: follows the host record.
    // - **follow_origin_domain**: follows the Origin Domain Name.
    shared_ptr<string> hostPolicy_ {};
    shared_ptr<string> httpPorts_ {};
    shared_ptr<string> httpsPorts_ {};
    // Specifies whether to enable proxy acceleration for the record. Only CNAME records and A/AAAA records support proxy acceleration. Valid values:
    // - **true**: Enable proxy acceleration.
    // - **false**: Disable proxy acceleration.
    shared_ptr<bool> proxied_ {};
    // The ID of the record. You can call [ListRecords](https://help.aliyun.com/document_detail/2850265.html) to obtain the record ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The origin server type of the CNAME record. This parameter is required when you add a CNAME record. Valid values:
    // 
    // - **OSS**: OSS origin server.
    // - **S3**: S3 origin server.
    // - **LB**: load balancing origin server.
    // - **OP**: IPAM pool origin server.
    // - **Domain**: standard domain name origin server.
    // 
    // If this parameter is not specified or is left empty, the default value is Domain, which indicates a standard domain name origin server type.
    shared_ptr<string> sourceType_ {};
    // The time-to-live (TTL) of the record, in seconds. Valid values: **30 to 86400**, or 1. A value of 1 indicates that the TTL of the record is automatically determined.
    shared_ptr<int32_t> ttl_ {};
    // The DNS type of the record, such as A/AAAA, CNAME, or TXT.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
