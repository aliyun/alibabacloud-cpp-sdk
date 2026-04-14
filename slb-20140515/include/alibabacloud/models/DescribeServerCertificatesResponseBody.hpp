// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeServerCertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerCertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerCertificates, serverCertificates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerCertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerCertificates, serverCertificates_);
    };
    DescribeServerCertificatesResponseBody() = default ;
    DescribeServerCertificatesResponseBody(const DescribeServerCertificatesResponseBody &) = default ;
    DescribeServerCertificatesResponseBody(DescribeServerCertificatesResponseBody &&) = default ;
    DescribeServerCertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerCertificatesResponseBody() = default ;
    DescribeServerCertificatesResponseBody& operator=(const DescribeServerCertificatesResponseBody &) = default ;
    DescribeServerCertificatesResponseBody& operator=(DescribeServerCertificatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServerCertificates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerCertificates& obj) { 
        DARABONBA_PTR_TO_JSON(ServerCertificate, serverCertificate_);
      };
      friend void from_json(const Darabonba::Json& j, ServerCertificates& obj) { 
        DARABONBA_PTR_FROM_JSON(ServerCertificate, serverCertificate_);
      };
      ServerCertificates() = default ;
      ServerCertificates(const ServerCertificates &) = default ;
      ServerCertificates(ServerCertificates &&) = default ;
      ServerCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerCertificates() = default ;
      ServerCertificates& operator=(const ServerCertificates &) = default ;
      ServerCertificates& operator=(ServerCertificates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServerCertificate : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServerCertificate& obj) { 
          DARABONBA_PTR_TO_JSON(AliCloudCertificateId, aliCloudCertificateId_);
          DARABONBA_PTR_TO_JSON(AliCloudCertificateName, aliCloudCertificateName_);
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(ExpireTimeStamp, expireTimeStamp_);
          DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
          DARABONBA_PTR_TO_JSON(IsAliCloudCertificate, isAliCloudCertificate_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
          DARABONBA_PTR_TO_JSON(ServerCertificateName, serverCertificateName_);
          DARABONBA_PTR_TO_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, ServerCertificate& obj) { 
          DARABONBA_PTR_FROM_JSON(AliCloudCertificateId, aliCloudCertificateId_);
          DARABONBA_PTR_FROM_JSON(AliCloudCertificateName, aliCloudCertificateName_);
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(ExpireTimeStamp, expireTimeStamp_);
          DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
          DARABONBA_PTR_FROM_JSON(IsAliCloudCertificate, isAliCloudCertificate_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
          DARABONBA_PTR_FROM_JSON(ServerCertificateName, serverCertificateName_);
          DARABONBA_PTR_FROM_JSON(SubjectAlternativeNames, subjectAlternativeNames_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        ServerCertificate() = default ;
        ServerCertificate(const ServerCertificate &) = default ;
        ServerCertificate(ServerCertificate &&) = default ;
        ServerCertificate(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServerCertificate() = default ;
        ServerCertificate& operator=(const ServerCertificate &) = default ;
        ServerCertificate& operator=(ServerCertificate &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<string> tagKey_ {};
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class SubjectAlternativeNames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubjectAlternativeNames& obj) { 
            DARABONBA_PTR_TO_JSON(SubjectAlternativeName, subjectAlternativeName_);
          };
          friend void from_json(const Darabonba::Json& j, SubjectAlternativeNames& obj) { 
            DARABONBA_PTR_FROM_JSON(SubjectAlternativeName, subjectAlternativeName_);
          };
          SubjectAlternativeNames() = default ;
          SubjectAlternativeNames(const SubjectAlternativeNames &) = default ;
          SubjectAlternativeNames(SubjectAlternativeNames &&) = default ;
          SubjectAlternativeNames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubjectAlternativeNames() = default ;
          SubjectAlternativeNames& operator=(const SubjectAlternativeNames &) = default ;
          SubjectAlternativeNames& operator=(SubjectAlternativeNames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->subjectAlternativeName_ == nullptr; };
          // subjectAlternativeName Field Functions 
          bool hasSubjectAlternativeName() const { return this->subjectAlternativeName_ != nullptr;};
          void deleteSubjectAlternativeName() { this->subjectAlternativeName_ = nullptr;};
          inline const vector<string> & getSubjectAlternativeName() const { DARABONBA_PTR_GET_CONST(subjectAlternativeName_, vector<string>) };
          inline vector<string> getSubjectAlternativeName() { DARABONBA_PTR_GET(subjectAlternativeName_, vector<string>) };
          inline SubjectAlternativeNames& setSubjectAlternativeName(const vector<string> & subjectAlternativeName) { DARABONBA_PTR_SET_VALUE(subjectAlternativeName_, subjectAlternativeName) };
          inline SubjectAlternativeNames& setSubjectAlternativeName(vector<string> && subjectAlternativeName) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeName_, subjectAlternativeName) };


        protected:
          shared_ptr<vector<string>> subjectAlternativeName_ {};
        };

        virtual bool empty() const override { return this->aliCloudCertificateId_ == nullptr
        && this->aliCloudCertificateName_ == nullptr && this->commonName_ == nullptr && this->createTime_ == nullptr && this->createTimeStamp_ == nullptr && this->expireTime_ == nullptr
        && this->expireTimeStamp_ == nullptr && this->fingerprint_ == nullptr && this->isAliCloudCertificate_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->serverCertificateId_ == nullptr && this->serverCertificateName_ == nullptr && this->subjectAlternativeNames_ == nullptr && this->tags_ == nullptr; };
        // aliCloudCertificateId Field Functions 
        bool hasAliCloudCertificateId() const { return this->aliCloudCertificateId_ != nullptr;};
        void deleteAliCloudCertificateId() { this->aliCloudCertificateId_ = nullptr;};
        inline string getAliCloudCertificateId() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateId_, "") };
        inline ServerCertificate& setAliCloudCertificateId(string aliCloudCertificateId) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateId_, aliCloudCertificateId) };


        // aliCloudCertificateName Field Functions 
        bool hasAliCloudCertificateName() const { return this->aliCloudCertificateName_ != nullptr;};
        void deleteAliCloudCertificateName() { this->aliCloudCertificateName_ = nullptr;};
        inline string getAliCloudCertificateName() const { DARABONBA_PTR_GET_DEFAULT(aliCloudCertificateName_, "") };
        inline ServerCertificate& setAliCloudCertificateName(string aliCloudCertificateName) { DARABONBA_PTR_SET_VALUE(aliCloudCertificateName_, aliCloudCertificateName) };


        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline ServerCertificate& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ServerCertificate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimeStamp Field Functions 
        bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
        void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
        inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
        inline ServerCertificate& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline ServerCertificate& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // expireTimeStamp Field Functions 
        bool hasExpireTimeStamp() const { return this->expireTimeStamp_ != nullptr;};
        void deleteExpireTimeStamp() { this->expireTimeStamp_ = nullptr;};
        inline int64_t getExpireTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimeStamp_, 0L) };
        inline ServerCertificate& setExpireTimeStamp(int64_t expireTimeStamp) { DARABONBA_PTR_SET_VALUE(expireTimeStamp_, expireTimeStamp) };


        // fingerprint Field Functions 
        bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
        void deleteFingerprint() { this->fingerprint_ = nullptr;};
        inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
        inline ServerCertificate& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


        // isAliCloudCertificate Field Functions 
        bool hasIsAliCloudCertificate() const { return this->isAliCloudCertificate_ != nullptr;};
        void deleteIsAliCloudCertificate() { this->isAliCloudCertificate_ = nullptr;};
        inline int32_t getIsAliCloudCertificate() const { DARABONBA_PTR_GET_DEFAULT(isAliCloudCertificate_, 0) };
        inline ServerCertificate& setIsAliCloudCertificate(int32_t isAliCloudCertificate) { DARABONBA_PTR_SET_VALUE(isAliCloudCertificate_, isAliCloudCertificate) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ServerCertificate& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ServerCertificate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // serverCertificateId Field Functions 
        bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
        void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
        inline string getServerCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
        inline ServerCertificate& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


        // serverCertificateName Field Functions 
        bool hasServerCertificateName() const { return this->serverCertificateName_ != nullptr;};
        void deleteServerCertificateName() { this->serverCertificateName_ = nullptr;};
        inline string getServerCertificateName() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateName_, "") };
        inline ServerCertificate& setServerCertificateName(string serverCertificateName) { DARABONBA_PTR_SET_VALUE(serverCertificateName_, serverCertificateName) };


        // subjectAlternativeNames Field Functions 
        bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
        void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
        inline const ServerCertificate::SubjectAlternativeNames & getSubjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, ServerCertificate::SubjectAlternativeNames) };
        inline ServerCertificate::SubjectAlternativeNames getSubjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, ServerCertificate::SubjectAlternativeNames) };
        inline ServerCertificate& setSubjectAlternativeNames(const ServerCertificate::SubjectAlternativeNames & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
        inline ServerCertificate& setSubjectAlternativeNames(ServerCertificate::SubjectAlternativeNames && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ServerCertificate::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ServerCertificate::Tags) };
        inline ServerCertificate::Tags getTags() { DARABONBA_PTR_GET(tags_, ServerCertificate::Tags) };
        inline ServerCertificate& setTags(const ServerCertificate::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ServerCertificate& setTags(ServerCertificate::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> aliCloudCertificateId_ {};
        shared_ptr<string> aliCloudCertificateName_ {};
        shared_ptr<string> commonName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimeStamp_ {};
        shared_ptr<string> expireTime_ {};
        shared_ptr<int64_t> expireTimeStamp_ {};
        shared_ptr<string> fingerprint_ {};
        shared_ptr<int32_t> isAliCloudCertificate_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> serverCertificateId_ {};
        shared_ptr<string> serverCertificateName_ {};
        shared_ptr<ServerCertificate::SubjectAlternativeNames> subjectAlternativeNames_ {};
        shared_ptr<ServerCertificate::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->serverCertificate_ == nullptr; };
      // serverCertificate Field Functions 
      bool hasServerCertificate() const { return this->serverCertificate_ != nullptr;};
      void deleteServerCertificate() { this->serverCertificate_ = nullptr;};
      inline const vector<ServerCertificates::ServerCertificate> & getServerCertificate() const { DARABONBA_PTR_GET_CONST(serverCertificate_, vector<ServerCertificates::ServerCertificate>) };
      inline vector<ServerCertificates::ServerCertificate> getServerCertificate() { DARABONBA_PTR_GET(serverCertificate_, vector<ServerCertificates::ServerCertificate>) };
      inline ServerCertificates& setServerCertificate(const vector<ServerCertificates::ServerCertificate> & serverCertificate) { DARABONBA_PTR_SET_VALUE(serverCertificate_, serverCertificate) };
      inline ServerCertificates& setServerCertificate(vector<ServerCertificates::ServerCertificate> && serverCertificate) { DARABONBA_PTR_SET_RVALUE(serverCertificate_, serverCertificate) };


    protected:
      shared_ptr<vector<ServerCertificates::ServerCertificate>> serverCertificate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serverCertificates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerCertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverCertificates Field Functions 
    bool hasServerCertificates() const { return this->serverCertificates_ != nullptr;};
    void deleteServerCertificates() { this->serverCertificates_ = nullptr;};
    inline const DescribeServerCertificatesResponseBody::ServerCertificates & getServerCertificates() const { DARABONBA_PTR_GET_CONST(serverCertificates_, DescribeServerCertificatesResponseBody::ServerCertificates) };
    inline DescribeServerCertificatesResponseBody::ServerCertificates getServerCertificates() { DARABONBA_PTR_GET(serverCertificates_, DescribeServerCertificatesResponseBody::ServerCertificates) };
    inline DescribeServerCertificatesResponseBody& setServerCertificates(const DescribeServerCertificatesResponseBody::ServerCertificates & serverCertificates) { DARABONBA_PTR_SET_VALUE(serverCertificates_, serverCertificates) };
    inline DescribeServerCertificatesResponseBody& setServerCertificates(DescribeServerCertificatesResponseBody::ServerCertificates && serverCertificates) { DARABONBA_PTR_SET_RVALUE(serverCertificates_, serverCertificates) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeServerCertificatesResponseBody::ServerCertificates> serverCertificates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
