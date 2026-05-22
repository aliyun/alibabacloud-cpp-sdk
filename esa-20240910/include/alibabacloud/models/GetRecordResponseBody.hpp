// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordModel, recordModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordModel, recordModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRecordResponseBody() = default ;
    GetRecordResponseBody(const GetRecordResponseBody &) = default ;
    GetRecordResponseBody(GetRecordResponseBody &&) = default ;
    GetRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordResponseBody() = default ;
    GetRecordResponseBody& operator=(const GetRecordResponseBody &) = default ;
    GetRecordResponseBody& operator=(GetRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecordModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordModel& obj) { 
        DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
        DARABONBA_PTR_TO_JSON(BizName, bizName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
        DARABONBA_PTR_TO_JSON(Proxied, proxied_);
        DARABONBA_PTR_TO_JSON(RecordCname, recordCname_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(RecordSourceType, recordSourceType_);
        DARABONBA_PTR_TO_JSON(RecordType, recordType_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, RecordModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
        DARABONBA_PTR_FROM_JSON(BizName, bizName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
        DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
        DARABONBA_PTR_FROM_JSON(RecordCname, recordCname_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(RecordSourceType, recordSourceType_);
        DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      RecordModel() = default ;
      RecordModel(const RecordModel &) = default ;
      RecordModel(RecordModel &&) = default ;
      RecordModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordModel() = default ;
      RecordModel& operator=(const RecordModel &) = default ;
      RecordModel& operator=(RecordModel &&) = default ;
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
          DARABONBA_ANY_TO_JSON(Tags, tags_);
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
          DARABONBA_ANY_FROM_JSON(Tags, tags_);
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
        && this->port_ == nullptr && this->priority_ == nullptr && this->selector_ == nullptr && this->tag_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr && this->usage_ == nullptr && this->value_ == nullptr && this->weight_ == nullptr; };
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


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline         const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
        Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
        inline Data& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
        inline Data& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


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
        // The encryption algorithm used for the record, specified within the range from 0 to 255. This parameter is required when you add CERT or SSHFP records.
        shared_ptr<int32_t> algorithm_ {};
        // The public key of the certificate. This parameter is required when you add CERT, SMIMEA, or TLSA records.
        shared_ptr<string> certificate_ {};
        // The public key fingerprint of the record. This parameter is required when you add a SSHFP record.
        shared_ptr<string> fingerprint_ {};
        // The flag bit of the record. The Flag for a CAA record indicates its priority and how it is processed, specified within the range of 0 to 255. This parameter is required when you add a CAA record.
        shared_ptr<int32_t> flag_ {};
        // The public key identification for the record. Valid values: 0 to 65535. This parameter is required when you add a CAA record.
        shared_ptr<int32_t> keyTag_ {};
        // The algorithm policy used to match or validate the certificate, specified within the range 0 to 255. This parameter is required when you add SMIMEA or TLSA records.
        shared_ptr<int32_t> matchingType_ {};
        // The port of the record. Valid values: 0 to 65535. This parameter is required when you add an SRV record.
        shared_ptr<int32_t> port_ {};
        // The priority of the record. Valid values: 0 to 65535. A smaller value indicates a higher priority. This parameter is required when you add MX, SRV, and URI records.
        shared_ptr<int32_t> priority_ {};
        // The type of the certificate or public key, specified within the range of 0 to 255. This parameter is required when you add SMIMEA or TLSA records.
        shared_ptr<int32_t> selector_ {};
        // The tag of the record. The Tag of a CAA record indicate its specific type and usage.
        shared_ptr<string> tag_ {};
        Darabonba::Json tags_ {};
        // The certificate type of the record (in CERT records), or the public key type (in SSHFP records). This parameter is required when you add CERT or SSHFP records.
        shared_ptr<int32_t> type_ {};
        // The usage identifier of the record, specified within the range of 0 to 255. This parameter is required when you add SMIMEA or TLSA records.
        shared_ptr<int32_t> usage_ {};
        // The record value or part of the record content. This parameter is returned when you add A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI records. It has different meanings based on types of records.
        // 
        // *   **A/AAAA**: the IP address. Multiple IP addresses are separated with commas (,). There is at least one IPv4 address.
        // *   **CNAME**: the target domain name.
        // *   **NS**: the nameserver for the domain name.
        // *   **MX**: a valid domain name of the target mail server.
        // *   **TXT**: a valid text string.
        // *   **CAA**: a valid domain name of the certificate authority.
        // *   **SRV**: a valid domain name of the target host.
        // *   **URI**: a valid URI string.
        shared_ptr<string> value_ {};
        // The weight of the record, specified within the range of 0 to 65535. This parameter is required when you add SRV or URI records.
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
        // The access key ID of the account to which the origin server belongs. This parameter is returned if the origin type is OSS and AuthType is set to private_cross_account, or the origin type is S3 and AuthType is set to private.
        shared_ptr<string> accessKey_ {};
        // The authentication type of the origin server. Different origins support different authentication types. The origin type refers to the SourceType parameter in this operation. This parameter is returned if the origin type is OSS or S3Valid values:
        // 
        // *   **public**: public read. This value is returned when the origin is a public OSS or S3 bucket.
        // *   **private**: private read. This value is returned when the origin is a private S3 bucket.
        // *   **private_same_account**: private read in the same account. This value is returned when the origin is a private OSS bucket in your account.
        // *   **private_cross_account**: private read across accounts. This value is returned when the origin is a private OSS bucket in a different Alibaba Cloud account.
        shared_ptr<string> authType_ {};
        // The region of the origin. If the origin type is S3, you must specify this value. You can obtain the region information from the official website of S3.
        shared_ptr<string> region_ {};
        // The secret access key of the account to which the origin server belongs. This parameter is returned if the origin type is OSS and AuthType is set to private_cross_account, or the origin type is S3 and AuthType is set to private.SecretKey
        shared_ptr<string> secretKey_ {};
        // The version of the signature algorithm. This parameter is returned when the origin type is S3 and AuthType is private. The following two types are supported:
        // 
        // *   **v2**
        // *   **v4**
        // 
        // If this parameter is left empty, the default value v4 is used.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->authConf_ == nullptr
        && this->bizName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->data_ == nullptr && this->hostPolicy_ == nullptr
        && this->proxied_ == nullptr && this->recordCname_ == nullptr && this->recordId_ == nullptr && this->recordName_ == nullptr && this->recordSourceType_ == nullptr
        && this->recordType_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr && this->ttl_ == nullptr && this->updateTime_ == nullptr; };
      // authConf Field Functions 
      bool hasAuthConf() const { return this->authConf_ != nullptr;};
      void deleteAuthConf() { this->authConf_ = nullptr;};
      inline const RecordModel::AuthConf & getAuthConf() const { DARABONBA_PTR_GET_CONST(authConf_, RecordModel::AuthConf) };
      inline RecordModel::AuthConf getAuthConf() { DARABONBA_PTR_GET(authConf_, RecordModel::AuthConf) };
      inline RecordModel& setAuthConf(const RecordModel::AuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
      inline RecordModel& setAuthConf(RecordModel::AuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


      // bizName Field Functions 
      bool hasBizName() const { return this->bizName_ != nullptr;};
      void deleteBizName() { this->bizName_ = nullptr;};
      inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
      inline RecordModel& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline RecordModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline RecordModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const RecordModel::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RecordModel::Data) };
      inline RecordModel::Data getData() { DARABONBA_PTR_GET(data_, RecordModel::Data) };
      inline RecordModel& setData(const RecordModel::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline RecordModel& setData(RecordModel::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // hostPolicy Field Functions 
      bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
      void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
      inline string getHostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
      inline RecordModel& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


      // proxied Field Functions 
      bool hasProxied() const { return this->proxied_ != nullptr;};
      void deleteProxied() { this->proxied_ = nullptr;};
      inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
      inline RecordModel& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


      // recordCname Field Functions 
      bool hasRecordCname() const { return this->recordCname_ != nullptr;};
      void deleteRecordCname() { this->recordCname_ = nullptr;};
      inline string getRecordCname() const { DARABONBA_PTR_GET_DEFAULT(recordCname_, "") };
      inline RecordModel& setRecordCname(string recordCname) { DARABONBA_PTR_SET_VALUE(recordCname_, recordCname) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline RecordModel& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline RecordModel& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // recordSourceType Field Functions 
      bool hasRecordSourceType() const { return this->recordSourceType_ != nullptr;};
      void deleteRecordSourceType() { this->recordSourceType_ = nullptr;};
      inline string getRecordSourceType() const { DARABONBA_PTR_GET_DEFAULT(recordSourceType_, "") };
      inline RecordModel& setRecordSourceType(string recordSourceType) { DARABONBA_PTR_SET_VALUE(recordSourceType_, recordSourceType) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
      inline RecordModel& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline RecordModel& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline RecordModel& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline RecordModel& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline RecordModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The origin authentication information of the CNAME record.
      shared_ptr<RecordModel::AuthConf> authConf_ {};
      // The business scenario of the record for acceleration. Leave this parameter empty if your record is not proxied. Valid values:
      // 
      // *   **image_video**
      // *   **api**
      // *   **web**
      shared_ptr<string> bizName_ {};
      // The comments of the record.
      shared_ptr<string> comment_ {};
      // The time when the record was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The DNS record information. The content returned by this parameter varies based on the record type.
      shared_ptr<RecordModel::Data> data_ {};
      // The origin host policy. This policy takes effect when the record type is CNAME. Valid values:
      // 
      // *   follow_hostname: matches the requested domain name.
      // *   follow_origin_domain: matches the origin\\"s domain name.
      shared_ptr<string> hostPolicy_ {};
      // Indicates whether the record is proxied. Only CNAME and A/AAAA records can be proxied. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> proxied_ {};
      // The CNAME. If you use CNAME setup when you add your website to ESA, the value is the CNAME that you configured then.
      shared_ptr<string> recordCname_ {};
      // The record ID.
      shared_ptr<int64_t> recordId_ {};
      // The record name.
      shared_ptr<string> recordName_ {};
      // The origin type for the CNAME record. This parameter is required when you add a CNAME record. Valid values:
      // 
      // *   **OSS**: OSS bucket.
      // *   **S3**: S3 bucket.
      // *   **LB**: load balancer.
      // *   **OP**: origin pool.
      // *   **Domain**: domain name.
      // 
      // If you do not pass this parameter or if you leave its value empty, Domain is returned by default.
      shared_ptr<string> recordSourceType_ {};
      // The type of the DNS record, such as **A/AAAA, CNAME, and TXT**.
      shared_ptr<string> recordType_ {};
      // The website ID.
      shared_ptr<int64_t> siteId_ {};
      // The website name.
      shared_ptr<string> siteName_ {};
      // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
      shared_ptr<int32_t> ttl_ {};
      // The time when the record was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->recordModel_ == nullptr
        && this->requestId_ == nullptr; };
    // recordModel Field Functions 
    bool hasRecordModel() const { return this->recordModel_ != nullptr;};
    void deleteRecordModel() { this->recordModel_ = nullptr;};
    inline const GetRecordResponseBody::RecordModel & getRecordModel() const { DARABONBA_PTR_GET_CONST(recordModel_, GetRecordResponseBody::RecordModel) };
    inline GetRecordResponseBody::RecordModel getRecordModel() { DARABONBA_PTR_GET(recordModel_, GetRecordResponseBody::RecordModel) };
    inline GetRecordResponseBody& setRecordModel(const GetRecordResponseBody::RecordModel & recordModel) { DARABONBA_PTR_SET_VALUE(recordModel_, recordModel) };
    inline GetRecordResponseBody& setRecordModel(GetRecordResponseBody::RecordModel && recordModel) { DARABONBA_PTR_SET_RVALUE(recordModel_, recordModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the queried record.
    shared_ptr<GetRecordResponseBody::RecordModel> recordModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
