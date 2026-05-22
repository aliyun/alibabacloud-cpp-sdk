// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECORDSRESPONSEBODY_HPP_
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
  class ListRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecordsResponseBody() = default ;
    ListRecordsResponseBody(const ListRecordsResponseBody &) = default ;
    ListRecordsResponseBody(ListRecordsResponseBody &&) = default ;
    ListRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecordsResponseBody() = default ;
    ListRecordsResponseBody& operator=(const ListRecordsResponseBody &) = default ;
    ListRecordsResponseBody& operator=(ListRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Records : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Records& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Records& obj) { 
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
      Records() = default ;
      Records(const Records &) = default ;
      Records(Records &&) = default ;
      Records(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Records() = default ;
      Records& operator=(const Records &) = default ;
      Records& operator=(Records &&) = default ;
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
        shared_ptr<int32_t> algorithm_ {};
        shared_ptr<string> certificate_ {};
        shared_ptr<string> fingerprint_ {};
        shared_ptr<int32_t> flag_ {};
        shared_ptr<int32_t> keyTag_ {};
        shared_ptr<int32_t> matchingType_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<int32_t> selector_ {};
        shared_ptr<string> tag_ {};
        Darabonba::Json tags_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<int32_t> usage_ {};
        shared_ptr<string> value_ {};
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
        && this->bizName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->data_ == nullptr && this->hostPolicy_ == nullptr
        && this->proxied_ == nullptr && this->recordCname_ == nullptr && this->recordId_ == nullptr && this->recordName_ == nullptr && this->recordSourceType_ == nullptr
        && this->recordType_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr && this->ttl_ == nullptr && this->updateTime_ == nullptr; };
      // authConf Field Functions 
      bool hasAuthConf() const { return this->authConf_ != nullptr;};
      void deleteAuthConf() { this->authConf_ = nullptr;};
      inline const Records::AuthConf & getAuthConf() const { DARABONBA_PTR_GET_CONST(authConf_, Records::AuthConf) };
      inline Records::AuthConf getAuthConf() { DARABONBA_PTR_GET(authConf_, Records::AuthConf) };
      inline Records& setAuthConf(const Records::AuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
      inline Records& setAuthConf(Records::AuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


      // bizName Field Functions 
      bool hasBizName() const { return this->bizName_ != nullptr;};
      void deleteBizName() { this->bizName_ = nullptr;};
      inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
      inline Records& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Records& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Records& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Records::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Records::Data) };
      inline Records::Data getData() { DARABONBA_PTR_GET(data_, Records::Data) };
      inline Records& setData(const Records::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Records& setData(Records::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // hostPolicy Field Functions 
      bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
      void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
      inline string getHostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
      inline Records& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


      // proxied Field Functions 
      bool hasProxied() const { return this->proxied_ != nullptr;};
      void deleteProxied() { this->proxied_ = nullptr;};
      inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
      inline Records& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


      // recordCname Field Functions 
      bool hasRecordCname() const { return this->recordCname_ != nullptr;};
      void deleteRecordCname() { this->recordCname_ = nullptr;};
      inline string getRecordCname() const { DARABONBA_PTR_GET_DEFAULT(recordCname_, "") };
      inline Records& setRecordCname(string recordCname) { DARABONBA_PTR_SET_VALUE(recordCname_, recordCname) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline Records& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline Records& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // recordSourceType Field Functions 
      bool hasRecordSourceType() const { return this->recordSourceType_ != nullptr;};
      void deleteRecordSourceType() { this->recordSourceType_ = nullptr;};
      inline string getRecordSourceType() const { DARABONBA_PTR_GET_DEFAULT(recordSourceType_, "") };
      inline Records& setRecordSourceType(string recordSourceType) { DARABONBA_PTR_SET_VALUE(recordSourceType_, recordSourceType) };


      // recordType Field Functions 
      bool hasRecordType() const { return this->recordType_ != nullptr;};
      void deleteRecordType() { this->recordType_ = nullptr;};
      inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
      inline Records& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline Records& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline Records& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int64_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
      inline Records& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Records& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<Records::AuthConf> authConf_ {};
      shared_ptr<string> bizName_ {};
      shared_ptr<string> comment_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<Records::Data> data_ {};
      shared_ptr<string> hostPolicy_ {};
      shared_ptr<bool> proxied_ {};
      shared_ptr<string> recordCname_ {};
      shared_ptr<int64_t> recordId_ {};
      shared_ptr<string> recordName_ {};
      shared_ptr<string> recordSourceType_ {};
      shared_ptr<string> recordType_ {};
      shared_ptr<int64_t> siteId_ {};
      shared_ptr<string> siteName_ {};
      shared_ptr<int64_t> ttl_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListRecordsResponseBody::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ListRecordsResponseBody::Records>) };
    inline vector<ListRecordsResponseBody::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<ListRecordsResponseBody::Records>) };
    inline ListRecordsResponseBody& setRecords(const vector<ListRecordsResponseBody::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListRecordsResponseBody& setRecords(vector<ListRecordsResponseBody::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<ListRecordsResponseBody::Records>> records_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
